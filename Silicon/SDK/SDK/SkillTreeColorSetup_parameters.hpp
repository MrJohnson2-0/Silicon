#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillTreeColorSetup

#include "Basic.hpp"

#include "SkillTreepAGEColors_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkillTreePages_structs.hpp"


namespace SDK::Params
{

// Function SkillTreeColorSetup.SkillTreeColorSetup_C.SkillTreeBGSetup
// 0x0110 (0x0110 - 0x0000)
struct SkillTreeColorSetup_C_SkillTreeBGSetup final
{
public:
	struct FSkillTreePageColors                   Page_Color;                                        // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	ESkillTreePages                               Pages;                                             // 0x00C0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Mid;                                               // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x00D0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreePages                               Temp_byte_Variable;                                // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreePages                               Temp_byte_Variable2;                               // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x2];                                       // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00DC(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select2_Default;                            // 0x00EC(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillTreePages                               Temp_byte_Variable3;                               // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_FD[0x3];                                       // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select3_Default;                            // 0x0100(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillTreeColorSetup_C_SkillTreeBGSetup) == 0x000008, "Wrong alignment on SkillTreeColorSetup_C_SkillTreeBGSetup");
static_assert(sizeof(SkillTreeColorSetup_C_SkillTreeBGSetup) == 0x000110, "Wrong size on SkillTreeColorSetup_C_SkillTreeBGSetup");
static_assert(offsetof(SkillTreeColorSetup_C_SkillTreeBGSetup, Page_Color) == 0x000000, "Member 'SkillTreeColorSetup_C_SkillTreeBGSetup::Page_Color' has a wrong offset!");
static_assert(offsetof(SkillTreeColorSetup_C_SkillTreeBGSetup, Pages) == 0x0000C0, "Member 'SkillTreeColorSetup_C_SkillTreeBGSetup::Pages' has a wrong offset!");
static_assert(offsetof(SkillTreeColorSetup_C_SkillTreeBGSetup, Mid) == 0x0000C8, "Member 'SkillTreeColorSetup_C_SkillTreeBGSetup::Mid' has a wrong offset!");
static_assert(offsetof(SkillTreeColorSetup_C_SkillTreeBGSetup, __WorldContext) == 0x0000D0, "Member 'SkillTreeColorSetup_C_SkillTreeBGSetup::__WorldContext' has a wrong offset!");
static_assert(offsetof(SkillTreeColorSetup_C_SkillTreeBGSetup, Temp_byte_Variable) == 0x0000D8, "Member 'SkillTreeColorSetup_C_SkillTreeBGSetup::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillTreeColorSetup_C_SkillTreeBGSetup, Temp_byte_Variable2) == 0x0000D9, "Member 'SkillTreeColorSetup_C_SkillTreeBGSetup::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(SkillTreeColorSetup_C_SkillTreeBGSetup, K2Node_Select_Default) == 0x0000DC, "Member 'SkillTreeColorSetup_C_SkillTreeBGSetup::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillTreeColorSetup_C_SkillTreeBGSetup, K2Node_Select2_Default) == 0x0000EC, "Member 'SkillTreeColorSetup_C_SkillTreeBGSetup::K2Node_Select2_Default' has a wrong offset!");
static_assert(offsetof(SkillTreeColorSetup_C_SkillTreeBGSetup, Temp_byte_Variable3) == 0x0000FC, "Member 'SkillTreeColorSetup_C_SkillTreeBGSetup::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(SkillTreeColorSetup_C_SkillTreeBGSetup, K2Node_Select3_Default) == 0x000100, "Member 'SkillTreeColorSetup_C_SkillTreeBGSetup::K2Node_Select3_Default' has a wrong offset!");

}
