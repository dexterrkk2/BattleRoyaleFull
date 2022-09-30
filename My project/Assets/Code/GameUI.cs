using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;
public class GameUI : MonoBehaviour
{
    public Slider healthBar;
    public TextMeshProUGUI playerInfoText;
    public TextMeshProUGUI AmmoText;
    public TextMeshProUGUI winText;
    public Image winBackground;

    private PlayerController player;

    public static GameUI instance;

    private void Awake()
    {
        instance = this;
    }
    public void Initialize (PlayerController localplayer)
    {
        player = localplayer;
        healthBar.maxValue = player.maxHp;
        healthBar.value = player.curHp;
        UpdatePlayerInfotext();
        UpdateAmmoText();
    }
    public void UpdateHealthBar()
    {
        healthBar.value = player.curHp;
    }
    public void UpdatePlayerInfotext()
    {
        playerInfoText.text = "<b>Alive:</b>" + GameManager.instance.alivePlayers +"\n<b>Kills:</b>" + player.kills;
    }
    public void UpdateAmmoText()
    {
        AmmoText.text = player.weapon.curAmmo + "/" + player.weapon.maxAmmo;
    }

    public void SetWinText(string winnername)
    {
        winBackground.gameObject.SetActive(true);
        winText.text = winnername + "wins";
    }

}
