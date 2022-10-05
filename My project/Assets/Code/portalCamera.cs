using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class portalCamera : MonoBehaviour
{
    public Transform portal;
    public Transform otherPortal;
    public Vector3 portalSightRange;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    // Update is called once per frame
    void Update()
    {
        foreach (PlayerController player in GameManager.instance.players)
        {
            Vector3 distance = player.transform.position - otherPortal.position;
            if (distance.magnitude <= portalSightRange.magnitude)
            {
                transform.position = portal.position + distance;
                float angularDif = Quaternion.Angle(portal.rotation, otherPortal.rotation);
                Quaternion rotationdiff = Quaternion.AngleAxis(angularDif, Vector3.up);
                Vector3 cameradirection = rotationdiff * player.transform.forward;
                transform.rotation = Quaternion.LookRotation(cameradirection, Vector3.up);
            }
        }
    }
}
