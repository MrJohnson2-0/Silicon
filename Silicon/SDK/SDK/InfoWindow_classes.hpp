#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InfoWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InfoWindow.InfoWindow_C
// 0x0038 (0x0428 - 0x03F0)
class UInfoWindow_C final : public UFortInfoWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      CloseButton;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                          EntryIcon;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       EntryText;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_InfoWindow(int32 EntryPoint);
	void Set_Info(class UFortItemDefinition* Entry_Item_Definition);
	void BndEvt__InfoButtons_K2Node_ComponentBoundEvent_212_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void OnBeginIntro();
	void OnBeginOutro();
	void BndEvt__Lightbox_K2Node_ComponentBoundEvent_1_OutroEnded__DelegateSignature();
	void BndEvt__Lightbox_K2Node_ComponentBoundEvent_0_IntroEnded__DelegateSignature();
	void Destruct();
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void AddInfo(TArray<class UFortItemDefinition*>& Info_Items, const class FText& Param_Title);
	void Initialize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InfoWindow_C">();
	}
	static class UInfoWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInfoWindow_C>();
	}
};
static_assert(alignof(UInfoWindow_C) == 0x000008, "Wrong alignment on UInfoWindow_C");
static_assert(sizeof(UInfoWindow_C) == 0x000428, "Wrong size on UInfoWindow_C");
static_assert(offsetof(UInfoWindow_C, UberGraphFrame) == 0x0003F0, "Member 'UInfoWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInfoWindow_C, CloseButton) == 0x0003F8, "Member 'UInfoWindow_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UInfoWindow_C, EntryIcon) == 0x000400, "Member 'UInfoWindow_C::EntryIcon' has a wrong offset!");
static_assert(offsetof(UInfoWindow_C, EntryText) == 0x000408, "Member 'UInfoWindow_C::EntryText' has a wrong offset!");
static_assert(offsetof(UInfoWindow_C, Lightbox) == 0x000410, "Member 'UInfoWindow_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UInfoWindow_C, SizeBox_1) == 0x000418, "Member 'UInfoWindow_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UInfoWindow_C, Title) == 0x000420, "Member 'UInfoWindow_C::Title' has a wrong offset!");

}
