using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class portal : MonoBehaviour
{
    public GameObject portal2;
    public GameObject portal1;
    public static portal instance;
    // Start is called before the first frame update
    void Awake()
    {
        instance = this;
        GameManager.instance.portalOrder++;
        // did we hit a player?
        // if this is the local player's bullet, damage the hit player
        // we're using client side hit detection
        if (GameManager.instance.portalOrder % 2 == 0)
        {
            portal2.SetActive(true);
           
        }
        else
        {
           
            portal1.SetActive(true);
        }
        GameManager.instance.portals.Add(gameObject);
    }
}
