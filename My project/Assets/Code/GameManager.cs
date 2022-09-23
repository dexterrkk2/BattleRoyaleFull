using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;
using System.Linq;
public class GameManager : MonoBehaviourPunCallbacks
{
    [Header("Players")]
   public string playerPrefabLocation; // path in Resources folder to the Player prefab
    public Transform[] spawnPoints; // array of all available spawn points
    public PlayerController[] players; // array of all the players
    public int alivePlayers; 
    private int playersInGame; // number of players in the game
    // instance
    public static GameManager instance;
    void Awake()
    {
        // instance
        instance = this;
    }
    // Start is called before the first frame update
    void Start()
    {
        players = new PlayerController[PhotonNetwork.PlayerList.Length];
        photonView.RPC("ImInGame", RpcTarget.AllBuffered);
        alivePlayers = players.Length;
    }
    [PunRPC]
    void ImInGame()
    {
        playersInGame++;
        if (playersInGame == PhotonNetwork.PlayerList.Length)
        {
            SpawnPlayer();
        }
        if (PhotonNetwork.IsMasterClient && playersInGame == PhotonNetwork.PlayerList.Length)
        {
            photonView.RPC("SpawnPlayer", RpcTarget.All);
        }
    }
    [PunRPC]
    void WinGame(int playerId)
    {
        PlayerController player = GetPlayer(playerId);
        // set the UI to show who's won
        Invoke("GoBackToMenu", 3.0f);
        //GameUI.instance.SetWinText(player.photonPlayer.NickName);
    }
    void GoBackToMenu()
    {
        PhotonNetwork.LeaveRoom(); 
        Networkmanager.instance.ChangeScene("Menu");
    }
    void SpawnPlayer()
    {
            // instantiate the player across the network
            GameObject playerObj = PhotonNetwork.Instantiate(playerPrefabLocation, spawnPoints[Random.Range(0, spawnPoints.Length)].position, Quaternion.identity);
        // get the player script
        playerObj.GetComponent<PlayerController>().photonView.RPC("Initialize", RpcTarget.All, PhotonNetwork.LocalPlayer);
            PlayerController playerScript = playerObj.GetComponent<PlayerController>();
            playerScript.photonView.RPC("Initialize", RpcTarget.All, PhotonNetwork.LocalPlayer);
            reskin();
    }
    void reskin()
    {
        for (int x = 0; x < players.Length-1; x++)
        { 
            Color newColor = new Color(Random.value, Random.value, Random.value, 1.0f);
        }
    }
    public PlayerController GetPlayer(int playerId)
    {
        return players.First(x => x.id == playerId);
    }
    public PlayerController GetPlayer(GameObject playerObject)
    {
        return players.First(x => x.gameObject == playerObject);
    }
}
