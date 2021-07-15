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

// Function DC_DoesPlayerControlHeir.DC_DoesPlayerControlHeir_C.IsConditionMet
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       ConsideringPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  NPCActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UDC_DoesPlayerControlHeir_C::IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DC_DoesPlayerControlHeir.DC_DoesPlayerControlHeir_C.IsConditionMet");

	UDC_DoesPlayerControlHeir_C_IsConditionMet_Params params;
	params.ConsideringPlayer = ConsideringPlayer;
	params.NPCActor = NPCActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UDC_DoesPlayerControlHeir_C::AfterRead()
{
	UDialogueConditions::AfterRead();

}

void UDC_DoesPlayerControlHeir_C::BeforeDelete()
{
	UDialogueConditions::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
