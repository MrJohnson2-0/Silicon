#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_Stunned

#include "Basic.hpp"

#include "GAB_GenericStunned_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C
// 0x0098 (0x0B78 - 0x0AE0)
class UGA_DefaultPlayer_Stunned_C final : public UGAB_GenericStunned_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_DefaultPlayer_Stunned_C;         // 0x0AE0(0x0008)(Transient, DuplicateTransient)
	class UAnimMontage*                           TakerSoulSuckVictimMontage;                        // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TC_GT_NPCAbilityAttackMeleeSoulSuck;               // 0x0AF0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           TC_NPCAbilityAttackMeleeSoulSuckRelease;           // 0x0AF8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_NPCAbilityAttackMeleeSoulSuck;                  // 0x0B00(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                              PlayerPawn;                                        // 0x0B20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SoulSuckMontageSection;                            // 0x0B28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SoulSuckCurrentMontageSection;                     // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SoulSuckGoalActorNormalizedHealth;                 // 0x0B38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B3C[0x4];                                      // 0x0B3C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortFeedbackHandle                    StunFeedbackEvent;                                 // 0x0B40(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                 SoulSuckCameraShake;                               // 0x0B58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCameraAnimInst*                        SoulSuckCameraAnimInst;                            // 0x0B60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   PlayerCameraManager;                               // 0x0B68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      PlayerController;                                  // 0x0B70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_DefaultPlayer_Stunned(int32 EntryPoint);
	void SoulSuckEndCheck();
	void ResetSoulSuckRelease();
	void SoulSuckCheck();
	void ResetSoulSuckLift();
	void K2_OnEndAbility(bool bWasCancelled);
	void Cancelled_3C8EA97E467ED88E163FF0B4F830736D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_3C8EA97E467ED88E163FF0B4F830736D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void OnBlendOut_B4CDDE17442A807B7592E7A70F4F6DEF();
	void OnCancelled_B4CDDE17442A807B7592E7A70F4F6DEF();
	void OnComplete_F3FA8C4A4CF8BA1E44F6768A402E7D71();
	void OnCompleted_B4CDDE17442A807B7592E7A70F4F6DEF();
	void OnInterrupted_B4CDDE17442A807B7592E7A70F4F6DEF();
	void OnInterrupted_F3FA8C4A4CF8BA1E44F6768A402E7D71();
	void Triggered_3C8EA97E467ED88E163FF0B4F830736D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_DefaultPlayer_Stunned_C">();
	}
	static class UGA_DefaultPlayer_Stunned_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_DefaultPlayer_Stunned_C>();
	}
};
static_assert(alignof(UGA_DefaultPlayer_Stunned_C) == 0x000008, "Wrong alignment on UGA_DefaultPlayer_Stunned_C");
static_assert(sizeof(UGA_DefaultPlayer_Stunned_C) == 0x000B78, "Wrong size on UGA_DefaultPlayer_Stunned_C");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, UberGraphFrame_GA_DefaultPlayer_Stunned_C) == 0x000AE0, "Member 'UGA_DefaultPlayer_Stunned_C::UberGraphFrame_GA_DefaultPlayer_Stunned_C' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, TakerSoulSuckVictimMontage) == 0x000AE8, "Member 'UGA_DefaultPlayer_Stunned_C::TakerSoulSuckVictimMontage' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, TC_GT_NPCAbilityAttackMeleeSoulSuck) == 0x000AF0, "Member 'UGA_DefaultPlayer_Stunned_C::TC_GT_NPCAbilityAttackMeleeSoulSuck' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, TC_NPCAbilityAttackMeleeSoulSuckRelease) == 0x000AF8, "Member 'UGA_DefaultPlayer_Stunned_C::TC_NPCAbilityAttackMeleeSoulSuckRelease' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, TC_NPCAbilityAttackMeleeSoulSuck) == 0x000B00, "Member 'UGA_DefaultPlayer_Stunned_C::TC_NPCAbilityAttackMeleeSoulSuck' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, PlayerPawn) == 0x000B20, "Member 'UGA_DefaultPlayer_Stunned_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, SoulSuckMontageSection) == 0x000B28, "Member 'UGA_DefaultPlayer_Stunned_C::SoulSuckMontageSection' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, SoulSuckCurrentMontageSection) == 0x000B30, "Member 'UGA_DefaultPlayer_Stunned_C::SoulSuckCurrentMontageSection' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, SoulSuckGoalActorNormalizedHealth) == 0x000B38, "Member 'UGA_DefaultPlayer_Stunned_C::SoulSuckGoalActorNormalizedHealth' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, StunFeedbackEvent) == 0x000B40, "Member 'UGA_DefaultPlayer_Stunned_C::StunFeedbackEvent' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, SoulSuckCameraShake) == 0x000B58, "Member 'UGA_DefaultPlayer_Stunned_C::SoulSuckCameraShake' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, SoulSuckCameraAnimInst) == 0x000B60, "Member 'UGA_DefaultPlayer_Stunned_C::SoulSuckCameraAnimInst' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, PlayerCameraManager) == 0x000B68, "Member 'UGA_DefaultPlayer_Stunned_C::PlayerCameraManager' has a wrong offset!");
static_assert(offsetof(UGA_DefaultPlayer_Stunned_C, PlayerController) == 0x000B70, "Member 'UGA_DefaultPlayer_Stunned_C::PlayerController' has a wrong offset!");

}
