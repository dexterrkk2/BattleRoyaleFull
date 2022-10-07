using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class portalBullet : MonoBehaviour
{
    private int attackerId;
    private bool isMine;
    public Rigidbody rig;
    public GameObject portalParent;
    public int portalOrder;
    public Vector3 groundOffset;
    public void Initialize(int attackerId, bool isMine)
    {
        this.attackerId = attackerId;
        this.isMine = isMine;
    }
    void OnTriggerEnter(Collider other)
    {
        if (isMine && other.CompareTag("ground"))
        {
            if (GameManager.instance.portalOrder >= 1)
            {
                if (GameManager.instance.portalOrder % 2 == 0)
                {
                    
                    portal.instance.portal1.transform.position = transform.position + groundOffset;
                    GameManager.instance.portalOrder++;
                }
                else
                {
                    portal.instance.portal2.SetActive(true);
                    portal.instance.portal2.transform.position = transform.position + groundOffset;
                    GameManager.instance.portalOrder++;
                }
            }
            else
            {
                Instantiate(portalParent, transform.position + groundOffset, other.transform.rotation);
            }
        }
        else if (isMine && other.CompareTag("wall"))
        {
            if (GameManager.instance.portalOrder >= 1)
            {
                if (GameManager.instance.portalOrder % 2 == 0)
                {
                    portal.instance.portal1.transform.position = transform.position;
                    GameManager.instance.portalOrder++;
                }
                else
                {
                    portal.instance.portal2.transform.position = transform.position;
                    GameManager.instance.portalOrder++;
                }
            }
            else
            {
                Instantiate(portalParent, transform.position, other.transform.rotation);
            }
        }
        Destroy(gameObject);
    }
}
