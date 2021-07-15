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

// Function UI_BagMenuSegment.UI_BagMenuSegment_C.SetEnabled
struct UUI_BagMenuSegment_C_SetEnabled_Params
{
	bool                                               Enabled;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_BagMenuSegment.UI_BagMenuSegment_C.Segment Selected
struct UUI_BagMenuSegment_C_Segment_Selected_Params
{
	bool                                               Selected;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_BagMenuSegment.UI_BagMenuSegment_C.UpdateSegmentIcon
struct UUI_BagMenuSegment_C_UpdateSegmentIcon_Params
{
};

// Function UI_BagMenuSegment.UI_BagMenuSegment_C.PreConstruct
struct UUI_BagMenuSegment_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_BagMenuSegment.UI_BagMenuSegment_C.SetIconRotation
struct UUI_BagMenuSegment_C_SetIconRotation_Params
{
	float                                              IconRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_BagMenuSegment.UI_BagMenuSegment_C.SetInvalidSeason
struct UUI_BagMenuSegment_C_SetInvalidSeason_Params
{
	bool                                               Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_BagMenuSegment.UI_BagMenuSegment_C.ExecuteUbergraph_UI_BagMenuSegment
struct UUI_BagMenuSegment_C_ExecuteUbergraph_UI_BagMenuSegment_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
