#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trap_Ceiling_Spikes

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C
// 0x00B8 (0x0F30 - 0x0E78)
class ATrap_Ceiling_Spikes_C final : public ABuildingTrapCeiling
{
public:
	uint8                                         Pad_E78[0x8];                                      // 0x0E78(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0E80(0x0008)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Spike_Mesh;                                        // 0x0E88(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Trigger;                                           // 0x0E90(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        TraceLocation;                                     // 0x0E98(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0EA0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         ResetSpikes_LERP_B972DA5E46CD8AF9C0846C9688D21D08; // 0x0EA8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            ResetSpikes__Direction_B972DA5E46CD8AF9C0846C9688D21D08; // 0x0EAC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EAD[0x3];                                      // 0x0EAD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     ResetSpikes;                                       // 0x0EB0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Retract_LERP_A98FB7C244D5AEB5FA8508BA3FC97EBF;     // 0x0EB8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Retract__Direction_A98FB7C244D5AEB5FA8508BA3FC97EBF; // 0x0EBC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EBD[0x3];                                      // 0x0EBD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Retract;                                           // 0x0EC0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Fire_LERP_99DF8D624D8879F22C8EDA82317252E5;        // 0x0EC8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Fire__Direction_99DF8D624D8879F22C8EDA82317252E5;  // 0x0ECC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ECD[0x3];                                      // 0x0ECD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Fire;                                              // 0x0ED0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               SpikesMID;                                         // 0x0ED8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SweepExponent;                                     // 0x0EE0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SweepColor;                                        // 0x0EE4(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SweepSpeed;                                        // 0x0EF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Active_Sound;                                 // 0x0EF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeRestingScale;                                 // 0x0F00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F04[0x4];                                      // 0x0F04(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundCue*                              Trap_Fire_Sound;                                   // 0x0F08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeActiveScale;                                  // 0x0F10(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpikeHoldOnFireLength;                             // 0x0F14(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Reload_Sound;                                      // 0x0F18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Trap_Explode_Sound;                                // 0x0F20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              Place_Trap_Sound;                                  // 0x0F28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Trap_Ceiling_Spikes(int32 EntryPoint);
	void OnWorldReady();
	void OnOutOfDurability();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void OnFinishedBuilding();
	void OnPlaced();
	void OnReloadEnd();
	void ResetSpikes__UpdateFunc();
	void ResetSpikes__FinishedFunc();
	void Retract__Sounds__EventFunc();
	void Retract__UpdateFunc();
	void Retract__FinishedFunc();
	void Fire__UpdateFunc();
	void Fire__FinishedFunc();
	void UserConstructionScript();
	void SetSpikePosition(float NewSpikePosition);
	void MaterialSweepOnSpikes(float Param_SweepSpeed, const struct FLinearColor& Param_SweepColor, float Param_SweepExponent);

	struct FTransform GetFireLocationAndRotation() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Trap_Ceiling_Spikes_C">();
	}
	static class ATrap_Ceiling_Spikes_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrap_Ceiling_Spikes_C>();
	}
};
static_assert(alignof(ATrap_Ceiling_Spikes_C) == 0x000008, "Wrong alignment on ATrap_Ceiling_Spikes_C");
static_assert(sizeof(ATrap_Ceiling_Spikes_C) == 0x000F30, "Wrong size on ATrap_Ceiling_Spikes_C");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, UberGraphFrame) == 0x000E80, "Member 'ATrap_Ceiling_Spikes_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Spike_Mesh) == 0x000E88, "Member 'ATrap_Ceiling_Spikes_C::Spike_Mesh' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Trigger) == 0x000E90, "Member 'ATrap_Ceiling_Spikes_C::Trigger' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, TraceLocation) == 0x000E98, "Member 'ATrap_Ceiling_Spikes_C::TraceLocation' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Root) == 0x000EA0, "Member 'ATrap_Ceiling_Spikes_C::Root' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, ResetSpikes_LERP_B972DA5E46CD8AF9C0846C9688D21D08) == 0x000EA8, "Member 'ATrap_Ceiling_Spikes_C::ResetSpikes_LERP_B972DA5E46CD8AF9C0846C9688D21D08' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, ResetSpikes__Direction_B972DA5E46CD8AF9C0846C9688D21D08) == 0x000EAC, "Member 'ATrap_Ceiling_Spikes_C::ResetSpikes__Direction_B972DA5E46CD8AF9C0846C9688D21D08' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, ResetSpikes) == 0x000EB0, "Member 'ATrap_Ceiling_Spikes_C::ResetSpikes' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Retract_LERP_A98FB7C244D5AEB5FA8508BA3FC97EBF) == 0x000EB8, "Member 'ATrap_Ceiling_Spikes_C::Retract_LERP_A98FB7C244D5AEB5FA8508BA3FC97EBF' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Retract__Direction_A98FB7C244D5AEB5FA8508BA3FC97EBF) == 0x000EBC, "Member 'ATrap_Ceiling_Spikes_C::Retract__Direction_A98FB7C244D5AEB5FA8508BA3FC97EBF' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Retract) == 0x000EC0, "Member 'ATrap_Ceiling_Spikes_C::Retract' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Fire_LERP_99DF8D624D8879F22C8EDA82317252E5) == 0x000EC8, "Member 'ATrap_Ceiling_Spikes_C::Fire_LERP_99DF8D624D8879F22C8EDA82317252E5' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Fire__Direction_99DF8D624D8879F22C8EDA82317252E5) == 0x000ECC, "Member 'ATrap_Ceiling_Spikes_C::Fire__Direction_99DF8D624D8879F22C8EDA82317252E5' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Fire) == 0x000ED0, "Member 'ATrap_Ceiling_Spikes_C::Fire' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, SpikesMID) == 0x000ED8, "Member 'ATrap_Ceiling_Spikes_C::SpikesMID' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, SweepExponent) == 0x000EE0, "Member 'ATrap_Ceiling_Spikes_C::SweepExponent' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, SweepColor) == 0x000EE4, "Member 'ATrap_Ceiling_Spikes_C::SweepColor' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, SweepSpeed) == 0x000EF4, "Member 'ATrap_Ceiling_Spikes_C::SweepSpeed' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Trap_Active_Sound) == 0x000EF8, "Member 'ATrap_Ceiling_Spikes_C::Trap_Active_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, SpikeRestingScale) == 0x000F00, "Member 'ATrap_Ceiling_Spikes_C::SpikeRestingScale' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Trap_Fire_Sound) == 0x000F08, "Member 'ATrap_Ceiling_Spikes_C::Trap_Fire_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, SpikeActiveScale) == 0x000F10, "Member 'ATrap_Ceiling_Spikes_C::SpikeActiveScale' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, SpikeHoldOnFireLength) == 0x000F14, "Member 'ATrap_Ceiling_Spikes_C::SpikeHoldOnFireLength' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Reload_Sound) == 0x000F18, "Member 'ATrap_Ceiling_Spikes_C::Reload_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Trap_Explode_Sound) == 0x000F20, "Member 'ATrap_Ceiling_Spikes_C::Trap_Explode_Sound' has a wrong offset!");
static_assert(offsetof(ATrap_Ceiling_Spikes_C, Place_Trap_Sound) == 0x000F28, "Member 'ATrap_Ceiling_Spikes_C::Place_Trap_Sound' has a wrong offset!");

}
