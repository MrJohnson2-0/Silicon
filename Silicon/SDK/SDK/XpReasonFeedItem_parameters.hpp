#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpReasonFeedItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function XpReasonFeedItem.XpReasonFeedItem_C.ExecuteUbergraph_XpReasonFeedItem
// 0x0004 (0x0004 - 0x0000)
struct XpReasonFeedItem_C_ExecuteUbergraph_XpReasonFeedItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(XpReasonFeedItem_C_ExecuteUbergraph_XpReasonFeedItem) == 0x000004, "Wrong alignment on XpReasonFeedItem_C_ExecuteUbergraph_XpReasonFeedItem");
static_assert(sizeof(XpReasonFeedItem_C_ExecuteUbergraph_XpReasonFeedItem) == 0x000004, "Wrong size on XpReasonFeedItem_C_ExecuteUbergraph_XpReasonFeedItem");
static_assert(offsetof(XpReasonFeedItem_C_ExecuteUbergraph_XpReasonFeedItem, EntryPoint) == 0x000000, "Member 'XpReasonFeedItem_C_ExecuteUbergraph_XpReasonFeedItem::EntryPoint' has a wrong offset!");

// Function XpReasonFeedItem.XpReasonFeedItem_C.SetXpText
// 0x0018 (0x0018 - 0x0000)
struct XpReasonFeedItem_C_SetXpText final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(XpReasonFeedItem_C_SetXpText) == 0x000008, "Wrong alignment on XpReasonFeedItem_C_SetXpText");
static_assert(sizeof(XpReasonFeedItem_C_SetXpText) == 0x000018, "Wrong size on XpReasonFeedItem_C_SetXpText");
static_assert(offsetof(XpReasonFeedItem_C_SetXpText, Text) == 0x000000, "Member 'XpReasonFeedItem_C_SetXpText::Text' has a wrong offset!");

}
