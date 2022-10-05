using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class portalBullet : MonoBehaviour
{
    private int attackerId;
    private bool isMine;
    public Rigidbody rig;
    public GameObject portal;
    public void Initialize(int attackerId, bool isMine)
    {
        this.attackerId = attackerId;
        this.isMine = isMine;
    }
    void OnTriggerEnter(Collider other)
    {
        // did we hit a player?
        // if this is the local player's bullet, damage the hit player
        // we're using client side hit detection
        if (isMine)
        {
            GameObject bulletObj = Instantiate(portal,  transform.position, Quaternion.identity);
        }
        Destroy(gameObject);
    }
}
