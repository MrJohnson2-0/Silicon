#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SK_M_MED_Head_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass SK_M_MED_Head_01_Skeleton_AnimBP.SK_M_MED_Head_01_Skeleton_AnimBP_C
// 0x04F0 (0x0960 - 0x0470)
class USK_M_MED_Head_01_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906; // 0x0478(0x0098)(ContainsInstancedReference)
	struct FAnimNode_Slot                         AnimGraphNode_Slot_9DEE8B0B4D1D9FDD54A44ABF56EF65F1; // 0x0510(0x0068)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_4F3AE6E84F7148E8472FBEBF5A0A6FDD; // 0x0578(0x00E0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_E75482C745B090EF7CF656A41BAFD3BF; // 0x0658(0x00E0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73; // 0x0738(0x00D0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7; // 0x0808(0x0098)(ContainsInstancedReference)
	struct FAnimNode_Root                         AnimGraphNode_Root_47CAB4DD44EBA0B3E1A25CA219D87178; // 0x08A0(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_E4DBDBBA432A0619D5767194AA782C41; // 0x08E8(0x0070)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x0958(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_M_MED_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7();
	void Playface();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SK_M_MED_Head_01_Skeleton_AnimBP_C">();
	}
	static class USK_M_MED_Head_01_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USK_M_MED_Head_01_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(USK_M_MED_Head_01_Skeleton_AnimBP_C) == 0x000008, "Wrong alignment on USK_M_MED_Head_01_Skeleton_AnimBP_C");
static_assert(sizeof(USK_M_MED_Head_01_Skeleton_AnimBP_C) == 0x000960, "Wrong size on USK_M_MED_Head_01_Skeleton_AnimBP_C");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, UberGraphFrame) == 0x000470, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906) == 0x000478, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_0169B6354BB48E39A74EE18DCAB5A906' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_Slot_9DEE8B0B4D1D9FDD54A44ABF56EF65F1) == 0x000510, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_Slot_9DEE8B0B4D1D9FDD54A44ABF56EF65F1' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_4F3AE6E84F7148E8472FBEBF5A0A6FDD) == 0x000578, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_4F3AE6E84F7148E8472FBEBF5A0A6FDD' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_E75482C745B090EF7CF656A41BAFD3BF) == 0x000658, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_E75482C745B090EF7CF656A41BAFD3BF' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73) == 0x000738, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool_105C7D364D717157735D0D97E329DD73' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7) == 0x000808, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_FD623BB04985B8AEA4671DBE8D9F50E7' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_Root_47CAB4DD44EBA0B3E1A25CA219D87178) == 0x0008A0, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_Root_47CAB4DD44EBA0B3E1A25CA219D87178' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, AnimGraphNode_SequencePlayer_E4DBDBBA432A0619D5767194AA782C41) == 0x0008E8, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::AnimGraphNode_SequencePlayer_E4DBDBBA432A0619D5767194AA782C41' has a wrong offset!");
static_assert(offsetof(USK_M_MED_Head_01_Skeleton_AnimBP_C, MeshToCopy) == 0x000958, "Member 'USK_M_MED_Head_01_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");

}

