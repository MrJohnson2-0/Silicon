#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaRotator

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaRotator.AthenaRotator_C
// 0x0040 (0x0840 - 0x0800)
class UAthenaRotator_C final : public UCommonRotator
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0800(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          MainBorder;                                        // 0x0808(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Left_Triggering_Input_Action;                      // 0x0810(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                    Right_Triggering_Input_Action;                     // 0x0820(0x0010)(Edit, BlueprintVisible, NoDestructor)
	class UClass*                                 TextStyle;                                         // 0x0830(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowGamepadButtonOnlyWhenFocused;                  // 0x0838(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaRotator(int32 EntryPoint);
	void OnClicked();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ChangeDirection(bool bDirection);
	void NewFunction_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaRotator_C">();
	}
	static class UAthenaRotator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaRotator_C>();
	}
};
static_assert(alignof(UAthenaRotator_C) == 0x000008, "Wrong alignment on UAthenaRotator_C");
static_assert(sizeof(UAthenaRotator_C) == 0x000840, "Wrong size on UAthenaRotator_C");
static_assert(offsetof(UAthenaRotator_C, UberGraphFrame) == 0x000800, "Member 'UAthenaRotator_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, MainBorder) == 0x000808, "Member 'UAthenaRotator_C::MainBorder' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, Left_Triggering_Input_Action) == 0x000810, "Member 'UAthenaRotator_C::Left_Triggering_Input_Action' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, Right_Triggering_Input_Action) == 0x000820, "Member 'UAthenaRotator_C::Right_Triggering_Input_Action' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, TextStyle) == 0x000830, "Member 'UAthenaRotator_C::TextStyle' has a wrong offset!");
static_assert(offsetof(UAthenaRotator_C, ShowGamepadButtonOnlyWhenFocused) == 0x000838, "Member 'UAthenaRotator_C::ShowGamepadButtonOnlyWhenFocused' has a wrong offset!");

}
