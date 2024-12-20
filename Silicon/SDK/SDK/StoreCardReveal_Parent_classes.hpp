#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreCardReveal_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StoreCardReveal_Parent.StoreCardReveal_Parent_C
// 0x0010 (0x0378 - 0x0368)
class AStoreCardReveal_Parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        PinataSceneRoot;                                   // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StoreCardReveal_Parent(int32 EntryPoint);
	void InitiatePinata();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreCardReveal_Parent_C">();
	}
	static class AStoreCardReveal_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AStoreCardReveal_Parent_C>();
	}
};
static_assert(alignof(AStoreCardReveal_Parent_C) == 0x000008, "Wrong alignment on AStoreCardReveal_Parent_C");
static_assert(sizeof(AStoreCardReveal_Parent_C) == 0x000378, "Wrong size on AStoreCardReveal_Parent_C");
static_assert(offsetof(AStoreCardReveal_Parent_C, UberGraphFrame) == 0x000368, "Member 'AStoreCardReveal_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AStoreCardReveal_Parent_C, PinataSceneRoot) == 0x000370, "Member 'AStoreCardReveal_Parent_C::PinataSceneRoot' has a wrong offset!");

}

