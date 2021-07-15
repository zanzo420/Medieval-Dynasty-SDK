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

// Function UI_QuestNotification.UI_QuestNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_QuestNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestNotification.UI_QuestNotification_C.Construct");

	UUI_QuestNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestNotification.UI_QuestNotification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_QuestNotification_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestNotification.UI_QuestNotification_C.PreConstruct");

	UUI_QuestNotification_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_QuestNotification.UI_QuestNotification_C.ExecuteUbergraph_UI_QuestNotification
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_QuestNotification_C::ExecuteUbergraph_UI_QuestNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_QuestNotification.UI_QuestNotification_C.ExecuteUbergraph_UI_QuestNotification");

	UUI_QuestNotification_C_ExecuteUbergraph_UI_QuestNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_QuestNotification_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Icn_QuestState, UImage);
	READ_PTR_FULL(txt_QuestName, UTextBlock);
	READ_PTR_FULL(txt_QuestState, UTextBlock);
}

void UUI_QuestNotification_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Icn_QuestState);
	DELE_PTR_FULL(txt_QuestName);
	DELE_PTR_FULL(txt_QuestState);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
