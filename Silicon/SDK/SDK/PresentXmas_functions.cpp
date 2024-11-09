#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PresentXmas

#include "Basic.hpp"

#include "PresentXmas_classes.hpp"
#include "PresentXmas_parameters.hpp"


namespace SDK
{

// Function PresentXmas.PresentXmas_C.ExecuteUbergraph_PresentXmas
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APresentXmas_C::ExecuteUbergraph_PresentXmas(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PresentXmas_C", "ExecuteUbergraph_PresentXmas");

	Params::PresentXmas_C_ExecuteUbergraph_PresentXmas Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PresentXmas.PresentXmas_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void APresentXmas_C::OnBeginSearch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PresentXmas_C", "OnBeginSearch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PresentXmas.PresentXmas_C.OnLootRepeat
// (Event, Public, BlueprintEvent)

void APresentXmas_C::OnLootRepeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PresentXmas_C", "OnLootRepeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PresentXmas.PresentXmas_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APresentXmas_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PresentXmas_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
