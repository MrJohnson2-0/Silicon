#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformItemPicker

#include "Basic.hpp"

#include "ItemTransformItemPicker_classes.hpp"
#include "ItemTransformItemPicker_parameters.hpp"


namespace SDK
{

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::OnItemSelected__DelegateSignature(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "OnItemSelected__DelegateSignature");

	Params::ItemTransformItemPicker_C_OnItemSelected__DelegateSignature Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.ExecuteUbergraph_ItemTransformItemPicker
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::ExecuteUbergraph_ItemTransformItemPicker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "ExecuteUbergraph_ItemTransformItemPicker");

	Params::ItemTransformItemPicker_C_ExecuteUbergraph_ItemTransformItemPicker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature(class FName TabId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature");

	Params::ItemTransformItemPicker_C_BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature Parms{};

	Parms.TabId = TabId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "PreConstruct");

	Params::ItemTransformItemPicker_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemTransformItemPicker_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupItemPicker
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformItemPicker_C::SetupItemPicker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "SetupItemPicker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::HandleItemSelected(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "HandleItemSelected");

	Params::ItemTransformItemPicker_C_HandleItemSelected Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.RemoveInvalidItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortAccountItem*>         UnrefinedItems                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortItem*>                CurrentSacrificeItems                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortAccountItem*>         RefinedItems                                           (Parm, OutParm, ZeroConstructor)

void UItemTransformItemPicker_C::RemoveInvalidItems(TArray<class UFortAccountItem*>& UnrefinedItems, TArray<class UFortItem*>& CurrentSacrificeItems, TArray<class UFortAccountItem*>* RefinedItems)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "RemoveInvalidItems");

	Params::ItemTransformItemPicker_C_RemoveInvalidItems Parms{};

	Parms.UnrefinedItems = std::move(UnrefinedItems);
	Parms.CurrentSacrificeItems = std::move(CurrentSacrificeItems);

	UObject::ProcessEvent(Func, &Parms);

	UnrefinedItems = std::move(Parms.UnrefinedItems);
	CurrentSacrificeItems = std::move(Parms.CurrentSacrificeItems);

	if (RefinedItems != nullptr)
		*RefinedItems = std::move(Parms.RefinedItems);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemCommitted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::HandleItemCommitted(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "HandleItemCommitted");

	Params::ItemTransformItemPicker_C_HandleItemCommitted Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupFilterTabList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemTransformItemPicker_C::SetupFilterTabList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "SetupFilterTabList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             FilterName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::SetFilter(class FName FilterName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "SetFilter");

	Params::ItemTransformItemPicker_C_SetFilter Parms{};

	Parms.FilterName = FilterName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenPicker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>                Param_SacrificeItems                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int32                                   SelectedSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::OpenPicker(TArray<class UFortItem*>& Param_SacrificeItems, int32 SelectedSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "OpenPicker");

	Params::ItemTransformItemPicker_C_OpenPicker Parms{};

	Parms.Param_SacrificeItems = std::move(Param_SacrificeItems);
	Parms.SelectedSlot = SelectedSlot;

	UObject::ProcessEvent(Func, &Parms);

	Param_SacrificeItems = std::move(Parms.Param_SacrificeItems);
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.CommitSelectedItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThru                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::CommitSelectedItem(bool* PassThru)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "CommitSelectedItem");

	Params::ItemTransformItemPicker_C_CommitSelectedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThru != nullptr)
		*PassThru = Parms.PassThru;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenInspectionScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThru                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformItemPicker_C::OpenInspectionScreen(bool* PassThru)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "OpenInspectionScreen");

	Params::ItemTransformItemPicker_C_OpenInspectionScreen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThru != nullptr)
		*PassThru = Parms.PassThru;
}


// Function ItemTransformItemPicker.ItemTransformItemPicker_C.Return Item to Detail
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        InItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                        OutItem                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformItemPicker_C::Return_Item_to_Detail(class UFortItem* InItem, class UFortItem** OutItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformItemPicker_C", "Return Item to Detail");

	Params::ItemTransformItemPicker_C_Return_Item_to_Detail Parms{};

	Parms.InItem = InItem;

	UObject::ProcessEvent(Func, &Parms);

	if (OutItem != nullptr)
		*OutItem = Parms.OutItem;
}

}
