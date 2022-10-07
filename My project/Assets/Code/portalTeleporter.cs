using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class portalTeleporter : MonoBehaviour
{
    public bool playerIsOverlapping;
    public Transform otherPortal;
    public Collider playercheck;
    public Vector3 portaloffset;
    public Camera teleportCamera;
    // Update is called once per frame
    void Update()
    {
        if (playerIsOverlapping) {
            foreach (PlayerController player in GameManager.instance.players)
            {
                if (player.transform.position == playercheck.transform.position) {
                    Vector3 portalToPlayer = player.transform.position - transform.position;
                    float dotProduct = Vector3.Dot(transform.up, portalToPlayer);
                    if (dotProduct < 0f)
                    {
                        float rotationDiff = -Quaternion.Angle(transform.rotation, otherPortal.rotation);
                        rotationDiff += 180;
                        player.transform.Rotate(Vector3.up, rotationDiff);
                        Vector3 positionOffset = Quaternion.Euler(0f, rotationDiff, 0f) * portalToPlayer;
                        player.transform.position = otherPortal.position + positionOffset +portaloffset;
                        playerIsOverlapping = false;
                    }
                }
            }
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Player" || other.tag == "bullet")
        {
            playerIsOverlapping = true;
            playercheck = other;
        }
        
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "Player" || other.tag == "bullet")
        {
            playerIsOverlapping = false;
        }
    }
}
