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
            rig.isKinematic = true;
        }
        // give the first player the hat
        
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
}
