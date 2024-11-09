#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuestTalkingHeadWidget

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.ExecuteUbergraph_QuestTalkingHeadWidget
// 0x0040 (0x0040 - 0x0000)
struct QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUIManagerWidget_NUI*               CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UTexture2D* Image, class FText Title, class FText Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)> K2Node_CreateDelegate_OutputDelegate2;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool bShouldBlockSubtitlePortrait)> K2Node_CreateDelegate_OutputDelegate3;             // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget) == 0x000008, "Wrong alignment on QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget");
static_assert(sizeof(QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget) == 0x000040, "Wrong size on QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget");
static_assert(offsetof(QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget, EntryPoint) == 0x000000, "Member 'QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000018, "Member 'QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget, K2Node_CreateDelegate_OutputDelegate2) == 0x000020, "Member 'QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget::K2Node_CreateDelegate_OutputDelegate2' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget, K2Node_CreateDelegate_OutputDelegate3) == 0x000030, "Member 'QuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget::K2Node_CreateDelegate_OutputDelegate3' has a wrong offset!");

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadImage
// 0x0008 (0x0008 - 0x0000)
struct QuestTalkingHeadWidget_C_SetTalkingHeadImage final
{
public:
	class UTexture2D*                             Icon;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestTalkingHeadWidget_C_SetTalkingHeadImage) == 0x000008, "Wrong alignment on QuestTalkingHeadWidget_C_SetTalkingHeadImage");
static_assert(sizeof(QuestTalkingHeadWidget_C_SetTalkingHeadImage) == 0x000008, "Wrong size on QuestTalkingHeadWidget_C_SetTalkingHeadImage");
static_assert(offsetof(QuestTalkingHeadWidget_C_SetTalkingHeadImage, Icon) == 0x000000, "Member 'QuestTalkingHeadWidget_C_SetTalkingHeadImage::Icon' has a wrong offset!");

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadName
// 0x0020 (0x0020 - 0x0000)
struct QuestTalkingHeadWidget_C_SetTalkingHeadName final
{
public:
	class FText                                   Title;                                             // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestTalkingHeadWidget_C_SetTalkingHeadName) == 0x000008, "Wrong alignment on QuestTalkingHeadWidget_C_SetTalkingHeadName");
static_assert(sizeof(QuestTalkingHeadWidget_C_SetTalkingHeadName) == 0x000020, "Wrong size on QuestTalkingHeadWidget_C_SetTalkingHeadName");
static_assert(offsetof(QuestTalkingHeadWidget_C_SetTalkingHeadName, Title) == 0x000000, "Member 'QuestTalkingHeadWidget_C_SetTalkingHeadName::Title' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_SetTalkingHeadName, Temp_bool_Variable) == 0x000018, "Member 'QuestTalkingHeadWidget_C_SetTalkingHeadName::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_SetTalkingHeadName, CallFunc_TextIsEmpty_ReturnValue) == 0x000019, "Member 'QuestTalkingHeadWidget_C_SetTalkingHeadName::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_SetTalkingHeadName, Temp_byte_Variable) == 0x00001A, "Member 'QuestTalkingHeadWidget_C_SetTalkingHeadName::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_SetTalkingHeadName, Temp_byte_Variable2) == 0x00001B, "Member 'QuestTalkingHeadWidget_C_SetTalkingHeadName::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_SetTalkingHeadName, K2Node_Select_Default) == 0x00001C, "Member 'QuestTalkingHeadWidget_C_SetTalkingHeadName::K2Node_Select_Default' has a wrong offset!");

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadSubtitle
// 0x0018 (0x0018 - 0x0000)
struct QuestTalkingHeadWidget_C_SetTalkingHeadSubtitle final
{
public:
	class FText                                   Subtitle;                                          // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(QuestTalkingHeadWidget_C_SetTalkingHeadSubtitle) == 0x000008, "Wrong alignment on QuestTalkingHeadWidget_C_SetTalkingHeadSubtitle");
static_assert(sizeof(QuestTalkingHeadWidget_C_SetTalkingHeadSubtitle) == 0x000018, "Wrong size on QuestTalkingHeadWidget_C_SetTalkingHeadSubtitle");
static_assert(offsetof(QuestTalkingHeadWidget_C_SetTalkingHeadSubtitle, Subtitle) == 0x000000, "Member 'QuestTalkingHeadWidget_C_SetTalkingHeadSubtitle::Subtitle' has a wrong offset!");

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadBegin
// 0x0040 (0x0040 - 0x0000)
struct QuestTalkingHeadWidget_C_HandleTalkingHeadBegin final
{
public:
	class UTexture2D*                             Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Subtitle;                                          // 0x0020(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	EFortAnnouncementDisplayPreference            Param_DisplayPreference;                           // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestTalkingHeadWidget_C_HandleTalkingHeadBegin) == 0x000008, "Wrong alignment on QuestTalkingHeadWidget_C_HandleTalkingHeadBegin");
static_assert(sizeof(QuestTalkingHeadWidget_C_HandleTalkingHeadBegin) == 0x000040, "Wrong size on QuestTalkingHeadWidget_C_HandleTalkingHeadBegin");
static_assert(offsetof(QuestTalkingHeadWidget_C_HandleTalkingHeadBegin, Image) == 0x000000, "Member 'QuestTalkingHeadWidget_C_HandleTalkingHeadBegin::Image' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_HandleTalkingHeadBegin, Title) == 0x000008, "Member 'QuestTalkingHeadWidget_C_HandleTalkingHeadBegin::Title' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_HandleTalkingHeadBegin, Subtitle) == 0x000020, "Member 'QuestTalkingHeadWidget_C_HandleTalkingHeadBegin::Subtitle' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_HandleTalkingHeadBegin, Param_DisplayPreference) == 0x000038, "Member 'QuestTalkingHeadWidget_C_HandleTalkingHeadBegin::Param_DisplayPreference' has a wrong offset!");

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleShouldBlockSubtitlePortraitChanged
// 0x0001 (0x0001 - 0x0000)
struct QuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged final
{
public:
	bool                                          ShouldBlockSubtitlePortrait;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged) == 0x000001, "Wrong alignment on QuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged");
static_assert(sizeof(QuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged) == 0x000001, "Wrong size on QuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged");
static_assert(offsetof(QuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged, ShouldBlockSubtitlePortrait) == 0x000000, "Member 'QuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged::ShouldBlockSubtitlePortrait' has a wrong offset!");

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.UpdateVisibility
// 0x0007 (0x0007 - 0x0000)
struct QuestTalkingHeadWidget_C_UpdateVisibility final
{
public:
	EFortAnnouncementDisplayPreference            Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable2;                               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable3;                               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable4;                               // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestTalkingHeadWidget_C_UpdateVisibility) == 0x000001, "Wrong alignment on QuestTalkingHeadWidget_C_UpdateVisibility");
static_assert(sizeof(QuestTalkingHeadWidget_C_UpdateVisibility) == 0x000007, "Wrong size on QuestTalkingHeadWidget_C_UpdateVisibility");
static_assert(offsetof(QuestTalkingHeadWidget_C_UpdateVisibility, Temp_byte_Variable) == 0x000000, "Member 'QuestTalkingHeadWidget_C_UpdateVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_UpdateVisibility, Temp_byte_Variable2) == 0x000001, "Member 'QuestTalkingHeadWidget_C_UpdateVisibility::Temp_byte_Variable2' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_UpdateVisibility, Temp_byte_Variable3) == 0x000002, "Member 'QuestTalkingHeadWidget_C_UpdateVisibility::Temp_byte_Variable3' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_UpdateVisibility, Temp_byte_Variable4) == 0x000003, "Member 'QuestTalkingHeadWidget_C_UpdateVisibility::Temp_byte_Variable4' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_UpdateVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000004, "Member 'QuestTalkingHeadWidget_C_UpdateVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_UpdateVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000005, "Member 'QuestTalkingHeadWidget_C_UpdateVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestTalkingHeadWidget_C_UpdateVisibility, K2Node_Select_Default) == 0x000006, "Member 'QuestTalkingHeadWidget_C_UpdateVisibility::K2Node_Select_Default' has a wrong offset!");

}
