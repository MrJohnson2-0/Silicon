#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheaterMapViewer

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TheaterMapViewer.TheaterMapViewer_C
// 0x0008 (0x0678 - 0x0670)
class ATheaterMapViewer_C final : public AFortTheaterMapViewer
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TheaterMapViewer_C">();
	}
	static class ATheaterMapViewer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATheaterMapViewer_C>();
	}
};
static_assert(alignof(ATheaterMapViewer_C) == 0x000008, "Wrong alignment on ATheaterMapViewer_C");
static_assert(sizeof(ATheaterMapViewer_C) == 0x000678, "Wrong size on ATheaterMapViewer_C");
static_assert(offsetof(ATheaterMapViewer_C, DefaultSceneRoot) == 0x000670, "Member 'ATheaterMapViewer_C::DefaultSceneRoot' has a wrong offset!");

}

