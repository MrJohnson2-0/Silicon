#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBattlePassTrackerWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaBattlePassTrackerWidget.AthenaBattlePassTrackerWidget_C
// 0x0030 (0x0278 - 0x0248)
class UAthenaBattlePassTrackerWidget_C final : public UFortAccountWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0248(0x0008)(Transient, DuplicateTransient)
	class UAthenaSeasonBPTrackerSimpleWidget_C*   AthenaSeasonBPTrackerSimpleWidget;                 // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BattlePassImage;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BattlePassName;                                    // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          MainBorder;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TierText;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaBattlePassTrackerWidget(int32 EntryPoint);
	void OnAccountInfoChanged(const struct FFortPublicAccountInfo& Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaBattlePassTrackerWidget_C">();
	}
	static class UAthenaBattlePassTrackerWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaBattlePassTrackerWidget_C>();
	}
};
static_assert(alignof(UAthenaBattlePassTrackerWidget_C) == 0x000008, "Wrong alignment on UAthenaBattlePassTrackerWidget_C");
static_assert(sizeof(UAthenaBattlePassTrackerWidget_C) == 0x000278, "Wrong size on UAthenaBattlePassTrackerWidget_C");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, UberGraphFrame) == 0x000248, "Member 'UAthenaBattlePassTrackerWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, AthenaSeasonBPTrackerSimpleWidget) == 0x000250, "Member 'UAthenaBattlePassTrackerWidget_C::AthenaSeasonBPTrackerSimpleWidget' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, BattlePassImage) == 0x000258, "Member 'UAthenaBattlePassTrackerWidget_C::BattlePassImage' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, BattlePassName) == 0x000260, "Member 'UAthenaBattlePassTrackerWidget_C::BattlePassName' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, MainBorder) == 0x000268, "Member 'UAthenaBattlePassTrackerWidget_C::MainBorder' has a wrong offset!");
static_assert(offsetof(UAthenaBattlePassTrackerWidget_C, TierText) == 0x000270, "Member 'UAthenaBattlePassTrackerWidget_C::TierText' has a wrong offset!");

}
