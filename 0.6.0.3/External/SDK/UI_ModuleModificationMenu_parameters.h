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

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.GetResources
struct UUI_ModuleModificationMenu_C_GetResources_Params
{
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.RemoveAllMaterialSegments
struct UUI_ModuleModificationMenu_C_RemoveAllMaterialSegments_Params
{
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.CollapseItemsArray
struct UUI_ModuleModificationMenu_C_CollapseItemsArray_Params
{
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.CreateMaterialTypes
struct UUI_ModuleModificationMenu_C_CreateMaterialTypes_Params
{
	TEnumAsByte<E_ModuleType_E_ModuleType>             ModuleType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.CreateModulesCategories
struct UUI_ModuleModificationMenu_C_CreateModulesCategories_Params
{
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.Get_BuildTypeDescription
struct UUI_ModuleModificationMenu_C_Get_BuildTypeDescription_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.Get_BuildTypeName
struct UUI_ModuleModificationMenu_C_Get_BuildTypeName_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.GetMouseOver
struct UUI_ModuleModificationMenu_C_GetMouseOver_Params
{
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.OnSpawned
struct UUI_ModuleModificationMenu_C_OnSpawned_Params
{
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.ChangeInformationAboutSegment
struct UUI_ModuleModificationMenu_C_ChangeInformationAboutSegment_Params
{
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.NextPage
struct UUI_ModuleModificationMenu_C_NextPage_Params
{
	int                                                SwitcherIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.PreviousPage
struct UUI_ModuleModificationMenu_C_PreviousPage_Params
{
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.RemoveMenu
struct UUI_ModuleModificationMenu_C_RemoveMenu_Params
{
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.ExecuteUbergraph_UI_ModuleModificationMenu
struct UUI_ModuleModificationMenu_C_ExecuteUbergraph_UI_ModuleModificationMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ModuleModificationMenu.UI_ModuleModificationMenu_C.SegmentChanged__DelegateSignature
struct UUI_ModuleModificationMenu_C_SegmentChanged__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
