using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class portalGun : MonoBehaviour
{
    [Header("Stats")]
    public float bulletSpeed;
    public float shootRate;
    private float lastShootTime;
    public GameObject bulletPrefab;
    public Transform bulletSpawnPos;
    private PlayerController player;
    void Awake()
    {
        // get required components
        player = GetComponent<PlayerController>();
    }
    public void TryShoot()
    {
        lastShootTime = Time.time;
        // update the ammo UI
        GameUI.instance.UpdateAmmoText();
        // spawn the bullet
        player.photonView.RPC("SpawnBullet", RpcTarget.All, bulletSpawnPos.transform.position, Camera.main.transform.forward);
    }
    [PunRPC]
    void SpawnBullet(Vector3 pos, Vector3 dir)
    {
        // spawn and orientate it
        GameObject bulletObj = Instantiate(bulletPrefab, pos, Quaternion.identity);
        bulletObj.transform.forward = dir;
        portalBullet bulletScript = bulletObj.GetComponent<portalBullet>();
        // initialize it and set the velocity
        bulletScript.Initialize(player.id, player.photonView.IsMine);
        bulletScript.rig.velocity = dir * bulletSpeed;
    }
}
