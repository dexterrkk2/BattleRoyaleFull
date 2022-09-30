﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.ByteEnum,System.Object>
struct Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490;
// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>
struct Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>>
struct Dictionary_2_t491A326E784F135D7D3DEEA1DBB454F3B03579EF;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E;
// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>
struct Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>
struct Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<PlayerController,System.Boolean>
struct Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<PlayerController>
struct IEnumerable_1_t91D7D2CADE2C6503E53C22BBD2BDA176E86E6925;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tB45A861D090B15129521119AE48ED3813820A974;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.ChatChannel>
struct KeyCollection_t3CC6366B12095908A6B3B512623B34284A09041D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Photon.Chat.Demo.FriendItem>
struct KeyCollection_t5A7BBF071446F8E068A6658B8FD8E3568B9EC2A4;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UnityEngine.UI.Toggle>
struct KeyCollection_t635DBC320EDF562E36389EC297EDFBF7DBB35A53;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t1D68692B59A0459D88CB117CF9AC5EA8B3FA682F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tAE460F42AC335F9ADFDAB761B93C2E8883845E5F;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t7628C79979ECE33C758FA5C52526761CA20F2167;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_tA7AAD9C9730173B4B69D3E42B07AF11817191181;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t6F972EAFC64258DD491584080B232EC12BE33581;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer>
struct Queue_1_t02482683AE1D9D63176EAA56728B12F9ADCA10BE;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tF178FEC52A1E31BA7A3C30BE84E4770D020B061B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.ChatChannel>
struct ValueCollection_tC039743F3DF97A944D4DC9D36739F442375E5D80;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Photon.Chat.Demo.FriendItem>
struct ValueCollection_t8EC9654DB430A0670ECC121F80DD606DBBC2A3EC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UnityEngine.UI.Toggle>
struct ValueCollection_t5777B20754B5D28BC1CC6B0576417443BB9FE136;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.ChatChannel>[]
struct EntryU5BU5D_t4D8D831A3B049F41AC0645D0DE9994241B9C0926;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Photon.Chat.Demo.FriendItem>[]
struct EntryU5BU5D_t4B0A754922A68A443DD292FC1FE964E8F66BE571;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UnityEngine.UI.Toggle>[]
struct EntryU5BU5D_t8C9204C472D3D048FC5529E6A3FC243EEB625930;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Photon.Realtime.Player[]
struct PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572;
// PlayerController[]
struct PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// Photon.Chat.AuthenticationValues
struct AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Photon.Chat.Demo.ChannelSelector
struct ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07;
// Photon.Chat.Demo.ChatAppIdCheckerUI
struct ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D;
// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689;
// Photon.Chat.ChatChannel
struct ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1;
// Photon.Chat.ChatClient
struct ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA;
// Photon.Chat.Demo.ChatGui
struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25;
// Photon.Chat.ChatPeer
struct ChatPeer_t216E56C8D1791380415477470013A3787DF76D43;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// Photon.Realtime.Demo.ConnectAndJoinRandomLb
struct ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD;
// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// ExitGames.Client.Photon.EventData
struct EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// Photon.Chat.UtilityScripts.EventSystemSpawner
struct EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D;
// System.Exception
struct Exception_t;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Forcefeild
struct Forcefeild_tDB2CC7994790DF2D23B7217A6CD68A9036C7764B;
// Photon.Chat.Demo.FriendItem
struct FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameUI
struct GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tD626399B3ADFD501225241D7366103F35472542A;
// Photon.Chat.IChatClientListener
struct IChatClientListener_t7809F4EE0368FF3496A7123CCAFF8BA0B1A02B2F;
// Photon.SocketServer.Security.ICryptoProvider
struct ICryptoProvider_t95FBCF58BC80DA852181F0B70F8FC08DE824D9D1;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34;
// ExitGames.Client.Photon.IProtocol
struct IProtocol_t81522842E9975A0B8ADDCB83BBAB7A1A28A95223;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive
struct IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD;
// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783;
// ExitGames.Client.Photon.NCommand
struct NCommand_t47ACF759A20E471E2A0FCE81D3FA13937C981DA1;
// Photon.Chat.Demo.NamePickGui
struct NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49;
// Networkmanager
struct Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Photon.Chat.UtilityScripts.OnStartDelete
struct OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11;
// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C;
// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B;
// Pickup
struct Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8;
// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerWeapon
struct PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A;
// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373;
// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D;
// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Photon.Pun.ServerSettings
struct ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// Photon.Chat.UtilityScripts.TextButtonTransition
struct TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// Photon.Chat.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851;
// ExitGames.Client.Photon.WebSocket
struct WebSocket_t186C04B8068D205593DB749543F9FC0670E60348;
// bullet
struct bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F;
// menu
struct menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameManager/<>c
struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5;
// GameManager/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B;
// GameManager/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d
struct U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13
struct U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2;
// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// menu/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChatState_t051505084374FEB7E666EAF9C3D7A8DFBA5119D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t186C04B8068D205593DB749543F9FC0670E60348_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral011D7D9D78DC2A4EA6437F75F6AE9C5B1D038EC5;
IL2CPP_EXTERN_C String_t* _stringLiteral018EB89CF27A32B10858C74B6F049D6558DE2FFE;
IL2CPP_EXTERN_C String_t* _stringLiteral02B3E56E4708FA9AEED0B607268A8985B53DDF13;
IL2CPP_EXTERN_C String_t* _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral062C159E09943C99E139190E5A591006A545AA4A;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral07CBEC8E9DB3B4185C079A661973C4FC124FB142;
IL2CPP_EXTERN_C String_t* _stringLiteral08EF1409295A748F17C961491378A3B6215AA838;
IL2CPP_EXTERN_C String_t* _stringLiteral096D505510E5181E451A086DB4DEED732E1CF366;
IL2CPP_EXTERN_C String_t* _stringLiteral09FA1C3A38E0AFF9CCE65AC8D7312491B6A9E713;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F;
IL2CPP_EXTERN_C String_t* _stringLiteral0F33F174FEA3E7EB60E62005FED62EB07DDCEB36;
IL2CPP_EXTERN_C String_t* _stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E;
IL2CPP_EXTERN_C String_t* _stringLiteral0F5B002650B776A2250D517BE081568DB1B0A682;
IL2CPP_EXTERN_C String_t* _stringLiteral118410E0D4EC44AA2FCD3142030E47DC49A64A18;
IL2CPP_EXTERN_C String_t* _stringLiteral14B62430EC3FF6AF6C57F10516C6EC5C8D0497F3;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70;
IL2CPP_EXTERN_C String_t* _stringLiteral187DC7C8E0EDA1DE1ED6DF6A69E16E1804984856;
IL2CPP_EXTERN_C String_t* _stringLiteral18BA82A745D9E10EF604341BD4FA08FA6FBF82D5;
IL2CPP_EXTERN_C String_t* _stringLiteral1F0529F938279030C178C5BA4739E01857BA92FC;
IL2CPP_EXTERN_C String_t* _stringLiteral21625D0C5D171A1DC5C95AFB1632BDCD7DDBACF6;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral25D19D44AE79EC606DD671C43230AAA8F1766EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2862B8BF4A37F97ACDF58DA91744D93E2E8456CE;
IL2CPP_EXTERN_C String_t* _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F;
IL2CPP_EXTERN_C String_t* _stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17;
IL2CPP_EXTERN_C String_t* _stringLiteral2E1D0B7FC6AE1E4699086BAFDFD167B73A71BF62;
IL2CPP_EXTERN_C String_t* _stringLiteral300E1362F835BABF048E880C8978EF4F91E3867D;
IL2CPP_EXTERN_C String_t* _stringLiteral30C4AA8EC0000A07558BBFA1B4A935B9E5AC2691;
IL2CPP_EXTERN_C String_t* _stringLiteral31775E5380AC9751F2E61EA3DD24D9243DE804B1;
IL2CPP_EXTERN_C String_t* _stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895;
IL2CPP_EXTERN_C String_t* _stringLiteral361D3EBAF9E2C29F13DB3B6509697AA973E37A36;
IL2CPP_EXTERN_C String_t* _stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5;
IL2CPP_EXTERN_C String_t* _stringLiteral37DD04BE01CD12295B3C994FBEE871F305800521;
IL2CPP_EXTERN_C String_t* _stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4;
IL2CPP_EXTERN_C String_t* _stringLiteral3AA11341AF64AD56963253F1D9E4BCCCF173379A;
IL2CPP_EXTERN_C String_t* _stringLiteral41540A8C28BA5EDA9B41BEBBF344C748063CDB90;
IL2CPP_EXTERN_C String_t* _stringLiteral438953EFF24E106B20EDFA2FA5053BCDA7314018;
IL2CPP_EXTERN_C String_t* _stringLiteral4713AAA4505C800D52A3512897F3428F6CB2AF8C;
IL2CPP_EXTERN_C String_t* _stringLiteral471E512CD36A060B52A0EE28B8A6D4EEC00378C1;
IL2CPP_EXTERN_C String_t* _stringLiteral4A36DF6525515FE29AEB2A52B49635745B5D8E56;
IL2CPP_EXTERN_C String_t* _stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75;
IL2CPP_EXTERN_C String_t* _stringLiteral4B6F259D090A7AB0D2DC04B00C4CAA926D17DD6D;
IL2CPP_EXTERN_C String_t* _stringLiteral4E38E2B4F159337570AD4E9656D4BDAF8B0EBCF1;
IL2CPP_EXTERN_C String_t* _stringLiteral5224DE4337BB6DBE135E6B5A4D01069A20195D5F;
IL2CPP_EXTERN_C String_t* _stringLiteral569C750EBAB5B94F878C93E96D6EF40CA593AA43;
IL2CPP_EXTERN_C String_t* _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C;
IL2CPP_EXTERN_C String_t* _stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D;
IL2CPP_EXTERN_C String_t* _stringLiteral5CB8C83FD639877E5BAFDF481412100245568EA8;
IL2CPP_EXTERN_C String_t* _stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF695F96AE9B00DBD2CB8F12E765C3159E02AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral60D25464A0D2697B9DE85A8CE7C6E223B98C82E6;
IL2CPP_EXTERN_C String_t* _stringLiteral6337C8295EC1EE5F0CB5A73B0C593EE21113E4E6;
IL2CPP_EXTERN_C String_t* _stringLiteral635399FE2BA0D7FC4732898C17CFD8D77C7CE39C;
IL2CPP_EXTERN_C String_t* _stringLiteral693BD22F82043985FDDDDFCF5E8EC15BF8B82934;
IL2CPP_EXTERN_C String_t* _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1EABD817569AC3F353CFFE5A40210C49E545C1;
IL2CPP_EXTERN_C String_t* _stringLiteral6A328C89F6BA1B16C6636D0A5824840B5CFB5593;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4;
IL2CPP_EXTERN_C String_t* _stringLiteral710F81E0EEB8CB48BACB8437BA5836E3B5349235;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B;
IL2CPP_EXTERN_C String_t* _stringLiteral84D4B52893D5B4AFAF739B15CAB4F371740ADE44;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF;
IL2CPP_EXTERN_C String_t* _stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1;
IL2CPP_EXTERN_C String_t* _stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral92AD75AD6FCA907A1DC04172D9D3B3DCA5284978;
IL2CPP_EXTERN_C String_t* _stringLiteral93CD26FD25F534D18F21EBB330F02E0264AC3C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23;
IL2CPP_EXTERN_C String_t* _stringLiteralA1533BFD28F11C5F69CA87886E87821ECA526FE4;
IL2CPP_EXTERN_C String_t* _stringLiteralA36D615703FF124A704E046433369D41AA86C957;
IL2CPP_EXTERN_C String_t* _stringLiteralA7077659D26DAF185E52E2F2B77A29B3A2B818C1;
IL2CPP_EXTERN_C String_t* _stringLiteralA81D476101E62EFD3855CBA285F534678C8F4DED;
IL2CPP_EXTERN_C String_t* _stringLiteralA99160DD9ED8625CF0DB13D82CA2EF52BC6764CD;
IL2CPP_EXTERN_C String_t* _stringLiteralAAB225AD526304062BE6CF7EA6B070A47EDF7E59;
IL2CPP_EXTERN_C String_t* _stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralAC294206C04F72D8153AC07B00DB774473301545;
IL2CPP_EXTERN_C String_t* _stringLiteralB3664676F50F442E724FBD9CC58E7261F51AA12F;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB61F8E5C6788E7093D4F1DE579EBD7C233090B94;
IL2CPP_EXTERN_C String_t* _stringLiteralB9D744AC0F53E19FAF3AD6BC483501E72F67CB61;
IL2CPP_EXTERN_C String_t* _stringLiteralBE1823106E03B1A8E37190FA81CAA82064505504;
IL2CPP_EXTERN_C String_t* _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
IL2CPP_EXTERN_C String_t* _stringLiteralBFFD71BD43D0EB7541368BCF3D64355B290FB414;
IL2CPP_EXTERN_C String_t* _stringLiteralC615A9C8A1258E2803B6D3FE6D2E1EEF0D8912E0;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8;
IL2CPP_EXTERN_C String_t* _stringLiteralC94125941E7A9772CAB54E7D0A1F983C1B933EEF;
IL2CPP_EXTERN_C String_t* _stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE149C7622A20B800C0F221FF927D6238C6DD62;
IL2CPP_EXTERN_C String_t* _stringLiteralD093160C1EA2070FD98A9C1AA9436BA842BAB72A;
IL2CPP_EXTERN_C String_t* _stringLiteralD28584D6DB1C16898C0D6F413247B019B5244990;
IL2CPP_EXTERN_C String_t* _stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534;
IL2CPP_EXTERN_C String_t* _stringLiteralD4A95B0F037C01D9994F2907FFFE784743580298;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB153A4F640C1BF005F7E30CECC4A84EB08150A;
IL2CPP_EXTERN_C String_t* _stringLiteralE01396087B968D8089649181D62173B42DA52091;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66;
IL2CPP_EXTERN_C String_t* _stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E;
IL2CPP_EXTERN_C String_t* _stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434;
IL2CPP_EXTERN_C String_t* _stringLiteralEA61132E5AA1390EE31EEF00131FF09B12F401CD;
IL2CPP_EXTERN_C String_t* _stringLiteralF0E91461B7ECDB6ABA60BFA77B9395C3A7DF66BE;
IL2CPP_EXTERN_C String_t* _stringLiteralF2E968E16304C2CB5FDD3278EA1074DF098CB7C2;
IL2CPP_EXTERN_C String_t* _stringLiteralF726A1EAC195324F63D384A1F2A33114361B699C;
IL2CPP_EXTERN_C String_t* _stringLiteralF901E66F2A148065254F4D6B82528054EF835B28;
IL2CPP_EXTERN_C String_t* _stringLiteralF903ABCF81417315694F4593925EE527D6C1258B;
IL2CPP_EXTERN_C String_t* _stringLiteralF92D1197FE7F9C3266589153D13221067FA7BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083;
IL2CPP_EXTERN_C String_t* _stringLiteralFCCA328F77D050FE98C954ABC27B722687F2666D;
IL2CPP_EXTERN_C String_t* _stringLiteralFDB6E6D617A894CF6A5EC4195B7DBF4AFF000089;
IL2CPP_EXTERN_C String_t* _stringLiteralFF8AEDAF918CF6EF3D306EB2FB9FA00A4D0FA453;
IL2CPP_EXTERN_C String_t* _stringLiteralFFADDB5B743C30D5E36824D131A96A78D936730A;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m184BC32E568AA177DFF2DE71846247331C770394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718_m7F300A5F2A65D90BE04CC6872F7B836203E9BE69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisbullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F_m4FA8C43E84B03BFE33D2E107C90C06BB7E22F0FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3AAD2029AC37E49D77E006780B4D2D13A64DF326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m6F51F2B8CB0DBD60C3C4AF683A4FE9D7698C7482_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketWebTcp_U3CConnectU3Eb__5_0_m59125F79F4F39FD99861A3A97B61AA851A7EE25D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReceiveLoopU3Ed__13_System_Collections_IEnumerator_Reset_m04F24633404B12C0BB32BD8F87B781BFEF58669C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_System_Collections_IEnumerator_Reset_m0EF3E1467CAD1FB2DD254BEDB80E222796BD4BBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCheckWinConditionU3Eb__10_0_m9BD34EC8609BD2F3C6C86CE747334A03E1600FC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CGetPlayerU3Eb__0_m1ECEEE8E91F219EE78DBD17A9AF2A00F24511669_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CGetPlayerU3Eb__0_m34EEACE04D2B747602C986D227B486A87CF78A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_0_U3CUpdateLobbyBrowserUIU3Eb__0_m71E6CABEE78B8740166D323F83BB3DF47D134A8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket__ctor_mE4721C4DB1E53D894243B79FFCC090A6C904F70C_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572;
struct PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1E85CBF91297C9D62A0FC2AD29FD24E33C8A5E54* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tB45A861D090B15129521119AE48ED3813820A974* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>
struct Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4D8D831A3B049F41AC0645D0DE9994241B9C0926* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3CC6366B12095908A6B3B512623B34284A09041D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC039743F3DF97A944D4DC9D36739F442375E5D80* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>
struct Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4B0A754922A68A443DD292FC1FE964E8F66BE571* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t5A7BBF071446F8E068A6658B8FD8E3568B9EC2A4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t8EC9654DB430A0670ECC121F80DD606DBBC2A3EC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>
struct Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8C9204C472D3D048FC5529E6A3FC243EEB625930* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t635DBC320EDF562E36389EC297EDFBF7DBB35A53* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5777B20754B5D28BC1CC6B0576417443BB9FE136* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FriendInfoU5BU5D_tE89DA4050769F5D540A0B2AAD187F6560FBFB0BD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RoomInfoU5BU5D_t144AE7D49A37D5B8CE320BBA78875CD81D40A582* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TypedLobbyInfoU5BU5D_t799EE885B0FB997851DAB1806D3EC4EF57F7CD8A* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// Photon.Realtime.AppSettings
struct AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7  : public RuntimeObject
{
	// System.String Photon.Realtime.AppSettings::AppIdRealtime
	String_t* ___AppIdRealtime_0;
	// System.String Photon.Realtime.AppSettings::AppIdFusion
	String_t* ___AppIdFusion_1;
	// System.String Photon.Realtime.AppSettings::AppIdChat
	String_t* ___AppIdChat_2;
	// System.String Photon.Realtime.AppSettings::AppIdVoice
	String_t* ___AppIdVoice_3;
	// System.String Photon.Realtime.AppSettings::AppVersion
	String_t* ___AppVersion_4;
	// System.Boolean Photon.Realtime.AppSettings::UseNameServer
	bool ___UseNameServer_5;
	// System.String Photon.Realtime.AppSettings::FixedRegion
	String_t* ___FixedRegion_6;
	// System.String Photon.Realtime.AppSettings::BestRegionSummaryFromStorage
	String_t* ___BestRegionSummaryFromStorage_7;
	// System.String Photon.Realtime.AppSettings::Server
	String_t* ___Server_8;
	// System.Int32 Photon.Realtime.AppSettings::Port
	int32_t ___Port_9;
	// System.String Photon.Realtime.AppSettings::ProxyServer
	String_t* ___ProxyServer_10;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.AppSettings::Protocol
	uint8_t ___Protocol_11;
	// System.Boolean Photon.Realtime.AppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_12;
	// Photon.Realtime.AuthModeOption Photon.Realtime.AppSettings::AuthMode
	int32_t ___AuthMode_13;
	// System.Boolean Photon.Realtime.AppSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_14;
	// ExitGames.Client.Photon.DebugLevel Photon.Realtime.AppSettings::NetworkLogging
	uint8_t ___NetworkLogging_15;
};

// Photon.Chat.Demo.AppSettingsExtensions
struct AppSettingsExtensions_t59ECE03A5423182D8C7204044BC87A3F51186BF8  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Photon.Chat.AuthenticationValues
struct AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C  : public RuntimeObject
{
	// Photon.Chat.CustomAuthenticationType Photon.Chat.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Chat.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject* ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Chat.AuthenticationValues::<Token>k__BackingField
	RuntimeObject* ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};

// Photon.Chat.ChatAppSettings
struct ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689  : public RuntimeObject
{
	// System.String Photon.Chat.ChatAppSettings::AppIdChat
	String_t* ___AppIdChat_0;
	// System.String Photon.Chat.ChatAppSettings::AppVersion
	String_t* ___AppVersion_1;
	// System.String Photon.Chat.ChatAppSettings::FixedRegion
	String_t* ___FixedRegion_2;
	// System.String Photon.Chat.ChatAppSettings::Server
	String_t* ___Server_3;
	// System.UInt16 Photon.Chat.ChatAppSettings::Port
	uint16_t ___Port_4;
	// System.String Photon.Chat.ChatAppSettings::ProxyServer
	String_t* ___ProxyServer_5;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Chat.ChatAppSettings::Protocol
	uint8_t ___Protocol_6;
	// System.Boolean Photon.Chat.ChatAppSettings::EnableProtocolFallback
	bool ___EnableProtocolFallback_7;
	// ExitGames.Client.Photon.DebugLevel Photon.Chat.ChatAppSettings::NetworkLogging
	uint8_t ___NetworkLogging_8;
};

// Photon.Chat.ChatChannel
struct ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1  : public RuntimeObject
{
	// System.String Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> Photon.Chat.ChatChannel::Senders
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> Photon.Chat.ChatChannel::Messages
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___Messages_2;
	// System.Int32 Photon.Chat.ChatChannel::MessageLimit
	int32_t ___MessageLimit_3;
	// System.Int32 Photon.Chat.ChatChannel::ChannelID
	int32_t ___ChannelID_4;
	// System.Boolean Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_5;
	// System.Int32 Photon.Chat.ChatChannel::<LastMsgId>k__BackingField
	int32_t ___U3CLastMsgIdU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Object> Photon.Chat.ChatChannel::properties
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___properties_7;
	// System.Boolean Photon.Chat.ChatChannel::<PublishSubscribers>k__BackingField
	bool ___U3CPublishSubscribersU3Ek__BackingField_8;
	// System.Int32 Photon.Chat.ChatChannel::<MaxSubscribers>k__BackingField
	int32_t ___U3CMaxSubscribersU3Ek__BackingField_9;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatChannel::Subscribers
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___Subscribers_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>> Photon.Chat.ChatChannel::usersProperties
	Dictionary_2_t491A326E784F135D7D3DEEA1DBB454F3B03579EF* ___usersProperties_11;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9  : public RuntimeObject
{
	// System.String Photon.Realtime.EnterRoomParams::RoomName
	String_t* ___RoomName_0;
	// Photon.Realtime.RoomOptions Photon.Realtime.EnterRoomParams::RoomOptions
	RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___RoomOptions_1;
	// Photon.Realtime.TypedLobby Photon.Realtime.EnterRoomParams::Lobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Lobby_2;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.EnterRoomParams::PlayerProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___PlayerProperties_3;
	// System.Boolean Photon.Realtime.EnterRoomParams::OnGameServer
	bool ___OnGameServer_4;
	// Photon.Realtime.JoinMode Photon.Realtime.EnterRoomParams::JoinMode
	uint8_t ___JoinMode_5;
	// System.String[] Photon.Realtime.EnterRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_6;
};

// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34  : public RuntimeObject
{
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase_0;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::Protocol
	uint8_t ___Protocol_1;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::ConnectAddress
	String_t* ___ConnectAddress_4;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_5;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_6;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_8;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::<AddressResolvedAsIpv6>k__BackingField
	bool ___U3CAddressResolvedAsIpv6U3Ek__BackingField_9;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlProtocol>k__BackingField
	String_t* ___U3CUrlProtocolU3Ek__BackingField_10;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<UrlPath>k__BackingField
	String_t* ___U3CUrlPathU3Ek__BackingField_11;
};

struct IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34_StaticFields
{
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerIpAddress>k__BackingField
	String_t* ___U3CServerIpAddressU3Ek__BackingField_7;
};

// Photon.Realtime.OpJoinRandomRoomParams
struct OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA  : public RuntimeObject
{
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.OpJoinRandomRoomParams::ExpectedCustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___ExpectedCustomRoomProperties_0;
	// System.Byte Photon.Realtime.OpJoinRandomRoomParams::ExpectedMaxPlayers
	uint8_t ___ExpectedMaxPlayers_1;
	// Photon.Realtime.MatchmakingMode Photon.Realtime.OpJoinRandomRoomParams::MatchingType
	uint8_t ___MatchingType_2;
	// Photon.Realtime.TypedLobby Photon.Realtime.OpJoinRandomRoomParams::TypedLobby
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___TypedLobby_3;
	// System.String Photon.Realtime.OpJoinRandomRoomParams::SqlLobbyFilter
	String_t* ___SqlLobbyFilter_4;
	// System.String[] Photon.Realtime.OpJoinRandomRoomParams::ExpectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ExpectedUsers_5;
};

// ExitGames.Client.Photon.PeerBase
struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F  : public RuntimeObject
{
	// ExitGames.Client.Photon.PhotonPeer ExitGames.Client.Photon.PeerBase::photonPeer
	PhotonPeer_t49659FA3F71A8C67E0A1922FBA955CCBEF14DD9C* ___photonPeer_0;
	// ExitGames.Client.Photon.IProtocol ExitGames.Client.Photon.PeerBase::SerializationProtocol
	IProtocol_t81522842E9975A0B8ADDCB83BBAB7A1A28A95223* ___SerializationProtocol_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedTransportProtocol
	uint8_t ___usedTransportProtocol_2;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::PhotonSocket
	IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* ___PhotonSocket_3;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.String ExitGames.Client.Photon.PeerBase::<ProxyServerAddress>k__BackingField
	String_t* ___U3CProxyServerAddressU3Ek__BackingField_5;
	// ExitGames.Client.Photon.ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_7;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_8;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t47ACF759A20E471E2A0FCE81D3FA13937C981DA1* ___CommandInCurrentDispatch_9;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_10;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByChallenge
	int32_t ___packetLossByChallenge_11;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t154FB8B59EFEDA2B31FA23A85050536E30F23481* ___ActionQueue_12;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_13;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_14;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_15;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_17;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_18;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_19;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_20;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_21;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_23;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_24;
	// System.Object ExitGames.Client.Photon.PeerBase::PhotonToken
	RuntimeObject* ___PhotonToken_25;
	// System.Object ExitGames.Client.Photon.PeerBase::CustomInitData
	RuntimeObject* ___CustomInitData_26;
	// System.String ExitGames.Client.Photon.PeerBase::AppId
	String_t* ___AppId_27;
	// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.PeerBase::reusableEventData
	EventData_t1D834FCA8C994FD4AA4D12372B5532170DFD3681* ___reusableEventData_28;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PeerBase::watch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___watch_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_31;
	// System.Int32 ExitGames.Client.Photon.PeerBase::longestSentCall
	int32_t ___longestSentCall_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendAck
	int32_t ___timeLastSendAck_33;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastSendOutgoing
	int32_t ___timeLastSendOutgoing_34;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_35;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_37;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::messageHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___messageHeader_39;
	// Photon.SocketServer.Security.ICryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	RuntimeObject* ___CryptoProvider_40;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___lagRandomizer_41;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t1D68692B59A0459D88CB117CF9AC5EA8B3FA682F* ___NetSimListOutgoing_42;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t1D68692B59A0459D88CB117CF9AC5EA8B3FA682F* ___NetSimListIncoming_43;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t4BA8B34DF74B489FCB89281132F777080DBEAF49* ___networkSimulationSettings_44;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_45;
};

struct PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F_StaticFields
{
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_22;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.StreamBuffer> ExitGames.Client.Photon.PeerBase::MessageBufferPool
	Queue_1_t02482683AE1D9D63176EAA56728B12F9ADCA10BE* ___MessageBufferPool_38;
};

// Photon.Realtime.Player
struct Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C  : public RuntimeObject
{
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject* ___TagObject_8;
};

// Photon.Realtime.Region
struct Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A  : public RuntimeObject
{
	// System.String Photon.Realtime.Region::<Code>k__BackingField
	String_t* ___U3CCodeU3Ek__BackingField_0;
	// System.String Photon.Realtime.Region::<Cluster>k__BackingField
	String_t* ___U3CClusterU3Ek__BackingField_1;
	// System.String Photon.Realtime.Region::<HostAndPort>k__BackingField
	String_t* ___U3CHostAndPortU3Ek__BackingField_2;
	// System.Int32 Photon.Realtime.Region::<Ping>k__BackingField
	int32_t ___U3CPingU3Ek__BackingField_3;
};

// Photon.Realtime.RegionHandler
struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t200118F3BAA96EE542F0FC561BA520560BD1A6C7* ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t6F972EAFC64258DD491584080B232EC12BE33581* ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;
};

struct RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB_StaticFields
{
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t* ___PingImplementation_0;
	// System.UInt16 Photon.Realtime.RegionHandler::PortToPingOverride
	uint16_t ___PortToPingOverride_9;
};

// Photon.Realtime.RoomInfo
struct RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;
};

// Photon.Realtime.RoomOptions
struct RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23  : public RuntimeObject
{
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tD626399B3ADFD501225241D7366103F35472542A* ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Photon.Realtime.TypedLobby
struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9  : public RuntimeObject
{
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;
};

struct TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9_StaticFields
{
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___Default_2;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// ExitGames.Client.Photon.WebSocket
struct WebSocket_t186C04B8068D205593DB749543F9FC0670E60348  : public RuntimeObject
{
	// System.Uri ExitGames.Client.Photon.WebSocket::mUrl
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___mUrl_0;
	// System.String ExitGames.Client.Photon.WebSocket::mProxyAddress
	String_t* ___mProxyAddress_1;
	// System.String ExitGames.Client.Photon.WebSocket::protocols
	String_t* ___protocols_2;
	// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String> ExitGames.Client.Photon.WebSocket::<DebugReturn>k__BackingField
	Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* ___U3CDebugReturnU3Ek__BackingField_3;
	// System.Int32 ExitGames.Client.Photon.WebSocket::m_NativeRef
	int32_t ___m_NativeRef_4;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// GameManager/<>c
struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5  : public RuntimeObject
{
};

struct U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields
{
	// GameManager/<>c GameManager/<>c::<>9
	U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* ___U3CU3E9_0;
	// System.Func`2<PlayerController,System.Boolean> GameManager/<>c::<>9__10_0
	Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* ___U3CU3E9__10_0_1;
};

// GameManager/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B  : public RuntimeObject
{
	// System.Int32 GameManager/<>c__DisplayClass15_0::playerId
	int32_t ___playerId_0;
};

// GameManager/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140  : public RuntimeObject
{
	// UnityEngine.GameObject GameManager/<>c__DisplayClass16_0::playerObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerObject_0;
};

// ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13
struct U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2  : public RuntimeObject
{
	// System.Int32 ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ExitGames.Client.Photon.SocketWebTcp ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::<>4__this
	SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* ___U3CU3E4__this_2;
	// System.Byte[] ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::<inBuff>5__1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CinBuffU3E5__1_3;
	// System.Exception ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::<e>5__2
	Exception_t* ___U3CeU3E5__2_4;
};

// menu/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051  : public RuntimeObject
{
	// System.String menu/<>c__DisplayClass27_0::roomName
	String_t* ___roomName_0;
	// menu menu/<>c__DisplayClass27_0::<>4__this
	menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* ___U3CU3E4__this_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>
struct KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___value_1;
};

// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint8_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Photon.Realtime.PhotonPortDefinition
struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A 
{
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;
};

struct PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A_StaticFields
{
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___AlternativeUdpPorts_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// Photon.Realtime.Room
struct Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373  : public RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_t090B48BACBD1134A0E2C74084CF2392C71A6812B* ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C  : public IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34
{
	// ExitGames.Client.Photon.WebSocket ExitGames.Client.Photon.SocketWebTcp::sock
	WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* ___sock_12;
	// System.Object ExitGames.Client.Photon.SocketWebTcp::syncer
	RuntimeObject* ___syncer_13;
	// UnityEngine.GameObject ExitGames.Client.Photon.SocketWebTcp::websocketConnectionObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___websocketConnectionObject_14;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// ExitGames.Client.Photon.WaitForRealSeconds
struct WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single ExitGames.Client.Photon.WaitForRealSeconds::_endTime
	float ____endTime_0;
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>
struct Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// Photon.Chat.ChatClient
struct ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA  : public RuntimeObject
{
	// System.Boolean Photon.Chat.ChatClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_3;
	// System.String Photon.Chat.ChatClient::<NameServerAddress>k__BackingField
	String_t* ___U3CNameServerAddressU3Ek__BackingField_4;
	// System.String Photon.Chat.ChatClient::<FrontendAddress>k__BackingField
	String_t* ___U3CFrontendAddressU3Ek__BackingField_5;
	// System.String Photon.Chat.ChatClient::chatRegion
	String_t* ___chatRegion_6;
	// System.String Photon.Chat.ChatClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_7;
	// Photon.Chat.ChatState Photon.Chat.ChatClient::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_8;
	// Photon.Chat.ChatDisconnectCause Photon.Chat.ChatClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_9;
	// System.String Photon.Chat.ChatClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_10;
	// System.String Photon.Chat.ChatClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_11;
	// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::<AuthValues>k__BackingField
	AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ___U3CAuthValuesU3Ek__BackingField_12;
	// System.Int32 Photon.Chat.ChatClient::MessageLimit
	int32_t ___MessageLimit_13;
	// System.Int32 Photon.Chat.ChatClient::PrivateChatHistoryLength
	int32_t ___PrivateChatHistoryLength_14;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PublicChannels
	Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* ___PublicChannels_15;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel> Photon.Chat.ChatClient::PrivateChannels
	Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* ___PrivateChannels_16;
	// System.Collections.Generic.HashSet`1<System.String> Photon.Chat.ChatClient::PublicChannelsUnsubscribing
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___PublicChannelsUnsubscribing_17;
	// Photon.Chat.IChatClientListener Photon.Chat.ChatClient::listener
	RuntimeObject* ___listener_18;
	// Photon.Chat.ChatPeer Photon.Chat.ChatClient::chatPeer
	ChatPeer_t216E56C8D1791380415477470013A3787DF76D43* ___chatPeer_19;
	// System.Boolean Photon.Chat.ChatClient::didAuthenticate
	bool ___didAuthenticate_21;
	// System.Nullable`1<System.Int32> Photon.Chat.ChatClient::statusToSetWhenConnected
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___statusToSetWhenConnected_22;
	// System.Object Photon.Chat.ChatClient::messageToSetWhenConnected
	RuntimeObject* ___messageToSetWhenConnected_23;
	// System.Int32 Photon.Chat.ChatClient::msDeltaForServiceCalls
	int32_t ___msDeltaForServiceCalls_24;
	// System.Int32 Photon.Chat.ChatClient::msTimestampOfLastServiceCall
	int32_t ___msTimestampOfLastServiceCall_25;
	// System.Boolean Photon.Chat.ChatClient::<UseBackgroundWorkerForSending>k__BackingField
	bool ___U3CUseBackgroundWorkerForSendingU3Ek__BackingField_26;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4  : public RuntimeObject
{
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_t8C350A611B061F0EA1DE76C03AFD0CE19070E81F* ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.ClientAppType Photon.Realtime.LoadBalancingClient::<ClientType>k__BackingField
	int32_t ___U3CClientTypeU3Ek__BackingField_3;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_tD40B2D956BF978BFB23657901557FD46EC8601C7* ___U3CAuthValuesU3Ek__BackingField_4;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_5;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_6;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tC61504D4999670A5A2480A3B5CB4AC8A71EEE32E ___U3CExpectedProtocolU3Ek__BackingField_7;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject* ___tokenCache_8;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t75A54992188E1DC3FF910A00927F213E7198590A ___ServerPortOverrides_13;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_15;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_16;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_17;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_18;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_19;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_t3EC2669A751FDF2FFFA36356EC41244433164490* ___StateChanged_20;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1B5115AA4265AE1C83F3EC48593F86230AF07295* ___EventReceived_21;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t3A1DE9227396F3C161EEABEA4147808A86558826* ___OpResponseReceived_22;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_t4E9F72F713D87B67F0CA63162CFC7D100554BFFD* ___ConnectionCallbackTargets_23;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tEDF984018478E15D3031775F859CD94D66275C97* ___MatchMakingCallbackTargets_24;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_t7730C9DD20B72CC201052C5E6FC914E6FD4B1488* ___InRoomCallbackTargets_25;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_tEF75E5B06B44AD5DE298FA7C597901BAE1E352FC* ___LobbyCallbackTargets_26;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t88E62A57DFEECEC90CE6EC40A270C0C188AD1851* ___WebRpcCallbackTargets_27;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_tF60CA97691A86635843C02EEA1D689A384BC7ED7* ___ErrorInfoCallbackTargets_28;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_29;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___U3CCurrentLobbyU3Ek__BackingField_30;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_31;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics_32;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CLocalPlayerU3Ek__BackingField_33;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* ___U3CCurrentRoomU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_36;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_37;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_38;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParamsCache_39;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_t19D9B9933391EE79E5DEB2F8AECE02D5519E65ED* ___failedRoomEntryOperation_40;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friendListRequested_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_43;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_44;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___RegionHandler_45;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_46;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_47;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_48;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t9BA80EF655597EC91F8BA37831960B5B70540B02* ___callbackTargetChanges_49;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___callbackTargets_50;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_51;
};

struct LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_StaticFields
{
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tCA6FC027A4EAE9285D2860309E61DB2B271D9A80* ___ProtocolToNameServerPort_11;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d
struct U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984  : public RuntimeObject
{
	// System.Int32 PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerController PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::<>4__this
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___U3CU3E4__this_2;
	// UnityEngine.Color PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::<defaultColor>5__1
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CdefaultColorU3E5__1_3;
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74  : public MulticastDelegate_t
{
};

// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>
struct Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B  : public MulticastDelegate_t
{
};

// System.Func`2<PlayerController,System.Boolean>
struct Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Photon.Pun.ServerSettings
struct ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Photon.Realtime.AppSettings Photon.Pun.ServerSettings::AppSettings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___AppSettings_4;
	// System.String Photon.Pun.ServerSettings::DevRegion
	String_t* ___DevRegion_5;
	// Photon.Pun.PunLogLevel Photon.Pun.ServerSettings::PunLogging
	int32_t ___PunLogging_6;
	// System.Boolean Photon.Pun.ServerSettings::EnableSupportLogger
	bool ___EnableSupportLogger_7;
	// System.Boolean Photon.Pun.ServerSettings::RunInBackground
	bool ___RunInBackground_8;
	// System.Boolean Photon.Pun.ServerSettings::StartInOfflineMode
	bool ___StartInOfflineMode_9;
	// System.Collections.Generic.List`1<System.String> Photon.Pun.ServerSettings::RpcList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___RpcList_10;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CameraController::sensX
	float ___sensX_4;
	// System.Single CameraController::sensY
	float ___sensY_5;
	// System.Single CameraController::minY
	float ___minY_6;
	// System.Single CameraController::maxY
	float ___maxY_7;
	// System.Single CameraController::spectatorMoveSpeed
	float ___spectatorMoveSpeed_8;
	// System.Single CameraController::rotx
	float ___rotx_9;
	// System.Single CameraController::roty
	float ___roty_10;
	// System.Boolean CameraController::isSpectator
	bool ___isSpectator_11;
};

// Photon.Chat.Demo.ChannelSelector
struct ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Photon.Chat.Demo.ChannelSelector::Channel
	String_t* ___Channel_4;
};

// Photon.Chat.Demo.ChatAppIdCheckerUI
struct ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatAppIdCheckerUI::Description
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Description_4;
	// System.Boolean Photon.Chat.Demo.ChatAppIdCheckerUI::WizardOpenedOnce
	bool ___WizardOpenedOnce_5;
};

// Photon.Chat.Demo.ChatGui
struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Photon.Chat.Demo.ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ChannelsToJoinOnConnect_4;
	// System.String[] Photon.Chat.Demo.ChatGui::FriendsList
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___FriendsList_5;
	// System.Int32 Photon.Chat.Demo.ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_6;
	// System.String Photon.Chat.Demo.ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_7;
	// System.String Photon.Chat.Demo.ChatGui::selectedChannelName
	String_t* ___selectedChannelName_8;
	// Photon.Chat.ChatClient Photon.Chat.Demo.ChatGui::chatClient
	ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* ___chatClient_9;
	// Photon.Chat.ChatAppSettings Photon.Chat.Demo.ChatGui::chatAppSettings
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* ___chatAppSettings_10;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::missingAppIdErrorPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___missingAppIdErrorPanel_11;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::ConnectingLabel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ConnectingLabel_12;
	// UnityEngine.RectTransform Photon.Chat.Demo.ChatGui::ChatPanel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___ChatPanel_13;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::UserIdFormPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___UserIdFormPanel_14;
	// UnityEngine.UI.InputField Photon.Chat.Demo.ChatGui::InputFieldChat
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___InputFieldChat_15;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::CurrentChannelText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___CurrentChannelText_16;
	// UnityEngine.UI.Toggle Photon.Chat.Demo.ChatGui::ChannelToggleToInstantiate
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___ChannelToggleToInstantiate_17;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::FriendListUiItemtoInstantiate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FriendListUiItemtoInstantiate_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle> Photon.Chat.Demo.ChatGui::channelToggles
	Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* ___channelToggles_19;
	// System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem> Photon.Chat.Demo.ChatGui::friendListItemLUT
	Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* ___friendListItemLUT_20;
	// System.Boolean Photon.Chat.Demo.ChatGui::ShowState
	bool ___ShowState_21;
	// UnityEngine.GameObject Photon.Chat.Demo.ChatGui::Title
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Title_22;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::StateText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StateText_23;
	// UnityEngine.UI.Text Photon.Chat.Demo.ChatGui::UserIdText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___UserIdText_24;
	// System.Int32 Photon.Chat.Demo.ChatGui::TestLength
	int32_t ___TestLength_26;
	// System.Byte[] Photon.Chat.Demo.ChatGui::testBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___testBytes_27;
};

struct ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields
{
	// System.String Photon.Chat.Demo.ChatGui::HelpText
	String_t* ___HelpText_25;
};

// Photon.Realtime.Demo.ConnectAndJoinRandomLb
struct ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.AppSettings Photon.Realtime.Demo.ConnectAndJoinRandomLb::appSettings
	AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___appSettings_4;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Demo.ConnectAndJoinRandomLb::lbc
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___lbc_5;
	// Photon.Realtime.ConnectionHandler Photon.Realtime.Demo.ConnectAndJoinRandomLb::ch
	ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* ___ch_6;
	// UnityEngine.UI.Text Photon.Realtime.Demo.ConnectAndJoinRandomLb::StateUiText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StateUiText_7;
};

// Photon.Realtime.ConnectionHandler
struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.ConnectionHandler::<Client>k__BackingField
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___U3CClientU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.ConnectionHandler::DisconnectAfterKeepAlive
	bool ___DisconnectAfterKeepAlive_5;
	// System.Int32 Photon.Realtime.ConnectionHandler::KeepAliveInBackground
	int32_t ___KeepAliveInBackground_6;
	// System.Int32 Photon.Realtime.ConnectionHandler::<CountSendAcksOnly>k__BackingField
	int32_t ___U3CCountSendAcksOnlyU3Ek__BackingField_7;
	// System.Boolean Photon.Realtime.ConnectionHandler::ApplyDontDestroyOnLoad
	bool ___ApplyDontDestroyOnLoad_8;
	// System.Byte Photon.Realtime.ConnectionHandler::fallbackThreadId
	uint8_t ___fallbackThreadId_10;
	// System.Boolean Photon.Realtime.ConnectionHandler::didSendAcks
	bool ___didSendAcks_11;
	// System.Diagnostics.Stopwatch Photon.Realtime.ConnectionHandler::backgroundStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___backgroundStopwatch_12;
};

struct ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_StaticFields
{
	// System.Boolean Photon.Realtime.ConnectionHandler::AppQuits
	bool ___AppQuits_9;
};

// Photon.Chat.UtilityScripts.EventSystemSpawner
struct EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Forcefeild
struct Forcefeild_tDB2CC7994790DF2D23B7217A6CD68A9036C7764B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Forcefeild::shrinkWaitTime
	float ___shrinkWaitTime_4;
	// System.Single Forcefeild::shrinkAmount
	float ___shrinkAmount_5;
	// System.Single Forcefeild::shrinkDuration
	float ___shrinkDuration_6;
	// System.Single Forcefeild::minShrinkAmount
	float ___minShrinkAmount_7;
	// System.Int32 Forcefeild::playerDamage
	int32_t ___playerDamage_8;
	// System.Single Forcefeild::lastShrinkEndTime
	float ___lastShrinkEndTime_9;
	// System.Boolean Forcefeild::shrinking
	bool ___shrinking_10;
	// System.Single Forcefeild::targetDiameter
	float ___targetDiameter_11;
	// System.Single Forcefeild::lastPlayerCheckTIme
	float ___lastPlayerCheckTIme_12;
};

// Photon.Chat.Demo.FriendItem
struct FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::NameLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___NameLabel_4;
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::StatusLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StatusLabel_5;
	// UnityEngine.UI.Text Photon.Chat.Demo.FriendItem::Health
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___Health_6;
};

// GameUI
struct GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider GameUI::healthBar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___healthBar_4;
	// TMPro.TextMeshProUGUI GameUI::playerInfoText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerInfoText_5;
	// TMPro.TextMeshProUGUI GameUI::AmmoText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___AmmoText_6;
	// TMPro.TextMeshProUGUI GameUI::winText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___winText_7;
	// UnityEngine.UI.Image GameUI::winBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___winBackground_8;
	// PlayerController GameUI::player
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___player_9;
};

struct GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields
{
	// GameUI GameUI::instance
	GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* ___instance_10;
};

// Photon.Chat.Demo.IgnoreUiRaycastWhenInactive
struct IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* ___pvCache_4;
};

// Photon.Chat.Demo.NamePickGui
struct NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Photon.Chat.Demo.ChatGui Photon.Chat.Demo.NamePickGui::chatNewComponent
	ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* ___chatNewComponent_5;
	// UnityEngine.UI.InputField Photon.Chat.Demo.NamePickGui::idInput
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___idInput_6;
};

// Photon.Chat.UtilityScripts.OnStartDelete
struct OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Photon.Pun.PhotonView
struct PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_4;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_5;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___instantiationDataField_6;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___lastOnSerializeDataSent_7;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___syncValues_8;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___lastOnSerializeDataReceived_9;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_10;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_11;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_12;
	// Photon.Pun.PhotonView/ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_t584CB490C8F4C21E0A0D5545409ED60BF71F3FE4* ___ObservedComponents_14;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* ___RpcMonoBehaviours_15;
	// System.Boolean Photon.Pun.PhotonView::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Controller>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3CControllerU3Ek__BackingField_17;
	// System.Int32 Photon.Pun.PhotonView::<CreatorActorNr>k__BackingField
	int32_t ___U3CCreatorActorNrU3Ek__BackingField_18;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_19;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Owner>k__BackingField
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___U3COwnerU3Ek__BackingField_20;
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_21;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_22;
	// System.Int32 Photon.Pun.PhotonView::sceneViewId
	int32_t ___sceneViewId_23;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_24;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_25;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_26;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_27;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tF178FEC52A1E31BA7A3C30BE84E4770D020B061B* ___CallbackChangeQueue_28;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_tA7AAD9C9730173B4B69D3E42B07AF11817191181* ___OnPreNetDestroyCallbacks_29;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t7628C79979ECE33C758FA5C52526761CA20F2167* ___OnOwnerChangeCallbacks_30;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tAE460F42AC335F9ADFDAB761B93C2E8883845E5F* ___OnControllerChangeCallbacks_31;
};

// Photon.Chat.UtilityScripts.TextButtonTransition
struct TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Photon.Chat.UtilityScripts.TextButtonTransition::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_4;
	// UnityEngine.UI.Selectable Photon.Chat.UtilityScripts.TextButtonTransition::Selectable
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___Selectable_5;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextButtonTransition::NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalColor_6;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextButtonTransition::HoverColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverColor_7;
};

// Photon.Chat.UtilityScripts.TextToggleIsOnTransition
struct TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle Photon.Chat.UtilityScripts.TextToggleIsOnTransition::toggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggle_4;
	// UnityEngine.UI.Text Photon.Chat.UtilityScripts.TextToggleIsOnTransition::_text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____text_5;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::NormalOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOnColor_6;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::NormalOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NormalOffColor_7;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::HoverOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOnColor_8;
	// UnityEngine.Color Photon.Chat.UtilityScripts.TextToggleIsOnTransition::HoverOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___HoverOffColor_9;
	// System.Boolean Photon.Chat.UtilityScripts.TextToggleIsOnTransition::isHover
	bool ___isHover_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// bullet
struct bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 bullet::damage
	int32_t ___damage_4;
	// System.Int32 bullet::attackerId
	int32_t ___attackerId_5;
	// System.Boolean bullet::isMine
	bool ___isMine_6;
	// UnityEngine.Rigidbody bullet::rig
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rig_7;
};

// ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt
struct MonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// System.Boolean UnityEngine.EventSystems.BaseInputModule::m_SendPointerHoverToParent
	bool ___m_SendPointerHoverToParent_5;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_6;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_7;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_9;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_10;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
};

// Pickup
struct Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8  : public MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD
{
	// PickupType Pickup::type
	int32_t ___type_5;
	// System.Int32 Pickup::value
	int32_t ___value_6;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// System.Single GameManager::postGameTime
	float ___postGameTime_5;
	// System.String GameManager::playerPrefabLocation
	String_t* ___playerPrefabLocation_6;
	// UnityEngine.Transform[] GameManager::spawnPoints
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___spawnPoints_7;
	// PlayerController[] GameManager::players
	PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* ___players_8;
	// System.Int32 GameManager::alivePlayers
	int32_t ___alivePlayers_9;
	// System.Int32 GameManager::playersInGame
	int32_t ___playersInGame_10;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_11;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_23;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_24;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_25;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_26;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_27;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_28;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_29;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_30;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_31;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_32;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_33;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_34;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_35;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_36;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_37;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_38;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_39;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_40;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_41;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_42;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_43;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_46;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_47;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_48;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_49;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_50;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_51;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_52;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_53;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_54;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_55;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_56;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_59;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_60;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_63;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_64;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_65;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_66;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_67;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_68;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_69;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_70;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_73;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// Networkmanager
struct Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// System.Int32 Networkmanager::maxPlayers
	int32_t ___maxPlayers_5;
};

struct Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_StaticFields
{
	// Networkmanager Networkmanager::instance
	Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* ___instance_6;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// System.Int32 PlayerController::id
	int32_t ___id_5;
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_6;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_7;
	// UnityEngine.Rigidbody PlayerController::rig
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rig_8;
	// Photon.Realtime.Player PlayerController::photonPlayer
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___photonPlayer_9;
	// PlayerWeapon PlayerController::weapon
	PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01* ___weapon_10;
	// System.Int32 PlayerController::curAttackerId
	int32_t ___curAttackerId_11;
	// System.Int32 PlayerController::curHp
	int32_t ___curHp_12;
	// System.Int32 PlayerController::maxHp
	int32_t ___maxHp_13;
	// System.Int32 PlayerController::kills
	int32_t ___kills_14;
	// System.Boolean PlayerController::dead
	bool ___dead_15;
	// System.Boolean PlayerController::flashingDamage
	bool ___flashingDamage_16;
	// UnityEngine.MeshRenderer PlayerController::mr
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___mr_17;
};

// PlayerWeapon
struct PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// System.Int32 PlayerWeapon::damage
	int32_t ___damage_5;
	// System.Int32 PlayerWeapon::curAmmo
	int32_t ___curAmmo_6;
	// System.Int32 PlayerWeapon::maxAmmo
	int32_t ___maxAmmo_7;
	// System.Single PlayerWeapon::bulletSpeed
	float ___bulletSpeed_8;
	// System.Single PlayerWeapon::shootRate
	float ___shootRate_9;
	// System.Single PlayerWeapon::lastShootTime
	float ___lastShootTime_10;
	// UnityEngine.GameObject PlayerWeapon::bulletPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bulletPrefab_11;
	// UnityEngine.Transform PlayerWeapon::bulletSpawnPos
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___bulletSpawnPos_12;
	// PlayerController PlayerWeapon::player
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___player_13;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_15;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_16;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// menu
struct menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF  : public MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783
{
	// UnityEngine.GameObject menu::mainScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainScreen_5;
	// UnityEngine.GameObject menu::createRoomScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___createRoomScreen_6;
	// UnityEngine.GameObject menu::lobbyScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lobbyScreen_7;
	// UnityEngine.GameObject menu::lobbyBrowserScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lobbyBrowserScreen_8;
	// UnityEngine.UI.Button menu::createRoomButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___createRoomButton_9;
	// UnityEngine.UI.Button menu::findRoomButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___findRoomButton_10;
	// TMPro.TextMeshProUGUI menu::playerListText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerListText_11;
	// TMPro.TextMeshProUGUI menu::roomInfoText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___roomInfoText_12;
	// UnityEngine.UI.Button menu::startgameButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___startgameButton_13;
	// UnityEngine.RectTransform menu::roomListContainer
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___roomListContainer_14;
	// UnityEngine.GameObject menu::roomButtonPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___roomButtonPrefab_15;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> menu::roomButtons
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___roomButtons_16;
	// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo> menu::roomList
	List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* ___roomList_17;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_17;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_18;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_20;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_21;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_22;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_26;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_28;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_29;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_30;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PlayerController[]
struct PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* m_Items[1];

	inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Realtime.Player[]
struct PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572  : public RuntimeArray
{
	ALIGN_FIELD (8) Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* m_Items[1];

	inline Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mC6FA107934316BE28EA02DDB9EADA7AE8DD1916B_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.ByteEnum,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mC40C1DDBF3B0A94B53CC0D45739F068D1218E799_gshared (Action_2_tBCC61F27E6A6723F5DEAC0BC701267FC80237CFE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// PlayerController GameManager::GetPlayer(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameManager_GetPlayer_mA5290A128D0DD67FF2D9337C2E984DE31664C679 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerObject0, const RuntimeMethod* method) ;
// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::get_photonView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67 (MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonView::RPC(System.String,Photon.Realtime.Player,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RPC_m985C1C00D88C33FABAE7B0C51AAB32C67A9D010B (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, String_t* ___methodName0, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___targetPlayer1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void Forcefeild::Shrink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Forcefeild_Shrink_m0B0DD87F1B31F60B42FAD7C5150F44B5512271CB (Forcefeild_tDB2CC7994790DF2D23B7217A6CD68A9036C7764B* __this, const RuntimeMethod* method) ;
// System.Void Forcefeild::CheckPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Forcefeild_CheckPlayers_mB336B42F5DEAFE23BDDFC4D3276808443F11D4D6 (Forcefeild_tDB2CC7994790DF2D23B7217A6CD68A9036C7764B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// Photon.Realtime.Player[] Photon.Pun.PhotonNetwork::get_PlayerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* PhotonNetwork_get_PlayerList_mD2A2D36659BCEF35EBE2E6B4909F4439D191AE39 (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void Photon.Pun.PhotonView::RPC(System.String,Photon.Pun.RpcTarget,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, String_t* ___methodName0, int32_t ___target1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters2, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::get_IsMasterClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_IsMasterClient_mD04046028C484F06D77A1C36C64FFAC285C2DF9C (const RuntimeMethod* method) ;
// System.Void System.Func`2<PlayerController,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m2DDA7086FE2E40E8B3A092BA1FE995CD39C03515 (Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// TSource System.Linq.Enumerable::First<PlayerController>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1 (RuntimeObject* ___source0, Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* ___predicate1, const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (RuntimeObject*, Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mC6FA107934316BE28EA02DDB9EADA7AE8DD1916B_gshared)(___source0, ___predicate1, method);
}
// PlayerController GameManager::GetPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameManager_GetPlayer_m9D1A34D9D7F679A935817872E43011E53B717FF6 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___playerId0, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Player::get_NickName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Player_get_NickName_mC1B2AC59B8850ABEB4DA27199675066DC3BF0738 (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// System.Void GameUI::SetWinText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_SetWinText_m6CC2AA57B67DB5F1017B1A2076C764C0A607FE67 (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, String_t* ___winnername0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::LeaveRoom(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_LeaveRoom_m3BE228D128665941646C4D4A1D5529B944F49744 (bool ___becomeInactive0, const RuntimeMethod* method) ;
// System.Void Networkmanager::ChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager_ChangeScene_m6D5E88E61849AFC37C44040F838B1EB48AA30BC6 (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.GameObject Photon.Pun.PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Byte,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PhotonNetwork_Instantiate_mD5714F5AC4C17B75AFD65676226351C91B60AF0D (String_t* ___prefabName0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, uint8_t ___group3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data4, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// Photon.Realtime.Player Photon.Pun.PhotonNetwork::get_LocalPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* PhotonNetwork_get_LocalPlayer_mEA3335FEF4E4B55C1EFAC8AFA8D5F7E3D7FBE4DC (const RuntimeMethod* method) ;
// System.Void GameManager::reskin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_reskin_m03A6B1506531B74D44A6467F27FA625C690D4F25 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void GameManager/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mB817511BACD6DF99170685DDCFFF64DB9A57C9A9 (U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mF000F93CF2A01B28985C645FE8A90F6380758446 (U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPunCallbacks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2 (MonoBehaviourPunCallbacks_t0B3C6A2FD0A09450A8505ACD42A647F3BCE6D783* __this, const RuntimeMethod* method) ;
// System.Void GameManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void GameUI::UpdatePlayerInfotext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_UpdatePlayerInfotext_m4A4CFE5BA489AD2D0066682DDF8C6B5D0013AD1A (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, const RuntimeMethod* method) ;
// System.Void GameUI::UpdateAmmoText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_UpdateAmmoText_mCDAED1838C4A9A3187FC7AACA9DC915E0CDE0F97 (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::get_InRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_get_InRoom_mFBE0C1A516C34FBAD9923933C73E07080FDA199D (const RuntimeMethod* method) ;
// System.Void menu::SetScreen(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_SetScreen_mDE7A705EF938EA346EC7C4547AD1D20A9CF17E72 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___screen0, const RuntimeMethod* method) ;
// System.Void menu::UpdateLobbyUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_UpdateLobbyUI_m24961105EB6C2E07223D4FB23119F10571644897 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) ;
// Photon.Realtime.Room Photon.Pun.PhotonNetwork::get_CurrentRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* PhotonNetwork_get_CurrentRoom_m72D3601299E109EED858E132DE1BD316226BA38D (const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Room::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsVisible_m88B1F48E1CDB171A2ECB10D9289596FA45EC74D7 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.Room::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Room_set_IsOpen_m8BA8D4E6233E041B3242BA516B8BADCFF10117FA (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void menu::UpdateLobbyBrowserUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_UpdateLobbyBrowserUI_mDA1A2E60A87D2C163458E28154D87BDCF58DD865 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::set_NickName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_set_NickName_m9EB46021028BE0060635402D3C3989A2816AFA61 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Networkmanager::CreateRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager_CreateRoom_m0068BDBD7BCC7FCE2C09B5151A1ED516949EBD9D (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, String_t* ___roomName0, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Room::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500 (Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void menu/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_mE5BEDED51CE977FBD7F0FF7ADAADE07F33D717D1 (U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.GameObject menu::CreateRoomButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* menu_CreateRoomButton_mA527D24921C2F27559378A844F201125B335D3FF (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>::get_Item(System.Int32)
inline RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4 (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* (*) (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_mAB935BEF1DAE8C99C0051D85426956E689A939EF (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) ;
// System.Byte Photon.Realtime.RoomInfo::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RoomInfo_get_MaxPlayers_mA59AFE46C3C2CB64D2DC7F6DB200187913DDAF24 (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4 (uint8_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>::get_Count()
inline int32_t List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_inline (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Networkmanager::JoinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager_JoinRoom_m48CF95D56C4D8570D979164CB08890070CC4BF35 (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, String_t* ___roomName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>::.ctor()
inline void List_1__ctor_m3AAD2029AC37E49D77E006780B4D2D13A64DF326 (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void menu::OnJoinRoomButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnJoinRoomButton_mE8D82CC8DEC39748306BD688EE1CA91540A3E263 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, String_t* ___roomName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::ConnectUsingSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_ConnectUsingSettings_m5062DDA82806820AE9358F849B0533B82230E540 (const RuntimeMethod* method) ;
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8 (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::CreateRoom(System.String,Photon.Realtime.RoomOptions,Photon.Realtime.TypedLobby,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_CreateRoom_m4C10274CD848B558E95997CA1277EFE77420B821 (String_t* ___roomName0, RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* ___roomOptions1, TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9* ___typedLobby2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers3, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::JoinRoom(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_JoinRoom_mB85EDB547BA767A21BEB5CB6AC5068F00F05B08C (String_t* ___roomName0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___expectedUsers1, const RuntimeMethod* method) ;
// System.Void Photon.Pun.PhotonNetwork::LoadLevel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonNetwork_LoadLevel_m71D2B6098A6F1CBFB37EE1E4CBE28B11149C8A38 (String_t* ___levelName0, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonNetwork::JoinLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhotonNetwork_JoinLobby_m1963DA1D3B6EDFADCC45C75B121188EF6B6B4803 (const RuntimeMethod* method) ;
// System.Void Photon.Pun.MonoBehaviourPun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55 (MonoBehaviourPun_t64DD82CBA1C47A70448DAB2263AB90A4411621BD* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m7A0FEA813B93A82713C06D8466F0A21325743488 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, float ___maxDistance1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Boolean Photon.Pun.PhotonView::get_IsMine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m68BFC8B882D42955A212B23E7D1DDD56CC87DB09 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void PlayerController::TryJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_TryJump_mC2DDFD8F9C936E8D331724F80F08748D2EFE2125 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void PlayerWeapon::TryShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_TryShoot_mC284288AF5ABE0400875C8CDAD85982E7E0FA2C5 (PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01* __this, const RuntimeMethod* method) ;
// System.Int32 Photon.Realtime.Player::get_ActorNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A (Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameUI::Initialize(PlayerController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_Initialize_m309B8EB308234F5424B5AB8016B0FE3DC1A021DC (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___localplayer0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void GameUI::UpdateHealthBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_UpdateHealthBar_m53A5FD5196DF45DE2FF50C5EF87D8FE0E98AEF9A (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerController::<DamageFlash>g__DamageFlashCoRoutine|19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_U3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0_m560D1CE0C2395C28FB6D6228E4789707D47444D3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void GameManager::CheckWinCondition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CheckWinCondition_mA0BD42E5BDFB266E963B839DEEE1BDE7B570D0BD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<CameraController>()
inline CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* Component_GetComponentInChildren_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m184BC32E568AA177DFF2DE71846247331C770394 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void CameraController::SetAsSpectator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_SetAsSpectator_mD2402F0D142F62C20410A28887BD1EB291822C06 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed__ctor_m95F03A884F7001F53A0E941EF6910B3FD4A89A20 (U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PlayerController>()
inline PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<bullet>()
inline bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* GameObject_GetComponent_Tisbullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F_m4FA8C43E84B03BFE33D2E107C90C06BB7E22F0FB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void bullet::Initialize(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet_Initialize_mCBB930E8A0595C36486C08CA2DF63AEBE3727407 (bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* __this, int32_t ___damage0, int32_t ___attackerId1, bool ___isMine2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket__ctor_m6B3835EE978E2B363748C5B291A8BCD56A2A5E0E (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___peerBase0, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_mB49A10CE97A4B3D6F5934FE9FA8A635A8DA16522_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerAddress_m64A4656AE1370555D8778535E059680E9C26E2CD_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.PeerBase::get_ProxyServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ProxyServerAddress_m346F142298C326B5010E7B197DFCC875DED28F74_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_ProxyServerAddress(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ProxyServerAddress_mB4292201961A3D7D24CD3E98CD730F626B3D7DEC_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.IPhotonSocket::ReportDebugOfLevel(ExitGames.Client.Photon.DebugLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, uint8_t ___levelOfMessage0, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.IPhotonSocket::get_Listener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1 (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_ProxyServerAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ProxyServerAddress_m8B74A2C61251795A14640C3CE1A534C77320DA09_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::set_State(ExitGames.Client.Photon.PhotonSocketState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_mBB8227012F2C636EFC7D63313F1DDB7D31EA2417 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_mEBFAB80947385C48D84F5F6496E8BD49CCC540A5 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_EnqueueDebugReturn_mB5088055254D8D7831447BA5F748D8F74FD69C58 (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, uint8_t ___debugLevel0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt>()
inline MonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718* GameObject_AddComponent_TisMonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718_m7F300A5F2A65D90BE04CC6872F7B836203E9BE69 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::ReadProxyConfigScheme(System.String,System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketWebTcp_ReadProxyConfigScheme_mD1F3B07429ADC0856123279574E00F6B3E8462C7 (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, String_t* ___proxyAddress0, String_t* ___url1, String_t** ___proxyUrl2, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.IPhotonSocket::get_SerializationProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_SerializationProtocol_m0A0BB2FB5D70746DFAF69A56366A993187D870EA (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::.ctor(System.Uri,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE4721C4DB1E53D894243B79FFCC090A6C904F70C (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, String_t* ___proxyAddress1, String_t* ___protocols2, const RuntimeMethod* method) ;
// System.Void System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mF56F810E3F96F6A2F54C6025533C328231F554B0 (Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mC40C1DDBF3B0A94B53CC0D45739F068D1218E799_gshared)(__this, ___object0, ___method1, method);
}
// System.Void ExitGames.Client.Photon.WebSocket::set_DebugReturn(System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocket_set_DebugReturn_mFFCA1E6269F716339404AB19D621E772B29921A5_inline (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* ___value0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m395E986EBB2985B29B7C9857DDC89315758F92E6 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ExitGames.Client.Photon.SocketWebTcp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SocketWebTcp_ReceiveLoop_m90563FF779A5086910ED50CB76056C34EF4DD4CE (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mD4B1295B4D9D9687987116A6B7710773A31C7F2E (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleException(ExitGames.Client.Photon.StatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleException_m50599D782455D34378626862B68079C79834B2AF (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, int32_t ___statusCode0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__13__ctor_m74DA61D26E784B8B747BCC45EA73EE44379F24B7 (U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_mAD70795E28862CD7367610588610A392EFD473D9 (WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.String ExitGames.Client.Photon.WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_m57258F3B04019AD3E9A4FCA3B22F6D036232A588 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) ;
// System.Byte[] ExitGames.Client.Photon.WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WebSocket_Recv_mEACB78B578488E4E0ED5BF37886932D0C0C0AD43 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.IPhotonSocket::HandleReceivedDatagram(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPhotonSocket_HandleReceivedDatagram_mE732DCDE0858559B4F838D8DDF66C979F7DAA974 (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBuffer0, int32_t ___length1, bool ___willBeReused2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_mAD6DB1889E877BA6B7508A7E372AE425C7EA668F (int32_t ___socketInstance0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ptr1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_mE481043205BFC37D948C0879B902A54F09D8F508 (int32_t ___socketInstance0, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_m29C11E96CC093B381119F917893606F8034E74B2 (int32_t ___socketInstance0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ptr1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_mC8EC9EF77ABC16929D4FE49B18CEEA77D568A102 (String_t* ___url0, String_t* ___protocols1, const RuntimeMethod* method) ;
// System.Void ExitGames.Client.Photon.WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_mF869929D2C713487E6246536E970A3B93C410600 (int32_t ___socketInstance0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_m5DF899791780A85B8662B678886B936876755A6E (int32_t ___socketInstance0, const RuntimeMethod* method) ;
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m3488AD7573B5791C796C3BCE0CDAD848EF1D28E2 (int32_t ___socketInstance0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ptr1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient__ctor_mC3FD7885A9F9E80E8949ACDE2590016410F1186C (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, uint8_t ___protocol0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Photon.Realtime.ConnectionHandler>()
inline ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Photon.Realtime.ConnectionHandler::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___value0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.ConnectionHandler::StartFallbackSendAckThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionHandler_StartFallbackSendAckThread_mBA4B3FC1BABFBB2085F1D30D176B50D54F33AA69 (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.LoadBalancingClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_Service_m0208D4872E63ABA1E7367E1D8FB89421E3050920 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpJoinRandomRoom(Photon.Realtime.OpJoinRandomRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpJoinRandomRoom_mCB018C45C5BAC6CB7F10FA13BA9EBAC3BD0F45A1 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA* ___opJoinRandomRoomParams0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Photon.Realtime.RegionHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m215F7D57B46C05B7411E4B5B4C7DDB91EEA86681 (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean Photon.Realtime.RegionHandler::PingMinimumOfRegions(System.Action`1<Photon.Realtime.RegionHandler>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegionHandler_PingMinimumOfRegions_mBDA481EF544E14116455B0352A160D07B6AF5762 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* ___onCompleteCallback0, String_t* ___previousSummary1, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.EnterRoomParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8 (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::OpCreateRoom(Photon.Realtime.EnterRoomParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_OpCreateRoom_mD4FC6543597FB872E8EE027EE49E723D83437310 (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* ___enterRoomParams0, const RuntimeMethod* method) ;
// Photon.Realtime.Region Photon.Realtime.RegionHandler::get_BestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.RegionHandler::get_SummaryToCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RegionHandler_get_SummaryToCache_m313FB26DCB72FB6D25EC366E51AF4118F8CD3722 (RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* __this, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Region::get_Code()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.LoadBalancingClient::ConnectToRegionMaster(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_ConnectToRegionMaster_m170672C2A5C0B12DB89090B0EE8ECF6028FA365B (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* __this, String_t* ___region0, const RuntimeMethod* method) ;
// System.Void Photon.Realtime.AppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatAppSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppSettings__ctor_m0B6F25C335A13983DA701EBD9CFADAC43E6011A3 (ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.AppSettings::get_IsBestRegion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppSettings_get_IsBestRegion_m29A45FCEDFBC20C7C6E9CFA732A4E4FC2D1BBFED (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Realtime.AppSettings::get_IsDefaultNameServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AppSettings_get_IsDefaultNameServer_m25CC5D537E41C3678015FEECF221843B9CAEBD29 (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<Photon.Chat.Demo.ChatGui>()
inline ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30 (const RuntimeMethod* method)
{
	return ((  ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void Photon.Chat.Demo.ChatGui::ShowChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channelName0, const RuntimeMethod* method) ;
// Photon.Pun.ServerSettings Photon.Pun.PhotonNetwork::get_PhotonServerSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* PhotonNetwork_get_PhotonServerSettings_mEB0FD5D91970368EE4D23AA12213DAD57B8D1097 (const RuntimeMethod* method) ;
// System.String Photon.Chat.Demo.ChatGui::get_UserName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::set_UserName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Photon.Chat.ChatAppSettings Photon.Chat.Demo.AppSettingsExtensions::GetChatSettings(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* AppSettingsExtensions_GetChatSettings_mEE685D01C4B553F55E8016FFE255717777E8975E (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___appSettings0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::.ctor(Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient__ctor_m5C32CB0A0CAC33E980D4C6FA700B551D0DAF46F4 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, RuntimeObject* ___listener0, uint8_t ___protocol1, const RuntimeMethod* method) ;
// System.Void Photon.Chat.AuthenticationValues::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthenticationValues__ctor_mB097BC3108CD439CAD77D4AE77F8616FA92C929D (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* __this, String_t* ___userId0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::set_AuthValues(Photon.Chat.AuthenticationValues)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_mAAD43D4212103C80D1377FA04B33815397E28937_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ___value0, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::ConnectUsingSettings(Photon.Chat.ChatAppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_ConnectUsingSettings_m3DCD03EA4CAE4ADDD935BDA323CCF37B5E96BB4C (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* ___appSettings0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::Disconnect(Photon.Chat.ChatDisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Disconnect_m678FDF44265FD926B8DB5555B439F5F70D82BA52 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, int32_t ___cause0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatClient::Service()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatClient_Service_mD968988B9275FE4CA7113196FFB455F3BA79D0B7 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704 (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::SendChatMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___inputLine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Photon.Chat.AuthenticationValues Photon.Chat.ChatClient::get_AuthValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ChatClient_get_AuthValues_mC9F4405E66924D1BA21DEDE10848199C24915476_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, const RuntimeMethod* method) ;
// System.String Photon.Chat.AuthenticationValues::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m61CDE1031F42330B0EDC0EC489A75E46E1DB6B79_inline (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* __this, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___target0, RuntimeObject* ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643 (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Char::Equals(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___obj0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::PostHelpToCurrentChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_PostHelpToCurrentChannel_m707B7D1D556EACB05EC03E08F91A8F1ECA3642E9 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mA793BD64EB3D9ED4E360835951BD0333424C918D (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, int32_t ___status0, RuntimeObject* ___message1, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_mAB072792329A26749E58FED202C38A51691CD32C (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___channels0, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::Unsubscribe(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Unsubscribe_m384652194B1073EDB7A8CA3DBA04EFB7A14F0B0A (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___channels0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.ChatChannel>::Remove(TKey)
inline bool Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m5C5176103E0A618C661F6351BEBE408F4A06D925 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___channelName0, bool ___isPrivate1, ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1** ___channel2, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatChannel::ClearMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_ClearMessages_m046EA236CDD967B62CDE383F2098BF4B6ED80FFE (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7 (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean Photon.Chat.ChatClient::PublishMessage(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_PublishMessage_mC0EA414F46817A9F77DF910D9094AF23B563A2D8 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___channelName0, RuntimeObject* ___message1, bool ___forwardAsWebhook2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_Subscribe_m4A3A6D2D5703A1D8CF8ED0CACA717114062A6559 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___channels0, int32_t ___messagesFromHistory1, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::AddFriends(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_AddFriends_mC7A8A45F98205A68592ED3BE7A5FC88BF4EFB809 (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___friends0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::InstantiateFriendButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateFriendButton_m76FB5E6D0ACF60E58F8EE09C10998D49020B4CD1 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___friendId0, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_SetOnlineStatus_mEFE64834C76CBF45AB5B986DE9FE28A27D77E6CD (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, int32_t ___status0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::InstantiateChannelButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channelName0, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4 (RuntimeObject* ___origin0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.UI.Toggle>(T)
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m6F51F2B8CB0DBD60C3C4AF683A4FE9D7698C7482 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___original0, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// T UnityEngine.Component::GetComponentInChildren<Photon.Chat.Demo.ChannelSelector>()
inline ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void Photon.Chat.Demo.ChannelSelector::SetChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector_SetChannel_m7E493B7588E65D501C7DA99C72BF36DAA565250E (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, String_t* ___channel0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::Add(TKey,TValue)
inline void Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___key0, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<Photon.Chat.Demo.FriendItem>()
inline FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Photon.Chat.Demo.FriendItem::set_FriendId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_set_FriendId_m49FB0C8B978DD2E35361DE3ED6863257B82E4BB2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7 (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, String_t* ___key0, FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, String_t*, FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::get_Item(TKey)
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::Remove(TKey)
inline bool Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::get_Count()
inline int32_t Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::GetEnumerator()
inline Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5 (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_inline (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>::get_Value()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_inline (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::get_Item(TKey)
inline FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void Photon.Chat.Demo.FriendItem::OnFriendStatusUpdate(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_OnFriendStatusUpdate_mC336B386CEABD37A2BA65254CFE2C5125263E4CD (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, int32_t ___status0, bool ___gotMessage1, RuntimeObject* ___message2, const RuntimeMethod* method) ;
// System.Boolean Photon.Chat.ChatClient::TryGetChannel(System.String,Photon.Chat.ChatChannel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChatClient_TryGetChannel_m596F2DCA70B7C83E7E82B92B341DDEE9A5864C0A (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, String_t* ___channelName0, ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1** ___channel1, const RuntimeMethod* method) ;
// System.Void Photon.Chat.ChatChannel::Add(System.String,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatChannel_Add_m22E0343342399B1C9130CCDD12325EAA80DA9440 (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* __this, String_t* ___sender0, RuntimeObject* ___message1, int32_t ___msgId2, const RuntimeMethod* method) ;
// System.String Photon.Chat.ChatChannel::ToStringMessages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatChannel_ToStringMessages_mB286B6E5F35FAF7A5F4F4EE259BB64207F34FE18 (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>::Dispose()
inline void Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>::get_Current()
inline KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_inline (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB (*) (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UnityEngine.UI.Toggle>::MoveNext()
inline bool Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9 (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>::.ctor()
inline void Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,Photon.Chat.Demo.FriendItem>::.ctor()
inline void Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.NamePickGui::StartChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.Demo.ChatGui::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4 (const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.EventSystem>()
inline EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.EventSystems.StandaloneInputModule>()
inline StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619 (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, bool ___isOn0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared)(__this, ___call0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketCreate(char*, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketState(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketRecv(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketRecvLength(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SocketClose(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SocketError(int32_t, uint8_t*, int32_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void bullet::Initialize(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet_Initialize_mCBB930E8A0595C36486C08CA2DF63AEBE3727407 (bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* __this, int32_t ___damage0, int32_t ___attackerId1, bool ___isMine2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.damage = damage;
		int32_t L_0 = ___damage0;
		__this->___damage_4 = L_0;
		// this.attackerId = attackerId;
		int32_t L_1 = ___attackerId1;
		__this->___attackerId_5 = L_1;
		// this.isMine = isMine;
		bool L_2 = ___isMine2;
		__this->___isMine_6 = L_2;
		// Destroy(gameObject, 5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_3, (5.0f), NULL);
		// }
		return;
	}
}
// System.Void bullet::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet_OnTriggerEnter_m1AB9647EB311D5DE4F7818FB4156CCF5B78DCEDD (bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA99160DD9ED8625CF0DB13D82CA2EF52BC6764CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// if (other.CompareTag("Player") && isMine)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		bool L_2 = __this->___isMine_6;
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_007c;
		}
	}
	{
		// PlayerController player = GameManager.instance.GetPlayer(other.gameObject);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7;
		L_7 = GameManager_GetPlayer_mA5290A128D0DD67FF2D9337C2E984DE31664C679(L_4, L_6, NULL);
		V_1 = L_7;
		// if (player.id != attackerId)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8 = V_1;
		int32_t L_9 = L_8->___id_5;
		int32_t L_10 = __this->___attackerId_5;
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_007b;
		}
	}
	{
		// player.photonView.RPC("TakeDamage", player.photonPlayer, attackerId, damage);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_12 = V_1;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_13;
		L_13 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(L_12, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_14 = V_1;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_15 = L_14->___photonPlayer_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		int32_t L_18 = __this->___attackerId_5;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = __this->___damage_4;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_24);
		PhotonView_RPC_m985C1C00D88C33FABAE7B0C51AAB32C67A9D010B(L_13, _stringLiteralA99160DD9ED8625CF0DB13D82CA2EF52BC6764CD, L_15, L_21, NULL);
	}

IL_007b:
	{
	}

IL_007c:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_25, NULL);
		// }
		return;
	}
}
// System.Void bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bullet__ctor_m4683104AD91FBA2778DE96D67C62A3FDF4E2BEC4 (bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_m8EAAC188934ECCBD009EC00751280DCFF4D96C71 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// }
		return;
	}
}
// System.Void CameraController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_LateUpdate_mC14DB0924E6F67288113AA92B3345A9B0ACEA27F (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	bool V_6 = false;
	{
		// rotx += Input.GetAxis("Mouse X") * sensX;
		float L_0 = __this->___rotx_9;
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_2 = __this->___sensX_4;
		__this->___rotx_9 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// roty += Input.GetAxis("Mouse Y") * sensY;
		float L_3 = __this->___roty_10;
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_5 = __this->___sensY_5;
		__this->___roty_10 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// roty = Mathf.Clamp(roty, minY, maxY);
		float L_6 = __this->___roty_10;
		float L_7 = __this->___minY_6;
		float L_8 = __this->___maxY_7;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, L_7, L_8, NULL);
		__this->___roty_10 = L_9;
		// if (isSpectator)
		bool L_10 = __this->___isSpectator_11;
		V_0 = L_10;
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0143;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(-roty, rotx, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_13 = __this->___roty_10;
		float L_14 = __this->___rotx_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((-L_13)), L_14, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_15, NULL);
		// float x = Input.GetAxis("Horizontal");
		float L_16;
		L_16 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_1 = L_16;
		// float z = Input.GetAxis("Vertical");
		float L_17;
		L_17 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_2 = L_17;
		// float y = 0;
		V_3 = (0.0f);
		// if (Input.GetKey(KeyCode.E))
		bool L_18;
		L_18 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)101), NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00be;
		}
	}
	{
		// y = 1;
		V_3 = (1.0f);
		goto IL_00d3;
	}

IL_00be:
	{
		// else if (Input.GetKey(KeyCode.Q))
		bool L_20;
		L_20 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)113), NULL);
		V_6 = L_20;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00d3;
		}
	}
	{
		// y = -1;
		V_3 = (-1.0f);
	}

IL_00d3:
	{
		// Vector3 dir = transform.right * x + transform.up * y + transform.forward * z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_22, NULL);
		float L_24 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_26, NULL);
		float L_28 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_29, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_31, NULL);
		float L_33 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_30, L_34, NULL);
		V_4 = L_35;
		// transform.position += dir * spectatorMoveSpeed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = L_36;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_4;
		float L_40 = __this->___spectatorMoveSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, L_40, NULL);
		float L_42;
		L_42 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_41, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_43, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_44, NULL);
		goto IL_018d;
	}

IL_0143:
	{
		// transform.localRotation = Quaternion.Euler(-roty, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_46 = __this->___roty_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((-L_46)), (0.0f), (0.0f), NULL);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_45, L_47, NULL);
		// transform.parent.rotation = Quaternion.Euler(0, rotx, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_48, NULL);
		float L_50 = __this->___rotx_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51;
		L_51 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_50, (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_49, L_51, NULL);
	}

IL_018d:
	{
		// }
		return;
	}
}
// System.Void CameraController::SetAsSpectator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_SetAsSpectator_mD2402F0D142F62C20410A28887BD1EB291822C06 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// isSpectator = true;
		__this->___isSpectator_11 = (bool)1;
		// transform.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_0, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Forcefeild::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Forcefeild_Start_mC48DBCCCAF907AE26F375C69D5930ECFD49F067B (Forcefeild_tDB2CC7994790DF2D23B7217A6CD68A9036C7764B* __this, const RuntimeMethod* method) 
{
	{
		// lastShrinkEndTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastShrinkEndTime_9 = L_0;
		// targetDiameter = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		float L_3 = L_2.___x_2;
		__this->___targetDiameter_11 = L_3;
		// }
		return;
	}
}
// System.Void Forcefeild::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Forcefeild_Update_m91B34A7807D36283463D064CFD6E1A5B234D660E (Forcefeild_tDB2CC7994790DF2D23B7217A6CD68A9036C7764B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B7_0 = 0;
	{
		// if (shrinking)
		bool L_0 = __this->___shrinking_10;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		// transform.localScale = Vector3.MoveTowards(transform.localScale, Vector3.one * targetDiameter, (shrinkAmount / shrinkDuration) * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_6 = __this->___targetDiameter_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		float L_8 = __this->___shrinkAmount_5;
		float L_9 = __this->___shrinkDuration_6;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_4, L_7, ((float)il2cpp_codegen_multiply(((float)(L_8/L_9)), L_10)), NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_11, NULL);
		// if (transform.localScale.x == targetDiameter)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_12, NULL);
		float L_14 = L_13.___x_2;
		float L_15 = __this->___targetDiameter_11;
		V_1 = (bool)((((float)L_14) == ((float)L_15))? 1 : 0);
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_0070;
		}
	}
	{
		// shrinking = false;
		__this->___shrinking_10 = (bool)0;
	}

IL_0070:
	{
		goto IL_00b1;
	}

IL_0073:
	{
		// if (Time.time - lastShrinkEndTime >= shrinkWaitTime && transform.localScale.x > minShrinkAmount)
		float L_17;
		L_17 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_18 = __this->___lastShrinkEndTime_9;
		float L_19 = __this->___shrinkWaitTime_4;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_17, L_18))) >= ((float)L_19))))
		{
			goto IL_00a2;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_20, NULL);
		float L_22 = L_21.___x_2;
		float L_23 = __this->___minShrinkAmount_7;
		G_B7_0 = ((((float)L_22) > ((float)L_23))? 1 : 0);
		goto IL_00a3;
	}

IL_00a2:
	{
		G_B7_0 = 0;
	}

IL_00a3:
	{
		V_2 = (bool)G_B7_0;
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_00b0;
		}
	}
	{
		// Shrink();
		Forcefeild_Shrink_m0B0DD87F1B31F60B42FAD7C5150F44B5512271CB(__this, NULL);
	}

IL_00b0:
	{
	}

IL_00b1:
	{
		// CheckPlayers();
		Forcefeild_CheckPlayers_mB336B42F5DEAFE23BDDFC4D3276808443F11D4D6(__this, NULL);
		// }
		return;
	}
}
// System.Void Forcefeild::Shrink()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Forcefeild_Shrink_m0B0DD87F1B31F60B42FAD7C5150F44B5512271CB (Forcefeild_tDB2CC7994790DF2D23B7217A6CD68A9036C7764B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// shrinking = true;
		__this->___shrinking_10 = (bool)1;
		// if(transform.localScale.x -shrinkAmount > minShrinkAmount)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		float L_3 = __this->___shrinkAmount_5;
		float L_4 = __this->___minShrinkAmount_7;
		V_0 = (bool)((((float)((float)il2cpp_codegen_subtract(L_2, L_3))) > ((float)L_4))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// targetDiameter -= shrinkAmount;
		float L_6 = __this->___targetDiameter_11;
		float L_7 = __this->___shrinkAmount_5;
		__this->___targetDiameter_11 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		goto IL_0050;
	}

IL_0042:
	{
		// targetDiameter = minShrinkAmount;
		float L_8 = __this->___minShrinkAmount_7;
		__this->___targetDiameter_11 = L_8;
	}

IL_0050:
	{
		// lastShrinkEndTime = Time.time + shrinkDuration;
		float L_9;
		L_9 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_10 = __this->___shrinkDuration_6;
		__this->___lastShrinkEndTime_9 = ((float)il2cpp_codegen_add(L_9, L_10));
		// }
		return;
	}
}
// System.Void Forcefeild::CheckPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Forcefeild_CheckPlayers_mB336B42F5DEAFE23BDDFC4D3276808443F11D4D6 (Forcefeild_tDB2CC7994790DF2D23B7217A6CD68A9036C7764B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA99160DD9ED8625CF0DB13D82CA2EF52BC6764CD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* V_1 = NULL;
	int32_t V_2 = 0;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		// if (Time.time -lastPlayerCheckTIme > 1f)
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___lastPlayerCheckTIme_12;
		V_0 = (bool)((((float)((float)il2cpp_codegen_subtract(L_0, L_1))) > ((float)(1.0f)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00ce;
		}
	}
	{
		// lastPlayerCheckTIme = Time.time;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastPlayerCheckTIme_12 = L_3;
		// foreach(PlayerController player in GameManager.instance.players)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_11;
		PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* L_5 = L_4->___players_8;
		V_1 = L_5;
		V_2 = 0;
		goto IL_00c4;
	}

IL_003a:
	{
		// foreach(PlayerController player in GameManager.instance.players)
		PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		// if (!player || player.dead)
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_10 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_10, NULL);
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_12 = V_3;
		bool L_13 = L_12->___dead_15;
		G_B5_0 = ((int32_t)(L_13));
		goto IL_0050;
	}

IL_004f:
	{
		G_B5_0 = 1;
	}

IL_0050:
	{
		V_4 = (bool)G_B5_0;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0059;
		}
	}
	{
		// continue;
		goto IL_00c0;
	}

IL_0059:
	{
		// if (Vector3.Distance(Vector3.zero, player.transform.position)>= transform.localScale.x)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_16 = V_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19;
		L_19 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_15, L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_20, NULL);
		float L_22 = L_21.___x_2;
		V_5 = (bool)((((int32_t)((!(((float)L_19) >= ((float)L_22)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00bf;
		}
	}
	{
		// player.photonView.RPC("TakeDamage", player.photonPlayer, 0, playerDamage);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_24 = V_3;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_25;
		L_25 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(L_24, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_26 = V_3;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_27 = L_26->___photonPlayer_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_28;
		int32_t L_30 = 0;
		RuntimeObject* L_31 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_30);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_29;
		int32_t L_33 = __this->___playerDamage_8;
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_34);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_35);
		PhotonView_RPC_m985C1C00D88C33FABAE7B0C51AAB32C67A9D010B(L_25, _stringLiteralA99160DD9ED8625CF0DB13D82CA2EF52BC6764CD, L_27, L_32, NULL);
	}

IL_00bf:
	{
	}

IL_00c0:
	{
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00c4:
	{
		// foreach(PlayerController player in GameManager.instance.players)
		int32_t L_37 = V_2;
		PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* L_38 = V_1;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_003a;
		}
	}
	{
	}

IL_00ce:
	{
		// }
		return;
	}
}
// System.Void Forcefeild::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Forcefeild__ctor_mDA85841A591A6346FE250641BFAFD4F9F6CB9ED8 (Forcefeild_tDB2CC7994790DF2D23B7217A6CD68A9036C7764B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_11 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_11), (void*)__this);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA81D476101E62EFD3855CBA285F534678C8F4DED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// players = new PlayerController[PhotonNetwork.PlayerList.Length];
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_0;
		L_0 = PhotonNetwork_get_PlayerList_mD2A2D36659BCEF35EBE2E6B4909F4439D191AE39(NULL);
		PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* L_1 = (PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0*)(PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0*)SZArrayNew(PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->___players_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___players_8), (void*)L_1);
		// photonView.RPC("ImInGame", RpcTarget.AllBuffered);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_2;
		L_2 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_2, _stringLiteralA81D476101E62EFD3855CBA285F534678C8F4DED, 3, L_3, NULL);
		// alivePlayers = players.Length;
		PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* L_4 = __this->___players_8;
		__this->___alivePlayers_9 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		// }
		return;
	}
}
// System.Void GameManager::ImInGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ImInGame_mF64C96F810CBF89CB4DC1C91399D5C63A74D176E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAB225AD526304062BE6CF7EA6B070A47EDF7E59);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// playersInGame++;
		int32_t L_0 = __this->___playersInGame_10;
		__this->___playersInGame_10 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if (PhotonNetwork.IsMasterClient && playersInGame == PhotonNetwork.PlayerList.Length)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PhotonNetwork_get_IsMasterClient_mD04046028C484F06D77A1C36C64FFAC285C2DF9C(NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_2 = __this->___playersInGame_10;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_3;
		L_3 = PhotonNetwork_get_PlayerList_mD2A2D36659BCEF35EBE2E6B4909F4439D191AE39(NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// photonView.RPC("SpawnPlayer", RpcTarget.All);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_5;
		L_5 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_5, _stringLiteralAAB225AD526304062BE6CF7EA6B070A47EDF7E59, 0, L_6, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void GameManager::CheckWinCondition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CheckWinCondition_mA0BD42E5BDFB266E963B839DEEE1BDE7B570D0BD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCheckWinConditionU3Eb__10_0_m9BD34EC8609BD2F3C6C86CE747334A03E1600FC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1EABD817569AC3F353CFFE5A40210C49E545C1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* G_B3_0 = NULL;
	PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_4 = NULL;
	int32_t G_B3_5 = 0;
	String_t* G_B3_6 = NULL;
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* G_B3_7 = NULL;
	Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* G_B2_0 = NULL;
	PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* G_B2_1 = NULL;
	int32_t G_B2_2 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_3 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_4 = NULL;
	int32_t G_B2_5 = 0;
	String_t* G_B2_6 = NULL;
	PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* G_B2_7 = NULL;
	{
		// if(alivePlayers == 1)
		int32_t L_0 = __this->___alivePlayers_9;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005f;
		}
	}
	{
		// photonView.RPC("WinGame", RpcTarget.All,players.First(x => !x.dead).id);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_2;
		L_2 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* L_5 = __this->___players_8;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* L_6 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1;
		Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* L_7 = L_6;
		G_B2_0 = L_7;
		G_B2_1 = L_5;
		G_B2_2 = 0;
		G_B2_3 = L_4;
		G_B2_4 = L_4;
		G_B2_5 = 0;
		G_B2_6 = _stringLiteral6A1EABD817569AC3F353CFFE5A40210C49E545C1;
		G_B2_7 = L_2;
		if (L_7)
		{
			G_B3_0 = L_7;
			G_B3_1 = L_5;
			G_B3_2 = 0;
			G_B3_3 = L_4;
			G_B3_4 = L_4;
			G_B3_5 = 0;
			G_B3_6 = _stringLiteral6A1EABD817569AC3F353CFFE5A40210C49E545C1;
			G_B3_7 = L_2;
			goto IL_0048;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_8 = ((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* L_9 = (Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38*)il2cpp_codegen_object_new(Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38_il2cpp_TypeInfo_var);
		Func_2__ctor_m2DDA7086FE2E40E8B3A092BA1FE995CD39C03515(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3CCheckWinConditionU3Eb__10_0_m9BD34EC8609BD2F3C6C86CE747334A03E1600FC9_RuntimeMethod_var), NULL);
		Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* L_10 = L_9;
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1), (void*)L_10);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
		G_B3_5 = G_B2_5;
		G_B3_6 = G_B2_6;
		G_B3_7 = G_B2_7;
	}

IL_0048:
	{
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11;
		L_11 = Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1((RuntimeObject*)G_B3_1, G_B3_0, Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1_RuntimeMethod_var);
		int32_t L_12 = L_11->___id_5;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		ArrayElementTypeCheck (G_B3_3, L_14);
		(G_B3_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_2), (RuntimeObject*)L_14);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(G_B3_7, G_B3_6, G_B3_5, G_B3_4, NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void GameManager::WinGame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_WinGame_mD1F60E944C859BAEFEF0B3CFD9721A8933F7505E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___playerId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral569C750EBAB5B94F878C93E96D6EF40CA593AA43);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameUI.instance.SetWinText(GetPlayer(playerId).photonPlayer.NickName);
		GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* L_0 = ((GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields*)il2cpp_codegen_static_fields_for(GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var))->___instance_10;
		int32_t L_1 = ___playerId0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2;
		L_2 = GameManager_GetPlayer_m9D1A34D9D7F679A935817872E43011E53B717FF6(__this, L_1, NULL);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_3 = L_2->___photonPlayer_9;
		String_t* L_4;
		L_4 = Player_get_NickName_mC1B2AC59B8850ABEB4DA27199675066DC3BF0738(L_3, NULL);
		GameUI_SetWinText_m6CC2AA57B67DB5F1017B1A2076C764C0A607FE67(L_0, L_4, NULL);
		// Invoke("GoBackToMenu", postGameTime);
		float L_5 = __this->___postGameTime_5;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral569C750EBAB5B94F878C93E96D6EF40CA593AA43, L_5, NULL);
		// }
		return;
	}
}
// System.Void GameManager::GoBackToMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GoBackToMenu_m8A380B67469E3325E559A7977B920A269A358C74 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.LeaveRoom();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_LeaveRoom_m3BE228D128665941646C4D4A1D5529B944F49744((bool)1, NULL);
		// Networkmanager.instance.ChangeScene("Menu");
		Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* L_1 = ((Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_StaticFields*)il2cpp_codegen_static_fields_for(Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var))->___instance_6;
		Networkmanager_ChangeScene_m6D5E88E61849AFC37C44040F838B1EB48AA30BC6(L_1, _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// }
		return;
	}
}
// System.Void GameManager::SpawnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnPlayer_m7C5A41ED447BFB2D604507EAA0676DE4B76DCE39 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject playerObj = PhotonNetwork.Instantiate(playerPrefabLocation, spawnPoints[Random.Range(0, spawnPoints.Length)].position, Quaternion.identity);
		String_t* L_0 = __this->___playerPrefabLocation_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = __this->___spawnPoints_7;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_2 = __this->___spawnPoints_7;
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		int32_t L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = PhotonNetwork_Instantiate_mD5714F5AC4C17B75AFD65676226351C91B60AF0D(L_0, L_6, L_7, (uint8_t)0, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		V_0 = L_8;
		// playerObj.GetComponent<PlayerController>().photonView.RPC("Initialize", RpcTarget.All, PhotonNetwork.LocalPlayer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_10;
		L_10 = GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A(L_9, GameObject_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mCB26D9D96B8BA8F644612C68B85AB714DBC80F0A_RuntimeMethod_var);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_11;
		L_11 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(L_10, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_14;
		L_14 = PhotonNetwork_get_LocalPlayer_mEA3335FEF4E4B55C1EFAC8AFA8D5F7E3D7FBE4DC(NULL);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_14);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_11, _stringLiteral69FBC7A041E2A8D2BB53C20F3EBB5DA1C681DF54, 0, L_13, NULL);
		// reskin();
		GameManager_reskin_m03A6B1506531B74D44A6467F27FA625C690D4F25(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::reskin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_reskin_m03A6B1506531B74D44A6467F27FA625C690D4F25 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// for (int x = 0; x < players.Length-1; x++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		// Color newColor = new Color(Random.value, Random.value, Random.value, 1.0f);
		float L_0;
		L_0 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_1;
		L_1 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_2;
		L_2 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_1), L_0, L_1, L_2, (1.0f), NULL);
		// for (int x = 0; x < players.Length-1; x++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0026:
	{
		// for (int x = 0; x < players.Length-1; x++)
		int32_t L_4 = V_0;
		PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* L_5 = __this->___players_8;
		V_2 = (bool)((((int32_t)L_4) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))))? 1 : 0);
		bool L_6 = V_2;
		if (L_6)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// PlayerController GameManager::GetPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameManager_GetPlayer_m9D1A34D9D7F679A935817872E43011E53B717FF6 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, int32_t ___playerId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CGetPlayerU3Eb__0_m1ECEEE8E91F219EE78DBD17A9AF2A00F24511669_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B* V_0 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B* L_0 = (U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass15_0__ctor_mB817511BACD6DF99170685DDCFFF64DB9A57C9A9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B* L_1 = V_0;
		int32_t L_2 = ___playerId0;
		L_1->___playerId_0 = L_2;
		// return players.First(x => x.id == playerId);
		PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* L_3 = __this->___players_8;
		U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B* L_4 = V_0;
		Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* L_5 = (Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38*)il2cpp_codegen_object_new(Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38_il2cpp_TypeInfo_var);
		Func_2__ctor_m2DDA7086FE2E40E8B3A092BA1FE995CD39C03515(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CGetPlayerU3Eb__0_m1ECEEE8E91F219EE78DBD17A9AF2A00F24511669_RuntimeMethod_var), NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1((RuntimeObject*)L_3, L_5, Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		return L_7;
	}
}
// PlayerController GameManager::GetPlayer(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* GameManager_GetPlayer_mA5290A128D0DD67FF2D9337C2E984DE31664C679 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CGetPlayerU3Eb__0_m34EEACE04D2B747602C986D227B486A87CF78A6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140* V_0 = NULL;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140* L_0 = (U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass16_0__ctor_mF000F93CF2A01B28985C645FE8A90F6380758446(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140* L_1 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___playerObject0;
		L_1->___playerObject_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___playerObject_0), (void*)L_2);
		// return players.First(x => x.gameObject == playerObject);
		PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* L_3 = __this->___players_8;
		U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140* L_4 = V_0;
		Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38* L_5 = (Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38*)il2cpp_codegen_object_new(Func_2_tEE3D8A37EDAA55B802960CF362F9A139A73CED38_il2cpp_TypeInfo_var);
		Func_2__ctor_m2DDA7086FE2E40E8B3A092BA1FE995CD39C03515(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CGetPlayerU3Eb__0_m34EEACE04D2B747602C986D227B486A87CF78A6B_RuntimeMethod_var), NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_6;
		L_6 = Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1((RuntimeObject*)L_3, L_5, Enumerable_First_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mFF552AF10007EB0F583EA86E9419B9AAE55AD3C1_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_7 = V_1;
		return L_7;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9E093D331C270DADD1A4C76D46C227AF4B4AA4D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* L_0 = (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5*)il2cpp_codegen_object_new(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7(L_0, NULL);
		((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GameManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6A162D1CE45F1D23F65A28A8DE89B3B115054DC7 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean GameManager/<>c::<CheckWinCondition>b__10_0(PlayerController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCheckWinConditionU3Eb__10_0_m9BD34EC8609BD2F3C6C86CE747334A03E1600FC9 (U3CU3Ec_t934A682FC7A2310EB64DF8FB184FC75102272AA5* __this, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___x0, const RuntimeMethod* method) 
{
	{
		// photonView.RPC("WinGame", RpcTarget.All,players.First(x => !x.dead).id);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = ___x0;
		bool L_1 = L_0->___dead_15;
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_mB817511BACD6DF99170685DDCFFF64DB9A57C9A9 (U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean GameManager/<>c__DisplayClass15_0::<GetPlayer>b__0(PlayerController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass15_0_U3CGetPlayerU3Eb__0_m1ECEEE8E91F219EE78DBD17A9AF2A00F24511669 (U3CU3Ec__DisplayClass15_0_t3B71EB749D86BBD2C009C2AD88CAFCDC7CD9E87B* __this, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___x0, const RuntimeMethod* method) 
{
	{
		// return players.First(x => x.id == playerId);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = ___x0;
		int32_t L_1 = L_0->___id_5;
		int32_t L_2 = __this->___playerId_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManager/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_mF000F93CF2A01B28985C645FE8A90F6380758446 (U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean GameManager/<>c__DisplayClass16_0::<GetPlayer>b__0(PlayerController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CGetPlayerU3Eb__0_m34EEACE04D2B747602C986D227B486A87CF78A6B (U3CU3Ec__DisplayClass16_0_t6258CE410EF3987A79B24380E766D58B01734140* __this, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return players.First(x => x.gameObject == playerObject);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = ___x0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___playerObject_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_Awake_mE4E876D9B3302FDC43D24DEA4B3E52BAEEDE2886 (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields*)il2cpp_codegen_static_fields_for(GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var))->___instance_10 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields*)il2cpp_codegen_static_fields_for(GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var))->___instance_10), (void*)__this);
		// }
		return;
	}
}
// System.Void GameUI::Initialize(PlayerController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_Initialize_m309B8EB308234F5424B5AB8016B0FE3DC1A021DC (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___localplayer0, const RuntimeMethod* method) 
{
	{
		// player = localplayer;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = ___localplayer0;
		__this->___player_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_9), (void*)L_0);
		// healthBar.maxValue = player.maxHp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___healthBar_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_2 = __this->___player_9;
		int32_t L_3 = L_2->___maxHp_13;
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_1, ((float)L_3), NULL);
		// healthBar.value = player.curHp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___healthBar_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = __this->___player_9;
		int32_t L_6 = L_5->___curHp_12;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, ((float)L_6));
		// UpdatePlayerInfotext();
		GameUI_UpdatePlayerInfotext_m4A4CFE5BA489AD2D0066682DDF8C6B5D0013AD1A(__this, NULL);
		// UpdateAmmoText();
		GameUI_UpdateAmmoText_mCDAED1838C4A9A3187FC7AACA9DC915E0CDE0F97(__this, NULL);
		// }
		return;
	}
}
// System.Void GameUI::UpdateHealthBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_UpdateHealthBar_m53A5FD5196DF45DE2FF50C5EF87D8FE0E98AEF9A (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, const RuntimeMethod* method) 
{
	{
		// healthBar.value = player.curHp;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___healthBar_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___player_9;
		int32_t L_2 = L_1->___curHp_12;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)L_2));
		// }
		return;
	}
}
// System.Void GameUI::UpdatePlayerInfotext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_UpdatePlayerInfotext_m4A4CFE5BA489AD2D0066682DDF8C6B5D0013AD1A (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral438953EFF24E106B20EDFA2FA5053BCDA7314018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC615A9C8A1258E2803B6D3FE6D2E1EEF0D8912E0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerInfoText.text = "<b>Alive:</b>" + GameManager.instance.alivePlayers +"\n<b>Kills:</b>" + player.kills;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerInfoText_5;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_11;
		int32_t* L_2 = (&L_1->___alivePlayers_9);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = __this->___player_9;
		int32_t* L_5 = (&L_4->___kills_14);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral438953EFF24E106B20EDFA2FA5053BCDA7314018, L_3, _stringLiteralC615A9C8A1258E2803B6D3FE6D2E1EEF0D8912E0, L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_7);
		// }
		return;
	}
}
// System.Void GameUI::UpdateAmmoText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_UpdateAmmoText_mCDAED1838C4A9A3187FC7AACA9DC915E0CDE0F97 (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AmmoText.text = player.weapon.curAmmo + "/" + player.weapon.maxAmmo;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___AmmoText_6;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->___player_9;
		PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01* L_2 = L_1->___weapon_10;
		int32_t* L_3 = (&L_2->___curAmmo_6);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = __this->___player_9;
		PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01* L_6 = L_5->___weapon_10;
		int32_t* L_7 = (&L_6->___maxAmmo_7);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_9);
		// }
		return;
	}
}
// System.Void GameUI::SetWinText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI_SetWinText_m6CC2AA57B67DB5F1017B1A2076C764C0A607FE67 (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, String_t* ___winnername0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2E968E16304C2CB5FDD3278EA1074DF098CB7C2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// winBackground.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___winBackground_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// winText.text = winnername + "wins";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___winText_7;
		String_t* L_3 = ___winnername0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteralF2E968E16304C2CB5FDD3278EA1074DF098CB7C2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void GameUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameUI__ctor_m2FD08F8B3345F733C4E363D20891F3EDC36A69CB (GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_Start_mFFCB79A336B04C79D26690DE3B76EA59DC2D100C (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// createRoomButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___createRoomButton_9;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)0, NULL);
		// findRoomButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___findRoomButton_10;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)0, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// if (PhotonNetwork.InRoom)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PhotonNetwork_get_InRoom_mFBE0C1A516C34FBAD9923933C73E07080FDA199D(NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		// SetScreen(lobbyScreen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___lobbyScreen_7;
		menu_SetScreen_mDE7A705EF938EA346EC7C4547AD1D20A9CF17E72(__this, L_4, NULL);
		// UpdateLobbyUI();
		menu_UpdateLobbyUI_m24961105EB6C2E07223D4FB23119F10571644897(__this, NULL);
		// PhotonNetwork.CurrentRoom.IsVisible = true;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_5;
		L_5 = PhotonNetwork_get_CurrentRoom_m72D3601299E109EED858E132DE1BD316226BA38D(NULL);
		Room_set_IsVisible_m88B1F48E1CDB171A2ECB10D9289596FA45EC74D7(L_5, (bool)1, NULL);
		// PhotonNetwork.CurrentRoom.IsOpen = true;
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_6;
		L_6 = PhotonNetwork_get_CurrentRoom_m72D3601299E109EED858E132DE1BD316226BA38D(NULL);
		Room_set_IsOpen_m8BA8D4E6233E041B3242BA516B8BADCFF10117FA(L_6, (bool)1, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void menu::SetScreen(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_SetScreen_mDE7A705EF938EA346EC7C4547AD1D20A9CF17E72 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___screen0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// mainScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___mainScreen_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// createRoomScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___createRoomScreen_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// lobbyScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___lobbyScreen_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// lobbyBrowserScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___lobbyBrowserScreen_8;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// screen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___screen0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// if(screen == lobbyBrowserScreen)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___screen0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___lobbyBrowserScreen_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, L_6, NULL);
		V_0 = L_7;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		// UpdateLobbyBrowserUI();
		menu_UpdateLobbyBrowserUI_mDA1A2E60A87D2C163458E28154D87BDCF58DD865(__this, NULL);
	}

IL_0056:
	{
		// }
		return;
	}
}
// System.Void menu::OnBackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnBackButton_mDDE458CACDD27B23332C1CDB4BC3862B1AB92D92 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	{
		// SetScreen(mainScreen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___mainScreen_5;
		menu_SetScreen_mDE7A705EF938EA346EC7C4547AD1D20A9CF17E72(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void menu::OnPlayerNameValueChanged(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnPlayerNameValueChanged_m06E1CFC99D65DA77E6A5762D6AF4D13A54B7D69E (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___playerNameInput0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.NickName = playerNameInput.text;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___playerNameInput0;
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_set_NickName_m9EB46021028BE0060635402D3C3989A2816AFA61(L_1, NULL);
		// }
		return;
	}
}
// System.Void menu::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnConnectedToMaster_m0D963B9158D8C4417A91DE1EA908665A4DB433A6 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	{
		// createRoomButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___createRoomButton_9;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, (bool)1, NULL);
		// findRoomButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___findRoomButton_10;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void menu::OnCreateRoomButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnCreateRoomButton_m66E19A27A7EC2D6D16004F0F9F56DB9EC53FCFBC (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	{
		// SetScreen(createRoomScreen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___createRoomScreen_6;
		menu_SetScreen_mDE7A705EF938EA346EC7C4547AD1D20A9CF17E72(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void menu::OnFindRoomButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnFindRoomButton_mCCC98B106151F85A5CF9B078BBC787ADC8D86596 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	{
		// SetScreen(lobbyBrowserScreen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lobbyBrowserScreen_8;
		menu_SetScreen_mDE7A705EF938EA346EC7C4547AD1D20A9CF17E72(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void menu::OnCreateButton(TMPro.TMP_InputField)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnCreateButton_mE417B81D04EC08998F1632A326A26A08B875B978 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___roomNameInput0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Networkmanager.instance.CreateRoom(roomNameInput.text);
		Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* L_0 = ((Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_StaticFields*)il2cpp_codegen_static_fields_for(Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var))->___instance_6;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = ___roomNameInput0;
		String_t* L_2;
		L_2 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A(L_1, NULL);
		Networkmanager_CreateRoom_m0068BDBD7BCC7FCE2C09B5151A1ED516949EBD9D(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void menu::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnJoinedRoom_m467F4B3E5B5AEDB20F370D4A1AA4BDE62EDA15ED (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6337C8295EC1EE5F0CB5A73B0C593EE21113E4E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetScreen(lobbyScreen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___lobbyScreen_7;
		menu_SetScreen_mDE7A705EF938EA346EC7C4547AD1D20A9CF17E72(__this, L_0, NULL);
		// photonView.RPC("UpdateLobbyUI", RpcTarget.All);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_1;
		L_1 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_1, _stringLiteral6337C8295EC1EE5F0CB5A73B0C593EE21113E4E6, 0, L_2, NULL);
		// }
		return;
	}
}
// System.Void menu::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnPlayerLeftRoom_m87B5747BDBC212CD6E4E9E6BE619984906864C07 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___otherPlayer0, const RuntimeMethod* method) 
{
	{
		// UpdateLobbyUI();
		menu_UpdateLobbyUI_m24961105EB6C2E07223D4FB23119F10571644897(__this, NULL);
		// }
		return;
	}
}
// System.Void menu::UpdateLobbyUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_UpdateLobbyUI_m24961105EB6C2E07223D4FB23119F10571644897 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FA1C3A38E0AFF9CCE65AC8D7312491B6A9E713);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* V_0 = NULL;
	int32_t V_1 = 0;
	Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* V_2 = NULL;
	{
		// startgameButton.interactable = PhotonNetwork.IsMasterClient;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___startgameButton_13;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PhotonNetwork_get_IsMasterClient_mD04046028C484F06D77A1C36C64FFAC285C2DF9C(NULL);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_0, L_1, NULL);
		// playerListText.text = "";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___playerListText_11;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// foreach(Player player in PhotonNetwork.PlayerList)
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_3;
		L_3 = PhotonNetwork_get_PlayerList_mD2A2D36659BCEF35EBE2E6B4909F4439D191AE39(NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_005a;
	}

IL_002e:
	{
		// foreach(Player player in PhotonNetwork.PlayerList)
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// playerListText.text += player.NickName + "\n";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___playerListText_11;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = L_8;
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_9);
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_11 = V_2;
		String_t* L_12;
		L_12 = Player_get_NickName_mC1B2AC59B8850ABEB4DA27199675066DC3BF0738(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_10, L_12, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_13);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005a:
	{
		// foreach(Player player in PhotonNetwork.PlayerList)
		int32_t L_15 = V_1;
		PlayerU5BU5D_t04E1460375559A2DB32E4B90230BCE7DDAC0E572* L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_002e;
		}
	}
	{
		// roomInfoText.text = "<b>Room Name<b>\n" + PhotonNetwork.CurrentRoom.Name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___roomInfoText_12;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_18;
		L_18 = PhotonNetwork_get_CurrentRoom_m72D3601299E109EED858E132DE1BD316226BA38D(NULL);
		String_t* L_19;
		L_19 = Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500(L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral09FA1C3A38E0AFF9CCE65AC8D7312491B6A9E713, L_19, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_17, L_20);
		// }
		return;
	}
}
// System.Void menu::OnStartGameButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnStartGameButton_mBF9638E3AC125680D60055BBED0D6D679EA6B339 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.CurrentRoom.IsOpen = false;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m72D3601299E109EED858E132DE1BD316226BA38D(NULL);
		Room_set_IsOpen_m8BA8D4E6233E041B3242BA516B8BADCFF10117FA(L_0, (bool)0, NULL);
		// PhotonNetwork.CurrentRoom.IsVisible = false;
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_1;
		L_1 = PhotonNetwork_get_CurrentRoom_m72D3601299E109EED858E132DE1BD316226BA38D(NULL);
		Room_set_IsVisible_m88B1F48E1CDB171A2ECB10D9289596FA45EC74D7(L_1, (bool)0, NULL);
		// Networkmanager.instance.photonView.RPC("ChangeScene", RpcTarget.All, "Game");
		Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* L_2 = ((Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_StaticFields*)il2cpp_codegen_static_fields_for(Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var))->___instance_6;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_3;
		L_3 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(L_2, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_3, _stringLiteral0304C2468FEB98972F5763D99C72997DEFFF8FF8, 0, L_5, NULL);
		// }
		return;
	}
}
// System.Void menu::OnLeaveLobbyButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnLeaveLobbyButton_mD5C24714144B4FE932CC83DDF799B3261DE140FA (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.LeaveRoom();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_LeaveRoom_m3BE228D128665941646C4D4A1D5529B944F49744((bool)1, NULL);
		// SetScreen(mainScreen);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___mainScreen_5;
		menu_SetScreen_mDE7A705EF938EA346EC7C4547AD1D20A9CF17E72(__this, L_1, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject menu::CreateRoomButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* menu_CreateRoomButton_mA527D24921C2F27559378A844F201125B335D3FF (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// GameObject buttonObj = Instantiate(roomButtonPrefab, roomListContainer.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___roomButtonPrefab_15;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___roomListContainer_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_3;
		// roomButtons.Add(buttonObj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___roomButtons_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_4, L_5, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return buttonObj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		V_1 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		return L_7;
	}
}
// System.Void menu::UpdateLobbyBrowserUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_UpdateLobbyBrowserUI_mDA1A2E60A87D2C163458E28154D87BDCF58DD865 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_U3CUpdateLobbyBrowserUIU3Eb__0_m71E6CABEE78B8740166D323F83BB3DF47D134A8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral096D505510E5181E451A086DB4DEED732E1CF366);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD093160C1EA2070FD98A9C1AA9436BA842BAB72A);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_5 = NULL;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B10_0 = NULL;
	{
		// foreach(GameObject button in roomButtons)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___roomButtons_16;
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_0010_1:
			{
				// foreach(GameObject button in roomButtons)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// button.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
			}

IL_0022_1:
			{
				// foreach(GameObject button in roomButtons)
				bool L_4;
				L_4 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// for (int x = 0; x < roomList.Count; ++x)
		V_2 = 0;
		goto IL_0150;
	}

IL_0043:
	{
		U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051* L_5 = (U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass27_0__ctor_mE5BEDED51CE977FBD7F0FF7ADAADE07F33D717D1(L_5, NULL);
		V_3 = L_5;
		U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051* L_6 = V_3;
		L_6->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___U3CU3E4__this_1), (void*)__this);
		// GameObject button = x >= roomButtons.Count ? CreateRoomButton() : roomButtons[x];
		int32_t L_7 = V_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___roomButtons_16;
		int32_t L_9;
		L_9 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_8, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_006d;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___roomButtons_16;
		int32_t L_11 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, L_11, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		G_B10_0 = L_12;
		goto IL_0073;
	}

IL_006d:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = menu_CreateRoomButton_mA527D24921C2F27559378A844F201125B335D3FF(__this, NULL);
		G_B10_0 = L_13;
	}

IL_0073:
	{
		V_4 = G_B10_0;
		// button.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// button.transform.Find("RoomName").GetComponent<TextMeshProUGUI>().text = roomList[x].Name;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_16, _stringLiteral096D505510E5181E451A086DB4DEED732E1CF366, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18;
		L_18 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_17, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* L_19 = __this->___roomList_17;
		int32_t L_20 = V_2;
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_21;
		L_21 = List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4(L_19, L_20, List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4_RuntimeMethod_var);
		String_t* L_22;
		L_22 = RoomInfo_get_Name_mAB935BEF1DAE8C99C0051D85426956E689A939EF(L_21, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_22);
		// button.transform.Find("PlayerCounttxt").GetComponent<TextMeshProUGUI>().text = roomList[x].PlayerCount + " / " + roomList[x].MaxPlayers;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_24, _stringLiteralD093160C1EA2070FD98A9C1AA9436BA842BAB72A, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26;
		L_26 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_25, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* L_27 = __this->___roomList_17;
		int32_t L_28 = V_2;
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_29;
		L_29 = List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4(L_27, L_28, List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4_RuntimeMethod_var);
		int32_t L_30;
		L_30 = RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029_inline(L_29, NULL);
		V_6 = L_30;
		String_t* L_31;
		L_31 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* L_32 = __this->___roomList_17;
		int32_t L_33 = V_2;
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_34;
		L_34 = List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4(L_32, L_33, List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4_RuntimeMethod_var);
		uint8_t L_35;
		L_35 = RoomInfo_get_MaxPlayers_mA59AFE46C3C2CB64D2DC7F6DB200187913DDAF24(L_34, NULL);
		V_7 = L_35;
		String_t* L_36;
		L_36 = Byte_ToString_mB80CE094B94215119578E4D796566E71D7277EE4((&V_7), NULL);
		String_t* L_37;
		L_37 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_31, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED, L_36, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_26, L_37);
		// Button buttonComp = button.GetComponent<Button>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_4;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_39;
		L_39 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_38, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		V_5 = L_39;
		// string roomName = roomList[x].Name;
		U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051* L_40 = V_3;
		List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* L_41 = __this->___roomList_17;
		int32_t L_42 = V_2;
		RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* L_43;
		L_43 = List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4(L_41, L_42, List_1_get_Item_mBD329521A22E9BE7BD8B826712DDBD7A23430AF4_RuntimeMethod_var);
		String_t* L_44;
		L_44 = RoomInfo_get_Name_mAB935BEF1DAE8C99C0051D85426956E689A939EF(L_43, NULL);
		L_40->___roomName_0 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___roomName_0), (void*)L_44);
		// buttonComp.onClick.RemoveAllListeners();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_45 = V_5;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_46;
		L_46 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_45, NULL);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_46, NULL);
		// buttonComp.onClick.AddListener(() => { OnJoinRoomButton(roomName); });
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_47 = V_5;
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_48;
		L_48 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_47, NULL);
		U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051* L_49 = V_3;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_50 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_50, L_49, (intptr_t)((void*)U3CU3Ec__DisplayClass27_0_U3CUpdateLobbyBrowserUIU3Eb__0_m71E6CABEE78B8740166D323F83BB3DF47D134A8F_RuntimeMethod_var), NULL);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_48, L_50, NULL);
		// for (int x = 0; x < roomList.Count; ++x)
		int32_t L_51 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_0150:
	{
		// for (int x = 0; x < roomList.Count; ++x)
		int32_t L_52 = V_2;
		List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* L_53 = __this->___roomList_17;
		int32_t L_54;
		L_54 = List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_inline(L_53, List_1_get_Count_mD1A2E394D4FC47B9092FE11D1E27BC1AED671721_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_52) < ((int32_t)L_54))? 1 : 0);
		bool L_55 = V_8;
		if (L_55)
		{
			goto IL_0043;
		}
	}
	{
		// }
		return;
	}
}
// System.Void menu::OnJoinRoomButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnJoinRoomButton_mE8D82CC8DEC39748306BD688EE1CA91540A3E263 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, String_t* ___roomName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Networkmanager.instance.JoinRoom(roomName);
		Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* L_0 = ((Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_StaticFields*)il2cpp_codegen_static_fields_for(Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var))->___instance_6;
		String_t* L_1 = ___roomName0;
		Networkmanager_JoinRoom_m48CF95D56C4D8570D979164CB08890070CC4BF35(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void menu::OnRefreshButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnRefreshButton_mEDC2299071BC803E8488AA85D411B78FF69C5A87 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	{
		// UpdateLobbyBrowserUI();
		menu_UpdateLobbyBrowserUI_mDA1A2E60A87D2C163458E28154D87BDCF58DD865(__this, NULL);
		// }
		return;
	}
}
// System.Void menu::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_OnRoomListUpdate_m59ED49593B19B5784F71AAB745D84547C7B02BEA (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* ___allRooms0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC94125941E7A9772CAB54E7D0A1F983C1B933EEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("On Room List Update Called from Photon");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC94125941E7A9772CAB54E7D0A1F983C1B933EEF, NULL);
		// roomList = allRooms;
		List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* L_0 = ___allRooms0;
		__this->___roomList_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roomList_17), (void*)L_0);
		// }
		return;
	}
}
// System.Void menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu__ctor_m608C29A3D25C5C36688C9E28D0981310112290B5 (menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3AAD2029AC37E49D77E006780B4D2D13A64DF326_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<GameObject> roomButtons = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___roomButtons_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roomButtons_16), (void*)L_0);
		// private List<RoomInfo> roomList = new List<RoomInfo>();
		List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* L_1 = (List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE*)il2cpp_codegen_object_new(List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE_il2cpp_TypeInfo_var);
		List_1__ctor_m3AAD2029AC37E49D77E006780B4D2D13A64DF326(L_1, List_1__ctor_m3AAD2029AC37E49D77E006780B4D2D13A64DF326_RuntimeMethod_var);
		__this->___roomList_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___roomList_17), (void*)L_1);
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void menu/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_mE5BEDED51CE977FBD7F0FF7ADAADE07F33D717D1 (U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void menu/<>c__DisplayClass27_0::<UpdateLobbyBrowserUI>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0_U3CUpdateLobbyBrowserUIU3Eb__0_m71E6CABEE78B8740166D323F83BB3DF47D134A8F (U3CU3Ec__DisplayClass27_0_t96991C072841E2AE789B29FB55840680CD2B2051* __this, const RuntimeMethod* method) 
{
	{
		// buttonComp.onClick.AddListener(() => { OnJoinRoomButton(roomName); });
		menu_tDCB1975D66E6505B7C39339BB2B3BA6806F402DF* L_0 = __this->___U3CU3E4__this_1;
		String_t* L_1 = __this->___roomName_0;
		menu_OnJoinRoomButton_mE8D82CC8DEC39748306BD688EE1CA91540A3E263(L_0, L_1, NULL);
		// buttonComp.onClick.AddListener(() => { OnJoinRoomButton(roomName); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Networkmanager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager_Awake_m8B41A4B2518D3FA311A73D1FCDDD668686FA1A21 (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (instance != null && instance != this)
		Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* L_0 = ((Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_StaticFields*)il2cpp_codegen_static_fields_for(Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var))->___instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* L_2 = ((Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_StaticFields*)il2cpp_codegen_static_fields_for(Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var))->___instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, __this, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 0;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		goto IL_0037;
	}

IL_002f:
	{
		// instance = this;
		((Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_StaticFields*)il2cpp_codegen_static_fields_for(Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var))->___instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_StaticFields*)il2cpp_codegen_static_fields_for(Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816_il2cpp_TypeInfo_var))->___instance_6), (void*)__this);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void Networkmanager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager_Start_m4CF5D927C5A8526E8D0C0B98DC84B534C56F67B2 (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.ConnectUsingSettings();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_ConnectUsingSettings_m5062DDA82806820AE9358F849B0533B82230E540(NULL);
		// }
		return;
	}
}
// System.Void Networkmanager::CreateRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager_CreateRoom_m0068BDBD7BCC7FCE2C09B5151A1ED516949EBD9D (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, String_t* ___roomName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* V_0 = NULL;
	{
		// RoomOptions options = new RoomOptions();
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_0 = (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23*)il2cpp_codegen_object_new(RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23_il2cpp_TypeInfo_var);
		RoomOptions__ctor_m06A5DAB18D3385E8AED5DA84C8A89D9C7E8498F8(L_0, NULL);
		V_0 = L_0;
		// options.MaxPlayers = (byte)maxPlayers;
		RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23* L_1 = V_0;
		int32_t L_2 = __this->___maxPlayers_5;
		L_1->___MaxPlayers_2 = (uint8_t)((int32_t)(uint8_t)L_2);
		// PhotonNetwork.CreateRoom(roomName);
		String_t* L_3 = ___roomName0;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = PhotonNetwork_CreateRoom_m4C10274CD848B558E95997CA1277EFE77420B821(L_3, (RoomOptions_t373282A7E849A09DA153714F5A1B479C325CDE23*)NULL, (TypedLobby_t29F38D993E984979E53A9212143F1B770EEC6DB9*)NULL, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Networkmanager::JoinRoom(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager_JoinRoom_m48CF95D56C4D8570D979164CB08890070CC4BF35 (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, String_t* ___roomName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.JoinRoom(roomName);
		String_t* L_0 = ___roomName0;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PhotonNetwork_JoinRoom_mB85EDB547BA767A21BEB5CB6AC5068F00F05B08C(L_0, (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Networkmanager::ChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager_ChangeScene_m6D5E88E61849AFC37C44040F838B1EB48AA30BC6 (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, String_t* ___sceneName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PhotonNetwork.LoadLevel(sceneName);
		String_t* L_0 = ___sceneName0;
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		PhotonNetwork_LoadLevel_m71D2B6098A6F1CBFB37EE1E4CBE28B11149C8A38(L_0, NULL);
		// }
		return;
	}
}
// System.Void Networkmanager::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager_OnConnectedToMaster_m1DAAE69612F6F2E6DDFAF2317C7B8D708958528C (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F5B002650B776A2250D517BE081568DB1B0A682);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Connected to master server");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0F5B002650B776A2250D517BE081568DB1B0A682, NULL);
		// PhotonNetwork.JoinLobby();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_JoinLobby_m1963DA1D3B6EDFADCC45C75B121188EF6B6B4803(NULL);
		// }
		return;
	}
}
// System.Void Networkmanager::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager_OnCreatedRoom_m3E2AC53C0A7E25A2A809199127A0295DDD2BCA4E (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F0529F938279030C178C5BA4739E01857BA92FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Created room: " + PhotonNetwork.CurrentRoom.Name);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		Room_t9CCA5C06B8CE2E5E1EE24AD17360F218C4E36373* L_0;
		L_0 = PhotonNetwork_get_CurrentRoom_m72D3601299E109EED858E132DE1BD316226BA38D(NULL);
		String_t* L_1;
		L_1 = Room_get_Name_m8C466150335A007F72B11711AB64F9F62288D500(L_0, NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1F0529F938279030C178C5BA4739E01857BA92FC, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Networkmanager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Networkmanager__ctor_m14C3CEEC1DE033BD33DE243E0AAD6E96B7F84792 (Networkmanager_t9517653249E0A5E75EF0507C750CB6FAF5F7D816* __this, const RuntimeMethod* method) 
{
	{
		// public int maxPlayers = 10;
		__this->___maxPlayers_5 = ((int32_t)10);
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pickup::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup_OnTriggerEnter_mC5437D0F49F83A610736A4A2B159D0159E5ABC13 (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral018EB89CF27A32B10858C74B6F049D6558DE2FFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4713AAA4505C800D52A3512897F3428F6CB2AF8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFFD71BD43D0EB7541368BCF3D64355B290FB414);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFADDB5B743C30D5E36824D131A96A78D936730A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		// Debug.Log("Pickup triggered.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBFFD71BD43D0EB7541368BCF3D64355B290FB414, NULL);
		// if (!PhotonNetwork.IsMasterClient)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PhotonNetwork_get_IsMasterClient_mD04046028C484F06D77A1C36C64FFAC285C2DF9C(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		goto IL_00d0;
	}

IL_001e:
	{
		// if (other.CompareTag("Player"))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		bool L_3;
		L_3 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00d0;
		}
	}
	{
		// PlayerController player = GameManager.instance.GetPlayer(other.gameObject);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8;
		L_8 = GameManager_GetPlayer_mA5290A128D0DD67FF2D9337C2E984DE31664C679(L_5, L_7, NULL);
		V_2 = L_8;
		// if(type == PickupType.Health)
		int32_t L_9 = __this->___type_5;
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_007c;
		}
	}
	{
		// player.photonView.RPC("Heal", player.photonPlayer, value);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = V_2;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_12;
		L_12 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(L_11, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_13 = V_2;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_14 = L_13->___photonPlayer_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		int32_t L_17 = __this->___value_6;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		PhotonView_RPC_m985C1C00D88C33FABAE7B0C51AAB32C67A9D010B(L_12, _stringLiteralFFADDB5B743C30D5E36824D131A96A78D936730A, L_14, L_16, NULL);
	}

IL_007c:
	{
		// if(type == PickupType.Ammo)
		int32_t L_20 = __this->___type_5;
		V_4 = (bool)((((int32_t)L_20) == ((int32_t)1))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_00b8;
		}
	}
	{
		// player.photonView.RPC("GiveAmmo", player.photonPlayer, value);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_22 = V_2;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_23;
		L_23 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(L_22, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_24 = V_2;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_25 = L_24->___photonPlayer_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_26;
		int32_t L_28 = __this->___value_6;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_29);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
		PhotonView_RPC_m985C1C00D88C33FABAE7B0C51AAB32C67A9D010B(L_23, _stringLiteral4713AAA4505C800D52A3512897F3428F6CB2AF8C, L_25, L_27, NULL);
	}

IL_00b8:
	{
		// photonView.RPC("DestroyPickup", RpcTarget.AllBuffered);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_31;
		L_31 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32;
		L_32 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_31, _stringLiteral018EB89CF27A32B10858C74B6F049D6558DE2FFE, 3, L_32, NULL);
	}

IL_00d0:
	{
		// }
		return;
	}
}
// System.Void Pickup::DestroyPickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup_DestroyPickup_m7E040696F4A0D9B48EFCDAC08CD2318D3290B664 (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Pickup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup__ctor_m35A93842B4E2401E38CF814A00D57E6A2969852E (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPun__ctor_m52771D9D46565807FDF72A7B6622574D38C29A55(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Move_m68BFC8B882D42955A212B23E7D1DDD56CC87DB09 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float x = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float z = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// Vector3 dir = (transform.forward * z + transform.right * x) * moveSpeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		float L_4 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_6, NULL);
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_9, NULL);
		float L_11 = __this->___moveSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		V_2 = L_12;
		// dir.y = rig.velocity.y;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->___rig_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_13, NULL);
		float L_15 = L_14.___y_3;
		(&V_2)->___y_3 = L_15;
		// rig.velocity = dir;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = __this->___rig_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::TryJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_TryJump_mC2DDFD8F9C936E8D331724F80F08748D2EFE2125 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// Ray ray = new Ray(transform.position, Vector3.down);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&V_0), L_1, L_2, NULL);
		// if (Physics.Raycast(ray, 1.5f))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_3 = V_0;
		bool L_4;
		L_4 = Physics_Raycast_m7A0FEA813B93A82713C06D8466F0A21325743488(L_3, (1.5f), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// rig.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rig_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_8 = __this->___jumpForce_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_6, L_9, 1, NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (photonView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Move();
		PlayerController_Move_m68BFC8B882D42955A212B23E7D1DDD56CC87DB09(__this, NULL);
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// TryJump();
		PlayerController_TryJump_mC2DDFD8F9C936E8D331724F80F08748D2EFE2125(__this, NULL);
	}

IL_002c:
	{
	}

IL_002d:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		// weapon.TryShoot();
		PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01* L_7 = __this->___weapon_10;
		PlayerWeapon_TryShoot_mC284288AF5ABE0400875C8CDAD85982E7E0FA2C5(L_7, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Initialize(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Initialize_mEFE6F6E5063B53BF31462E5EC2CA7F8287C775F1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* ___player0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// id = player.ActorNumber;
		Player_tC864A64FC55FA6E30EFD6B6FF314C9725DDA363C* L_0 = ___player0;
		int32_t L_1;
		L_1 = Player_get_ActorNumber_mE177B60195A5329B1E5D3012295DB0098B7A0F3A(L_0, NULL);
		__this->___id_5 = L_1;
		// GameManager.instance.players[id - 1] = this;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_11;
		PlayerControllerU5BU5D_t8C5F433C8A28F1E8DF0E128F1B2498546DAE8CF0* L_3 = L_2->___players_8;
		int32_t L_4 = __this->___id_5;
		ArrayElementTypeCheck (L_3, __this);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_4, 1))), (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95*)__this);
		// if (photonView.IsMine == false)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_5;
		L_5 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		bool L_6;
		L_6 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_5, NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// GetComponentInChildren<Camera>().gameObject.SetActive(false);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0(__this, Component_GetComponentInChildren_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mA91C303D066164328CA44BB875DDC3EBDC9C9BC0_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// rig.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rig_8;
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_10, (bool)1, NULL);
		goto IL_0064;
	}

IL_0056:
	{
		// GameUI.instance.Initialize(this);
		GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* L_11 = ((GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields*)il2cpp_codegen_static_fields_for(GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var))->___instance_10;
		GameUI_Initialize_m309B8EB308234F5424B5AB8016B0FE3DC1A021DC(L_11, __this, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter_m2FC01282FAEE546C4408E6B901DBB3EB5A5BF989 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (!photonView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_0;
		L_0 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		bool L_1;
		L_1 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_002b;
	}

IL_0015:
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_3, NULL);
		bool L_5;
		L_5 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_4, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void PlayerController::TakeDamage(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_TakeDamage_mFC8D36920F242B8E65D891C7EC517867DBB2DE1D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, int32_t ___attackerId0, int32_t ___damage1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08EF1409295A748F17C961491378A3B6215AA838);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30C4AA8EC0000A07558BBFA1B4A935B9E5AC2691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4A95B0F037C01D9994F2907FFFE784743580298);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// Debug.Log("called");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralD4A95B0F037C01D9994F2907FFFE784743580298, NULL);
		// if (dead)
		bool L_0 = __this->___dead_15;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// return;
		goto IL_0082;
	}

IL_0018:
	{
		// curHp -= damage;
		int32_t L_2 = __this->___curHp_12;
		int32_t L_3 = ___damage1;
		__this->___curHp_12 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// Debug.Log(damage);
		int32_t L_4 = ___damage1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// curAttackerId = attackerId;
		int32_t L_7 = ___attackerId0;
		__this->___curAttackerId_11 = L_7;
		// photonView.RPC("DamageFlash", RpcTarget.Others);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_8;
		L_8 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_8, _stringLiteral30C4AA8EC0000A07558BBFA1B4A935B9E5AC2691, 1, L_9, NULL);
		// GameUI.instance.UpdateHealthBar();
		GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* L_10 = ((GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields*)il2cpp_codegen_static_fields_for(GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var))->___instance_10;
		GameUI_UpdateHealthBar_m53A5FD5196DF45DE2FF50C5EF87D8FE0E98AEF9A(L_10, NULL);
		// if (curHp <= 0)
		int32_t L_11 = __this->___curHp_12;
		V_1 = (bool)((((int32_t)((((int32_t)L_11) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0082;
		}
	}
	{
		// photonView.RPC("Die", RpcTarget.All);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_13;
		L_13 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_13, _stringLiteral08EF1409295A748F17C961491378A3B6215AA838, 0, L_14, NULL);
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void PlayerController::DamageFlash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_DamageFlash_mDAD652BAFEB314B0B895305F4BCF7C9B63AAD367 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (flashingDamage)
		bool L_0 = __this->___flashingDamage_16;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		goto IL_001b;
	}

IL_000d:
	{
		// StartCoroutine(DamageFlashCoRoutine());
		RuntimeObject* L_2;
		L_2 = PlayerController_U3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0_m560D1CE0C2395C28FB6D6228E4789707D47444D3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Die_m05D5887BD76E979C3DA3DB2D5E9032D30763BB2D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m184BC32E568AA177DFF2DE71846247331C770394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AA11341AF64AD56963253F1D9E4BCCCF173379A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// curHp = 0;
		__this->___curHp_12 = 0;
		// dead = true;
		__this->___dead_15 = (bool)1;
		// GameManager.instance.alivePlayers--;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_11;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = L_0;
		int32_t L_2 = L_1->___alivePlayers_9;
		L_1->___alivePlayers_9 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// GameUI.instance.UpdatePlayerInfotext();
		GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* L_3 = ((GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields*)il2cpp_codegen_static_fields_for(GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var))->___instance_10;
		GameUI_UpdatePlayerInfotext_m4A4CFE5BA489AD2D0066682DDF8C6B5D0013AD1A(L_3, NULL);
		// if (PhotonNetwork.IsMasterClient)
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = PhotonNetwork_get_IsMasterClient_mD04046028C484F06D77A1C36C64FFAC285C2DF9C(NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// GameManager.instance.CheckWinCondition();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_11;
		GameManager_CheckWinCondition_mA0BD42E5BDFB266E963B839DEEE1BDE7B570D0BD(L_6, NULL);
	}

IL_0042:
	{
		// if (photonView.IsMine)
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_7;
		L_7 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(__this, NULL);
		bool L_8;
		L_8 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00c1;
		}
	}
	{
		// if(curAttackerId != 0)
		int32_t L_10 = __this->___curAttackerId_11;
		V_2 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		// GameManager.instance.GetPlayer(curAttackerId).photonView.RPC("AddKill", RpcTarget.All);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_11;
		int32_t L_13 = __this->___curAttackerId_11;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_14;
		L_14 = GameManager_GetPlayer_m9D1A34D9D7F679A935817872E43011E53B717FF6(L_12, L_13, NULL);
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_15;
		L_15 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(L_14, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16;
		L_16 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_15, _stringLiteral3AA11341AF64AD56963253F1D9E4BCCCF173379A, 0, L_16, NULL);
	}

IL_0087:
	{
		// GetComponentInChildren<CameraController>().SetAsSpectator();
		CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* L_17;
		L_17 = Component_GetComponentInChildren_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m184BC32E568AA177DFF2DE71846247331C770394(__this, Component_GetComponentInChildren_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m184BC32E568AA177DFF2DE71846247331C770394_RuntimeMethod_var);
		CameraController_SetAsSpectator_mD2402F0D142F62C20410A28887BD1EB291822C06(L_17, NULL);
		// rig.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___rig_8;
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_18, (bool)1, NULL);
		// transform.position = new Vector3(0, -50, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (0.0f), (-50.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_20, NULL);
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void PlayerController::AddKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AddKill_mE6F0727B9EA285A55D3C06593507BCDA5EA9BAE5 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// kills++;
		int32_t L_0 = __this->___kills_14;
		__this->___kills_14 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// GameUI.instance.UpdatePlayerInfotext();
		GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* L_1 = ((GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields*)il2cpp_codegen_static_fields_for(GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var))->___instance_10;
		GameUI_UpdatePlayerInfotext_m4A4CFE5BA489AD2D0066682DDF8C6B5D0013AD1A(L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Heal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Heal_mAAEEBA13795B0235A582C548A6DAEB91EC4057A7 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, int32_t ___amountToheal0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// curHp = Mathf.Clamp(curHp + amountToheal, 0, maxHp);
		int32_t L_0 = __this->___curHp_12;
		int32_t L_1 = ___amountToheal0;
		int32_t L_2 = __this->___maxHp_13;
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_add(L_0, L_1)), 0, L_2, NULL);
		__this->___curHp_12 = L_3;
		// GameUI.instance.UpdateHealthBar();
		GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* L_4 = ((GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields*)il2cpp_codegen_static_fields_for(GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var))->___instance_10;
		GameUI_UpdateHealthBar_m53A5FD5196DF45DE2FF50C5EF87D8FE0E98AEF9A(L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
		return;
	}
}
// System.Collections.IEnumerator PlayerController::<DamageFlash>g__DamageFlashCoRoutine|19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_U3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0_m560D1CE0C2395C28FB6D6228E4789707D47444D3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* L_0 = (U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984*)il2cpp_codegen_object_new(U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984_il2cpp_TypeInfo_var);
		U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed__ctor_m95F03A884F7001F53A0E941EF6910B3FD4A89A20(L_0, 0, NULL);
		V_0 = L_0;
		U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* L_1 = V_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* L_2 = V_0;
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed__ctor_m95F03A884F7001F53A0E941EF6910B3FD4A89A20 (U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_System_IDisposable_Dispose_m2D24774550E1AB3E079F6D017D59F9D2B4486B87 (U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_MoveNext_mD4AE95B2A7CEB699EF7ABEC580CB7B1FFFC91F39 (U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_007b;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// flashingDamage = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = __this->___U3CU3E4__this_2;
		L_3->___flashingDamage_16 = (bool)1;
		// Color defaultColor = mr.material.color;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = __this->___U3CU3E4__this_2;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = L_4->___mr_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6;
		L_6 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_5, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_6, NULL);
		__this->___U3CdefaultColorU3E5__1_3 = L_7;
		// mr.material.color = Color.red;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8 = __this->___U3CU3E4__this_2;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_9 = L_8->___mr_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_10, L_11, NULL);
		// yield return new WaitForSeconds(0.05f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, (0.0500000007f), NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// mr.material.color = defaultColor;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_13 = __this->___U3CU3E4__this_2;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_14 = L_13->___mr_17;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15;
		L_15 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_14, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = __this->___U3CdefaultColorU3E5__1_3;
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_15, L_16, NULL);
		// flashingDamage = false;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_17 = __this->___U3CU3E4__this_2;
		L_17->___flashingDamage_16 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m94ADAF65A6F16DCEDC73998FC45FA91903B9A67A (U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_System_Collections_IEnumerator_Reset_m0EF3E1467CAD1FB2DD254BEDB80E222796BD4BBB (U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_System_Collections_IEnumerator_Reset_m0EF3E1467CAD1FB2DD254BEDB80E222796BD4BBB_RuntimeMethod_var)));
	}
}
// System.Object PlayerController/<<DamageFlash>g__DamageFlashCoRoutine|19_0>d::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_System_Collections_IEnumerator_get_Current_mEA003CCDB2D521A19C67CD455FD74670F2AC3D2D (U3CU3CDamageFlashU3Eg__DamageFlashCoRoutineU7C19_0U3Ed_t110116FB64DF9B7CF38C6F2AAB96B3347689D984* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerWeapon::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_Awake_mAA699D5E87E243B550866728D28BC9DCCF5FDB1B (PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GetComponent<PlayerController>();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0;
		L_0 = Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130(__this, Component_GetComponent_TisPlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_mE0F30FCA06CA7FB143ED3372C3A4070FB8708130_RuntimeMethod_var);
		__this->___player_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_13), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerWeapon::TryShoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_TryShoot_mC284288AF5ABE0400875C8CDAD85982E7E0FA2C5 (PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21625D0C5D171A1DC5C95AFB1632BDCD7DDBACF6);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (curAmmo <= 0 || Time.time - lastShootTime < shootRate)
		int32_t L_0 = __this->___curAmmo_6;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___lastShootTime_10;
		float L_3 = __this->___shootRate_9;
		G_B3_0 = ((((float)((float)il2cpp_codegen_subtract(L_1, L_2))) < ((float)L_3))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// return;
		goto IL_0097;
	}

IL_0027:
	{
		// curAmmo--;
		int32_t L_5 = __this->___curAmmo_6;
		__this->___curAmmo_6 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		// lastShootTime = Time.time;
		float L_6;
		L_6 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastShootTime_10 = L_6;
		// GameUI.instance.UpdateAmmoText();
		GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* L_7 = ((GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields*)il2cpp_codegen_static_fields_for(GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var))->___instance_10;
		GameUI_UpdateAmmoText_mCDAED1838C4A9A3187FC7AACA9DC915E0CDE0F97(L_7, NULL);
		// player.photonView.RPC("SpawnBullet", RpcTarget.All, bulletSpawnPos.transform.position, Camera.main.transform.forward);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_8 = __this->___player_13;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_9;
		L_9 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(L_8, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___bulletSpawnPos_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14;
		RuntimeObject* L_16 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_15);
		ArrayElementTypeCheck (L_11, L_16);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_11;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18;
		L_18 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20;
		RuntimeObject* L_22 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_21);
		ArrayElementTypeCheck (L_17, L_22);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_22);
		PhotonView_RPC_mD406BD732C9B9AFD46C149F63514AB3A923EB5BB(L_9, _stringLiteral21625D0C5D171A1DC5C95AFB1632BDCD7DDBACF6, 0, L_17, NULL);
	}

IL_0097:
	{
		// }
		return;
	}
}
// System.Void PlayerWeapon::SpawnBullet(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_SpawnBullet_mAC833CE2EAC7E6F017EB9732A930EAB2E9E23EF2 (PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisbullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F_m4FA8C43E84B03BFE33D2E107C90C06BB7E22F0FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* V_1 = NULL;
	{
		// GameObject bulletObj = Instantiate(bulletPrefab, pos, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___bulletPrefab_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___pos0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_3;
		// bulletObj.transform.forward = dir;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___dir1;
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_5, L_6, NULL);
		// bullet bulletScript = bulletObj.GetComponent<bullet>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* L_8;
		L_8 = GameObject_GetComponent_Tisbullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F_m4FA8C43E84B03BFE33D2E107C90C06BB7E22F0FB(L_7, GameObject_GetComponent_Tisbullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F_m4FA8C43E84B03BFE33D2E107C90C06BB7E22F0FB_RuntimeMethod_var);
		V_1 = L_8;
		// bulletScript.Initialize(damage, player.id, player.photonView.IsMine);
		bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* L_9 = V_1;
		int32_t L_10 = __this->___damage_5;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = __this->___player_13;
		int32_t L_12 = L_11->___id_5;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_13 = __this->___player_13;
		PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* L_14;
		L_14 = MonoBehaviourPun_get_photonView_m0DBC40909E2E885D7FA3D40157A189FADEE98A67(L_13, NULL);
		bool L_15;
		L_15 = PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline(L_14, NULL);
		bullet_Initialize_mCBB930E8A0595C36486C08CA2DF63AEBE3727407(L_9, L_10, L_12, L_15, NULL);
		// bulletScript.rig.velocity = dir * bulletSpeed;
		bullet_t25376445B28AFDAE4CB15EC04BC43DEEC190A88F* L_16 = V_1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = L_16->___rig_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___dir1;
		float L_19 = __this->___bulletSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_17, L_20, NULL);
		// }
		return;
	}
}
// System.Void PlayerWeapon::GiveAmmo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon_GiveAmmo_mF601FD8AF193AA0789A8B3B9DE696362855E5846 (PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01* __this, int32_t ___ammoTOGive0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// curAmmo = Mathf.Clamp(curAmmo + ammoTOGive, 0, maxAmmo);
		int32_t L_0 = __this->___curAmmo_6;
		int32_t L_1 = ___ammoTOGive0;
		int32_t L_2 = __this->___maxAmmo_7;
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_add(L_0, L_1)), 0, L_2, NULL);
		__this->___curAmmo_6 = L_3;
		// GameUI.instance.UpdateAmmoText();
		GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737* L_4 = ((GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_StaticFields*)il2cpp_codegen_static_fields_for(GameUI_t131F7F7F82473CAFC8221B739FABB71C0709C737_il2cpp_TypeInfo_var))->___instance_10;
		GameUI_UpdateAmmoText_mCDAED1838C4A9A3187FC7AACA9DC915E0CDE0F97(L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerWeapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerWeapon__ctor_m80948BC66EB7A2ACDEF30C2589AF854537B8EEC1 (PlayerWeapon_t7CB5E61DEB162895ED5ECC21D7F947004DE89B01* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviourPunCallbacks__ctor_m25DE2B188CA2481D58FBA9BB58CFBD65432B77E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ExitGames.Client.Photon.WaitForRealSeconds::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForRealSeconds_get_keepWaiting_mBCB76C9E272B6A0002C2E72E9D5EF7A4615CA69E (WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return this._endTime > Time.realtimeSinceStartup; }
		float L_0 = __this->____endTime_0;
		float L_1;
		L_1 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		V_0 = (bool)((((float)L_0) > ((float)L_1))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		// get { return this._endTime > Time.realtimeSinceStartup; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void ExitGames.Client.Photon.WaitForRealSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForRealSeconds__ctor_mAD70795E28862CD7367610588610A392EFD473D9 (WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C* __this, float ___seconds0, const RuntimeMethod* method) 
{
	{
		// public WaitForRealSeconds(float seconds)
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
		// this._endTime = Time.realtimeSinceStartup + seconds;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		float L_1 = ___seconds0;
		__this->____endTime_0 = ((float)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketWebTcp::.ctor(ExitGames.Client.Photon.PeerBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketWebTcp__ctor_mF2E9EB5C118B3CC4CF3F9D2BA7BE97F55905CE0F (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* ___npeer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6F259D090A7AB0D2DC04B00C4CAA926D17DD6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC294206C04F72D8153AC07B00DB774473301545);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	int32_t G_B3_2 = 0;
	RuntimeObject* G_B3_3 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	int32_t G_B2_2 = 0;
	RuntimeObject* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	int32_t G_B4_3 = 0;
	RuntimeObject* G_B4_4 = NULL;
	{
		// private readonly object syncer = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___syncer_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___syncer_13), (void*)L_0);
		// public SocketWebTcp(PeerBase npeer) : base(npeer)
		PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* L_1 = ___npeer0;
		IPhotonSocket__ctor_m6B3835EE978E2B363748C5B291A8BCD56A2A5E0E(__this, L_1, NULL);
		// this.ServerAddress = npeer.ServerAddress;
		PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* L_2 = ___npeer0;
		String_t* L_3;
		L_3 = PeerBase_get_ServerAddress_mB49A10CE97A4B3D6F5934FE9FA8A635A8DA16522_inline(L_2, NULL);
		IPhotonSocket_set_ServerAddress_m64A4656AE1370555D8778535E059680E9C26E2CD_inline(__this, L_3, NULL);
		// this.ProxyServerAddress = npeer.ProxyServerAddress;
		PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* L_4 = ___npeer0;
		String_t* L_5;
		L_5 = PeerBase_get_ProxyServerAddress_m346F142298C326B5010E7B197DFCC875DED28F74_inline(L_4, NULL);
		IPhotonSocket_set_ProxyServerAddress_mB4292201961A3D7D24CD3E98CD730F626B3D7DEC_inline(__this, L_5, NULL);
		// if (this.ReportDebugOfLevel(DebugLevel.INFO))
		bool L_6;
		L_6 = IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE(__this, 3, NULL);
		V_0 = L_6;
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_007c;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "new SocketWebTcp() for Unity. Server: " + this.ServerAddress + (String.IsNullOrEmpty(this.ProxyServerAddress) ? "" : ", Proxy: " + this.ProxyServerAddress));
		RuntimeObject* L_8;
		L_8 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
		String_t* L_9;
		L_9 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(__this, NULL);
		String_t* L_10;
		L_10 = IPhotonSocket_get_ProxyServerAddress_m8B74A2C61251795A14640C3CE1A534C77320DA09_inline(__this, NULL);
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		G_B2_0 = L_9;
		G_B2_1 = _stringLiteral4B6F259D090A7AB0D2DC04B00C4CAA926D17DD6D;
		G_B2_2 = 3;
		G_B2_3 = L_8;
		if (L_11)
		{
			G_B3_0 = L_9;
			G_B3_1 = _stringLiteral4B6F259D090A7AB0D2DC04B00C4CAA926D17DD6D;
			G_B3_2 = 3;
			G_B3_3 = L_8;
			goto IL_006b;
		}
	}
	{
		String_t* L_12;
		L_12 = IPhotonSocket_get_ProxyServerAddress_m8B74A2C61251795A14640C3CE1A534C77320DA09_inline(__this, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAC294206C04F72D8153AC07B00DB774473301545, L_12, NULL);
		G_B4_0 = L_13;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		G_B4_3 = G_B2_2;
		G_B4_4 = G_B2_3;
		goto IL_0070;
	}

IL_006b:
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
		G_B4_3 = G_B3_2;
		G_B4_4 = G_B3_3;
	}

IL_0070:
	{
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B4_2, G_B4_1, G_B4_0, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, G_B4_4, G_B4_3, L_14);
	}

IL_007c:
	{
		// this.PollReceive = false;
		((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)__this)->___PollReceive_2 = (bool)0;
		// }
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketWebTcp_Dispose_m40B05850D2D5FE096D4EE9CB3C2F592846B5AB49 (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* G_B7_3 = NULL;
	Exception_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* G_B8_3 = NULL;
	{
		// this.State = PhotonSocketState.Disconnecting;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(__this, 3, NULL);
		// if (this.sock != null)
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_0 = __this->___sock_12;
		V_0 = (bool)((!(((RuntimeObject*)(WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (this.sock.Connected)
			WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_2 = __this->___sock_12;
			bool L_3;
			L_3 = WebSocket_get_Connected_mBB8227012F2C636EFC7D63313F1DDB7D31EA2417(L_2, NULL);
			V_1 = L_3;
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0035_1;
			}
		}
		{
			// this.sock.Close();
			WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_5 = __this->___sock_12;
			WebSocket_Close_mEBFAB80947385C48D84F5F6496E8BD49CCC540A5(L_5, NULL);
		}

IL_0035_1:
		{
			goto IL_005c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		throw e;
	}

CATCH_0038:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// this.EnqueueDebugReturn(DebugLevel.INFO, "Exception in SocketWebTcp.Dispose(): " + ex);
			Exception_t* L_6 = V_2;
			Exception_t* L_7 = L_6;
			G_B6_0 = L_7;
			G_B6_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2862B8BF4A37F97ACDF58DA91744D93E2E8456CE));
			G_B6_2 = 3;
			G_B6_3 = __this;
			if (L_7)
			{
				G_B7_0 = L_7;
				G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2862B8BF4A37F97ACDF58DA91744D93E2E8456CE));
				G_B7_2 = 3;
				G_B7_3 = __this;
				goto IL_0049;
			}
		}
		{
			G_B8_0 = ((String_t*)(NULL));
			G_B8_1 = G_B6_1;
			G_B8_2 = G_B6_2;
			G_B8_3 = G_B6_3;
			goto IL_004e;
		}

IL_0049:
		{
			String_t* L_8;
			L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
			G_B8_0 = L_8;
			G_B8_1 = G_B7_1;
			G_B8_2 = G_B7_2;
			G_B8_3 = G_B7_3;
		}

IL_004e:
		{
			String_t* L_9;
			L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B8_1, G_B8_0, NULL);
			IPhotonSocket_EnqueueDebugReturn_mB5088055254D8D7831447BA5F748D8F74FD69C58(G_B8_3, G_B8_2, L_9, NULL);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_005c;
		}
	}// end catch (depth: 1)

IL_005c:
	{
	}

IL_005d:
	{
		// this.sock = null;
		__this->___sock_12 = (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sock_12), (void*)(WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)NULL);
		// this.State = PhotonSocketState.Disconnected;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketWebTcp_Connect_m3BBDE1170CE82973AE5B045F537EA553D2A843AA (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718_m7F300A5F2A65D90BE04CC6872F7B836203E9BE69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketWebTcp_U3CConnectU3Eb__5_0_m59125F79F4F39FD99861A3A97B61AA851A7EE25D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t186C04B8068D205593DB749543F9FC0670E60348_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B62430EC3FF6AF6C57F10516C6EC5C8D0497F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral635399FE2BA0D7FC4732898C17CFD8D77C7CE39C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84D4B52893D5B4AFAF739B15CAB4F371740ADE44);
		s_Il2CppMethodInitialized = true;
	}
	MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	RuntimeObject* G_B8_3 = NULL;
	Exception_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	RuntimeObject* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	int32_t G_B9_2 = 0;
	RuntimeObject* G_B9_3 = NULL;
	{
		// this.State = PhotonSocketState.Connecting;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(__this, 1, NULL);
		// if (this.websocketConnectionObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___websocketConnectionObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// UnityEngine.Object.Destroy(this.websocketConnectionObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___websocketConnectionObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_0027:
	{
		// this.websocketConnectionObject = new GameObject("websocketConnectionObject");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, _stringLiteral14B62430EC3FF6AF6C57F10516C6EC5C8D0497F3, NULL);
		__this->___websocketConnectionObject_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___websocketConnectionObject_14), (void*)L_4);
		// MonoBehaviour mb = this.websocketConnectionObject.AddComponent<MonoBehaviourExt>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___websocketConnectionObject_14;
		MonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718* L_6;
		L_6 = GameObject_AddComponent_TisMonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718_m7F300A5F2A65D90BE04CC6872F7B836203E9BE69(L_5, GameObject_AddComponent_TisMonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718_m7F300A5F2A65D90BE04CC6872F7B836203E9BE69_RuntimeMethod_var);
		V_0 = L_6;
		// this.websocketConnectionObject.hideFlags = HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___websocketConnectionObject_14;
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_7, 1, NULL);
		// UnityEngine.Object.DontDestroyOnLoad(this.websocketConnectionObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___websocketConnectionObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_8, NULL);
		// this.ConnectAddress += "&IPv6"; // this makes the Photon Server return a host name for the next server (NS points to MS and MS points to GS)
		String_t* L_9 = ((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)__this)->___ConnectAddress_4;
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_9, _stringLiteral635399FE2BA0D7FC4732898C17CFD8D77C7CE39C, NULL);
		((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)__this)->___ConnectAddress_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)__this)->___ConnectAddress_4), (void*)L_10);
		// if (!this.ReadProxyConfigScheme(this.ProxyServerAddress, this.ServerAddress, out proxyServerAddress))
		String_t* L_11;
		L_11 = IPhotonSocket_get_ProxyServerAddress_m8B74A2C61251795A14640C3CE1A534C77320DA09_inline(__this, NULL);
		String_t* L_12;
		L_12 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(__this, NULL);
		bool L_13;
		L_13 = SocketWebTcp_ReadProxyConfigScheme_mD1F3B07429ADC0856123279574E00F6B3E8462C7(__this, L_11, L_12, (&V_1), NULL);
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_00a1;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "ReadProxyConfigScheme() failed. Using no proxy.");
		RuntimeObject* L_15;
		L_15 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_15, 3, _stringLiteral84D4B52893D5B4AFAF739B15CAB4F371740ADE44);
	}

IL_00a1:
	{
	}
	try
	{// begin try (depth: 1)
		// this.sock = new WebSocket(new Uri(this.ConnectAddress), proxyServerAddress, this.SerializationProtocol);
		String_t* L_16 = ((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)__this)->___ConnectAddress_4;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_17 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_17, L_16, NULL);
		String_t* L_18 = V_1;
		String_t* L_19;
		L_19 = IPhotonSocket_get_SerializationProtocol_m0A0BB2FB5D70746DFAF69A56366A993187D870EA(__this, NULL);
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_20 = (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)il2cpp_codegen_object_new(WebSocket_t186C04B8068D205593DB749543F9FC0670E60348_il2cpp_TypeInfo_var);
		WebSocket__ctor_mE4721C4DB1E53D894243B79FFCC090A6C904F70C(L_20, L_17, L_18, L_19, NULL);
		__this->___sock_12 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sock_12), (void*)L_20);
		// this.sock.DebugReturn = (DebugLevel l, string s) =>
		//                         {
		//                             if (this.State != PhotonSocketState.Disconnected)
		//                             {
		//                                 this.Listener.DebugReturn(l, this.State + " " + s);
		//                             }
		//                         };
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_21 = __this->___sock_12;
		Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* L_22 = (Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B*)il2cpp_codegen_object_new(Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B_il2cpp_TypeInfo_var);
		Action_2__ctor_mF56F810E3F96F6A2F54C6025533C328231F554B0(L_22, __this, (intptr_t)((void*)SocketWebTcp_U3CConnectU3Eb__5_0_m59125F79F4F39FD99861A3A97B61AA851A7EE25D_RuntimeMethod_var), NULL);
		WebSocket_set_DebugReturn_mFFCA1E6269F716339404AB19D621E772B29921A5_inline(L_21, L_22, NULL);
		// this.sock.Connect();
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_23 = __this->___sock_12;
		WebSocket_Connect_m395E986EBB2985B29B7C9857DDC89315758F92E6(L_23, NULL);
		// mb.StartCoroutine(this.ReceiveLoop());
		MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* L_24 = V_0;
		RuntimeObject* L_25;
		L_25 = SocketWebTcp_ReceiveLoop_m90563FF779A5086910ED50CB76056C34EF4DD4CE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_26;
		L_26 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_24, L_25, NULL);
		// return true;
		V_4 = (bool)1;
		goto IL_0123;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f6;
		}
		throw e;
	}

CATCH_00f6:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// this.Listener.DebugReturn(DebugLevel.ERROR, "SocketWebTcp.Connect() caught exception: " + e);
			RuntimeObject* L_27;
			L_27 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
			Exception_t* L_28 = V_5;
			Exception_t* L_29 = L_28;
			G_B7_0 = L_29;
			G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F33F174FEA3E7EB60E62005FED62EB07DDCEB36));
			G_B7_2 = 1;
			G_B7_3 = L_27;
			if (L_29)
			{
				G_B8_0 = L_29;
				G_B8_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0F33F174FEA3E7EB60E62005FED62EB07DDCEB36));
				G_B8_2 = 1;
				G_B8_3 = L_27;
				goto IL_010e;
			}
		}
		{
			G_B9_0 = ((String_t*)(NULL));
			G_B9_1 = G_B7_1;
			G_B9_2 = G_B7_2;
			G_B9_3 = G_B7_3;
			goto IL_0113;
		}

IL_010e:
		{
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
			G_B9_0 = L_30;
			G_B9_1 = G_B8_1;
			G_B9_2 = G_B8_2;
			G_B9_3 = G_B8_3;
		}

IL_0113:
		{
			String_t* L_31;
			L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
			InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var)), G_B9_3, G_B9_2, L_31);
			// return false;
			V_4 = (bool)0;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0123;
		}
	}// end catch (depth: 1)

IL_0123:
	{
		// }
		bool L_32 = V_4;
		return L_32;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::ReadProxyConfigScheme(System.String,System.String,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketWebTcp_ReadProxyConfigScheme_mD1F3B07429ADC0856123279574E00F6B3E8462C7 (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, String_t* ___proxyAddress0, String_t* ___url1, String_t** ___proxyUrl2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CB8C83FD639877E5BAFDF481412100245568EA8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9D744AC0F53E19FAF3AD6BC483501E72F67CB61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD28584D6DB1C16898C0D6F413247B019B5244990);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA61132E5AA1390EE31EEF00131FF09B12F401CD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// proxyUrl = null;
		String_t** L_0 = ___proxyUrl2;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// if (!string.IsNullOrEmpty(proxyAddress))
		String_t* L_1 = ___proxyAddress0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		// if (proxyAddress.StartsWith("auto:") || proxyAddress.StartsWith("pac:") || proxyAddress.StartsWith("system:"))
		String_t* L_4 = ___proxyAddress0;
		bool L_5;
		L_5 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_4, _stringLiteral5CB8C83FD639877E5BAFDF481412100245568EA8, NULL);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_6 = ___proxyAddress0;
		bool L_7;
		L_7 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_6, _stringLiteralB9D744AC0F53E19FAF3AD6BC483501E72F67CB61, NULL);
		if (L_7)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_8 = ___proxyAddress0;
		bool L_9;
		L_9 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_8, _stringLiteralEA61132E5AA1390EE31EEF00131FF09B12F401CD, NULL);
		G_B5_0 = ((int32_t)(L_9));
		goto IL_003a;
	}

IL_0039:
	{
		G_B5_0 = 1;
	}

IL_003a:
	{
		V_1 = (bool)G_B5_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0055;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.WARNING, "Proxy configuration via auto, pac or system is only supported with the WEBSOCKET_PROXYCONFIG define. Using no proxy instead.");
		RuntimeObject* L_11;
		L_11 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_11, 2, _stringLiteralD28584D6DB1C16898C0D6F413247B019B5244990);
		// return true;
		V_2 = (bool)1;
		goto IL_005d;
	}

IL_0055:
	{
		// proxyUrl = proxyAddress;
		String_t** L_12 = ___proxyUrl2;
		String_t* L_13 = ___proxyAddress0;
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_13);
	}

IL_0059:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_005d;
	}

IL_005d:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SocketWebTcp_Disconnect_m132F573D38A5CC16ED3A0A446EAE18B3D0353B4F (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92AD75AD6FCA907A1DC04172D9D3B3DCA5284978);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	RuntimeObject* G_B8_3 = NULL;
	Exception_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	int32_t G_B7_2 = 0;
	RuntimeObject* G_B7_3 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	int32_t G_B9_2 = 0;
	RuntimeObject* G_B9_3 = NULL;
	{
		// if (this.ReportDebugOfLevel(DebugLevel.INFO))
		bool L_0;
		L_0 = IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE(__this, 3, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.INFO, "SocketWebTcp.Disconnect()");
		RuntimeObject* L_2;
		L_2 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_2, 3, _stringLiteral92AD75AD6FCA907A1DC04172D9D3B3DCA5284978);
	}

IL_0020:
	{
		// this.State = PhotonSocketState.Disconnecting;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(__this, 3, NULL);
		// lock (this.syncer)
		RuntimeObject* L_3 = __this->___syncer_13;
		V_1 = L_3;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008f:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0099;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				}

IL_0099:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_6 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
				// if (this.sock != null)
				WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_7 = __this->___sock_12;
				V_3 = (bool)((!(((RuntimeObject*)(WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_008c_1;
				}
			}
			{
			}
			try
			{// begin try (depth: 2)
				// this.sock.Close();
				WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_9 = __this->___sock_12;
				WebSocket_Close_mEBFAB80947385C48D84F5F6496E8BD49CCC540A5(L_9, NULL);
				goto IL_0084_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0059_1;
				}
				throw e;
			}

CATCH_0059_1:
			{// begin catch(System.Exception)
				{
					// catch (Exception ex)
					V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					// this.Listener.DebugReturn(DebugLevel.ERROR, "Exception in SocketWebTcp.Disconnect(): " + ex);
					RuntimeObject* L_10;
					L_10 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
					Exception_t* L_11 = V_4;
					Exception_t* L_12 = L_11;
					G_B7_0 = L_12;
					G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07CBEC8E9DB3B4185C079A661973C4FC124FB142));
					G_B7_2 = 1;
					G_B7_3 = L_10;
					if (L_12)
					{
						G_B8_0 = L_12;
						G_B8_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07CBEC8E9DB3B4185C079A661973C4FC124FB142));
						G_B8_2 = 1;
						G_B8_3 = L_10;
						goto IL_0071_1;
					}
				}
				{
					G_B9_0 = ((String_t*)(NULL));
					G_B9_1 = G_B7_1;
					G_B9_2 = G_B7_2;
					G_B9_3 = G_B7_3;
					goto IL_0076_1;
				}

IL_0071_1:
				{
					String_t* L_13;
					L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
					G_B9_0 = L_13;
					G_B9_1 = G_B8_1;
					G_B9_2 = G_B8_2;
					G_B9_3 = G_B8_3;
				}

IL_0076_1:
				{
					String_t* L_14;
					L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B9_1, G_B9_0, NULL);
					InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var)), G_B9_3, G_B9_2, L_14);
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_0084_1;
				}
			}// end catch (depth: 2)

IL_0084_1:
			{
				// this.sock = null;
				__this->___sock_12 = (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___sock_12), (void*)(WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)NULL);
			}

IL_008c_1:
			{
				goto IL_009a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009a:
	{
		// if (this.websocketConnectionObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___websocketConnectionObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_16;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_00ba;
		}
	}
	{
		// UnityEngine.Object.Destroy(this.websocketConnectionObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___websocketConnectionObject_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_18, NULL);
	}

IL_00ba:
	{
		// this.State = PhotonSocketState.Disconnected;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(__this, 0, NULL);
		// return true;
		V_6 = (bool)1;
		goto IL_00c7;
	}

IL_00c7:
	{
		// }
		bool L_19 = V_6;
		return L_19;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Send(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketWebTcp_Send_m20B3CD73922977483CB0A314CE226AC6556D38F0 (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	bool V_4 = false;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (this.State != PhotonSocketState.Connected)
		int32_t L_0;
		L_0 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return PhotonSocketError.Skipped;
		V_1 = 1;
		goto IL_009d;
	}

IL_0019:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (data.Length > length)
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
			int32_t L_3 = ___length1;
			V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) > ((int32_t)L_3))? 1 : 0);
			bool L_4 = V_2;
			if (!L_4)
			{
				goto IL_003c_1;
			}
		}
		{
			// byte[] trimmedData = new byte[length];
			int32_t L_5 = ___length1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
			V_3 = L_6;
			// Buffer.BlockCopy(data, 0, trimmedData, 0, length);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___data0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_3;
			int32_t L_9 = ___length1;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 0, L_9, NULL);
			// data = trimmedData;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
			___data0 = L_10;
		}

IL_003c_1:
		{
			// if (this.sock != null)
			WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_11 = __this->___sock_12;
			V_4 = (bool)((!(((RuntimeObject*)(WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
			bool L_12 = V_4;
			if (!L_12)
			{
				goto IL_005a_1;
			}
		}
		{
			// this.sock.Send(data);
			WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_13 = __this->___sock_12;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___data0;
			WebSocket_Send_mD4B1295B4D9D9687987116A6B7710773A31C7F2E(L_13, L_14, NULL);
		}

IL_005a_1:
		{
			goto IL_0099;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005d;
		}
		throw e;
	}

CATCH_005d:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Cannot send to: " + this.ServerAddress + ". " + e.Message);
		RuntimeObject* L_15;
		L_15 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
		String_t* L_16;
		L_16 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(__this, NULL);
		Exception_t* L_17 = V_5;
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_17);
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A328C89F6BA1B16C6636D0A5824840B5CFB5593)), L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA04D4286952D44B4CB5C87E7D30E05FE4153434)), L_18, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var)), L_15, 1, L_19);
		// this.HandleException(StatusCode.Exception);
		IPhotonSocket_HandleException_m50599D782455D34378626862B68079C79834B2AF(__this, ((int32_t)1026), NULL);
		// return PhotonSocketError.Exception;
		V_1 = 3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_009d;
	}// end catch (depth: 1)

IL_0099:
	{
		// return PhotonSocketError.Success;
		V_1 = 0;
		goto IL_009d;
	}

IL_009d:
	{
		// }
		int32_t L_20 = V_1;
		return L_20;
	}
}
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Receive(System.Byte[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SocketWebTcp_Receive_m940621770C1E229CAE999D760FA8192A1FB96A1F (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___data0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// data = null;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = ___data0;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// return PhotonSocketError.NoData;
		V_0 = 2;
		goto IL_0008;
	}

IL_0008:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator ExitGames.Client.Photon.SocketWebTcp::ReceiveLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SocketWebTcp_ReceiveLoop_m90563FF779A5086910ED50CB76056C34EF4DD4CE (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2* L_0 = (U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2*)il2cpp_codegen_object_new(U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2_il2cpp_TypeInfo_var);
		U3CReceiveLoopU3Ed__13__ctor_m74DA61D26E784B8B747BCC45EA73EE44379F24B7(L_0, 0, NULL);
		U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp::<Connect>b__5_0(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketWebTcp_U3CConnectU3Eb__5_0_m59125F79F4F39FD99861A3A97B61AA851A7EE25D (SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* __this, uint8_t ___l0, String_t* ___s1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (this.State != PhotonSocketState.Disconnected)
		int32_t L_0;
		L_0 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(__this, NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// this.Listener.DebugReturn(l, this.State + " " + s);
		RuntimeObject* L_2;
		L_2 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(__this, NULL);
		uint8_t L_3 = ___l0;
		int32_t L_4;
		L_4 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(__this, NULL);
		V_1 = L_4;
		Il2CppFakeBox<int32_t> L_5(PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		String_t* L_7 = ___s1;
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_7, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_2, L_3, L_8);
	}

IL_003c:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketWebTcp/MonoBehaviourExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourExt__ctor_m4EF4DAD19A26800A993A414354D608E260EE8F70 (MonoBehaviourExt_t600D5AFC2507934187D2A421DD9A402F6A875718* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__13__ctor_m74DA61D26E784B8B747BCC45EA73EE44379F24B7 (U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__13_System_IDisposable_Dispose_m5387AF469EC5792ADF109F6C367180416C4101E9 (U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReceiveLoopU3Ed__13_MoveNext_m7BC468918DFCAC052E3BF83F1666AA5F689563BA (U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062C159E09943C99E139190E5A591006A545AA4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Exception_t* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B14_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B36_0 = 0;
	Exception_t* G_B40_0 = NULL;
	int32_t G_B40_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B40_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B40_3 = NULL;
	int32_t G_B40_4 = 0;
	SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* G_B40_5 = NULL;
	Exception_t* G_B39_0 = NULL;
	int32_t G_B39_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B39_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B39_3 = NULL;
	int32_t G_B39_4 = 0;
	SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* G_B39_5 = NULL;
	String_t* G_B41_0 = NULL;
	int32_t G_B41_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B41_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B41_3 = NULL;
	int32_t G_B41_4 = 0;
	SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* G_B41_5 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0060;
	}

IL_001f:
	{
		goto IL_0263;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (this.sock != null)
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_2 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_3 = L_2->___sock_12;
		V_1 = (bool)((!(((RuntimeObject*)(WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0397;
		}
	}
	{
		goto IL_0068;
	}

IL_0046:
	{
		// yield return new WaitForRealSeconds(0.1f);
		WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C* L_5 = (WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C*)il2cpp_codegen_object_new(WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_mAD70795E28862CD7367610588610A392EFD473D9(L_5, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0060:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0068:
	{
		// while (this.sock != null && !this.sock.Connected && this.sock.Error == null)
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_6 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_7 = L_6->___sock_12;
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_8 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_9 = L_8->___sock_12;
		bool L_10;
		L_10 = WebSocket_get_Connected_mBB8227012F2C636EFC7D63313F1DDB7D31EA2417(L_9, NULL);
		if (L_10)
		{
			goto IL_009c;
		}
	}
	{
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_11 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_12 = L_11->___sock_12;
		String_t* L_13;
		L_13 = WebSocket_get_Error_m57258F3B04019AD3E9A4FCA3B22F6D036232A588(L_12, NULL);
		G_B14_0 = ((((RuntimeObject*)(String_t*)L_13) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B14_0 = 0;
	}

IL_009d:
	{
		V_2 = (bool)G_B14_0;
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0046;
		}
	}
	{
		// if (this.sock != null)
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_15 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_16 = L_15->___sock_12;
		V_3 = (bool)((!(((RuntimeObject*)(WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0396;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_18 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_19 = L_18->___sock_12;
		String_t* L_20;
		L_20 = WebSocket_get_Error_m57258F3B04019AD3E9A4FCA3B22F6D036232A588(L_19, NULL);
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_20) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_21 = V_4;
		if (!L_21)
		{
			goto IL_0124;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread. Server: " + this.ServerAddress + " Error: " + this.sock.Error);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_22 = __this->___U3CU3E4__this_2;
		RuntimeObject* L_23;
		L_23 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(L_22, NULL);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_24 = __this->___U3CU3E4__this_2;
		String_t* L_25;
		L_25 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(L_24, NULL);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_26 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_27 = L_26->___sock_12;
		String_t* L_28;
		L_28 = WebSocket_get_Error_m57258F3B04019AD3E9A4FCA3B22F6D036232A588(L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral95F53809B4EBC36EDD99FA5DD91761569389BB23, L_25, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A, L_28, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_23, 1, L_29);
		// this.HandleException(StatusCode.ExceptionOnConnect);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_30 = __this->___U3CU3E4__this_2;
		IPhotonSocket_HandleException_m50599D782455D34378626862B68079C79834B2AF(L_30, ((int32_t)1023), NULL);
		goto IL_0395;
	}

IL_0124:
	{
		// if (this.ReportDebugOfLevel(DebugLevel.ALL))
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_31 = __this->___U3CU3E4__this_2;
		bool L_32;
		L_32 = IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE(L_31, 5, NULL);
		V_5 = L_32;
		bool L_33 = V_5;
		if (!L_33)
		{
			goto IL_016f;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ALL, "Receiving by websocket. this.State: " + this.State);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_34 = __this->___U3CU3E4__this_2;
		RuntimeObject* L_35;
		L_35 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(L_34, NULL);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_36 = __this->___U3CU3E4__this_2;
		int32_t L_37;
		L_37 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(L_36, NULL);
		V_6 = L_37;
		Il2CppFakeBox<int32_t> L_38(PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB_il2cpp_TypeInfo_var, (&V_6));
		String_t* L_39;
		L_39 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_38), NULL);
		String_t* L_40;
		L_40 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8334317A1EF5557A23201DAC301958FB87859F5B, L_39, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_35, 5, L_40);
	}

IL_016f:
	{
		// this.State = PhotonSocketState.Connected;
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_41 = __this->___U3CU3E4__this_2;
		IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline(L_41, 2, NULL);
		// this.peerBase.OnConnect();
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_42 = __this->___U3CU3E4__this_2;
		PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* L_43 = ((IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34*)L_42)->___peerBase_0;
		VirtualActionInvoker0::Invoke(10 /* System.Void ExitGames.Client.Photon.PeerBase::OnConnect() */, L_43);
		goto IL_037d;
	}

IL_0192:
	{
		// if (this.sock != null)
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_44 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_45 = L_44->___sock_12;
		V_7 = (bool)((!(((RuntimeObject*)(WebSocket_t186C04B8068D205593DB749543F9FC0670E60348*)L_45) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_46 = V_7;
		if (!L_46)
		{
			goto IL_037c;
		}
	}
	{
		// if (this.sock.Error != null)
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_47 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_48 = L_47->___sock_12;
		String_t* L_49;
		L_49 = WebSocket_get_Error_m57258F3B04019AD3E9A4FCA3B22F6D036232A588(L_48, NULL);
		V_8 = (bool)((!(((RuntimeObject*)(String_t*)L_49) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_50 = V_8;
		if (!L_50)
		{
			goto IL_0217;
		}
	}
	{
		// this.Listener.DebugReturn(DebugLevel.ERROR, "Exiting receive thread (inside loop). Server: " + this.ServerAddress + " Error: " + this.sock.Error);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_51 = __this->___U3CU3E4__this_2;
		RuntimeObject* L_52;
		L_52 = IPhotonSocket_get_Listener_mCD4415B4D9CDBCEFDDA32457CF1A025A9E03B7E1(L_51, NULL);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_53 = __this->___U3CU3E4__this_2;
		String_t* L_54;
		L_54 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(L_53, NULL);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_55 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_56 = L_55->___sock_12;
		String_t* L_57;
		L_57 = WebSocket_get_Error_m57258F3B04019AD3E9A4FCA3B22F6D036232A588(L_56, NULL);
		String_t* L_58;
		L_58 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralCA9193E11FC474EEF79F82B6F77150AE7F202155, L_54, _stringLiteral062C159E09943C99E139190E5A591006A545AA4A, L_57, NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_tCF670245092F1C9F0BB8F83AE0742E9473417E6D_il2cpp_TypeInfo_var, L_52, 1, L_58);
		// this.HandleException(StatusCode.ExceptionOnReceive);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_59 = __this->___U3CU3E4__this_2;
		IPhotonSocket_HandleException_m50599D782455D34378626862B68079C79834B2AF(L_59, ((int32_t)1039), NULL);
		// break;
		goto IL_0394;
	}

IL_0217:
	{
		// byte[] inBuff = this.sock.Recv();
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_60 = __this->___U3CU3E4__this_2;
		WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* L_61 = L_60->___sock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
		L_62 = WebSocket_Recv_mEACB78B578488E4E0ED5BF37886932D0C0C0AD43(L_61, NULL);
		__this->___U3CinBuffU3E5__1_3 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinBuffU3E5__1_3), (void*)L_62);
		// if (inBuff == null || inBuff.Length == 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___U3CinBuffU3E5__1_3;
		if (!L_63)
		{
			goto IL_0242;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___U3CinBuffU3E5__1_3;
		G_B27_0 = ((((int32_t)(((RuntimeArray*)L_64)->max_length)) == ((int32_t)0))? 1 : 0);
		goto IL_0243;
	}

IL_0242:
	{
		G_B27_0 = 1;
	}

IL_0243:
	{
		V_9 = (bool)G_B27_0;
		bool L_65 = V_9;
		if (!L_65)
		{
			goto IL_026f;
		}
	}
	{
		// yield return new WaitForRealSeconds(0.02f);
		WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C* L_66 = (WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C*)il2cpp_codegen_object_new(WaitForRealSeconds_t4EBABED572F3C7700817247BE1D848E82C03FC8C_il2cpp_TypeInfo_var);
		WaitForRealSeconds__ctor_mAD70795E28862CD7367610588610A392EFD473D9(L_66, (0.0199999996f), NULL);
		__this->___U3CU3E2__current_1 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_66);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0263:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// continue;
		goto IL_037d;
	}

IL_026f:
	{
		// if (inBuff.Length > 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = __this->___U3CinBuffU3E5__1_3;
		V_10 = (bool)((!(((uint32_t)(((RuntimeArray*)L_67)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_68 = V_10;
		if (!L_68)
		{
			goto IL_0373;
		}
	}
	{
	}
	try
	{// begin try (depth: 1)
		// this.HandleReceivedDatagram(inBuff, inBuff.Length, false);
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_69 = __this->___U3CU3E4__this_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = __this->___U3CinBuffU3E5__1_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = __this->___U3CinBuffU3E5__1_3;
		IPhotonSocket_HandleReceivedDatagram_mE732DCDE0858559B4F838D8DDF66C979F7DAA974(L_69, L_70, ((int32_t)(((RuntimeArray*)L_71)->max_length)), (bool)0, NULL);
		goto IL_0372;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a5;
		}
		throw e;
	}

CATCH_02a5:
	{// begin catch(System.Exception)
		{
			// catch (Exception e)
			V_11 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_72 = V_11;
			__this->___U3CeU3E5__2_4 = L_72;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_4), (void*)L_72);
			// if (this.State != PhotonSocketState.Disconnecting && this.State != PhotonSocketState.Disconnected)
			SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_73 = __this->___U3CU3E4__this_2;
			int32_t L_74;
			L_74 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(L_73, NULL);
			if ((((int32_t)L_74) == ((int32_t)3)))
			{
				goto IL_02ce;
			}
		}
		{
			SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_75 = __this->___U3CU3E4__this_2;
			int32_t L_76;
			L_76 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(L_75, NULL);
			G_B36_0 = ((!(((uint32_t)L_76) <= ((uint32_t)0)))? 1 : 0);
			goto IL_02cf;
		}

IL_02ce:
		{
			G_B36_0 = 0;
		}

IL_02cf:
		{
			V_12 = (bool)G_B36_0;
			bool L_77 = V_12;
			if (!L_77)
			{
				goto IL_036f;
			}
		}
		{
			// if (this.ReportDebugOfLevel(DebugLevel.ERROR))
			SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_78 = __this->___U3CU3E4__this_2;
			bool L_79;
			L_79 = IPhotonSocket_ReportDebugOfLevel_mA64EDC0A11AF42C58BDA2913720540F8ECD772AE(L_78, 1, NULL);
			V_13 = L_79;
			bool L_80 = V_13;
			if (!L_80)
			{
				goto IL_035d;
			}
		}
		{
			// this.EnqueueDebugReturn(DebugLevel.ERROR, "Receive issue. State: " + this.State + ". Server: '" + this.ServerAddress + "' Exception: " + e);
			SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_81 = __this->___U3CU3E4__this_2;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_82;
			ArrayElementTypeCheck (L_83, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB545D4BB06AFBCF7E282105B69205BBE4B8E5DF)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_84 = L_83;
			SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_85 = __this->___U3CU3E4__this_2;
			int32_t L_86;
			L_86 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(L_85, NULL);
			V_6 = L_86;
			Il2CppFakeBox<int32_t> L_87(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PhotonSocketState_t7F72F90C12B6D46FEE5435BA595D630D536C97BB_il2cpp_TypeInfo_var)), (&V_6));
			String_t* L_88;
			L_88 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_87), NULL);
			ArrayElementTypeCheck (L_84, L_88);
			(L_84)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_88);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = L_84;
			ArrayElementTypeCheck (L_89, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			(L_89)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral890CC34F21C9E15089211D28CBD4775F4FDC84D3)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90 = L_89;
			SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_91 = __this->___U3CU3E4__this_2;
			String_t* L_92;
			L_92 = IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline(L_91, NULL);
			ArrayElementTypeCheck (L_90, L_92);
			(L_90)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_92);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_93 = L_90;
			ArrayElementTypeCheck (L_93, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			(L_93)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57181476910FA4C16EFCC0E7443CD9C417D2514B)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_94 = L_93;
			Exception_t* L_95 = __this->___U3CeU3E5__2_4;
			Exception_t* L_96 = L_95;
			G_B39_0 = L_96;
			G_B39_1 = 5;
			G_B39_2 = L_94;
			G_B39_3 = L_94;
			G_B39_4 = 1;
			G_B39_5 = L_81;
			if (L_96)
			{
				G_B40_0 = L_96;
				G_B40_1 = 5;
				G_B40_2 = L_94;
				G_B40_3 = L_94;
				G_B40_4 = 1;
				G_B40_5 = L_81;
				goto IL_034b;
			}
		}
		{
			G_B41_0 = ((String_t*)(NULL));
			G_B41_1 = G_B39_1;
			G_B41_2 = G_B39_2;
			G_B41_3 = G_B39_3;
			G_B41_4 = G_B39_4;
			G_B41_5 = G_B39_5;
			goto IL_0350;
		}

IL_034b:
		{
			String_t* L_97;
			L_97 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B40_0);
			G_B41_0 = L_97;
			G_B41_1 = G_B40_1;
			G_B41_2 = G_B40_2;
			G_B41_3 = G_B40_3;
			G_B41_4 = G_B40_4;
			G_B41_5 = G_B40_5;
		}

IL_0350:
		{
			ArrayElementTypeCheck (G_B41_2, G_B41_0);
			(G_B41_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B41_1), (String_t*)G_B41_0);
			String_t* L_98;
			L_98 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B41_3, NULL);
			IPhotonSocket_EnqueueDebugReturn_mB5088055254D8D7831447BA5F748D8F74FD69C58(G_B41_5, G_B41_4, L_98, NULL);
		}

IL_035d:
		{
			// this.HandleException(StatusCode.ExceptionOnReceive);
			SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_99 = __this->___U3CU3E4__this_2;
			IPhotonSocket_HandleException_m50599D782455D34378626862B68079C79834B2AF(L_99, ((int32_t)1039), NULL);
		}

IL_036f:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0372;
		}
	}// end catch (depth: 1)

IL_0372:
	{
	}

IL_0373:
	{
		__this->___U3CinBuffU3E5__1_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinBuffU3E5__1_3), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_037c:
	{
	}

IL_037d:
	{
		// while (this.State == PhotonSocketState.Connected)
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_100 = __this->___U3CU3E4__this_2;
		int32_t L_101;
		L_101 = IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline(L_100, NULL);
		V_14 = (bool)((((int32_t)L_101) == ((int32_t)2))? 1 : 0);
		bool L_102 = V_14;
		if (L_102)
		{
			goto IL_0192;
		}
	}

IL_0394:
	{
	}

IL_0395:
	{
	}

IL_0396:
	{
	}

IL_0397:
	{
		// this.Disconnect();
		SocketWebTcp_tF21EBFE1C104A20E9BD26C28A1EFC59E11FB4C8C* L_103 = __this->___U3CU3E4__this_2;
		bool L_104;
		L_104 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean ExitGames.Client.Photon.IPhotonSocket::Disconnect() */, L_103);
		// }
		return (bool)0;
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReceiveLoopU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8560F5B6E1E06970A5145F628C3C918B2619AF32 (U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReceiveLoopU3Ed__13_System_Collections_IEnumerator_Reset_m04F24633404B12C0BB32BD8F87B781BFEF58669C (U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReceiveLoopU3Ed__13_System_Collections_IEnumerator_Reset_m04F24633404B12C0BB32BD8F87B781BFEF58669C_RuntimeMethod_var)));
	}
}
// System.Object ExitGames.Client.Photon.SocketWebTcp/<ReceiveLoop>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReceiveLoopU3Ed__13_System_Collections_IEnumerator_get_Current_m5BBACC4CDE496B214E8516274BE8327CF6BCD870 (U3CReceiveLoopU3Ed__13_t05ABFCE30B2FB032214615DA304A5C35E8BD4ED2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String> ExitGames.Client.Photon.WebSocket::get_DebugReturn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* WebSocket_get_DebugReturn_mCAC308CC7D52756DB64F5D153BD31AE45D290687 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	{
		// public Action<DebugLevel, string> DebugReturn { get; set; }
		Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* L_0 = __this->___U3CDebugReturnU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::set_DebugReturn(System.Action`2<ExitGames.Client.Photon.DebugLevel,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_set_DebugReturn_mFFCA1E6269F716339404AB19D621E772B29921A5 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Action<DebugLevel, string> DebugReturn { get; set; }
		Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* L_0 = ___value0;
		__this->___U3CDebugReturnU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDebugReturnU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::.ctor(System.Uri,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE4721C4DB1E53D894243B79FFCC090A6C904F70C (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, String_t* ___proxyAddress1, String_t* ___protocols2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// private string protocols = "GpBinaryV16";
		__this->___protocols_2 = _stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___protocols_2), (void*)_stringLiteral595137F8C876A16A4A12C20E052B255B02F22D8D);
		// int m_NativeRef = 0;
		__this->___m_NativeRef_4 = 0;
		// public WebSocket(Uri url, string proxyAddress, string protocols = null)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.mUrl = url;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		__this->___mUrl_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUrl_0), (void*)L_0);
		// this.mProxyAddress = proxyAddress;
		String_t* L_1 = ___proxyAddress1;
		__this->___mProxyAddress_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mProxyAddress_1), (void*)L_1);
		// if (protocols != null)
		String_t* L_2 = ___protocols2;
		V_1 = (bool)((!(((RuntimeObject*)(String_t*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// this.protocols = protocols;
		String_t* L_4 = ___protocols2;
		__this->___protocols_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___protocols_2), (void*)L_4);
	}

IL_0039:
	{
		// string protocol = mUrl.Scheme;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = __this->___mUrl_0;
		String_t* L_6;
		L_6 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_5, NULL);
		V_0 = L_6;
		// if (!protocol.Equals("ws") && !protocol.Equals("wss"))
		String_t* L_7 = V_0;
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_7, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, NULL);
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_9, _stringLiteral56D7741BCA89552362FD24D11BB8980E3D8A444C, NULL);
		G_B5_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0063;
	}

IL_0062:
	{
		G_B5_0 = 0;
	}

IL_0063:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0079;
		}
	}
	{
		// throw new ArgumentException("Unsupported protocol: " + protocol);
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral37422C200CFCABD757B9019D3ABA76E55A7A5DA5)), L_12, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket__ctor_mE4721C4DB1E53D894243B79FFCC090A6C904F70C_RuntimeMethod_var)));
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.String ExitGames.Client.Photon.WebSocket::get_ProxyAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_ProxyAddress_m976C6BF04E3DA660EB42D333503BAC4867B9C0C3 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mProxyAddress; }
		String_t* L_0 = __this->___mProxyAddress_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mProxyAddress; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::SendString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SendString_m5293C75E8F89CE379549AA67604AE1E8091D1D8B (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	{
		// Send(Encoding.UTF8.GetBytes(str));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___str0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		WebSocket_Send_mD4B1295B4D9D9687987116A6B7710773A31C7F2E(__this, L_2, NULL);
		// }
		return;
	}
}
// System.String ExitGames.Client.Photon.WebSocket::RecvString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_RecvString_m6CBBF6BCD10468351A137ED729B1EAE77077C600 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		// byte[] retval = Recv();
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = WebSocket_Recv_mEACB78B578488E4E0ED5BF37886932D0C0C0AD43(__this, NULL);
		V_0 = L_0;
		// if (retval == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		V_2 = (String_t*)NULL;
		goto IL_0022;
	}

IL_0014:
	{
		// return Encoding.UTF8.GetString(retval);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		String_t* L_5;
		L_5 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_3, L_4);
		V_2 = L_5;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		String_t* L_6 = V_2;
		return L_6;
	}
}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketCreate(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketCreate_mC8EC9EF77ABC16929D4FE49B18CEEA77D568A102 (String_t* ___url0, String_t* ___protocols1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Marshaling of parameter '___protocols1' to native representation
	char* ____protocols1_marshaled = NULL;
	____protocols1_marshaled = il2cpp_codegen_marshal_string(___protocols1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketCreate)(____url0_marshaled, ____protocols1_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	// Marshaling cleanup of parameter '___protocols1' native representation
	il2cpp_codegen_marshal_free(____protocols1_marshaled);
	____protocols1_marshaled = NULL;

	return returnValue;
}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketState_m5DF899791780A85B8662B678886B936876755A6E (int32_t ___socketInstance0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketState)(___socketInstance0);

	return returnValue;
}
// System.Void ExitGames.Client.Photon.WebSocket::SocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketSend_mAD6DB1889E877BA6B7508A7E372AE425C7EA668F (int32_t ___socketInstance0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ptr1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketSend)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
// System.Void ExitGames.Client.Photon.WebSocket::SocketRecv(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketRecv_m29C11E96CC093B381119F917893606F8034E74B2 (int32_t ___socketInstance0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ptr1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketRecv)(___socketInstance0, ____ptr1_marshaled, ___length2);

}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketRecvLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketRecvLength_mE481043205BFC37D948C0879B902A54F09D8F508 (int32_t ___socketInstance0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketRecvLength)(___socketInstance0);

	return returnValue;
}
// System.Void ExitGames.Client.Photon.WebSocket::SocketClose(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_SocketClose_mF869929D2C713487E6246536E970A3B93C410600 (int32_t ___socketInstance0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SocketClose)(___socketInstance0);

}
// System.Int32 ExitGames.Client.Photon.WebSocket::SocketError(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_SocketError_m3488AD7573B5791C796C3BCE0CDAD848EF1D28E2 (int32_t ___socketInstance0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ptr1, int32_t ___length2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___ptr1' to native representation
	uint8_t* ____ptr1_marshaled = NULL;
	if (___ptr1 != NULL)
	{
		____ptr1_marshaled = reinterpret_cast<uint8_t*>((___ptr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SocketError)(___socketInstance0, ____ptr1_marshaled, ___length2);

	return returnValue;
}
// System.Void ExitGames.Client.Photon.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_mD4B1295B4D9D9687987116A6B7710773A31C7F2E (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) 
{
	{
		// SocketSend (m_NativeRef, buffer, buffer.Length);
		int32_t L_0 = __this->___m_NativeRef_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buffer0;
		WebSocket_SocketSend_mAD6DB1889E877BA6B7508A7E372AE425C7EA668F(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		// }
		return;
	}
}
// System.Byte[] ExitGames.Client.Photon.WebSocket::Recv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WebSocket_Recv_mEACB78B578488E4E0ED5BF37886932D0C0C0AD43 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		// int length = SocketRecvLength (m_NativeRef);
		int32_t L_0 = __this->___m_NativeRef_4;
		int32_t L_1;
		L_1 = WebSocket_SocketRecvLength_mE481043205BFC37D948C0879B902A54F09D8F508(L_0, NULL);
		V_0 = L_1;
		// if (length == 0)
		int32_t L_2 = V_0;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		// return null;
		V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_0032;
	}

IL_0019:
	{
		// byte[] buffer = new byte[length];
		int32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// SocketRecv (m_NativeRef, buffer, length);
		int32_t L_6 = __this->___m_NativeRef_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		int32_t L_8 = V_0;
		WebSocket_SocketRecv_m29C11E96CC093B381119F917893606F8034E74B2(L_6, L_7, L_8, NULL);
		// return buffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		V_3 = L_9;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_3;
		return L_10;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_m395E986EBB2985B29B7C9857DDC89315758F92E6 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	{
		// m_NativeRef = SocketCreate (mUrl.ToString(), this.protocols);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = __this->___mUrl_0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		String_t* L_2 = __this->___protocols_2;
		int32_t L_3;
		L_3 = WebSocket_SocketCreate_mC8EC9EF77ABC16929D4FE49B18CEEA77D568A102(L_1, L_2, NULL);
		__this->___m_NativeRef_4 = L_3;
		// }
		return;
	}
}
// System.Void ExitGames.Client.Photon.WebSocket::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_mEBFAB80947385C48D84F5F6496E8BD49CCC540A5 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	{
		// SocketClose(m_NativeRef);
		int32_t L_0 = __this->___m_NativeRef_4;
		WebSocket_SocketClose_mF869929D2C713487E6246536E970A3B93C410600(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.WebSocket::get_Connected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_get_Connected_mBB8227012F2C636EFC7D63313F1DDB7D31EA2417 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return SocketState(m_NativeRef) != 0; }
		int32_t L_0 = __this->___m_NativeRef_4;
		int32_t L_1;
		L_1 = WebSocket_SocketState_m5DF899791780A85B8662B678886B936876755A6E(L_0, NULL);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// get { return SocketState(m_NativeRef) != 0; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.String ExitGames.Client.Photon.WebSocket::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebSocket_get_Error_m57258F3B04019AD3E9A4FCA3B22F6D036232A588 (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	String_t* V_3 = NULL;
	{
		// byte[] buffer = new byte[bufsize];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		V_0 = L_0;
		// int result = SocketError (m_NativeRef, buffer, bufsize);
		int32_t L_1 = __this->___m_NativeRef_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3;
		L_3 = WebSocket_SocketError_m3488AD7573B5791C796C3BCE0CDAD848EF1D28E2(L_1, L_2, ((int32_t)1024), NULL);
		V_1 = L_3;
		// if (result == 0)
		int32_t L_4 = V_1;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002a;
		}
	}
	{
		// return null;
		V_3 = (String_t*)NULL;
		goto IL_0038;
	}

IL_002a:
	{
		// return Encoding.UTF8.GetString (buffer);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		String_t* L_8;
		L_8 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_6, L_7);
		V_3 = L_8;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		String_t* L_9 = V_3;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_Start_m654498A211F20CBE3A2648EF7A5D1ABC5F406BA2 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// this.lbc = new LoadBalancingClient();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = (LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)il2cpp_codegen_object_new(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4_il2cpp_TypeInfo_var);
		LoadBalancingClient__ctor_mC3FD7885A9F9E80E8949ACDE2590016410F1186C(L_0, 0, NULL);
		__this->___lbc_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lbc_5), (void*)L_0);
		// this.lbc.AddCallbackTarget(this);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = __this->___lbc_5;
		LoadBalancingClient_AddCallbackTarget_mF98AF4F5A8EF6794C9038C50C619B03EC7FB22B8(L_1, __this, NULL);
		// if (!this.lbc.ConnectUsingSettings(appSettings))
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_2 = __this->___lbc_5;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_3 = __this->___appSettings_4;
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* >::Invoke(8 /* System.Boolean Photon.Realtime.LoadBalancingClient::ConnectUsingSettings(Photon.Realtime.AppSettings) */, L_2, L_3);
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// Debug.LogError("Error while connecting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral4A40D860326E4F58DF247BAAC9F338720FCF0B75, NULL);
	}

IL_003f:
	{
		// this.ch = this.gameObject.GetComponent<ConnectionHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_7;
		L_7 = GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1(L_6, GameObject_GetComponent_TisConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4_m35DDE72490FF0112059E3A8C5F21DD893E2026C1_RuntimeMethod_var);
		__this->___ch_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ch_6), (void*)L_7);
		// if (this.ch != null)
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_8 = __this->___ch_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0080;
		}
	}
	{
		// this.ch.Client = this.lbc;
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_11 = __this->___ch_6;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_12 = __this->___lbc_5;
		ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline(L_11, L_12, NULL);
		// this.ch.StartFallbackSendAckThread();
		ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* L_13 = __this->___ch_6;
		ConnectionHandler_StartFallbackSendAckThread_mBA4B3FC1BABFBB2085F1D30D176B50D54F33AA69(L_13, NULL);
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_Update_m413825AB30ACB547809CE218087D281E8A2B2458 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F);
		s_Il2CppMethodInitialized = true;
	}
	LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* V_0 = NULL;
	bool V_1 = false;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		// LoadBalancingClient client = this.lbc;
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		V_0 = L_0;
		// if (client != null)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_006b;
		}
	}
	{
		// client.Service();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_3 = V_0;
		LoadBalancingClient_Service_m0208D4872E63ABA1E7367E1D8FB89421E3050920(L_3, NULL);
		// Text uiText = this.StateUiText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___StateUiText_7;
		V_2 = L_4;
		// string state = client.State.ToString();
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_5 = V_0;
		int32_t L_6;
		L_6 = LoadBalancingClient_get_State_m8553D8C2483058BD64DDED8EC2648AE77836D12C(L_5, NULL);
		V_4 = L_6;
		Il2CppFakeBox<int32_t> L_7(ClientState_t37749736ADC28D4E9C0B442B1DC988F76AAE4FA3_il2cpp_TypeInfo_var, (&V_4));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		V_3 = L_8;
		// if (uiText != null && !uiText.text.Equals(state))
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = V_2;
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_11);
		String_t* L_13 = V_3;
		bool L_14;
		L_14 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_12, L_13, NULL);
		G_B4_0 = ((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B4_0 = 0;
	}

IL_0050:
	{
		V_5 = (bool)G_B4_0;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		// uiText.text = "State: " + state;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = V_2;
		String_t* L_17 = V_3;
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0CCFD69444F343A43D9B34E72AE10A9C37F6402F, L_17, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_18);
	}

IL_006a:
	{
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnConnected_m5AB09D698A05D7E0ABB90DC58B96103F4740CC85 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnConnectedToMaster_m91F5B4362E77D792C0F1C46C026BDAEEB5D764E3 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnConnectedToMaster");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE1BA34E8407E1622C279AB6F6CAF3C807280392E, NULL);
		// this.lbc.OpJoinRandomRoom();    // joins any open room (no filter)
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		bool L_1;
		L_1 = LoadBalancingClient_OpJoinRandomRoom_mCB018C45C5BAC6CB7F10FA13BA9EBAC3BD0F45A1(L_0, (OpJoinRandomRoomParams_t5DCB0B5EBE3D5C35A483669A8D997D47E17D6DBA*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnDisconnected_mDEE84E1C10157C22B0CD977AABF8BAF6E733F9FE (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int32_t ___cause0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnDisconnected(" + cause + ")");
		Il2CppFakeBox<int32_t> L_0(DisconnectCause_t2C4E3D34FE0D1842B3C915A63ECCE068B8A258E5_il2cpp_TypeInfo_var, (&___cause0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0F45C1C537BBADB2FE21CC7BB49C59898B204E6E, L_1, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCustomAuthenticationResponse_m0BC941D88E747C9A75C48164A1304C2BDE803070 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___data0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCustomAuthenticationFailed_m58F68BCC12C87C37A0E3C99BBD7EBB2911E43A12 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, String_t* ___debugMessage0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRegionListReceived_m725991BEFC0A7579B3F1107BB5DE2C738767D1BC (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___regionHandler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnRegionListReceived");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8CB7873CC9B86C1D67BF2A619181392B42B2481F, NULL);
		// regionHandler.PingMinimumOfRegions(this.OnRegionPingCompleted, null);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_0 = ___regionHandler0;
		Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74* L_1 = (Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74*)il2cpp_codegen_object_new(Action_1_tD013146E11DC5068784A80C11B7415DC9FE54B74_il2cpp_TypeInfo_var);
		Action_1__ctor_m215F7D57B46C05B7411E4B5B4C7DDB91EEA86681(L_1, __this, (intptr_t)((void*)ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5_RuntimeMethod_var), NULL);
		bool L_2;
		L_2 = RegionHandler_PingMinimumOfRegions_mBDA481EF544E14116455B0352A160D07B6AF5762(L_0, L_1, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRoomListUpdate_m4EF178F5B7FF803A1C05DDFB5E5DBDF9CE53B573 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, List_1_t2DCE8BA4B15DC3B666CEEA3E5A3E9E922B2F8CAE* ___roomList0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLobbyStatisticsUpdate_m6A4DB87496CDE19E4C0D56FADA2178268B2F41DD (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, List_1_t9502060F404ACB6B9ACF04BFA5D0DFC653142A15* ___lobbyStatistics0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinedLobby_mD5A48030FB4BADCC16784286C72F1820734D590B (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLeftLobby_mD0FA0520CA3A6CF43772ED5C8DA88DC3643A6CAF (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnFriendListUpdate_mA1DD1E3098C1BB9AF2026998B56665D484F19B02 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, List_1_tAF836F2F45E5E36A0C7B30A5B2C2B8FED009605F* ___friendList0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCreatedRoom_m0BB38C14FA1ED134F03D4ED2E47B2CCC1D97B1F1 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnCreateRoomFailed_m3F6D9E69A2C31504ABD34BBDB2CD06EA255C4F4D (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinedRoom_m5A6191E901FAD558767047BA3DB157E4D1AD1339 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinedRoom");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral5D6A39CF1E3A2BB7700481DB871D78DDB02A911D, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinRoomFailed_mD484E74E080D160F2DD6446DD7DC96FB41587368 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnJoinRandomFailed_mA55EF2ED2497381C3A9564D37F6292C6A92CCA81 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnJoinRandomFailed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3293A8518D7DEE9D1DE57B7241DE59F641197895, NULL);
		// this.lbc.OpCreateRoom(new EnterRoomParams());
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = __this->___lbc_5;
		EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9* L_1 = (EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9*)il2cpp_codegen_object_new(EnterRoomParams_t58DD2969FFB1BA8273A3294BF5C314B60089ABB9_il2cpp_TypeInfo_var);
		EnterRoomParams__ctor_m59BB4C9762321F59D7238996F68C7EB970ACDBB8(L_1, NULL);
		bool L_2;
		L_2 = LoadBalancingClient_OpCreateRoom_mD4FC6543597FB872E8EE027EE49E723D83437310(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnLeftRoom_m94779C8B1AFF8C090388E85CBBE2515C5F8D174E (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::OnRegionPingCompleted(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb_OnRegionPingCompleted_mCD5E698C6C0900FF3ACDD4AA4FFC644BC4137CE5 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* ___regionHandler0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C);
		s_Il2CppMethodInitialized = true;
	}
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// Debug.Log("OnRegionPingCompleted " + regionHandler.BestRegion);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_0 = ___regionHandler0;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_1;
		L_1 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(L_0, NULL);
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = _stringLiteralBE4EEAA3C538A66727E1F57EEFC277047842C14C;
			goto IL_0013;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_0018;
	}

IL_0013:
	{
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_1;
	}

IL_0018:
	{
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// Debug.Log("RegionPingSummary: " + regionHandler.SummaryToCache);
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_5 = ___regionHandler0;
		String_t* L_6;
		L_6 = RegionHandler_get_SummaryToCache_m313FB26DCB72FB6D25EC366E51AF4118F8CD3722(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6C8EA4ECB883AD669394FC7A5E304891A38ADED4, L_6, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// this.lbc.ConnectToRegionMaster(regionHandler.BestRegion.Code);
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_8 = __this->___lbc_5;
		RegionHandler_tF76A25E25C3BF915FDFBEA81372D9D7858087EBB* L_9 = ___regionHandler0;
		Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* L_10;
		L_10 = RegionHandler_get_BestRegion_mC9390E2B9A76B5F6A391F5D432D6CFD35F991D94(L_9, NULL);
		String_t* L_11;
		L_11 = Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline(L_10, NULL);
		bool L_12;
		L_12 = LoadBalancingClient_ConnectToRegionMaster_m170672C2A5C0B12DB89090B0EE8ECF6028FA365B(L_8, L_11, NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.Demo.ConnectAndJoinRandomLb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectAndJoinRandomLb__ctor_m49A174D0CB130D2679BC62AF8E77709B2B705F40 (ConnectAndJoinRandomLb_tB03E3C55EE4600CE6CE25C6DB2632F6CA029CF39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private AppSettings appSettings = new AppSettings();
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_0 = (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7*)il2cpp_codegen_object_new(AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7_il2cpp_TypeInfo_var);
		AppSettings__ctor_m0E9EF98D6C1FB02C989504407836FDA2B019AA43(L_0, NULL);
		__this->___appSettings_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___appSettings_4), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Chat.ChatAppSettings Photon.Chat.Demo.AppSettingsExtensions::GetChatSettings(Photon.Realtime.AppSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* AppSettingsExtensions_GetChatSettings_mEE685D01C4B553F55E8016FFE255717777E8975E (AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* ___appSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* V_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B2_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B2_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B1_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B3_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B3_2 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B5_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B5_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B4_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B6_1 = NULL;
	ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* G_B6_2 = NULL;
	{
		// return new ChatAppSettings
		//        {
		//            AppIdChat = appSettings.AppIdChat,
		//            AppVersion = appSettings.AppVersion,
		//            FixedRegion = appSettings.IsBestRegion ? null : appSettings.FixedRegion,
		//            NetworkLogging = appSettings.NetworkLogging,
		//            Protocol = appSettings.Protocol,
		//            EnableProtocolFallback = appSettings.EnableProtocolFallback,
		//            Server = appSettings.IsDefaultNameServer ? null : appSettings.Server,
		//            Port = (ushort)appSettings.Port,
		//            ProxyServer = appSettings.ProxyServer
		//            // values not copied from AppSettings class: AuthMode
		//            // values not needed from AppSettings class: EnableLobbyStatistics
		//        };
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_0 = (ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689*)il2cpp_codegen_object_new(ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689_il2cpp_TypeInfo_var);
		ChatAppSettings__ctor_m0B6F25C335A13983DA701EBD9CFADAC43E6011A3(L_0, NULL);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_1 = L_0;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_2 = ___appSettings0;
		String_t* L_3 = L_2->___AppIdChat_2;
		L_1->___AppIdChat_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___AppIdChat_0), (void*)L_3);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_4 = L_1;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_5 = ___appSettings0;
		String_t* L_6 = L_5->___AppVersion_4;
		L_4->___AppVersion_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___AppVersion_1), (void*)L_6);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_7 = L_4;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_8 = ___appSettings0;
		bool L_9;
		L_9 = AppSettings_get_IsBestRegion_m29A45FCEDFBC20C7C6E9CFA732A4E4FC2D1BBFED(L_8, NULL);
		G_B1_0 = L_7;
		G_B1_1 = L_7;
		if (L_9)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_7;
			goto IL_002f;
		}
	}
	{
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_10 = ___appSettings0;
		String_t* L_11 = L_10->___FixedRegion_6;
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0030:
	{
		G_B3_1->___FixedRegion_2 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->___FixedRegion_2), (void*)G_B3_0);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_12 = G_B3_2;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_13 = ___appSettings0;
		uint8_t L_14 = L_13->___NetworkLogging_15;
		L_12->___NetworkLogging_8 = L_14;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_15 = L_12;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_16 = ___appSettings0;
		uint8_t L_17 = L_16->___Protocol_11;
		L_15->___Protocol_6 = L_17;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_18 = L_15;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_19 = ___appSettings0;
		bool L_20 = L_19->___EnableProtocolFallback_12;
		L_18->___EnableProtocolFallback_7 = L_20;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_21 = L_18;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_22 = ___appSettings0;
		bool L_23;
		L_23 = AppSettings_get_IsDefaultNameServer_m25CC5D537E41C3678015FEECF221843B9CAEBD29(L_22, NULL);
		G_B4_0 = L_21;
		G_B4_1 = L_21;
		if (L_23)
		{
			G_B5_0 = L_21;
			G_B5_1 = L_21;
			goto IL_006a;
		}
	}
	{
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_24 = ___appSettings0;
		String_t* L_25 = L_24->___Server_8;
		G_B6_0 = L_25;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_006b;
	}

IL_006a:
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_006b:
	{
		G_B6_1->___Server_3 = G_B6_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_1->___Server_3), (void*)G_B6_0);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_26 = G_B6_2;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_27 = ___appSettings0;
		int32_t L_28 = L_27->___Port_9;
		L_26->___Port_4 = (uint16_t)((int32_t)(uint16_t)L_28);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_29 = L_26;
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_30 = ___appSettings0;
		String_t* L_31 = L_30->___ProxyServer_10;
		L_29->___ProxyServer_5 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->___ProxyServer_5), (void*)L_31);
		V_0 = L_29;
		goto IL_008c;
	}

IL_008c:
	{
		// }
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_32 = V_0;
		return L_32;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.Demo.ChannelSelector::SetChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector_SetChannel_m7E493B7588E65D501C7DA99C72BF36DAA565250E (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, String_t* ___channel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_0 = NULL;
	{
		// this.Channel = channel;
		String_t* L_0 = ___channel0;
		__this->___Channel_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Channel_4), (void*)L_0);
		// Text t = this.GetComponentInChildren<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(__this, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		V_0 = L_1;
		// t.text = this.Channel;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = V_0;
		String_t* L_3 = __this->___Channel_4;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChannelSelector::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector_OnPointerClick_mB3AE27915FCF9DE3F697BE3F6C93E9F408E4C3B6 (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* V_0 = NULL;
	{
		// ChatGui handler = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		V_0 = L_0;
		// handler.ShowChannel(this.Channel);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_1 = V_0;
		String_t* L_2 = __this->___Channel_4;
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChannelSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelSelector__ctor_m894F2E006A64350EDE2E7BA55B4C3D35F5148071 (ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.Demo.ChatAppIdCheckerUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppIdCheckerUI_Update_m4776B819CB357298B16E757F4A128977AB204D5F (ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF8AEDAF918CF6EF3D306EB2FB9FA00A4D0FA453);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	{
		// bool showWarning = false;
		V_0 = (bool)0;
		// string descriptionText = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_0;
		// showWarning = string.IsNullOrEmpty(PhotonNetwork.PhotonServerSettings.AppSettings.AppIdChat);
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* L_1;
		L_1 = PhotonNetwork_get_PhotonServerSettings_mEB0FD5D91970368EE4D23AA12213DAD57B8D1097(NULL);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_2 = L_1->___AppSettings_4;
		String_t* L_3 = L_2->___AppIdChat_2;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		V_0 = L_4;
		// if (showWarning)
		bool L_5 = V_0;
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// descriptionText = "<Color=Red>WARNING:</Color>\nPlease setup a Chat AppId in the PhotonServerSettings file.";
		V_1 = _stringLiteralFF8AEDAF918CF6EF3D306EB2FB9FA00A4D0FA453;
	}

IL_002b:
	{
		// this.Description.text = descriptionText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___Description_4;
		String_t* L_8 = V_1;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_8);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatAppIdCheckerUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatAppIdCheckerUI__ctor_m63844AD1E8604F63D26595AD357A104B8ECE50FA (ChatAppIdCheckerUI_t43522738EEA1186C60A64B652B157BC5FA4FC22D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Photon.Chat.Demo.ChatGui::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = __this->___U3CUserNameU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::set_UserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUserNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Start_m1BB89F3BC7EE841EDD681423C6077B22AC71DEBC (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral361D3EBAF9E2C29F13DB3B6509697AA973E37A36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// this.UserIdText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___UserIdText_24;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.StateText.text  = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___StateText_23;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// this.StateText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___StateText_23;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// this.UserIdText.gameObject.SetActive(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___UserIdText_24;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// this.Title.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Title_22;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// this.ChatPanel.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___ChatPanel_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// this.ConnectingLabel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ConnectingLabel_12;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// if (string.IsNullOrEmpty(this.UserName))
		String_t* L_11;
		L_11 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		V_1 = L_12;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_00b1;
		}
	}
	{
		// this.UserName = "user" + Environment.TickCount%99; //made-up username
		int32_t L_14;
		L_14 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		V_2 = ((int32_t)(L_14%((int32_t)99)));
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD3992DF679A3EF8B96232992FF89A2B1F1DB5534, L_15, NULL);
		ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline(__this, L_16, NULL);
	}

IL_00b1:
	{
		// this.chatAppSettings = PhotonNetwork.PhotonServerSettings.AppSettings.GetChatSettings();
		il2cpp_codegen_runtime_class_init_inline(PhotonNetwork_tBF04D378B56DDA80F9DB8E08DF87D5B532C22B99_il2cpp_TypeInfo_var);
		ServerSettings_t41BE4338E7E76BFB4919D4039BAFC6799E242152* L_17;
		L_17 = PhotonNetwork_get_PhotonServerSettings_mEB0FD5D91970368EE4D23AA12213DAD57B8D1097(NULL);
		AppSettings_tF847AF39732C3BF8BECBCCAC41D186A0B79123F7* L_18 = L_17->___AppSettings_4;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_19;
		L_19 = AppSettingsExtensions_GetChatSettings_mEE685D01C4B553F55E8016FFE255717777E8975E(L_18, NULL);
		__this->___chatAppSettings_10 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatAppSettings_10), (void*)L_19);
		// bool appIdPresent = !string.IsNullOrEmpty(this.chatAppSettings.AppIdChat);
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_20 = __this->___chatAppSettings_10;
		String_t* L_21 = L_20->___AppIdChat_0;
		bool L_22;
		L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
		V_0 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		// this.missingAppIdErrorPanel.SetActive(!appIdPresent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___missingAppIdErrorPanel_11;
		bool L_24 = V_0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)((((int32_t)L_24) == ((int32_t)0))? 1 : 0), NULL);
		// this.UserIdFormPanel.gameObject.SetActive(appIdPresent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___UserIdFormPanel_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_25, NULL);
		bool L_27 = V_0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, L_27, NULL);
		// if (!appIdPresent)
		bool L_28 = V_0;
		V_3 = (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_3;
		if (!L_29)
		{
			goto IL_0111;
		}
	}
	{
		// Debug.LogError("You need to set the chat app ID in the PhotonServerSettings file in order to continue.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral361D3EBAF9E2C29F13DB3B6509697AA973E37A36, NULL);
	}

IL_0111:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1533BFD28F11C5F69CA87886E87821ECA526FE4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.UserIdFormPanel.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___UserIdFormPanel_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// this.chatClient = new ChatClient(this);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA*)il2cpp_codegen_object_new(ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA_il2cpp_TypeInfo_var);
		ChatClient__ctor_m5C32CB0A0CAC33E980D4C6FA700B551D0DAF46F4(L_2, __this, 0, NULL);
		__this->___chatClient_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatClient_9), (void*)L_2);
		// this.chatClient.AuthValues = new AuthenticationValues(this.UserName);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_3 = __this->___chatClient_9;
		String_t* L_4;
		L_4 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_5 = (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C*)il2cpp_codegen_object_new(AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_mB097BC3108CD439CAD77D4AE77F8616FA92C929D(L_5, L_4, NULL);
		ChatClient_set_AuthValues_mAAD43D4212103C80D1377FA04B33815397E28937_inline(L_3, L_5, NULL);
		// this.chatClient.ConnectUsingSettings(this.chatAppSettings);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_6 = __this->___chatClient_9;
		ChatAppSettings_tF76C214B6AA76ACABCEFC447A2CEC798F2B8C689* L_7 = __this->___chatAppSettings_10;
		bool L_8;
		L_8 = ChatClient_ConnectUsingSettings_m3DCD03EA4CAE4ADDD935BDA323CCF37B5E96BB4C(L_6, L_7, NULL);
		// this.ChannelToggleToInstantiate.gameObject.SetActive(false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_9 = __this->___ChannelToggleToInstantiate_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// Debug.Log("Connecting as: " + this.UserName);
		String_t* L_11;
		L_11 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA1533BFD28F11C5F69CA87886E87821ECA526FE4, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// this.ConnectingLabel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___ConnectingLabel_12;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnDestroy_m39C68FCB3C786B0D6533DAD7ADD4A998C9F4B0B9 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (this.chatClient != null)
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		V_0 = (bool)((!(((RuntimeObject*)(ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// this.chatClient.Disconnect();
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = __this->___chatClient_9;
		ChatClient_Disconnect_m678FDF44265FD926B8DB5555B439F5F70D82BA52(L_2, ((int32_t)13), NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnApplicationQuit_m884A3FA45C488DFE254DD7BCA1FEF917A905133F (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (this.chatClient != null)
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		V_0 = (bool)((!(((RuntimeObject*)(ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// this.chatClient.Disconnect();
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = __this->___chatClient_9;
		ChatClient_Disconnect_m678FDF44265FD926B8DB5555B439F5F70D82BA52(L_2, ((int32_t)13), NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_Update_m1121700352D668D142BE6861A856832006968BE0 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (this.chatClient != null)
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		V_0 = (bool)((!(((RuntimeObject*)(ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// this.chatClient.Service(); // make sure to call this regularly! it limits effort internally, so calling often is ok!
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_2 = __this->___chatClient_9;
		ChatClient_Service_mD968988B9275FE4CA7113196FFB455F3BA79D0B7(L_2, NULL);
	}

IL_001c:
	{
		// if ( this.StateText == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___StateText_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// return;
		goto IL_0052;
	}

IL_003b:
	{
		// this.StateText.gameObject.SetActive(this.ShowState); // this could be handled more elegantly, but for the demo it's ok.
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___StateText_23;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		bool L_9 = __this->___ShowState_21;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, L_9, NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnEnterSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnEnterSend_m7B3690E336D9A606F4C638FBDA76DF2EB295694F (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Input.GetKey(KeyCode.Return) || Input.GetKey(KeyCode.KeypadEnter))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)13), NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)271), NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// this.SendChatMessage(this.InputFieldChat.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___InputFieldChat_15;
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_3, NULL);
		ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D(__this, L_4, NULL);
		// this.InputFieldChat.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___InputFieldChat_15;
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnClickSend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnClickSend_m10B5544E0F1A5F5D46E44BD8AA7002A06C5034CA (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.InputFieldChat != null)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_0 = __this->___InputFieldChat_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// this.SendChatMessage(this.InputFieldChat.text);
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_3 = __this->___InputFieldChat_15;
		String_t* L_4;
		L_4 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_3, NULL);
		ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D(__this, L_4, NULL);
		// this.InputFieldChat.text = "";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___InputFieldChat_15;
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::SendChatMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_SendChatMessage_m4BD1A7C0CAAA5112EA9B3C1CE4F0F1ADC7018B5D (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___inputLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral118410E0D4EC44AA2FCD3142030E47DC49A64A18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral300E1362F835BABF048E880C8978EF4F91E3867D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41540A8C28BA5EDA9B41BEBBF344C748063CDB90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral471E512CD36A060B52A0EE28B8A6D4EEC00378C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5224DE4337BB6DBE135E6B5A4D01069A20195D5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF695F96AE9B00DBD2CB8F12E765C3159E02AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral693BD22F82043985FDDDDFCF5E8EC15BF8B82934);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral710F81E0EEB8CB48BACB8437BA5836E3B5349235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7077659D26DAF185E52E2F2B77A29B3A2B818C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3664676F50F442E724FBD9CC58E7261F51AA12F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE1823106E03B1A8E37190FA81CAA82064505504);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0E91461B7ECDB6ABA60BFA77B9395C3A7DF66BE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	bool V_7 = false;
	Il2CppChar V_8 = 0x0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_13 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* V_21 = NULL;
	bool V_22 = false;
	bool V_23 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_24 = NULL;
	String_t* V_25 = NULL;
	String_t* V_26 = NULL;
	bool V_27 = false;
	bool V_28 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_29 = NULL;
	bool V_30 = false;
	bool V_31 = false;
	int32_t G_B21_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B47_0 = 0;
	{
		// if (string.IsNullOrEmpty(inputLine))
		String_t* L_0 = ___inputLine0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0426;
	}

IL_0011:
	{
		// if ("test".Equals(inputLine))
		String_t* L_3 = ___inputLine0;
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(_stringLiteral87F8ED9157125FFC4DA9E06A7B8011AD80A53FE1, L_3, NULL);
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0071;
		}
	}
	{
		// if (this.TestLength != this.testBytes.Length)
		int32_t L_6 = __this->___TestLength_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___testBytes_27;
		V_4 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// this.testBytes = new byte[this.TestLength];
		int32_t L_9 = __this->___TestLength_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___testBytes_27 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testBytes_27), (void*)L_10);
	}

IL_004d:
	{
		// this.chatClient.SendPrivateMessage(this.chatClient.AuthValues.UserId, this.testBytes, true);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_11 = __this->___chatClient_9;
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_12 = __this->___chatClient_9;
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_13;
		L_13 = ChatClient_get_AuthValues_mC9F4405E66924D1BA21DEDE10848199C24915476_inline(L_12, NULL);
		String_t* L_14;
		L_14 = AuthenticationValues_get_UserId_m61CDE1031F42330B0EDC0EC489A75E46E1DB6B79_inline(L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___testBytes_27;
		bool L_16;
		L_16 = ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36(L_11, L_14, (RuntimeObject*)L_15, (bool)1, NULL);
	}

IL_0071:
	{
		// bool doingPrivateChat = this.chatClient.PrivateChannels.ContainsKey(this.selectedChannelName);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_17 = __this->___chatClient_9;
		Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* L_18 = L_17->___PrivateChannels_16;
		String_t* L_19 = __this->___selectedChannelName_8;
		bool L_20;
		L_20 = Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643(L_18, L_19, Dictionary_2_ContainsKey_m43998BB50D68FD0B18E4445DED51EE80D6EF1643_RuntimeMethod_var);
		V_0 = L_20;
		// string privateChatTarget = string.Empty;
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_21;
		// if (doingPrivateChat)
		bool L_22 = V_0;
		V_5 = L_22;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_00b4;
		}
	}
	{
		// string[] splitNames = this.selectedChannelName.Split(new char[] { ':' });
		String_t* L_24 = __this->___selectedChannelName_8;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = L_25;
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27;
		L_27 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_24, L_26, NULL);
		V_6 = L_27;
		// privateChatTarget = splitNames[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = V_6;
		int32_t L_29 = 1;
		String_t* L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		V_1 = L_30;
	}

IL_00b4:
	{
		// if (inputLine[0].Equals('\\'))
		String_t* L_31 = ___inputLine0;
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_31, 0, NULL);
		V_8 = L_32;
		bool L_33;
		L_33 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&V_8), ((int32_t)92), NULL);
		V_7 = L_33;
		bool L_34 = V_7;
		if (!L_34)
		{
			goto IL_03f4;
		}
	}
	{
		// string[] tokens = inputLine.Split(new char[] {' '}, 2);
		String_t* L_35 = ___inputLine0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = L_36;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38;
		L_38 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_35, L_37, 2, NULL);
		V_9 = L_38;
		// if (tokens[0].Equals("\\help"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_9;
		int32_t L_40 = 0;
		String_t* L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		bool L_42;
		L_42 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_41, _stringLiteral118410E0D4EC44AA2FCD3142030E47DC49A64A18, NULL);
		V_10 = L_42;
		bool L_43 = V_10;
		if (!L_43)
		{
			goto IL_0101;
		}
	}
	{
		// this.PostHelpToCurrentChannel();
		ChatGui_PostHelpToCurrentChannel_m707B7D1D556EACB05EC03E08F91A8F1ECA3642E9(__this, NULL);
	}

IL_0101:
	{
		// if (tokens[0].Equals("\\state"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = V_9;
		int32_t L_45 = 0;
		String_t* L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		bool L_47;
		L_47 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_46, _stringLiteral5224DE4337BB6DBE135E6B5A4D01069A20195D5F, NULL);
		V_11 = L_47;
		bool L_48 = V_11;
		if (!L_48)
		{
			goto IL_01a6;
		}
	}
	{
		// int newState = 0;
		V_12 = 0;
		// List<string> messages = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_49 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_49, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_13 = L_49;
		// messages.Add ("i am state " + newState);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_50 = V_13;
		String_t* L_51;
		L_51 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_12), NULL);
		String_t* L_52;
		L_52 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral300E1362F835BABF048E880C8978EF4F91E3867D, L_51, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_50, L_52, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// string[] subtokens = tokens[1].Split(new char[] {' ', ','});
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = V_9;
		int32_t L_54 = 1;
		String_t* L_55 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_56 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_57 = L_56;
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = L_57;
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59;
		L_59 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_55, L_58, NULL);
		V_14 = L_59;
		// if (subtokens.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = V_14;
		V_15 = (bool)((!(((uint32_t)(((RuntimeArray*)L_60)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_61 = V_15;
		if (!L_61)
		{
			goto IL_0170;
		}
	}
	{
		// newState = int.Parse(subtokens[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = V_14;
		int32_t L_63 = 0;
		String_t* L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		int32_t L_65;
		L_65 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_64, NULL);
		V_12 = L_65;
	}

IL_0170:
	{
		// if (subtokens.Length > 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_66 = V_14;
		V_16 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_67 = V_16;
		if (!L_67)
		{
			goto IL_018b;
		}
	}
	{
		// messages.Add(subtokens[1]);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_68 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69 = V_14;
		int32_t L_70 = 1;
		String_t* L_71 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_68, L_71, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_018b:
	{
		// this.chatClient.SetOnlineStatus(newState,messages.ToArray()); // this is how you set your own state and (any) message
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_72 = __this->___chatClient_9;
		int32_t L_73 = V_12;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_74 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75;
		L_75 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_74, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		bool L_76;
		L_76 = ChatClient_SetOnlineStatus_mA793BD64EB3D9ED4E360835951BD0333424C918D(L_72, L_73, (RuntimeObject*)L_75, NULL);
		goto IL_03f1;
	}

IL_01a6:
	{
		// else if ((tokens[0].Equals("\\subscribe") || tokens[0].Equals("\\s")) && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_77 = V_9;
		int32_t L_78 = 0;
		String_t* L_79 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		bool L_80;
		L_80 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_79, _stringLiteral41540A8C28BA5EDA9B41BEBBF344C748063CDB90, NULL);
		if (L_80)
		{
			goto IL_01c6;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = V_9;
		int32_t L_82 = 0;
		String_t* L_83 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		bool L_84;
		L_84 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_83, _stringLiteralB3664676F50F442E724FBD9CC58E7261F51AA12F, NULL);
		if (!L_84)
		{
			goto IL_01d4;
		}
	}

IL_01c6:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = V_9;
		int32_t L_86 = 1;
		String_t* L_87 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		bool L_88;
		L_88 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_87, NULL);
		G_B21_0 = ((((int32_t)L_88) == ((int32_t)0))? 1 : 0);
		goto IL_01d5;
	}

IL_01d4:
	{
		G_B21_0 = 0;
	}

IL_01d5:
	{
		V_17 = (bool)G_B21_0;
		bool L_89 = V_17;
		if (!L_89)
		{
			goto IL_0207;
		}
	}
	{
		// this.chatClient.Subscribe(tokens[1].Split(new char[] {' ', ','}));
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_90 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_91 = V_9;
		int32_t L_92 = 1;
		String_t* L_93 = (L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_94 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_95 = L_94;
		(L_95)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_96 = L_95;
		(L_96)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_97;
		L_97 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_93, L_96, NULL);
		bool L_98;
		L_98 = ChatClient_Subscribe_mAB072792329A26749E58FED202C38A51691CD32C(L_90, L_97, NULL);
		goto IL_03f1;
	}

IL_0207:
	{
		// else if ((tokens[0].Equals("\\unsubscribe") || tokens[0].Equals("\\u")) && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_99 = V_9;
		int32_t L_100 = 0;
		String_t* L_101 = (L_99)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_100));
		bool L_102;
		L_102 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_101, _stringLiteralBE1823106E03B1A8E37190FA81CAA82064505504, NULL);
		if (L_102)
		{
			goto IL_0227;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_103 = V_9;
		int32_t L_104 = 0;
		String_t* L_105 = (L_103)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104));
		bool L_106;
		L_106 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_105, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		if (!L_106)
		{
			goto IL_0235;
		}
	}

IL_0227:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_107 = V_9;
		int32_t L_108 = 1;
		String_t* L_109 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		bool L_110;
		L_110 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_109, NULL);
		G_B27_0 = ((((int32_t)L_110) == ((int32_t)0))? 1 : 0);
		goto IL_0236;
	}

IL_0235:
	{
		G_B27_0 = 0;
	}

IL_0236:
	{
		V_18 = (bool)G_B27_0;
		bool L_111 = V_18;
		if (!L_111)
		{
			goto IL_0268;
		}
	}
	{
		// this.chatClient.Unsubscribe(tokens[1].Split(new char[] {' ', ','}));
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_112 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_113 = V_9;
		int32_t L_114 = 1;
		String_t* L_115 = (L_113)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_114));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_116 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_117 = L_116;
		(L_117)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_118 = L_117;
		(L_118)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_119;
		L_119 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_115, L_118, NULL);
		bool L_120;
		L_120 = ChatClient_Unsubscribe_m384652194B1073EDB7A8CA3DBA04EFB7A14F0B0A(L_112, L_119, NULL);
		goto IL_03f1;
	}

IL_0268:
	{
		// else if (tokens[0].Equals("\\clear"))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_121 = V_9;
		int32_t L_122 = 0;
		String_t* L_123 = (L_121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		bool L_124;
		L_124 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_123, _stringLiteralF0E91461B7ECDB6ABA60BFA77B9395C3A7DF66BE, NULL);
		V_19 = L_124;
		bool L_125 = V_19;
		if (!L_125)
		{
			goto IL_02cb;
		}
	}
	{
		// if (doingPrivateChat)
		bool L_126 = V_0;
		V_20 = L_126;
		bool L_127 = V_20;
		if (!L_127)
		{
			goto IL_029f;
		}
	}
	{
		// this.chatClient.PrivateChannels.Remove(this.selectedChannelName);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_128 = __this->___chatClient_9;
		Dictionary_2_tF780F25E987C96A8AEDC6E8A3F4AB29019427B9E* L_129 = L_128->___PrivateChannels_16;
		String_t* L_130 = __this->___selectedChannelName_8;
		bool L_131;
		L_131 = Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A(L_129, L_130, Dictionary_2_Remove_m952BC71E0A6D29F848B1C6D854B9183CE0A5E83A_RuntimeMethod_var);
		goto IL_02c5;
	}

IL_029f:
	{
		// if (this.chatClient.TryGetChannel(this.selectedChannelName, doingPrivateChat, out channel))
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_132 = __this->___chatClient_9;
		String_t* L_133 = __this->___selectedChannelName_8;
		bool L_134 = V_0;
		bool L_135;
		L_135 = ChatClient_TryGetChannel_m5C5176103E0A618C661F6351BEBE408F4A06D925(L_132, L_133, L_134, (&V_21), NULL);
		V_22 = L_135;
		bool L_136 = V_22;
		if (!L_136)
		{
			goto IL_02c4;
		}
	}
	{
		// channel.ClearMessages();
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_137 = V_21;
		ChatChannel_ClearMessages_m046EA236CDD967B62CDE383F2098BF4B6ED80FFE(L_137, NULL);
	}

IL_02c4:
	{
	}

IL_02c5:
	{
		goto IL_03f1;
	}

IL_02cb:
	{
		// else if (tokens[0].Equals("\\msg") && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_138 = V_9;
		int32_t L_139 = 0;
		String_t* L_140 = (L_138)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_139));
		bool L_141;
		L_141 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_140, _stringLiteralA7077659D26DAF185E52E2F2B77A29B3A2B818C1, NULL);
		if (!L_141)
		{
			goto IL_02e9;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_142 = V_9;
		int32_t L_143 = 1;
		String_t* L_144 = (L_142)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_143));
		bool L_145;
		L_145 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_144, NULL);
		G_B39_0 = ((((int32_t)L_145) == ((int32_t)0))? 1 : 0);
		goto IL_02ea;
	}

IL_02e9:
	{
		G_B39_0 = 0;
	}

IL_02ea:
	{
		V_23 = (bool)G_B39_0;
		bool L_146 = V_23;
		if (!L_146)
		{
			goto IL_0342;
		}
	}
	{
		// string[] subtokens = tokens[1].Split(new char[] {' ', ','}, 2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_147 = V_9;
		int32_t L_148 = 1;
		String_t* L_149 = (L_147)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_148));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_150 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_151 = L_150;
		(L_151)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_152 = L_151;
		(L_152)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_153;
		L_153 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_149, L_152, 2, NULL);
		V_24 = L_153;
		// if (subtokens.Length < 2) return;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_154 = V_24;
		V_27 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_154)->max_length))) < ((int32_t)2))? 1 : 0);
		bool L_155 = V_27;
		if (!L_155)
		{
			goto IL_031f;
		}
	}
	{
		// if (subtokens.Length < 2) return;
		goto IL_0426;
	}

IL_031f:
	{
		// string targetUser = subtokens[0];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_156 = V_24;
		int32_t L_157 = 0;
		String_t* L_158 = (L_156)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_157));
		V_25 = L_158;
		// string message = subtokens[1];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_159 = V_24;
		int32_t L_160 = 1;
		String_t* L_161 = (L_159)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_160));
		V_26 = L_161;
		// this.chatClient.SendPrivateMessage(targetUser, message);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_162 = __this->___chatClient_9;
		String_t* L_163 = V_25;
		String_t* L_164 = V_26;
		bool L_165;
		L_165 = ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36(L_162, L_163, L_164, (bool)0, NULL);
		goto IL_03f1;
	}

IL_0342:
	{
		// else if ((tokens[0].Equals("\\join") || tokens[0].Equals("\\j")) && !string.IsNullOrEmpty(tokens[1]))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_166 = V_9;
		int32_t L_167 = 0;
		String_t* L_168 = (L_166)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_167));
		bool L_169;
		L_169 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_168, _stringLiteral710F81E0EEB8CB48BACB8437BA5836E3B5349235, NULL);
		if (L_169)
		{
			goto IL_0362;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_170 = V_9;
		int32_t L_171 = 0;
		String_t* L_172 = (L_170)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_171));
		bool L_173;
		L_173 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_172, _stringLiteral471E512CD36A060B52A0EE28B8A6D4EEC00378C1, NULL);
		if (!L_173)
		{
			goto IL_0370;
		}
	}

IL_0362:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_174 = V_9;
		int32_t L_175 = 1;
		String_t* L_176 = (L_174)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_175));
		bool L_177;
		L_177 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_176, NULL);
		G_B47_0 = ((((int32_t)L_177) == ((int32_t)0))? 1 : 0);
		goto IL_0371;
	}

IL_0370:
	{
		G_B47_0 = 0;
	}

IL_0371:
	{
		V_28 = (bool)G_B47_0;
		bool L_178 = V_28;
		if (!L_178)
		{
			goto IL_03d6;
		}
	}
	{
		// string[] subtokens = tokens[1].Split(new char[] { ' ', ',' }, 2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_179 = V_9;
		int32_t L_180 = 1;
		String_t* L_181 = (L_179)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_180));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_182 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_183 = L_182;
		(L_183)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_184 = L_183;
		(L_184)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)44));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_185;
		L_185 = String_Split_m3C63FA89A52BE352B4E49DB5379F7AAD6ACCA0E8(L_181, L_184, 2, NULL);
		V_29 = L_185;
		// if (this.channelToggles.ContainsKey(subtokens[0]))
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_186 = __this->___channelToggles_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_187 = V_29;
		int32_t L_188 = 0;
		String_t* L_189 = (L_187)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_188));
		bool L_190;
		L_190 = Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7(L_186, L_189, Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		V_30 = L_190;
		bool L_191 = V_30;
		if (!L_191)
		{
			goto IL_03b8;
		}
	}
	{
		// this.ShowChannel(subtokens[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_192 = V_29;
		int32_t L_193 = 0;
		String_t* L_194 = (L_192)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_193));
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_194, NULL);
		goto IL_03d3;
	}

IL_03b8:
	{
		// this.chatClient.Subscribe(new string[] { subtokens[0] });
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_195 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_196 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_197 = L_196;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_198 = V_29;
		int32_t L_199 = 0;
		String_t* L_200 = (L_198)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_199));
		ArrayElementTypeCheck (L_197, L_200);
		(L_197)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_200);
		bool L_201;
		L_201 = ChatClient_Subscribe_mAB072792329A26749E58FED202C38A51691CD32C(L_195, L_197, NULL);
	}

IL_03d3:
	{
		goto IL_03f1;
	}

IL_03d6:
	{
		// Debug.Log("The command '" + tokens[0] + "' is invalid.");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_202 = V_9;
		int32_t L_203 = 0;
		String_t* L_204 = (L_202)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_203));
		String_t* L_205;
		L_205 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral5DF695F96AE9B00DBD2CB8F12E765C3159E02AF8, L_204, _stringLiteral693BD22F82043985FDDDDFCF5E8EC15BF8B82934, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_205, NULL);
	}

IL_03f1:
	{
		goto IL_0426;
	}

IL_03f4:
	{
		// if (doingPrivateChat)
		bool L_206 = V_0;
		V_31 = L_206;
		bool L_207 = V_31;
		if (!L_207)
		{
			goto IL_040f;
		}
	}
	{
		// this.chatClient.SendPrivateMessage(privateChatTarget, inputLine);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_208 = __this->___chatClient_9;
		String_t* L_209 = V_1;
		String_t* L_210 = ___inputLine0;
		bool L_211;
		L_211 = ChatClient_SendPrivateMessage_m736B989819416ADFFE92A9B4EB297FE6DC607E36(L_208, L_209, L_210, (bool)0, NULL);
		goto IL_0425;
	}

IL_040f:
	{
		// this.chatClient.PublishMessage(this.selectedChannelName, inputLine);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_212 = __this->___chatClient_9;
		String_t* L_213 = __this->___selectedChannelName_8;
		String_t* L_214 = ___inputLine0;
		bool L_215;
		L_215 = ChatClient_PublishMessage_mC0EA414F46817A9F77DF910D9094AF23B563A2D8(L_212, L_213, L_214, (bool)0, NULL);
	}

IL_0425:
	{
	}

IL_0426:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::PostHelpToCurrentChannel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_PostHelpToCurrentChannel_m707B7D1D556EACB05EC03E08F91A8F1ECA3642E9 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CurrentChannelText.text += HelpText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___CurrentChannelText_16;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = L_0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var);
		String_t* L_3 = ((ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields*)il2cpp_codegen_static_fields_for(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var))->___HelpText_25;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_DebugReturn_m7034DAA4D24C5AB19C4E3341D0CD896058DE710F (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, uint8_t ___level0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (level == ExitGames.Client.Photon.DebugLevel.ERROR)
		uint8_t L_0 = ___level0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.LogError(message);
		String_t* L_2 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_2, NULL);
		goto IL_0030;
	}

IL_0014:
	{
		// else if (level == ExitGames.Client.Photon.DebugLevel.WARNING)
		uint8_t L_3 = ___level0;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)2))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		// Debug.LogWarning(message);
		String_t* L_5 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_5, NULL);
		goto IL_0030;
	}

IL_0027:
	{
		// Debug.Log(message);
		String_t* L_6 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnConnected_mEA68753CDC2CAE5D5205A24D535E276CC17F9ED5 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18BA82A745D9E10EF604341BD4FA08FA6FBF82D5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// if (this.ChannelsToJoinOnConnect != null && this.ChannelsToJoinOnConnect.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___ChannelsToJoinOnConnect_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___ChannelsToJoinOnConnect_4;
		G_B3_0 = ((!(((uint32_t)(((RuntimeArray*)L_1)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 0;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// this.chatClient.Subscribe(this.ChannelsToJoinOnConnect, this.HistoryLengthToFetch);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_3 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___ChannelsToJoinOnConnect_4;
		int32_t L_5 = __this->___HistoryLengthToFetch_6;
		bool L_6;
		L_6 = ChatClient_Subscribe_m4A3A6D2D5703A1D8CF8ED0CACA717114062A6559(L_3, L_4, L_5, NULL);
	}

IL_0034:
	{
		// this.ConnectingLabel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___ConnectingLabel_12;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// this.UserIdText.text = "Connected as "+ this.UserName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___UserIdText_24;
		String_t* L_9;
		L_9 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral18BA82A745D9E10EF604341BD4FA08FA6FBF82D5, L_9, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// this.ChatPanel.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___ChatPanel_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// if (this.FriendsList!=null  && this.FriendsList.Length>0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___FriendsList_5;
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = __this->___FriendsList_5;
		G_B8_0 = ((!(((uint32_t)(((RuntimeArray*)L_14)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0084;
	}

IL_0083:
	{
		G_B8_0 = 0;
	}

IL_0084:
	{
		V_1 = (bool)G_B8_0;
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_00e8;
		}
	}
	{
		// this.chatClient.AddFriends(this.FriendsList); // Add some users to the server-list to get their status updates
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_16 = __this->___chatClient_9;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = __this->___FriendsList_5;
		bool L_18;
		L_18 = ChatClient_AddFriends_mC7A8A45F98205A68592ED3BE7A5FC88BF4EFB809(L_16, L_17, NULL);
		// foreach(string _friend in this.FriendsList)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = __this->___FriendsList_5;
		V_2 = L_19;
		V_3 = 0;
		goto IL_00e1;
	}

IL_00a7:
	{
		// foreach(string _friend in this.FriendsList)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = V_2;
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_4 = L_23;
		// if (this.FriendListUiItemtoInstantiate != null && _friend!= this.UserName)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___FriendListUiItemtoInstantiate_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00ca;
		}
	}
	{
		String_t* L_26 = V_4;
		String_t* L_27;
		L_27 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(__this, NULL);
		bool L_28;
		L_28 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_26, L_27, NULL);
		G_B13_0 = ((int32_t)(L_28));
		goto IL_00cb;
	}

IL_00ca:
	{
		G_B13_0 = 0;
	}

IL_00cb:
	{
		V_5 = (bool)G_B13_0;
		bool L_29 = V_5;
		if (!L_29)
		{
			goto IL_00dc;
		}
	}
	{
		// this.InstantiateFriendButton(_friend);
		String_t* L_30 = V_4;
		ChatGui_InstantiateFriendButton_m76FB5E6D0ACF60E58F8EE09C10998D49020B4CD1(__this, L_30, NULL);
	}

IL_00dc:
	{
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00e1:
	{
		// foreach(string _friend in this.FriendsList)
		int32_t L_32 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = V_2;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_00a7;
		}
	}
	{
	}

IL_00e8:
	{
		// if (this.FriendListUiItemtoInstantiate != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___FriendListUiItemtoInstantiate_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_34, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_35;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_0109;
		}
	}
	{
		// this.FriendListUiItemtoInstantiate.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___FriendListUiItemtoInstantiate_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
	}

IL_0109:
	{
		// this.chatClient.SetOnlineStatus(ChatUserStatus.Online); // You can set your online state (without a mesage).
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_38 = __this->___chatClient_9;
		bool L_39;
		L_39 = ChatClient_SetOnlineStatus_mEFE64834C76CBF45AB5B986DE9FE28A27D77E6CD(L_38, 2, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnDisconnected_m7E9FDB43A4AB5E24B2776DA8E451777DC70AC089 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DD04BE01CD12295B3C994FBEE871F305800521);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnDisconnected()");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral37DD04BE01CD12295B3C994FBEE871F305800521, NULL);
		// this.ConnectingLabel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___ConnectingLabel_12;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnChatStateChange(Photon.Chat.ChatState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnChatStateChange_mB6DE685B2B39B84A3568D59E86289DEE53A055AD (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatState_t051505084374FEB7E666EAF9C3D7A8DFBA5119D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.StateText.text = state.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___StateText_23;
		Il2CppFakeBox<int32_t> L_1(ChatState_t051505084374FEB7E666EAF9C3D7A8DFBA5119D6_il2cpp_TypeInfo_var, (&___state0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnSubscribed(System.String[],System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnSubscribed_mB6644A294FF6AE8EF9E7BE72B2DF72E3FA64C6E4 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___channels0, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___results1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B3E56E4708FA9AEED0B607268A8985B53DDF13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25D19D44AE79EC606DD671C43230AAA8F1766EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		// foreach (string channel in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___channels0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_003f;
	}

IL_0008:
	{
		// foreach (string channel in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// this.chatClient.PublishMessage(channel, "says 'hi'."); // you don't HAVE to send a msg on join but you could.
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_5 = __this->___chatClient_9;
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = ChatClient_PublishMessage_mC0EA414F46817A9F77DF910D9094AF23B563A2D8(L_5, L_6, _stringLiteral02B3E56E4708FA9AEED0B607268A8985B53DDF13, (bool)0, NULL);
		// if (this.ChannelToggleToInstantiate != null)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = __this->___ChannelToggleToInstantiate_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_003a;
		}
	}
	{
		// this.InstantiateChannelButton(channel);
		String_t* L_11 = V_2;
		ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401(__this, L_11, NULL);
	}

IL_003a:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_003f:
	{
		// foreach (string channel in channels)
		int32_t L_13 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		// Debug.Log("OnSubscribed: " + string.Join(", ", channels));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = ___channels0;
		String_t* L_16;
		L_16 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral25D19D44AE79EC606DD671C43230AAA8F1766EE6, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_17, NULL);
		// this.ShowChannel(channels[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = ___channels0;
		int32_t L_19 = 0;
		String_t* L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_20, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnSubscribed(System.String,System.String[],System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnSubscribed_mAE9A9BA2F388C116F4CBC4F7A2113BD23E06B0F8 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___users1, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___properties2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A36DF6525515FE29AEB2A52B49635745B5D8E56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnSubscribed: {0}, users.Count: {1} Channel-props: {2}.", channel, users.Length, properties.ToStringFull());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___users1;
		int32_t L_5 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_8 = ___properties2;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4(L_8, NULL);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral4A36DF6525515FE29AEB2A52B49635745B5D8E56, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::InstantiateChannelButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channelName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m6F51F2B8CB0DBD60C3C4AF683A4FE9D7698C7482_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF726A1EAC195324F63D384A1F2A33114361B699C);
		s_Il2CppMethodInitialized = true;
	}
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_0 = NULL;
	bool V_1 = false;
	{
		// if (this.channelToggles.ContainsKey(channelName))
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_0 = __this->___channelToggles_19;
		String_t* L_1 = ___channelName0;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7(L_0, L_1, Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.Log("Skipping creation for an existing channel toggle.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralF726A1EAC195324F63D384A1F2A33114361B699C, NULL);
		// return;
		goto IL_0070;
	}

IL_001f:
	{
		// Toggle cbtn = (Toggle)Instantiate(this.ChannelToggleToInstantiate);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->___ChannelToggleToInstantiate_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_5;
		L_5 = Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m6F51F2B8CB0DBD60C3C4AF683A4FE9D7698C7482(L_4, Object_Instantiate_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m6F51F2B8CB0DBD60C3C4AF683A4FE9D7698C7482_RuntimeMethod_var);
		V_0 = L_5;
		// cbtn.gameObject.SetActive(true);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// cbtn.GetComponentInChildren<ChannelSelector>().SetChannel(channelName);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = V_0;
		ChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07* L_9;
		L_9 = Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E(L_8, Component_GetComponentInChildren_TisChannelSelector_t34DD9A1ABC8F1C22F244BCC3EF9237A2772FCF07_mA5CB24AADA6105A0763F0F315A95A0B02EB5A05E_RuntimeMethod_var);
		String_t* L_10 = ___channelName0;
		ChannelSelector_SetChannel_m7E493B7588E65D501C7DA99C72BF36DAA565250E(L_9, L_10, NULL);
		// cbtn.transform.SetParent(this.ChannelToggleToInstantiate.transform.parent, false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_11 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_13 = __this->___ChannelToggleToInstantiate_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_14, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_12, L_15, (bool)0, NULL);
		// this.channelToggles.Add(channelName, cbtn);
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_16 = __this->___channelToggles_19;
		String_t* L_17 = ___channelName0;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_18 = V_0;
		Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C(L_16, L_17, L_18, Dictionary_2_Add_m7AC008F2D3DCBB5019F0BE948B7F9B77284CC86C_RuntimeMethod_var);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::InstantiateFriendButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_InstantiateFriendButton_m76FB5E6D0ACF60E58F8EE09C10998D49020B4CD1 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___friendId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* V_1 = NULL;
	{
		// GameObject fbtn = (GameObject)Instantiate(this.FriendListUiItemtoInstantiate);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___FriendListUiItemtoInstantiate_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_1;
		// fbtn.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_2, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// FriendItem  _friendItem =    fbtn.GetComponent<FriendItem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_5;
		L_5 = GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67(L_4, GameObject_GetComponent_TisFriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13_m0046B7B489607CF796C30CD83C51F1304D701F67_RuntimeMethod_var);
		V_1 = L_5;
		// _friendItem.FriendId = friendId;
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_6 = V_1;
		String_t* L_7 = ___friendId0;
		FriendItem_set_FriendId_m49FB0C8B978DD2E35361DE3ED6863257B82E4BB2(L_6, L_7, NULL);
		// fbtn.transform.SetParent(this.FriendListUiItemtoInstantiate.transform.parent, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___FriendListUiItemtoInstantiate_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_11, NULL);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_9, L_12, (bool)0, NULL);
		// this.friendListItemLUT[friendId] = _friendItem;
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_13 = __this->___friendListItemLUT_20;
		String_t* L_14 = ___friendId0;
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_15 = V_1;
		Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7(L_13, L_14, L_15, Dictionary_2_set_Item_mFDB00FBC9AEC3F5411BC17218005A2DDC01A4EE7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUnsubscribed(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUnsubscribed_mA0056721C7A125C3E1D4AC1A2143744BC162D905 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___channels0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA36D615703FF124A704E046433369D41AA86C957);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF901E66F2A148065254F4D6B82528054EF835B28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDB6E6D617A894CF6A5EC4195B7DBF4AFF000089);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	bool V_3 = false;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t G_B5_0 = 0;
	{
		// foreach (string channelName in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___channels0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_00f1;
	}

IL_000b:
	{
		// foreach (string channelName in channels)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (this.channelToggles.ContainsKey(channelName))
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_5 = __this->___channelToggles_19;
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7(L_5, L_6, Dictionary_2_ContainsKey_m59078337ADC52ADAD50A20AEED7D3182E8A397C7_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_00d4;
		}
	}
	{
		// Toggle t = this.channelToggles[channelName];
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_9 = __this->___channelToggles_19;
		String_t* L_10 = V_2;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_11;
		L_11 = Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B(L_9, L_10, Dictionary_2_get_Item_m65B54189C1D9C6B6BD1BABB5755C0647EE39C89B_RuntimeMethod_var);
		V_4 = L_11;
		// Destroy(t.gameObject);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_12 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_13, NULL);
		// this.channelToggles.Remove(channelName);
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_14 = __this->___channelToggles_19;
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B(L_14, L_15, Dictionary_2_Remove_m4F6FEFABCBACA9B9B3DED9BFAB8BDA9B47FA678B_RuntimeMethod_var);
		// Debug.Log("Unsubscribed from channel '" + channelName + "'.");
		String_t* L_17 = V_2;
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFDB6E6D617A894CF6A5EC4195B7DBF4AFF000089, L_17, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_18, NULL);
		// if (channelName == this.selectedChannelName && this.channelToggles.Count > 0)
		String_t* L_19 = V_2;
		String_t* L_20 = __this->___selectedChannelName_8;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_0080;
		}
	}
	{
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_22 = __this->___channelToggles_19;
		int32_t L_23;
		L_23 = Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC(L_22, Dictionary_2_get_Count_mFCFB38659217BF06006B6BC2FFD16389EF2A44EC_RuntimeMethod_var);
		G_B5_0 = ((((int32_t)L_23) > ((int32_t)0))? 1 : 0);
		goto IL_0081;
	}

IL_0080:
	{
		G_B5_0 = 0;
	}

IL_0081:
	{
		V_5 = (bool)G_B5_0;
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00d1;
		}
	}
	{
		// IEnumerator<KeyValuePair<string, Toggle>> firstEntry = this.channelToggles.GetEnumerator();
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_25 = __this->___channelToggles_19;
		Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 L_26;
		L_26 = Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5(L_25, Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 L_27 = L_26;
		RuntimeObject* L_28 = Box(Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08_il2cpp_TypeInfo_var, &L_27);
		V_6 = (RuntimeObject*)L_28;
		// firstEntry.MoveNext();
		RuntimeObject* L_29 = V_6;
		bool L_30;
		L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_29);
		// this.ShowChannel(firstEntry.Current.Key);
		RuntimeObject* L_31 = V_6;
		KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB L_32;
		L_32 = InterfaceFuncInvoker0< KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>>::get_Current() */, IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var, L_31);
		V_7 = L_32;
		String_t* L_33;
		L_33 = KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_inline((&V_7), KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_33, NULL);
		// firstEntry.Current.Value.isOn = true;
		RuntimeObject* L_34 = V_6;
		KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB L_35;
		L_35 = InterfaceFuncInvoker0< KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,UnityEngine.UI.Toggle>>::get_Current() */, IEnumerator_1_t4E0F3B7704316E8AB75E2D31CCAA4790C47642AC_il2cpp_TypeInfo_var, L_34);
		V_7 = L_35;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_36;
		L_36 = KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_inline((&V_7), KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_36, (bool)1, NULL);
	}

IL_00d1:
	{
		goto IL_00ec;
	}

IL_00d4:
	{
		// Debug.Log("Can't unsubscribe from channel '" + channelName + "' because you are currently not subscribed to it.");
		String_t* L_37 = V_2;
		String_t* L_38;
		L_38 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralA36D615703FF124A704E046433369D41AA86C957, L_37, _stringLiteralF901E66F2A148065254F4D6B82528054EF835B28, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_38, NULL);
	}

IL_00ec:
	{
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00f1:
	{
		// foreach (string channelName in channels)
		int32_t L_40 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = V_0;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnGetMessages(System.String,System.String[],System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnGetMessages_m9115E1E3EF6E1CC79DBF18C66E4990C33A545E35 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channelName0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___senders1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___messages2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (channelName.Equals(this.selectedChannelName))
		String_t* L_0 = ___channelName0;
		String_t* L_1 = __this->___selectedChannelName_8;
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// this.ShowChannel(this.selectedChannelName);
		String_t* L_4 = __this->___selectedChannelName_8;
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_4, NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnPrivateMessage(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnPrivateMessage_mE602C58AC56D281B29F1E19F5DFC98A8E480177A (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___sender0, RuntimeObject* ___message1, String_t* ___channelName2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB61F8E5C6788E7093D4F1DE579EBD7C233090B94);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// this.InstantiateChannelButton(channelName);
		String_t* L_0 = ___channelName2;
		ChatGui_InstantiateChannelButton_m4C6135B30B8F5C9BDF9AE1753E8AFE63B791D401(__this, L_0, NULL);
		// byte[] msgBytes = message as byte[];
		RuntimeObject* L_1 = ___message1;
		V_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		// if (msgBytes != null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.Log("Message with byte[].Length: "+ msgBytes.Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		V_2 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB61F8E5C6788E7093D4F1DE579EBD7C233090B94, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
	}

IL_0035:
	{
		// if (this.selectedChannelName.Equals(channelName))
		String_t* L_7 = __this->___selectedChannelName_8;
		String_t* L_8 = ___channelName2;
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_7, L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		// this.ShowChannel(channelName);
		String_t* L_11 = ___channelName2;
		ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211(__this, L_11, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnStatusUpdate_mEABCBD812C9D9AF133E285BAE9E83994A726E0A4 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___user0, int32_t ___status1, bool ___gotMessage2, RuntimeObject* ___message3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral187DC7C8E0EDA1DE1ED6DF6A69E16E1804984856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE149C7622A20B800C0F221FF927D6238C6DD62);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* V_1 = NULL;
	bool V_2 = false;
	{
		// Debug.LogWarning("status: " + string.Format("{0} is {1}. Msg:{2}", user, status, message));
		String_t* L_0 = ___user0;
		int32_t L_1 = ___status1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		RuntimeObject* L_4 = ___message3;
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteral187DC7C8E0EDA1DE1ED6DF6A69E16E1804984856, L_0, L_3, L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCCE149C7622A20B800C0F221FF927D6238C6DD62, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_6, NULL);
		// if (this.friendListItemLUT.ContainsKey(user))
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_7 = __this->___friendListItemLUT_20;
		String_t* L_8 = ___user0;
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E(L_7, L_8, Dictionary_2_ContainsKey_mFC86DBD8CA71ACF273A1F7FB6CD2DAD53449653E_RuntimeMethod_var);
		V_0 = L_9;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// FriendItem _friendItem = this.friendListItemLUT[user];
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_11 = __this->___friendListItemLUT_20;
		String_t* L_12 = ___user0;
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_13;
		L_13 = Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC(L_11, L_12, Dictionary_2_get_Item_mD91F54F913AE58A20D0D60800D7E13B3A81BCDBC_RuntimeMethod_var);
		V_1 = L_13;
		// if ( _friendItem!=null) _friendItem.OnFriendStatusUpdate(status,gotMessage,message);
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0058;
		}
	}
	{
		// if ( _friendItem!=null) _friendItem.OnFriendStatusUpdate(status,gotMessage,message);
		FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* L_17 = V_1;
		int32_t L_18 = ___status1;
		bool L_19 = ___gotMessage2;
		RuntimeObject* L_20 = ___message3;
		FriendItem_OnFriendStatusUpdate_mC336B386CEABD37A2BA65254CFE2C5125263E4CD(L_17, L_18, L_19, L_20, NULL);
	}

IL_0058:
	{
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUserSubscribed(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUserSubscribed_m4D1CE2135AEECD1C76069F86FFCD0BD9FDAA2721 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, String_t* ___user1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93CD26FD25F534D18F21EBB330F02E0264AC3C8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnUserSubscribed: channel=\"{0}\" userId=\"{1}\"", channel, user);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___user1;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral93CD26FD25F534D18F21EBB330F02E0264AC3C8C, L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUserUnsubscribed(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUserUnsubscribed_m761BB5EFEE4CBCFFC651343C4AEA1C01DFCADC94 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, String_t* ___user1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31775E5380AC9751F2E61EA3DD24D9243DE804B1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnUserUnsubscribed: channel=\"{0}\" userId=\"{1}\"", channel, user);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___user1;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral31775E5380AC9751F2E61EA3DD24D9243DE804B1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnChannelPropertiesChanged(System.String,System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnChannelPropertiesChanged_m69468897BD50BC64B49B64DB314BCC0BB6D253DE (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, String_t* ___userId1, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___properties2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E1D0B7FC6AE1E4699086BAFDFD167B73A71BF62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnChannelPropertiesChanged: {0} by {1}. Props: {2}.", channel, userId, Extensions.ToStringFull(properties));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___userId1;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_6 = ___properties2;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4(L_6, NULL);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral2E1D0B7FC6AE1E4699086BAFDFD167B73A71BF62, L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnUserPropertiesChanged(System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnUserPropertiesChanged_mA9630BFDC595612F70BA891940B4B1FF350AD215 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, String_t* ___targetUserId1, String_t* ___senderUserId2, Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ___properties3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCCA328F77D050FE98C954ABC27B722687F2666D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnUserPropertiesChanged: (channel:{0} user:{1}) by {2}. Props: {3}.", channel, targetUserId, senderUserId, Extensions.ToStringFull(properties));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___targetUserId1;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___senderUserId2;
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* L_8 = ___properties3;
		il2cpp_codegen_runtime_class_init_inline(Extensions_t7A83CB812F88E252E8AEFBDB2325836C473E0BA7_il2cpp_TypeInfo_var);
		String_t* L_9;
		L_9 = Extensions_ToStringFull_m7D8AFCB5DE3085C237E3DE4D43209F74C60198C4(L_8, NULL);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralFCCA328F77D050FE98C954ABC27B722687F2666D, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OnErrorInfo(System.String,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OnErrorInfo_m775944C548C91A8C1461451BA2ED1A925A63F0B8 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channel0, String_t* ___error1, RuntimeObject* ___data2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE01396087B968D8089649181D62173B42DA52091);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("OnErrorInfo for channel {0}. Error: {1} Data: {2}", channel, error, data);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = ___channel0;
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = ___error1;
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		RuntimeObject* L_6 = ___data2;
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralE01396087B968D8089649181D62173B42DA52091, L_5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::AddMessageToSelectedChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_AddMessageToSelectedChannel_m7765D7820D47185D32243EB135854241B358E4CE (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E38E2B4F159337570AD4E9656D4BDAF8B0EBCF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB153A4F640C1BF005F7E30CECC4A84EB08150A);
		s_Il2CppMethodInitialized = true;
	}
	ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// ChatChannel channel = null;
		V_0 = (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1*)NULL;
		// bool found = this.chatClient.TryGetChannel(this.selectedChannelName, out channel);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_0 = __this->___chatClient_9;
		String_t* L_1 = __this->___selectedChannelName_8;
		bool L_2;
		L_2 = ChatClient_TryGetChannel_m596F2DCA70B7C83E7E82B92B341DDEE9A5864C0A(L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		// if (!found)
		bool L_3 = V_1;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// Debug.Log("AddMessageToSelectedChannel failed to find channel: " + this.selectedChannelName);
		String_t* L_5 = __this->___selectedChannelName_8;
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4E38E2B4F159337570AD4E9656D4BDAF8B0EBCF1, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// return;
		goto IL_0050;
	}

IL_0038:
	{
		// if (channel != null)
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_7 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		// channel.Add("Bot", msg,0); //TODO: how to use msgID?
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_9 = V_0;
		String_t* L_10 = ___msg0;
		ChatChannel_Add_m22E0343342399B1C9130CCDD12325EAA80DA9440(L_9, _stringLiteralDEB153A4F640C1BF005F7E30CECC4A84EB08150A, L_10, 0, NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::ShowChannel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_ShowChannel_m9AB1B8EFCEA804119F7891EB21AA299D9EE9C211 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___channelName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60D25464A0D2697B9DE85A8CE7C6E223B98C82E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF92D1197FE7F9C3266589153D13221067FA7BB4A);
		s_Il2CppMethodInitialized = true;
	}
	ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB V_5;
	memset((&V_5), 0, sizeof(V_5));
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B8_0 = NULL;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B9_1 = NULL;
	{
		// if (string.IsNullOrEmpty(channelName))
		String_t* L_0 = ___channelName0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_00c5;
	}

IL_0011:
	{
		// ChatChannel channel = null;
		V_0 = (ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1*)NULL;
		// bool found = this.chatClient.TryGetChannel(channelName, out channel);
		ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* L_3 = __this->___chatClient_9;
		String_t* L_4 = ___channelName0;
		bool L_5;
		L_5 = ChatClient_TryGetChannel_m596F2DCA70B7C83E7E82B92B341DDEE9A5864C0A(L_3, L_4, (&V_0), NULL);
		V_1 = L_5;
		// if (!found)
		bool L_6 = V_1;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// Debug.Log("ShowChannel failed to find channel: " + channelName);
		String_t* L_8 = ___channelName0;
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral60D25464A0D2697B9DE85A8CE7C6E223B98C82E6, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// return;
		goto IL_00c5;
	}

IL_0041:
	{
		// this.selectedChannelName = channelName;
		String_t* L_10 = ___channelName0;
		__this->___selectedChannelName_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedChannelName_8), (void*)L_10);
		// this.CurrentChannelText.text = channel.ToStringMessages();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___CurrentChannelText_16;
		ChatChannel_t8D4CB0B315BC5C6DCCE4C6BD547D9E2EAEB66CC1* L_12 = V_0;
		String_t* L_13;
		L_13 = ChatChannel_ToStringMessages_mB286B6E5F35FAF7A5F4F4EE259BB64207F34FE18(L_12, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_13);
		// Debug.Log("ShowChannel: " + this.selectedChannelName);
		String_t* L_14 = __this->___selectedChannelName_8;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF92D1197FE7F9C3266589153D13221067FA7BB4A, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
		// foreach (KeyValuePair<string, Toggle> pair in this.channelToggles)
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_16 = __this->___channelToggles_19;
		Enumerator_tAFEE8A4F172FB9538B933346DAA2B6D97F6A3F08 L_17;
		L_17 = Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5(L_16, Dictionary_2_GetEnumerator_m2D3C2B49D6B541197F1E118FE7D6F37AF46A08C5_RuntimeMethod_var);
		V_4 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b6:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD((&V_4), Enumerator_Dispose_m06019984AEF249BE743B261895FBDFCF3DE314FD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ab_1;
			}

IL_0080_1:
			{
				// foreach (KeyValuePair<string, Toggle> pair in this.channelToggles)
				KeyValuePair_2_t15F21A357B3CF4F5177AE16272EFD116964D7EEB L_18;
				L_18 = Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_inline((&V_4), Enumerator_get_Current_mF6F3ECC910925263DF2A5278F4F56F520C1507A6_RuntimeMethod_var);
				V_5 = L_18;
				// pair.Value.isOn = pair.Key == channelName ? true : false;
				Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_19;
				L_19 = KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_inline((&V_5), KeyValuePair_2_get_Value_m8C266329612FA91F72F7F4D9C3137D4448CD5E1D_RuntimeMethod_var);
				String_t* L_20;
				L_20 = KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_inline((&V_5), KeyValuePair_2_get_Key_m9A4008D157E7FA3D568FE444C0D926C78B1645B2_RuntimeMethod_var);
				String_t* L_21 = ___channelName0;
				bool L_22;
				L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, L_21, NULL);
				G_B7_0 = L_19;
				if (L_22)
				{
					G_B8_0 = L_19;
					goto IL_00a3_1;
				}
			}
			{
				G_B9_0 = 0;
				G_B9_1 = G_B7_0;
				goto IL_00a4_1;
			}

IL_00a3_1:
			{
				G_B9_0 = 1;
				G_B9_1 = G_B8_0;
			}

IL_00a4_1:
			{
				Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(G_B9_1, (bool)G_B9_0, NULL);
			}

IL_00ab_1:
			{
				// foreach (KeyValuePair<string, Toggle> pair in this.channelToggles)
				bool L_23;
				L_23 = Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9((&V_4), Enumerator_MoveNext_m950509CD692BEAA25841830AE3528B713C36DAC9_RuntimeMethod_var);
				if (L_23)
				{
					goto IL_0080_1;
				}
			}
			{
				goto IL_00c5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::OpenDashboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui_OpenDashboard_m331E5792848FBF938E160C747A9C5D3848E9A265 (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral011D7D9D78DC2A4EA6437F75F6AE9C5B1D038EC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://dashboard.photonengine.com");
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(_stringLiteral011D7D9D78DC2A4EA6437F75F6AE9C5B1D038EC5, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui__ctor_m9914600AC511E7817210F48145D05D3DBDD56B2C (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Dictionary<string, Toggle> channelToggles = new Dictionary<string, Toggle>();
		Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48* L_0 = (Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48*)il2cpp_codegen_object_new(Dictionary_2_tB5C506327C00DCF5D204A9E25318949AEBE4DC48_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F(L_0, Dictionary_2__ctor_m1951C457B495EAFA02160F793A6277161FDCEA3F_RuntimeMethod_var);
		__this->___channelToggles_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___channelToggles_19), (void*)L_0);
		// private readonly Dictionary<string,FriendItem> friendListItemLUT =  new Dictionary<string, FriendItem>();
		Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E* L_1 = (Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E*)il2cpp_codegen_object_new(Dictionary_2_t81CDBCC3EE792C8E1D91B3B813023F3869819C2E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD(L_1, Dictionary_2__ctor_m05968164AFC47B4DAC2545E4FAC531C51F66C7FD_RuntimeMethod_var);
		__this->___friendListItemLUT_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___friendListItemLUT_20), (void*)L_1);
		// public bool ShowState = true;
		__this->___ShowState_21 = (bool)1;
		// public int TestLength = 2048;
		__this->___TestLength_26 = ((int32_t)2048);
		// private byte[] testBytes = new byte[2048];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		__this->___testBytes_27 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___testBytes_27), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Photon.Chat.Demo.ChatGui::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChatGui__cctor_m9620D5FA4E83914ED07CE310AE0DCF902FD51E62 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static string HelpText = "\n    -- HELP --\n" +
		//     "To subscribe to channel(s) (channelnames are case sensitive) :  \n" +
		//         "\t<color=#E07B00>\\subscribe</color> <color=green><list of channelnames></color>\n" +
		//         "\tor\n" +
		//         "\t<color=#E07B00>\\s</color> <color=green><list of channelnames></color>\n" +
		//         "\n" +
		//         "To leave channel(s):\n" +
		//         "\t<color=#E07B00>\\unsubscribe</color> <color=green><list of channelnames></color>\n" +
		//         "\tor\n" +
		//         "\t<color=#E07B00>\\u</color> <color=green><list of channelnames></color>\n" +
		//         "\n" +
		//         "To switch the active channel\n" +
		//         "\t<color=#E07B00>\\join</color> <color=green><channelname></color>\n" +
		//         "\tor\n" +
		//         "\t<color=#E07B00>\\j</color> <color=green><channelname></color>\n" +
		//         "\n" +
		//         "To send a private message: (username are case sensitive)\n" +
		//         "\t\\<color=#E07B00>msg</color> <color=green><username></color> <color=green><message></color>\n" +
		//         "\n" +
		//         "To change status:\n" +
		//         "\t\\<color=#E07B00>state</color> <color=green><stateIndex></color> <color=green><message></color>\n" +
		//         "<color=green>0</color> = Offline " +
		//         "<color=green>1</color> = Invisible " +
		//         "<color=green>2</color> = Online " +
		//         "<color=green>3</color> = Away \n" +
		//         "<color=green>4</color> = Do not disturb " +
		//         "<color=green>5</color> = Looking For Group " +
		//         "<color=green>6</color> = Playing" +
		//         "\n\n" +
		//         "To clear the current chat tab (private chats get closed):\n" +
		//         "\t<color=#E07B00>\\clear</color>";
		((ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields*)il2cpp_codegen_static_fields_for(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var))->___HelpText_25 = _stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17;
		Il2CppCodeGenWriteBarrier((void**)(&((ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_StaticFields*)il2cpp_codegen_static_fields_for(ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_il2cpp_TypeInfo_var))->___HelpText_25), (void*)_stringLiteral2C91CEEB5E6ACD712F102DE9EE44CB907B557A17);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.Demo.FriendItem::set_FriendId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_set_FriendId_m49FB0C8B978DD2E35361DE3ED6863257B82E4BB2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { this.NameLabel.text = value; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___NameLabel_4;
		String_t* L_1 = ___value0;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// set { this.NameLabel.text = value; }
		return;
	}
}
// System.String Photon.Chat.Demo.FriendItem::get_FriendId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FriendItem_get_FriendId_mA0037DB139EEC1F38A1B2E31707128111FE5DCD4 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.NameLabel.text; }
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___NameLabel_4;
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.NameLabel.text; }
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_Awake_m8BCC676379DCE1B967BC706C9247541A424F3C42 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.Health.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___Health_6;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::OnFriendStatusUpdate(System.Int32,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem_OnFriendStatusUpdate_mC336B386CEABD37A2BA65254CFE2C5125263E4CD (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, int32_t ___status0, bool ___gotMessage1, RuntimeObject* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF903ABCF81417315694F4593925EE527D6C1258B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_6 = NULL;
	bool V_7 = false;
	int32_t G_B14_0 = 0;
	{
		// switch (status)
		int32_t L_0 = ___status0;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_2, 1)))
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_003f;
			}
			case 4:
			{
				goto IL_0047;
			}
			case 5:
			{
				goto IL_004f;
			}
		}
	}
	{
		goto IL_0057;
	}

IL_0027:
	{
		// _status = "Invisible";
		V_0 = _stringLiteralE0F902889DF6EC5CFE211AF8D1697BB12234DA66;
		// break;
		goto IL_005f;
	}

IL_002f:
	{
		// _status = "Online";
		V_0 = _stringLiteralF903ABCF81417315694F4593925EE527D6C1258B;
		// break;
		goto IL_005f;
	}

IL_0037:
	{
		// _status = "Away";
		V_0 = _stringLiteral1729AC1B7F3D22492501BEF772B5BFDEBCF05B70;
		// break;
		goto IL_005f;
	}

IL_003f:
	{
		// _status = "Do not disturb";
		V_0 = _stringLiteral86C677CA2B54E7E4E81E71A6AF30E985B484A0AF;
		// break;
		goto IL_005f;
	}

IL_0047:
	{
		// _status = "Looking For Game/Group";
		V_0 = _stringLiteralFB0DA295360002E063FF9B079B5E7DC3DB313083;
		// break;
		goto IL_005f;
	}

IL_004f:
	{
		// _status = "Playing";
		V_0 = _stringLiteral38DB4AF6DBE7A8DBCC3821BE5605A5BB55BCB3D4;
		// break;
		goto IL_005f;
	}

IL_0057:
	{
		// _status = "Offline";
		V_0 = _stringLiteral77F781BE1FA4EBA75ACC2DC942D3D87126A499DB;
		// break;
		goto IL_005f;
	}

IL_005f:
	{
		// this.StatusLabel.text = _status;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___StatusLabel_5;
		String_t* L_4 = V_0;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// if (gotMessage)
		bool L_5 = ___gotMessage1;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_00c5;
		}
	}
	{
		// string _health = string.Empty;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_4 = L_7;
		// if (message != null)
		RuntimeObject* L_8 = ___message2;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_00b6;
		}
	}
	{
		// string[] _messages = message as string[];
		RuntimeObject* L_10 = ___message2;
		V_6 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)IsInst((RuntimeObject*)L_10, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var));
		// if (_messages != null && _messages.Length >= 2)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_6;
		if (!L_11)
		{
			goto IL_009c;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_6;
		G_B14_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B14_0 = 0;
	}

IL_009d:
	{
		V_7 = (bool)G_B14_0;
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_00b5;
		}
	}
	{
		// _health = (string)_messages[1] + "%";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_6;
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		V_4 = L_17;
	}

IL_00b5:
	{
	}

IL_00b6:
	{
		// this.Health.text = _health;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___Health_6;
		String_t* L_19 = V_4;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_19);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.FriendItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FriendItem__ctor_mEF78B22B2415C36B99555074B166E333AAB60EC2 (FriendItem_t0E2F01000D15F090A4AD9582AE63599D97399F13* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Chat.Demo.IgnoreUiRaycastWhenInactive::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IgnoreUiRaycastWhenInactive_IsRaycastLocationValid_m47CCC76507FA3811C9E41548B12A0E85830F13C9 (IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___eventCamera1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return this.gameObject.activeInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Chat.Demo.IgnoreUiRaycastWhenInactive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreUiRaycastWhenInactive__ctor_m6BFAC886ACA5E3CB2403424B3F1D53BD695F833E (IgnoreUiRaycastWhenInactive_t4DD606784A41379E617458D4FF2D041690E7BAEF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.Demo.NamePickGui::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_Start_m10935A8B8CF57FC8505F0178067BA92426555E8B (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// this.chatNewComponent = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		__this->___chatNewComponent_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___chatNewComponent_5), (void*)L_0);
		// string prefsName = PlayerPrefs.GetString(UserNamePlayerPref);
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A, NULL);
		V_0 = L_1;
		// if (!string.IsNullOrEmpty(prefsName))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// this.idInput.text = prefsName;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->___idInput_6;
		String_t* L_6 = V_0;
		InputField_set_text_m28B1C806BBCAC44F3ACCDC3B550509CA0C7D257F(L_5, L_6, NULL);
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::EndEditOnEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_EndEditOnEnter_m12622E58FF59DA84D6523AC12874DA9863199C9A (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Input.GetKey(KeyCode.Return) || Input.GetKey(KeyCode.KeypadEnter))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)13), NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)271), NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// this.StartChat();
		NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::StartChat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui_StartChat_m93395F4741F31632667938D7733EB30C48E04750 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A);
		s_Il2CppMethodInitialized = true;
	}
	ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* V_0 = NULL;
	{
		// ChatGui chatNewComponent = FindObjectOfType<ChatGui>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_0;
		L_0 = Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30(Object_FindObjectOfType_TisChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25_mB32E8E240D1D42FE5FE71CCA05DD5906B4D56F30_RuntimeMethod_var);
		V_0 = L_0;
		// chatNewComponent.UserName = this.idInput.text.Trim();
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_1 = V_0;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_2 = __this->___idInput_6;
		String_t* L_3;
		L_3 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704(L_2, NULL);
		String_t* L_4;
		L_4 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_3, NULL);
		ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline(L_1, L_4, NULL);
		// chatNewComponent.Connect();
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_5 = V_0;
		ChatGui_Connect_m073A7E59E9008C4D708663A6902A6C19882540E3(L_5, NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// PlayerPrefs.SetString(UserNamePlayerPref, chatNewComponent.UserName);
		ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* L_6 = V_0;
		String_t* L_7;
		L_7 = ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline(L_6, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral88A4E835FC47194C325AC1B4075B94D15767248A, L_7, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.Demo.NamePickGui::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamePickGui__ctor_mFF3AFAF1D13B70F7612ADEC741FCC056B2774EB5 (NamePickGui_t8C0368B20268692BC4311641FC79610CCD7FB56B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.UtilityScripts.EventSystemSpawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemSpawner_OnEnable_mE862EC0D6C69AA07F7D83951631687391609E80B (EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F);
		s_Il2CppMethodInitialized = true;
	}
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* V_0 = NULL;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// EventSystem sceneEventSystem = FindObjectOfType<EventSystem>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4(Object_FindObjectOfType_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m35D4A88CE80EF52117B3256977C521D1E9F2E7E4_RuntimeMethod_var);
		V_0 = L_0;
		// if (sceneEventSystem == null)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// GameObject eventSystem = new GameObject("EventSystem");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_4, _stringLiteral28B7EDF9E324F8C7C00DCE82B9611E6089187E1F, NULL);
		V_2 = L_4;
		// eventSystem.AddComponent<EventSystem>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_6;
		L_6 = GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8(L_5, GameObject_AddComponent_TisEventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_m203F7DE96857384187AB285095F071B84400B9B8_RuntimeMethod_var);
		// eventSystem.AddComponent<StandaloneInputModule>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530* L_8;
		L_8 = GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D(L_7, GameObject_AddComponent_TisStandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530_m6BC8B0220453EC5DA3567FF1CB38951769B8277D_RuntimeMethod_var);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.EventSystemSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSystemSpawner__ctor_mF241B0B2DADE23009B467FDE4D04A33457D02822 (EventSystemSpawner_t823C33A21E4332F5D407768DB424BBDB0D17C77D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.UtilityScripts.OnStartDelete::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDelete_Start_m9B7CA6E5BF48F098BD682241471AC10B5A7DE583 (OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.OnStartDelete::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStartDelete__ctor_m0680CFA8D0C53535AB1CAF48FB605524BF8BBA75 (OnStartDelete_tAFE941550E5B7D4F434D3BB2D00C0D93610BDC11* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_Awake_m9486D72B1C4AAF16C5E7A54D449DA6A9F7042A20 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnEnable_mDF3ACAD5152C4158E63C0CB55434E0B8F58C64DB (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NormalColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnDisable_m6030F868A53F2ACA849BCFF3194B856D0EEED602 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NormalColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerEnter_m060ADDFAB4FE7E2ADDA013C785097C30E32D2940 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_0 = __this->___Selectable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2 = __this->___Selectable_5;
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// _text.color = HoverColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___HoverColor_7;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition_OnPointerExit_mC89333A759DCAEF054B364A0CF05AAAF73A1E06C (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (Selectable == null || Selectable.IsInteractable()) {
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_0 = __this->___Selectable_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2 = __this->___Selectable_5;
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, L_2);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 1;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// _text.color = NormalColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->____text_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___NormalColor_6;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextButtonTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextButtonTransition__ctor_m1AC221F8BF501F4B4912898B5D5A1EAD0D2B40E9 (TextButtonTransition_tBA8FE06DFC216C9FAD99778854F5D823595E6B10* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalColor= Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___NormalColor_6 = L_0;
		// public Color HoverColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___HoverColor_7 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnEnable_mEB5D1BAE23AB550072188EE81FBF5E0CB1FA003C (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _text = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->____text_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____text_5), (void*)L_0);
		// OnValueChanged (toggle.isOn);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_1, NULL);
		TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA(__this, L_2, NULL);
		// toggle.onValueChanged.AddListener(OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___toggle_4;
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_4 = L_3->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_5 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_5, __this, (intptr_t)((void*)TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var), NULL);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_4, L_5, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnDisable_m017F8825457A0A4400681B78CE1D1DF62999662D (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// toggle.onValueChanged.RemoveListener(OnValueChanged);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggle_4;
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA_RuntimeMethod_var), NULL);
		UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130(L_1, L_2, UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnValueChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnValueChanged_m5938ADE42C6A8502F7D225F42C9E8A6DD15833BA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, bool ___isOn0, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B7_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_0 = NULL;
	{
		// _text.color = isOn? (isHover?HoverOnColor:HoverOnColor) : (isHover?NormalOffColor:NormalOffColor) ;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		bool L_1 = ___isOn0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B5_0 = L_0;
			goto IL_0022;
		}
	}
	{
		bool L_2 = __this->___isHover_10;
		G_B2_0 = G_B1_0;
		if (L_2)
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B4_0 = L_3;
		G_B4_1 = G_B2_0;
		goto IL_0020;
	}

IL_001a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOffColor_7;
		G_B4_0 = L_4;
		G_B4_1 = G_B3_0;
	}

IL_0020:
	{
		G_B8_0 = G_B4_0;
		G_B8_1 = G_B4_1;
		goto IL_0038;
	}

IL_0022:
	{
		bool L_5 = __this->___isHover_10;
		G_B6_0 = G_B5_0;
		if (L_5)
		{
			G_B7_0 = G_B5_0;
			goto IL_0032;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = __this->___HoverOnColor_8;
		G_B8_0 = L_6;
		G_B8_1 = G_B6_0;
		goto IL_0038;
	}

IL_0032:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = __this->___HoverOnColor_8;
		G_B8_0 = L_7;
		G_B8_1 = G_B7_0;
	}

IL_0038:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B8_1, G_B8_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerEnter_m94378570919CDF3B8C15622F21D0B0B7FD7956B1 (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// isHover = true;
		__this->___isHover_10 = (bool)1;
		// _text.color = toggle.isOn?HoverOnColor:HoverOffColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0023;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___HoverOffColor_9;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0023:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___HoverOnColor_8;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition_OnPointerExit_m4BB2859E42DE14373D78A2217D72EB17B3FB9D28 (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// isHover = false;
		__this->___isHover_10 = (bool)0;
		// _text.color = toggle.isOn?NormalOnColor:NormalOffColor;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____text_5;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___toggle_4;
		bool L_2;
		L_2 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619(L_1, NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0023;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___NormalOffColor_7;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0029;
	}

IL_0023:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = __this->___NormalOnColor_6;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0029:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Chat.UtilityScripts.TextToggleIsOnTransition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextToggleIsOnTransition__ctor_m31BCC4091B72C664D8E1B13777EF1D56DFAC5CDA (TextToggleIsOnTransition_t25E8D7BA67F7318825A2DD34955FDA1A4FCC6B9A* __this, const RuntimeMethod* method) 
{
	{
		// public Color NormalOnColor= Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___NormalOnColor_6 = L_0;
		// public Color NormalOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___NormalOffColor_7 = L_1;
		// public Color HoverOnColor= Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___HoverOnColor_8 = L_2;
		// public Color HoverOffColor = Color.black;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		__this->___HoverOffColor_9 = L_3;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_m021CCF31A290BEADD0EECF2F3265D7D0BF2DD029_inline (RoomInfo_t4C5919F4F2B1DCDEA81D1522AFD5008072A7D29D* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->___U3CPlayerCountU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PhotonView_get_IsMine_mE26FB70A42C0D92C66536B45D7A7F8F491C8D648_inline (PhotonView_t43F3D22FF3D00F7824E82D741D70F9CB55642E6B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsMine { get; private set; }
		bool L_0 = __this->___U3CIsMineU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ServerAddress_mB49A10CE97A4B3D6F5934FE9FA8A635A8DA16522_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CServerAddressU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ServerAddress_m64A4656AE1370555D8778535E059680E9C26E2CD_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CServerAddressU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CServerAddressU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PeerBase_get_ProxyServerAddress_m346F142298C326B5010E7B197DFCC875DED28F74_inline (PeerBase_tC71615DA721AC9BA568EA84EA23C1784A8CD837F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CProxyServerAddressU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_ProxyServerAddress_mB4292201961A3D7D24CD3E98CD730F626B3D7DEC_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CProxyServerAddressU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProxyServerAddressU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ServerAddress_mF93AD47F8B257D59A4225A0B6B3957E9C234AEFE_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CServerAddressU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IPhotonSocket_get_ProxyServerAddress_m8B74A2C61251795A14640C3CE1A534C77320DA09_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CProxyServerAddressU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IPhotonSocket_set_State_m1C4129DE87BE2283C221C784876E02864BC1457A_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocket_set_DebugReturn_mFFCA1E6269F716339404AB19D621E772B29921A5_inline (WebSocket_t186C04B8068D205593DB749543F9FC0670E60348* __this, Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* ___value0, const RuntimeMethod* method) 
{
	{
		// public Action<DebugLevel, string> DebugReturn { get; set; }
		Action_2_tAE738514B9AB12BDB3C824C3567402B022DE8F6B* L_0 = ___value0;
		__this->___U3CDebugReturnU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDebugReturnU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IPhotonSocket_get_State_mC833F4A6B469A8BC24A89013DC0DE7035FEE321B_inline (IPhotonSocket_t6A0296888E3EF101268457B4C80B266EE7176F34* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ConnectionHandler_set_Client_m3ABCA8BEB50CC58254153280CE8F60154D42E29B_inline (ConnectionHandler_t94DB2DB95E1E5AC42D211A71B3829706DCF6ECB4* __this, LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* ___value0, const RuntimeMethod* method) 
{
	{
		// public LoadBalancingClient Client { get; set; }
		LoadBalancingClient_tC710D2A97D5ACB31FCA10E3D3A3266DBE89373A4* L_0 = ___value0;
		__this->___U3CClientU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Region_get_Code_m25CDC61EBD0A1EDEA277235D87D55869A18B9122_inline (Region_tD981338A8FBC28C39100FF9111854EC8ABE8619A* __this, const RuntimeMethod* method) 
{
	{
		// public string Code { get; private set; }
		String_t* L_0 = __this->___U3CCodeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ChatGui_get_UserName_mCF45A1C8EE85544E6D551528D3D93C18FA73E2B1_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = __this->___U3CUserNameU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatGui_set_UserName_m2DEE5CF82BC6DBB2FA568AF956102BE0E125D0A7_inline (ChatGui_t95A365F823D02D80BB5F9C8AD147D503E7075F25* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string UserName { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CUserNameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserNameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChatClient_set_AuthValues_mAAD43D4212103C80D1377FA04B33815397E28937_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ___value0, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_0 = ___value0;
		__this->___U3CAuthValuesU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthValuesU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* ChatClient_get_AuthValues_mC9F4405E66924D1BA21DEDE10848199C24915476_inline (ChatClient_t55B701443AAF83A83E3CD42D4C33F0A1092038BA* __this, const RuntimeMethod* method) 
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* L_0 = __this->___U3CAuthValuesU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AuthenticationValues_get_UserId_m61CDE1031F42330B0EDC0EC489A75E46E1DB6B79_inline (AuthenticationValues_t280C50CB2B86FA149EE99B6405C5636B2AEFFD1C* __this, const RuntimeMethod* method) 
{
	{
		// public string UserId { get; set; }
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
