using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bullet : MonoBehaviour
{
    private int damage;
    private int attackerId;
    private bool isMine;
    public Rigidbody rig;
    public void Initialize(int damage, int attackerId, bool isMine)
    {
        this.damage = damage;
        this.attackerId = attackerId;
        this.isMine = isMine;

        Destroy(gameObject, 5f);
    }
    void OnTriggerEnter(Collider other)
    {
        // did we hit a player?
        // if this is the local player's bullet, damage the hit player
        // we're using client side hit detection
        if (other.CompareTag("Player") && isMine)
        {
            PlayerController player = GameManager.instance.GetPlayer(other.gameObject);
            if (player.id != attackerId)
                player.photonView.RPC("TakeDamage", player.photonPlayer, attackerId, damage);
        }
        if (!other.CompareTag("portal"))
        {
            Destroy(gameObject);
        }
    }

}
