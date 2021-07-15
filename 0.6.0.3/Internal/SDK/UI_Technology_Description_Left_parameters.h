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

// Function UI_Technology_Description_Left.UI_Technology_Description_Left_C.UpdateDescription
struct UUI_Technology_Description_Left_C_UpdateDescription_Params
{
	struct FDataTableRowHandle                         BuildingReference;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function UI_Technology_Description_Left.UI_Technology_Description_Left_C.UpdateDescriptionCustomSlot
struct UUI_Technology_Description_Left_C_UpdateDescriptionCustomSlot_Params
{
	class UTexture2D*                                  SlotIcon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       SlotName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       SlotDescription;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   SlotTechType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SlotTechNeeded;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Technology_Description_Left.UI_Technology_Description_Left_C.ExecuteUbergraph_UI_Technology_Description_Left
struct UUI_Technology_Description_Left_C_ExecuteUbergraph_UI_Technology_Description_Left_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
