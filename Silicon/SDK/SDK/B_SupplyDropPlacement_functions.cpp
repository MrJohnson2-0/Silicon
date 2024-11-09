#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_SupplyDropPlacement

#include "Basic.hpp"

#include "B_SupplyDropPlacement_classes.hpp"
#include "B_SupplyDropPlacement_parameters.hpp"


namespace SDK
{

// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ExecuteUbergraph_B_SupplyDropPlacement
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SupplyDropPlacement_C::ExecuteUbergraph_B_SupplyDropPlacement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "ExecuteUbergraph_B_SupplyDropPlacement");

	Params::B_SupplyDropPlacement_C_ExecuteUbergraph_B_SupplyDropPlacement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_SupplyDropPlacement_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SecondaryFallTick
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::SecondaryFallTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "SecondaryFallTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.PlayDropNewTime
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::PlayDropNewTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "PlayDropNewTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLootDestroyActor
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::SpawnLootDestroyActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "SpawnLootDestroyActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.StopFallingTimeline
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::StopFallingTimeline()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "StopFallingTimeline");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.PlayDrop
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::PlayDrop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "PlayDrop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SupplyDropPlacement_C::BlueprintOnInteract(const class AFortPawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "BlueprintOnInteract");

	Params::B_SupplyDropPlacement_C_BlueprintOnInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SelfDestruction
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::SelfDestruction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "SelfDestruction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OverlappingDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SupplyDropPlacement_C::OverlappingDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "OverlappingDied");

	Params::B_SupplyDropPlacement_C_OverlappingDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_SupplyDropPlacement_C::BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::B_SupplyDropPlacement_C_BndEvt__ActiveFloorCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ImpactFX
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::ImpactFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "ImpactFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__Impact__EventFunc
// (BlueprintEvent)

void AB_SupplyDropPlacement_C::FallingTimeline__Impact__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "FallingTimeline__Impact__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__StartTrail__EventFunc
// (BlueprintEvent)

void AB_SupplyDropPlacement_C::FallingTimeline__StartTrail__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "FallingTimeline__StartTrail__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__UpdateFunc
// (BlueprintEvent)

void AB_SupplyDropPlacement_C::FallingTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "FallingTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.FallingTimeline__FinishedFunc
// (BlueprintEvent)

void AB_SupplyDropPlacement_C::FallingTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "FallingTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnLoot
// (Public, BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::SpawnLoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "SpawnLoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.TurnOnInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewActorEnableCollision                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_SupplyDropPlacement_C::TurnOnInteract(bool bNewActorEnableCollision)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "TurnOnInteract");

	Params::B_SupplyDropPlacement_C_TurnOnInteract Parms{};

	Parms.bNewActorEnableCollision = bNewActorEnableCollision;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.UpdateLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SupplyDropPlacement_C::UpdateLocation(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "UpdateLocation");

	Params::B_SupplyDropPlacement_C_UpdateLocation Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.Landed
// (Public, BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::Landed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "Landed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.InitDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSupplyDropUnlocks               InUnlocks                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AB_SupplyDropPlacement_C::InitDrop(const struct FSupplyDropUnlocks& InUnlocks)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "InitDrop");

	Params::B_SupplyDropPlacement_C_InitDrop Parms{};

	Parms.InUnlocks = std::move(InUnlocks);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.LootSpawnPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          OutPos                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SupplyDropPlacement_C::LootSpawnPosition(struct FVector* OutPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "LootSpawnPosition");

	Params::B_SupplyDropPlacement_C_LootSpawnPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPos != nullptr)
		*OutPos = std::move(Parms.OutPos);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.SpawnTierDrops
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LootTableIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_SupplyDropPlacement_C::SpawnTierDrops(int32 LootTableIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "SpawnTierDrops");

	Params::B_SupplyDropPlacement_C_SpawnTierDrops Parms{};

	Parms.LootTableIndex = LootTableIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ClientPlayDropFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::ClientPlayDropFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "ClientPlayDropFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.ToggleFallingFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bToggleOn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_SupplyDropPlacement_C::ToggleFallingFX(bool bToggleOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "ToggleFallingFX");

	Params::B_SupplyDropPlacement_C_ToggleFallingFX Parms{};

	Parms.bToggleOn = bToggleOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.GetImpactLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AB_SupplyDropPlacement_C::GetImpactLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "GetImpactLocation");

	Params::B_SupplyDropPlacement_C_GetImpactLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.GetFallLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AB_SupplyDropPlacement_C::GetFallLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "GetFallLocation");

	Params::B_SupplyDropPlacement_C_GetFallLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_NewLocation
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::OnRep_NewLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "OnRep_NewLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.OnRep_bLooted
// (BlueprintCallable, BlueprintEvent)

void AB_SupplyDropPlacement_C::OnRep_bLooted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "OnRep_bLooted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_SupplyDropPlacement_C::BlueprintCanInteract(class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "BlueprintCanInteract");

	Params::B_SupplyDropPlacement_C_BlueprintCanInteract Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.IsAcceptablePositionForPlacement
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                          InLocation                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         InRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
// class AFortDecoTool*                    DecoTool                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsCDO                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             OutFailureReason                                       (Parm, OutParm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AB_SupplyDropPlacement_C::IsAcceptablePositionForPlacement(struct FVector& InLocation, struct FRotator& InRotation, class AFortDecoTool* DecoTool, bool bIsCDO, class FText* OutFailureReason) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "IsAcceptablePositionForPlacement");

	Params::B_SupplyDropPlacement_C_IsAcceptablePositionForPlacement Parms{};

	Parms.InLocation = std::move(InLocation);
	Parms.InRotation = std::move(InRotation);
	Parms.DecoTool = DecoTool;
	Parms.bIsCDO = bIsCDO;

	UObject::ProcessEvent(Func, &Parms);

	InLocation = std::move(Parms.InLocation);
	InRotation = std::move(Parms.InRotation);

	if (OutFailureReason != nullptr)
		*OutFailureReason = std::move(Parms.OutFailureReason);

	return Parms.ReturnValue;
}


// Function B_SupplyDropPlacement.B_SupplyDropPlacement_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*                        InteractingPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText AB_SupplyDropPlacement_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_SupplyDropPlacement_C", "BlueprintGetInteractionString");

	Params::B_SupplyDropPlacement_C_BlueprintGetInteractionString Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
