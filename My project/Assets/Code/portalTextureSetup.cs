using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class portalTextureSetup : MonoBehaviour
{
    public Camera cameraPortal2;
    public Material cameraMat1;
    // Start is called before the first frame update
    void Start()
    {
        if (cameraPortal2.targetTexture != null)
        {
            cameraPortal2.targetTexture.Release();
        }
        cameraPortal2.targetTexture = new RenderTexture(Screen.width, Screen.height, 24);
        cameraMat1.mainTexture = cameraPortal2.targetTexture;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
