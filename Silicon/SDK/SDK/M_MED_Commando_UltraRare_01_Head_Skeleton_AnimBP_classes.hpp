#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP.M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C
// 0x00F0 (0x0560 - 0x0470)
class UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_724BF68D49D16A5F96902B93333198D7; // 0x0478(0x0048)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_3279FCB24702A5545BC530A3231C944A; // 0x04C0(0x0098)(ContainsInstancedReference)
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_3279FCB24702A5545BC530A3231C944A();
	void ExecuteUbergraph_M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C">();
	}
	static class UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C) == 0x000008, "Wrong alignment on UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C");
static_assert(sizeof(UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C) == 0x000560, "Wrong size on UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C, UberGraphFrame) == 0x000470, "Member 'UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C, AnimGraphNode_Root_724BF68D49D16A5F96902B93333198D7) == 0x000478, "Member 'UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C::AnimGraphNode_Root_724BF68D49D16A5F96902B93333198D7' has a wrong offset!");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_3279FCB24702A5545BC530A3231C944A) == 0x0004C0, "Member 'UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_3279FCB24702A5545BC530A3231C944A' has a wrong offset!");
static_assert(offsetof(UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C, MeshToCopy) == 0x000558, "Member 'UM_MED_Commando_UltraRare_01_Head_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");

}
