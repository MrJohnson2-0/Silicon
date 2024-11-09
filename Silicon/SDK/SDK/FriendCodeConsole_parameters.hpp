#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendCodeConsole

#include "Basic.hpp"


namespace SDK::Params
{

// Function FriendCodeConsole.FriendCodeConsole_C.ExecuteUbergraph_FriendCodeConsole
// 0x0060 (0x0060 - 0x0000)
struct FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bMessageSent)>            K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                        CallFunc_GetContext_ReturnValue2;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetFriendCodeDescription_ReturnValue;     // 0x0028(0x0018)()
	class FText                                   CallFunc_GetFriendCodeDisplayName_ReturnValue;     // 0x0040(0x0018)()
	bool                                          K2Node_CustomEvent_bMessageSent;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole) == 0x000008, "Wrong alignment on FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole");
static_assert(sizeof(FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole) == 0x000060, "Wrong size on FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole");
static_assert(offsetof(FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole, EntryPoint) == 0x000000, "Member 'FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole::EntryPoint' has a wrong offset!");
static_assert(offsetof(FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole, CallFunc_GetContext_ReturnValue) == 0x000018, "Member 'FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole, CallFunc_GetContext_ReturnValue2) == 0x000020, "Member 'FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole::CallFunc_GetContext_ReturnValue2' has a wrong offset!");
static_assert(offsetof(FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole, CallFunc_GetFriendCodeDescription_ReturnValue) == 0x000028, "Member 'FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole::CallFunc_GetFriendCodeDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole, CallFunc_GetFriendCodeDisplayName_ReturnValue) == 0x000040, "Member 'FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole::CallFunc_GetFriendCodeDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole, K2Node_CustomEvent_bMessageSent) == 0x000058, "Member 'FriendCodeConsole_C_ExecuteUbergraph_FriendCodeConsole::K2Node_CustomEvent_bMessageSent' has a wrong offset!");

// Function FriendCodeConsole.FriendCodeConsole_C.OnSendFriendCodeMessageComplete
// 0x0001 (0x0001 - 0x0000)
struct FriendCodeConsole_C_OnSendFriendCodeMessageComplete final
{
public:
	bool                                          bMessageSent;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FriendCodeConsole_C_OnSendFriendCodeMessageComplete) == 0x000001, "Wrong alignment on FriendCodeConsole_C_OnSendFriendCodeMessageComplete");
static_assert(sizeof(FriendCodeConsole_C_OnSendFriendCodeMessageComplete) == 0x000001, "Wrong size on FriendCodeConsole_C_OnSendFriendCodeMessageComplete");
static_assert(offsetof(FriendCodeConsole_C_OnSendFriendCodeMessageComplete, bMessageSent) == 0x000000, "Member 'FriendCodeConsole_C_OnSendFriendCodeMessageComplete::bMessageSent' has a wrong offset!");

}
