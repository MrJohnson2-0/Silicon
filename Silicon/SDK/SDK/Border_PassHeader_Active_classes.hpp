#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Border_PassHeader_Active

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Border_PassHeader_Active.Border_PassHeader_Active_C
// 0x0000 (0x00A0 - 0x00A0)
class UBorder_PassHeader_Active_C final : public UCommonBorderStyle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Border_PassHeader_Active_C">();
	}
	static class UBorder_PassHeader_Active_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBorder_PassHeader_Active_C>();
	}
};
static_assert(alignof(UBorder_PassHeader_Active_C) == 0x000008, "Wrong alignment on UBorder_PassHeader_Active_C");
static_assert(sizeof(UBorder_PassHeader_Active_C) == 0x0000A0, "Wrong size on UBorder_PassHeader_Active_C");

}
