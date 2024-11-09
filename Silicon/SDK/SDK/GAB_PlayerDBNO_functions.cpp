#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_PlayerDBNO

#include "Basic.hpp"

#include "GAB_PlayerDBNO_classes.hpp"
#include "GAB_PlayerDBNO_parameters.hpp"


namespace SDK
{

// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_PlayerDBNO_C::ExecuteUbergraph_GAB_PlayerDBNO(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNO_C", "ExecuteUbergraph_GAB_PlayerDBNO");

	Params::GAB_PlayerDBNO_C_ExecuteUbergraph_GAB_PlayerDBNO Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_PlayerDBNO_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNO_C", "K2_ActivateAbilityFromEvent");

	Params::GAB_PlayerDBNO_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCompleted_4B0F8658452931EE3B297A9E70C9C496
// (BlueprintCallable, BlueprintEvent)

void UGAB_PlayerDBNO_C::OnCompleted_4B0F8658452931EE3B297A9E70C9C496()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNO_C", "OnCompleted_4B0F8658452931EE3B297A9E70C9C496");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnBlendOut_4B0F8658452931EE3B297A9E70C9C496
// (BlueprintCallable, BlueprintEvent)

void UGAB_PlayerDBNO_C::OnBlendOut_4B0F8658452931EE3B297A9E70C9C496()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNO_C", "OnBlendOut_4B0F8658452931EE3B297A9E70C9C496");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnInterrupted_4B0F8658452931EE3B297A9E70C9C496
// (BlueprintCallable, BlueprintEvent)

void UGAB_PlayerDBNO_C::OnInterrupted_4B0F8658452931EE3B297A9E70C9C496()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNO_C", "OnInterrupted_4B0F8658452931EE3B297A9E70C9C496");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCancelled_4B0F8658452931EE3B297A9E70C9C496
// (BlueprintCallable, BlueprintEvent)

void UGAB_PlayerDBNO_C::OnCancelled_4B0F8658452931EE3B297A9E70C9C496()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNO_C", "OnCancelled_4B0F8658452931EE3B297A9E70C9C496");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventHitData                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_PlayerDBNO_C::InitializeDeathHitDirection(const struct FGameplayEventData& EventHitData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAB_PlayerDBNO_C", "InitializeDeathHitDirection");

	Params::GAB_PlayerDBNO_C_InitializeDeathHitDirection Parms{};

	Parms.EventHitData = std::move(EventHitData);

	UObject::ProcessEvent(Func, &Parms);
}

}
