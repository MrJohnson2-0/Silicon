#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCompass

#include "Basic.hpp"

#include "AthenaCompass_classes.hpp"
#include "AthenaCompass_parameters.hpp"


namespace SDK
{

// Function AthenaCompass.AthenaCompass_C.ExecuteUbergraph_AthenaCompass
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaCompass_C::ExecuteUbergraph_AthenaCompass(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCompass_C", "ExecuteUbergraph_AthenaCompass");

	Params::AthenaCompass_C_ExecuteUbergraph_AthenaCompass Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaCompass.AthenaCompass_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCompass_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaCompass_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
