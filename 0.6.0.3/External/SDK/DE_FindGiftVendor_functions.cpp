// Name: Medieval Dynasty, Version: 0.6.0.3

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function DE_FindGiftVendor.DE_FindGiftVendor_C.Functionality
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APC_Player_C*            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UDE_FindGiftVendor_C::Functionality(class APC_Player_C* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_FindGiftVendor.DE_FindGiftVendor_C.Functionality");

	UDE_FindGiftVendor_C_Functionality_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_FindGiftVendor.DE_FindGiftVendor_C.RecieveEventTriggered
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NPCActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_FindGiftVendor_C::RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_FindGiftVendor.DE_FindGiftVendor_C.RecieveEventTriggered");

	UDE_FindGiftVendor_C_RecieveEventTriggered_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DE_FindGiftVendor.DE_FindGiftVendor_C.ExecuteUbergraph_DE_FindGiftVendor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDE_FindGiftVendor_C::ExecuteUbergraph_DE_FindGiftVendor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DE_FindGiftVendor.DE_FindGiftVendor_C.ExecuteUbergraph_DE_FindGiftVendor");

	UDE_FindGiftVendor_C_ExecuteUbergraph_DE_FindGiftVendor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDE_FindGiftVendor_C::AfterRead()
{
	UDialogueEvents::AfterRead();

}

void UDE_FindGiftVendor_C::BeforeDelete()
{
	UDialogueEvents::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
