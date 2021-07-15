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

// Function UI_Credits.UI_Credits_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Credits_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Credits.UI_Credits_C.PreConstruct");

	UUI_Credits_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Credits.UI_Credits_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
void UUI_Credits_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Credits.UI_Credits_C.CustomEvent_1");

	UUI_Credits_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function UI_Credits.UI_Credits_C.ExecuteUbergraph_UI_Credits
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Credits_C::ExecuteUbergraph_UI_Credits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Credits.UI_Credits_C.ExecuteUbergraph_UI_Credits");

	UUI_Credits_C_ExecuteUbergraph_UI_Credits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UUI_Credits_C::AfterRead()
{
	UUserWidget::AfterRead();

	READ_PTR_FULL(Image_218, UImage);
	READ_PTR_FULL(Img_RenderCubeLogo, UImage);
	READ_PTR_FULL(Img_ToplitzLogo, UImage);
	READ_PTR_FULL(MainBox, UVerticalBox);
	READ_PTR_FULL(OtherTeam, UVerticalBox);
	READ_PTR_FULL(RenderCubeTeam, UVerticalBox);
	READ_PTR_FULL(ToplitzTeam, UVerticalBox);
}

void UUI_Credits_C::BeforeDelete()
{
	UUserWidget::BeforeDelete();

	DELE_PTR_FULL(Image_218);
	DELE_PTR_FULL(Img_RenderCubeLogo);
	DELE_PTR_FULL(Img_ToplitzLogo);
	DELE_PTR_FULL(MainBox);
	DELE_PTR_FULL(OtherTeam);
	DELE_PTR_FULL(RenderCubeTeam);
	DELE_PTR_FULL(ToplitzTeam);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
