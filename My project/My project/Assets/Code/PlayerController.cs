using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
public class PlayerController : MonoBehaviourPunCallbacks
{ 
    [Header("Info")]
    public int id;

    [Header("Stats")]
    public float moveSpeed;
    public float jumpForce;

    [Header("Components")]
    public Rigidbody rig;
    public Player photonPlayer;
    public PlayerWeapon weapon;
    private int curAttackerId;
    public int curHp;
    public int maxHp;
    public int kills;
    public bool dead;
    private bool flashingDamage;
    public MeshRenderer mr;
    void Move()
    {
        float x = Input.GetAxis("Horizontal");
        float z = Input.GetAxis("Vertical");

        Vector3 dir = (transform.forward * z + transform.right * x) * moveSpeed;
        dir.y = rig.velocity.y;

        rig.velocity = dir;
    }
    void TryJump()
    {
        Ray ray = new Ray(transform.position, Vector3.down);
        if (Physics.Raycast(ray, 1.5f))
            rig.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
    }
    // Update is called once per frame
    void Update()
    {
        if (photonView.IsMine)
        {
            Move();
            if (Input.GetKeyDown(KeyCode.Space))
            {
                TryJump();
            }
        }
        if (Input.GetMouseButtonDown(0))
        {
            weapon.TryShoot();
        }
    }
    [PunRPC]
    public void Initialize(Player player)
    {
        //photonPlayer = player;
        id = player.ActorNumber;
        GameManager.instance.players[id - 1] = this;
        // if this isn't our local player, disable physics as that's
        // controlled by the user and synced to all other clients
        if (photonView.IsMine == false)
        {
            GetComponentInChildren<Camera>().gameObject.SetActive(false);
            rig.isKinematic = true;
        }
        else
        {
            GameUI.instance.Initialize(this);
        }
    }
   
    void OnCollisionEnter(Collision collision)
    {
        if (!photonView.IsMine)
            return;
        // did we hit another player?
        if (collision.gameObject.CompareTag("Player"))
        {
           
        }
    }
    [PunRPC]
    public void TakeDamage(int attackerId, int damage)
    {
        Debug.Log("called");
        if (dead)
            return;
        curHp -= damage;
        Debug.Log(damage);
        curAttackerId = attackerId;
        // flash the player red
        photonView.RPC("DamageFlash", RpcTarget.Others);
        // update the health bar UI
        // die if no health left
        GameUI.instance.UpdateHealthBar();
        if (curHp <= 0)
            photonView.RPC("Die", RpcTarget.All);
    }
    [PunRPC]
    void DamageFlash()
    {
        if (flashingDamage)
            return;
        StartCoroutine(DamageFlashCoRoutine());
        IEnumerator DamageFlashCoRoutine()
        {
            flashingDamage = true;
            Color defaultColor = mr.material.color;
            mr.material.color = Color.red;
            yield return new WaitForSeconds(0.05f);
            mr.material.color = defaultColor;
            flashingDamage = false;
        }
    }
    [PunRPC]
    void Die()
    {
        curHp = 0;
        dead = true;
        GameManager.instance.alivePlayers--;
        GameUI.instance.UpdatePlayerInfotext();
        if (PhotonNetwork.IsMasterClient)
        {
            GameManager.instance.CheckWinCondition();
        }

        if (photonView.IsMine)
        {
            if(curAttackerId != 0)
            {
                GameManager.instance.GetPlayer(curAttackerId).photonView.RPC("AddKill", RpcTarget.All);
            }

            GetComponentInChildren<CameraController>().SetAsSpectator();

            rig.isKinematic = true;
            transform.position = new Vector3(0, -50, 0);
        }
    }
    [PunRPC]
    public void AddKill()
    {
        kills++;
        GameUI.instance.UpdatePlayerInfotext();
    }
    [PunRPC]
    public void Heal (int amountToheal)
    {
        curHp = Mathf.Clamp(curHp + amountToheal, 0, maxHp);
        GameUI.instance.UpdateHealthBar();
    }
}
