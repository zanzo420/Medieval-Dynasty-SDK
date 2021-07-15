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

// Function UI_Tutorial_Master.UI_Tutorial_Master_C.TutorialNext
// (BlueprintCallable, BlueprintEvent)
void UUI_Tutorial_Master_C::TutorialNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Master.UI_Tutorial_Master_C.TutorialNext");

	UUI_Tutorial_Master_C_TutorialNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Tutorial_Master.UI_Tutorial_Master_C.TutorialPrevious
// (BlueprintCallable, BlueprintEvent)
void UUI_Tutorial_Master_C::TutorialPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Master.UI_Tutorial_Master_C.TutorialPrevious");

	UUI_Tutorial_Master_C_TutorialPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Tutorial_Master.UI_Tutorial_Master_C.TutorialClose
// (BlueprintCallable, BlueprintEvent)
void UUI_Tutorial_Master_C::TutorialClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Master.UI_Tutorial_Master_C.TutorialClose");

	UUI_Tutorial_Master_C_TutorialClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Tutorial_Master.UI_Tutorial_Master_C.ExecuteUbergraph_UI_Tutorial_Master
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Tutorial_Master_C::ExecuteUbergraph_UI_Tutorial_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Tutorial_Master.UI_Tutorial_Master_C.ExecuteUbergraph_UI_Tutorial_Master");

	UUI_Tutorial_Master_C_ExecuteUbergraph_UI_Tutorial_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Tutorial_Master_C::AfterRead()
{
	UUserWidget::AfterRead();

}

void UUI_Tutorial_Master_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
