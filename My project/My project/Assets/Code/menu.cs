using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;
using Photon.Realtime;
public class menu : MonoBehaviourPunCallbacks, ILobbyCallbacks
{
    [Header("Screens")]
    public GameObject mainScreen;
    public GameObject createRoomScreen;
    public GameObject lobbyScreen;
    public GameObject lobbyBrowserScreen;

    [Header("Main Screen")]
    public Button createRoomButton;
    public Button findRoomButton;

    [Header("Lobby")]
    public TextMeshProUGUI playerListText;
    public TextMeshProUGUI roomInfoText;
    public Button startgameButton;

    [Header("Lobby Browser")]
    public RectTransform roomListContainer;
    public GameObject roomButtonPrefab;

    private List<GameObject> roomButtons = new List<GameObject>();
    private List<RoomInfo> roomList = new List<RoomInfo>();

    void Start()
    {
        createRoomButton.interactable = false;
        findRoomButton.interactable = false;

        Cursor.lockState = CursorLockMode.None;

        if (PhotonNetwork.InRoom)
        {
            SetScreen(lobbyScreen);
            UpdateLobbyUI();
            PhotonNetwork.CurrentRoom.IsVisible = true;
            PhotonNetwork.CurrentRoom.IsOpen = true;
        }
    }

    void SetScreen(GameObject screen)
    {
        mainScreen.SetActive(false);
        createRoomScreen.SetActive(false);
        lobbyScreen.SetActive(false);
        lobbyBrowserScreen.SetActive(false);

        screen.SetActive(true);

        if(screen == lobbyBrowserScreen)
        {
            UpdateLobbyBrowserUI();
        }
    }

    public void OnBackButton()
    {
        SetScreen(mainScreen);
    }
    public void OnPlayerNameValueChanged(TMP_InputField playerNameInput)
    {
        PhotonNetwork.NickName = playerNameInput.text;
    }

    public override void OnConnectedToMaster()
    {
        createRoomButton.interactable = true;
        findRoomButton.interactable = true;
    }
    public void OnCreateRoomButton()
    {
        SetScreen(createRoomScreen);
    }
    public void OnFindRoomButton()
    {
        SetScreen(lobbyBrowserScreen);
    }
    public void OnCreateButton(TMP_InputField roomNameInput)
    {
        Networkmanager.instance.CreateRoom(roomNameInput.text);
    }

    public override void OnJoinedRoom()
    {
        SetScreen(lobbyScreen);
        photonView.RPC("UpdateLobbyUI", RpcTarget.All);
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        UpdateLobbyUI();
    }
    [PunRPC]
    void UpdateLobbyUI()
    {
        startgameButton.interactable = PhotonNetwork.IsMasterClient;

        playerListText.text = "";

        foreach(Player player in PhotonNetwork.PlayerList)
        {
            playerListText.text += player.NickName + "\n";
        }

        roomInfoText.text = "<b>Room Name<b>\n" + PhotonNetwork.CurrentRoom.Name;
    }
    public void OnStartGameButton()
    {
        PhotonNetwork.CurrentRoom.IsOpen = false;
        PhotonNetwork.CurrentRoom.IsVisible = false;

        Networkmanager.instance.photonView.RPC("ChangeScene", RpcTarget.All, "Game");
    }

    public void OnLeaveLobbyButton()
    {
        PhotonNetwork.LeaveRoom();
        SetScreen(mainScreen);
    }

    GameObject CreateRoomButton()
    {
        GameObject buttonObj = Instantiate(roomButtonPrefab, roomListContainer.transform);
        roomButtons.Add(buttonObj);

        return buttonObj;
    }
    void UpdateLobbyBrowserUI()
    {
        foreach(GameObject button in roomButtons)
        {
            button.SetActive(false);
        }
        for (int x = 0; x < roomList.Count; ++x)
        {
            GameObject button = x >= roomButtons.Count ? CreateRoomButton() : roomButtons[x];

            button.SetActive(true);

            button.transform.Find("RoomName").GetComponent<TextMeshProUGUI>().text = roomList[x].Name;
            button.transform.Find("PlayerCounttxt").GetComponent<TextMeshProUGUI>().text = roomList[x].PlayerCount + " / " + roomList[x].MaxPlayers;

            Button buttonComp = button.GetComponent<Button>();

            string roomName = roomList[x].Name;

            buttonComp.onClick.RemoveAllListeners();
            buttonComp.onClick.AddListener(() => { OnJoinRoomButton(roomName); });
        }
    }

    public void OnJoinRoomButton (string roomName)
    {
        Networkmanager.instance.JoinRoom(roomName);
    }
    public void OnRefreshButton()
    {
        UpdateLobbyBrowserUI();
    }
    public override void OnRoomListUpdate(List<RoomInfo> allRooms)
    {
        Debug.Log("On Room List Update Called from Photon");
        roomList = allRooms;
    }
}
