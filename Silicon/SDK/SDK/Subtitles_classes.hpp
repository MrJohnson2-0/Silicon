#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Subtitles

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Subtitles.Subtitles_C
// 0x0018 (0x0250 - 0x0238)
class USubtitles_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class USubtitleDisplay*                       SubtitleDisplay;                                   // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxRoot;                                   // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Subtitles(int32 EntryPoint);
	void Construct();
	ESlateVisibility GetSubtitleVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Subtitles_C">();
	}
	static class USubtitles_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USubtitles_C>();
	}
};
static_assert(alignof(USubtitles_C) == 0x000008, "Wrong alignment on USubtitles_C");
static_assert(sizeof(USubtitles_C) == 0x000250, "Wrong size on USubtitles_C");
static_assert(offsetof(USubtitles_C, UberGraphFrame) == 0x000238, "Member 'USubtitles_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USubtitles_C, SubtitleDisplay) == 0x000240, "Member 'USubtitles_C::SubtitleDisplay' has a wrong offset!");
static_assert(offsetof(USubtitles_C, VerticalBoxRoot) == 0x000248, "Member 'USubtitles_C::VerticalBoxRoot' has a wrong offset!");

}
