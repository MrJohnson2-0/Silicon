#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PinnedSchematicItemsWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PinnedSchematicItemsWidget.PinnedSchematicItemsWidget_C
// 0x0020 (0x0258 - 0x0238)
class UPinnedSchematicItemsWidget_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UPinnedSchematicItemWidget_C*           PinnedSchematicItem0;                              // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPinnedSchematicItemWidget_C*           PinnedSchematicItem1;                              // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxPinnedList;                             // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PinnedSchematicItemsWidget(int32 EntryPoint);
	void Construct();
	void Refresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PinnedSchematicItemsWidget_C">();
	}
	static class UPinnedSchematicItemsWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPinnedSchematicItemsWidget_C>();
	}
};
static_assert(alignof(UPinnedSchematicItemsWidget_C) == 0x000008, "Wrong alignment on UPinnedSchematicItemsWidget_C");
static_assert(sizeof(UPinnedSchematicItemsWidget_C) == 0x000258, "Wrong size on UPinnedSchematicItemsWidget_C");
static_assert(offsetof(UPinnedSchematicItemsWidget_C, UberGraphFrame) == 0x000238, "Member 'UPinnedSchematicItemsWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPinnedSchematicItemsWidget_C, PinnedSchematicItem0) == 0x000240, "Member 'UPinnedSchematicItemsWidget_C::PinnedSchematicItem0' has a wrong offset!");
static_assert(offsetof(UPinnedSchematicItemsWidget_C, PinnedSchematicItem1) == 0x000248, "Member 'UPinnedSchematicItemsWidget_C::PinnedSchematicItem1' has a wrong offset!");
static_assert(offsetof(UPinnedSchematicItemsWidget_C, VerticalBoxPinnedList) == 0x000250, "Member 'UPinnedSchematicItemsWidget_C::VerticalBoxPinnedList' has a wrong offset!");

}
