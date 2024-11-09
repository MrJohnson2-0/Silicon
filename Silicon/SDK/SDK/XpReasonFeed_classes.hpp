#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpReasonFeed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass XpReasonFeed.XpReasonFeed_C
// 0x0020 (0x0228 - 0x0208)
class UXpReasonFeed_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UOverlay*                               Feed;                                              // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           StaticFeed;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Animating;                                         // 0x0220(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_XpReasonFeed(int32 EntryPoint);
	void Destruct();
	void Reset_Feed();
	void Play_Xp_Reward(const struct FAthenaMatchXpReward& Reward);
	void IsReadyForNextXpReward(bool* Ready);
	void SetXpRewards(TArray<struct FAthenaMatchXpReward>& XpRewards);
	void ShowAllXpRewards(bool Show);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpReasonFeed_C">();
	}
	static class UXpReasonFeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpReasonFeed_C>();
	}
};
static_assert(alignof(UXpReasonFeed_C) == 0x000008, "Wrong alignment on UXpReasonFeed_C");
static_assert(sizeof(UXpReasonFeed_C) == 0x000228, "Wrong size on UXpReasonFeed_C");
static_assert(offsetof(UXpReasonFeed_C, UberGraphFrame) == 0x000208, "Member 'UXpReasonFeed_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UXpReasonFeed_C, Feed) == 0x000210, "Member 'UXpReasonFeed_C::Feed' has a wrong offset!");
static_assert(offsetof(UXpReasonFeed_C, StaticFeed) == 0x000218, "Member 'UXpReasonFeed_C::StaticFeed' has a wrong offset!");
static_assert(offsetof(UXpReasonFeed_C, Animating) == 0x000220, "Member 'UXpReasonFeed_C::Animating' has a wrong offset!");

}
