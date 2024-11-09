#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PowerRequirement

#include "Basic.hpp"

#include "PowerRequirement_classes.hpp"
#include "PowerRequirement_parameters.hpp"


namespace SDK
{

// Function PowerRequirement.PowerRequirement_C.ExecuteUbergraph_PowerRequirement
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRequirement_C::ExecuteUbergraph_PowerRequirement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "ExecuteUbergraph_PowerRequirement");

	Params::PowerRequirement_C_ExecuteUbergraph_PowerRequirement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.PlayerInfoChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 UniqueId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UPowerRequirement_C::PlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "PlayerInfoChanged");

	Params::PowerRequirement_C_PlayerInfoChanged Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPowerRequirement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerRequirement.PowerRequirement_C.SetRequirements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_RequiredPower                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_RecommendedPower                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRequirement_C::SetRequirements(int32 Param_RequiredPower, int32 Param_RecommendedPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "SetRequirements");

	Params::PowerRequirement_C_SetRequirements Parms{};

	Parms.Param_RequiredPower = Param_RequiredPower;
	Parms.Param_RecommendedPower = Param_RecommendedPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.Update
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPowerRequirement_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PowerRequirement.PowerRequirement_C.SetUIForRecommended
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PartyPower                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRequirement_C::SetUIForRecommended(int32 PartyPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "SetUIForRecommended");

	Params::PowerRequirement_C_SetUIForRecommended Parms{};

	Parms.PartyPower = PartyPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.SetUIForRequired
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PartyPower                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPowerRequirement_C::SetUIForRequired(int32 PartyPower)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "SetUIForRequired");

	Params::PowerRequirement_C_SetUIForRequired Parms{};

	Parms.PartyPower = PartyPower;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PowerRequirement.PowerRequirement_C.GenerateToolTipWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPowerRequirement_C::GenerateToolTipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PowerRequirement_C", "GenerateToolTipWidget");

	Params::PowerRequirement_C_GenerateToolTipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
