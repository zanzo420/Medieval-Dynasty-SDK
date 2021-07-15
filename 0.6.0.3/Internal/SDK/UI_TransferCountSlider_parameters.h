#pragma once

// Name: Medieval Dynasty, Version: 0.6.0.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_TransferCountSlider.UI_TransferCountSlider_C.SliderAccept
struct UUI_TransferCountSlider_C_SliderAccept_Params
{
};

// Function UI_TransferCountSlider.UI_TransferCountSlider_C.Tick
struct UUI_TransferCountSlider_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TransferCountSlider.UI_TransferCountSlider_C.Construct
struct UUI_TransferCountSlider_C_Construct_Params
{
};

// Function UI_TransferCountSlider.UI_TransferCountSlider_C.PreConstruct
struct UUI_TransferCountSlider_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_TransferCountSlider.UI_TransferCountSlider_C.Cost
struct UUI_TransferCountSlider_C_Cost_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TransferCountSlider.UI_TransferCountSlider_C.ExecuteUbergraph_UI_TransferCountSlider
struct UUI_TransferCountSlider_C_ExecuteUbergraph_UI_TransferCountSlider_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
