#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEquippedItemWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaEquippedItemWidget.AthenaEquippedItemWidget_C
// 0x0050 (0x0288 - 0x0238)
class UAthenaEquippedItemWidget_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 _Image__AmmoIcon;                                  // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__ResourceIcon;                              // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CommonBorderDivider;                               // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherContent;                                   // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextAmmoOutOverlay;                                // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextMagazineAmmoCount;                             // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextResourceCount;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextTotalAmmoCount;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentQuickbar;                                   // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CursorModeEnabled;                                 // 0x0284(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InfiniteAmmo;                                      // 0x0285(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InfiniteMagazine;                                  // 0x0286(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_AthenaEquippedItemWidget(int32 EntryPoint);
	void OnBuildingMaterialCycled();
	void OnWorldItemsChanged();
	void OnLocalAmmoChanged(int32 LocalCount, int32 LocalRemaining);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void Construct();
	void FullUpdateAmmoDisplay();
	void FullUpdateResourceDisplay();
	void UpdateVisibility();
	void UpdateWidgetColor(bool HasAmmo);
	void UpdateAmmoCapacity();
	void UpdateCurrentAmmo(int32 LocalCount, int32 LocalRemaining);
	void UpdateResourceCount();

	void GetCurrentAmmoText(int32 CurrentAmmoCount, class FText* CurrentAmmoText) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaEquippedItemWidget_C">();
	}
	static class UAthenaEquippedItemWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaEquippedItemWidget_C>();
	}
};
static_assert(alignof(UAthenaEquippedItemWidget_C) == 0x000008, "Wrong alignment on UAthenaEquippedItemWidget_C");
static_assert(sizeof(UAthenaEquippedItemWidget_C) == 0x000288, "Wrong size on UAthenaEquippedItemWidget_C");
static_assert(offsetof(UAthenaEquippedItemWidget_C, UberGraphFrame) == 0x000238, "Member 'UAthenaEquippedItemWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, _Image__AmmoIcon) == 0x000240, "Member 'UAthenaEquippedItemWidget_C::_Image__AmmoIcon' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, _Image__ResourceIcon) == 0x000248, "Member 'UAthenaEquippedItemWidget_C::_Image__ResourceIcon' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, CommonBorderDivider) == 0x000250, "Member 'UAthenaEquippedItemWidget_C::CommonBorderDivider' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, SwitcherContent) == 0x000258, "Member 'UAthenaEquippedItemWidget_C::SwitcherContent' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, TextAmmoOutOverlay) == 0x000260, "Member 'UAthenaEquippedItemWidget_C::TextAmmoOutOverlay' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, TextMagazineAmmoCount) == 0x000268, "Member 'UAthenaEquippedItemWidget_C::TextMagazineAmmoCount' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, TextResourceCount) == 0x000270, "Member 'UAthenaEquippedItemWidget_C::TextResourceCount' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, TextTotalAmmoCount) == 0x000278, "Member 'UAthenaEquippedItemWidget_C::TextTotalAmmoCount' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, CurrentQuickbar) == 0x000280, "Member 'UAthenaEquippedItemWidget_C::CurrentQuickbar' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, CursorModeEnabled) == 0x000284, "Member 'UAthenaEquippedItemWidget_C::CursorModeEnabled' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, InfiniteAmmo) == 0x000285, "Member 'UAthenaEquippedItemWidget_C::InfiniteAmmo' has a wrong offset!");
static_assert(offsetof(UAthenaEquippedItemWidget_C, InfiniteMagazine) == 0x000286, "Member 'UAthenaEquippedItemWidget_C::InfiniteMagazine' has a wrong offset!");

}
