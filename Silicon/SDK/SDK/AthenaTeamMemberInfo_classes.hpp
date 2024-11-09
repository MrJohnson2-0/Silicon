#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaTeamMemberInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaTeamMemberInfo.AthenaTeamMemberInfo_C
// 0x02F8 (0x0508 - 0x0210)
class UAthenaTeamMemberInfo_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       FriendRequestSent;                                 // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       DisplayAddFriend;                                  // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                         AddFriendButton;                                   // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTeamMemberDBNOState_C*           DBNOState;                                         // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DeadIndicator;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DisconnectedIndicator;                             // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_SocialContainer;                                // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageDBNOBar;                                      // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageHealthbar;                                    // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageShieldbar;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Marker;                                            // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Speaker;                                           // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       T_AddFriendLabel;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPlayerName;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ShowingHealth;                                     // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ShowingShield;                                     // 0x0289(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28A[0x6];                                      // 0x028A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerStateAthena*                 PlayerState;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         PlayerIndex;                                       // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            Player0;                                           // 0x02A0(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            Player1;                                           // 0x0318(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            Player2;                                           // 0x0390(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                            Player3;                                           // 0x0408(0x0078)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Talking;                                           // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Muted;                                             // 0x0481(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlayerDisconnected;                                // 0x0482(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EFortFriendRequestStatus                      FriendRequestStatus;                               // 0x0483(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AddFriendRolloutDelay;                             // 0x0484(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       McpUniqueNetID;                                    // 0x0488(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MicMID;                                            // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             MutedTexture;                                      // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TalkingTexture;                                    // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             NotTalkingTexture;                                 // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     MicMaterial;                                       // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       ConsoleUniqueNetId;                                // 0x04D8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsDisplayAddFriend;                               // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaTeamMemberInfo(int32 EntryPoint);
	void DisplayAddFriend_NoAnim();
	void Construct();
	void BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void DisplayAddFriendIfApplicable();
	void SetHealth(float Value);
	void SetShield(float Value);
	void UpdatePS(class AFortPlayerStateAthena* InPlayerState);
	void SetDead(bool Dead);
	void SetDBNO(bool DBNO);
	void UpdatePlayerName();
	void SetReviving(bool Reviving);
	void SetMuted(bool NewMuted);
	void UpdateMicIcon();
	void SetTalking(bool NewTalking);
	void SetPlayerDisconnected();
	void CanFriend(bool* Param_CanFriend);
	void SendFriendInvite();
	void InitSpeakerMaterial();
	void UpdateUniqueID();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaTeamMemberInfo_C">();
	}
	static class UAthenaTeamMemberInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaTeamMemberInfo_C>();
	}
};
static_assert(alignof(UAthenaTeamMemberInfo_C) == 0x000008, "Wrong alignment on UAthenaTeamMemberInfo_C");
static_assert(sizeof(UAthenaTeamMemberInfo_C) == 0x000508, "Wrong size on UAthenaTeamMemberInfo_C");
static_assert(offsetof(UAthenaTeamMemberInfo_C, UberGraphFrame) == 0x000210, "Member 'UAthenaTeamMemberInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, FriendRequestSent) == 0x000218, "Member 'UAthenaTeamMemberInfo_C::FriendRequestSent' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, DisplayAddFriend) == 0x000220, "Member 'UAthenaTeamMemberInfo_C::DisplayAddFriend' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, AddFriendButton) == 0x000228, "Member 'UAthenaTeamMemberInfo_C::AddFriendButton' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, DBNOState) == 0x000230, "Member 'UAthenaTeamMemberInfo_C::DBNOState' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, DeadIndicator) == 0x000238, "Member 'UAthenaTeamMemberInfo_C::DeadIndicator' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, DisconnectedIndicator) == 0x000240, "Member 'UAthenaTeamMemberInfo_C::DisconnectedIndicator' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, HB_SocialContainer) == 0x000248, "Member 'UAthenaTeamMemberInfo_C::HB_SocialContainer' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ImageDBNOBar) == 0x000250, "Member 'UAthenaTeamMemberInfo_C::ImageDBNOBar' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ImageHealthbar) == 0x000258, "Member 'UAthenaTeamMemberInfo_C::ImageHealthbar' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ImageShieldbar) == 0x000260, "Member 'UAthenaTeamMemberInfo_C::ImageShieldbar' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Marker) == 0x000268, "Member 'UAthenaTeamMemberInfo_C::Marker' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Speaker) == 0x000270, "Member 'UAthenaTeamMemberInfo_C::Speaker' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, T_AddFriendLabel) == 0x000278, "Member 'UAthenaTeamMemberInfo_C::T_AddFriendLabel' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, TextPlayerName) == 0x000280, "Member 'UAthenaTeamMemberInfo_C::TextPlayerName' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ShowingHealth) == 0x000288, "Member 'UAthenaTeamMemberInfo_C::ShowingHealth' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ShowingShield) == 0x000289, "Member 'UAthenaTeamMemberInfo_C::ShowingShield' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, PlayerState) == 0x000290, "Member 'UAthenaTeamMemberInfo_C::PlayerState' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, PlayerIndex) == 0x000298, "Member 'UAthenaTeamMemberInfo_C::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Player0) == 0x0002A0, "Member 'UAthenaTeamMemberInfo_C::Player0' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Player1) == 0x000318, "Member 'UAthenaTeamMemberInfo_C::Player1' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Player2) == 0x000390, "Member 'UAthenaTeamMemberInfo_C::Player2' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Player3) == 0x000408, "Member 'UAthenaTeamMemberInfo_C::Player3' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Talking) == 0x000480, "Member 'UAthenaTeamMemberInfo_C::Talking' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, Muted) == 0x000481, "Member 'UAthenaTeamMemberInfo_C::Muted' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, PlayerDisconnected) == 0x000482, "Member 'UAthenaTeamMemberInfo_C::PlayerDisconnected' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, FriendRequestStatus) == 0x000483, "Member 'UAthenaTeamMemberInfo_C::FriendRequestStatus' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, AddFriendRolloutDelay) == 0x000484, "Member 'UAthenaTeamMemberInfo_C::AddFriendRolloutDelay' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, McpUniqueNetID) == 0x000488, "Member 'UAthenaTeamMemberInfo_C::McpUniqueNetID' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, MicMID) == 0x0004B0, "Member 'UAthenaTeamMemberInfo_C::MicMID' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, MutedTexture) == 0x0004B8, "Member 'UAthenaTeamMemberInfo_C::MutedTexture' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, TalkingTexture) == 0x0004C0, "Member 'UAthenaTeamMemberInfo_C::TalkingTexture' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, NotTalkingTexture) == 0x0004C8, "Member 'UAthenaTeamMemberInfo_C::NotTalkingTexture' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, MicMaterial) == 0x0004D0, "Member 'UAthenaTeamMemberInfo_C::MicMaterial' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, ConsoleUniqueNetId) == 0x0004D8, "Member 'UAthenaTeamMemberInfo_C::ConsoleUniqueNetId' has a wrong offset!");
static_assert(offsetof(UAthenaTeamMemberInfo_C, bIsDisplayAddFriend) == 0x000500, "Member 'UAthenaTeamMemberInfo_C::bIsDisplayAddFriend' has a wrong offset!");

}
