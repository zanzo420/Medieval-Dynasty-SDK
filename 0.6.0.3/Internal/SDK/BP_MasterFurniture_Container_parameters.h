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

// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.LoadContainerData
struct ABP_MasterFurniture_Container_C_LoadContainerData_Params
{
	struct FST_SAVE_Containers                         FurnitureData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FString                                     SaveGameVersion;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.GetContainerDataToSave
struct ABP_MasterFurniture_Container_C_GetContainerDataToSave_Params
{
	struct FST_SAVE_Containers                         FurnitureData;                                             // (Parm, OutParm, HasGetValueTypeHash)
};

// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.UserConstructionScript
struct ABP_MasterFurniture_Container_C_UserConstructionScript_Params
{
};

// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.Interact
struct ABP_MasterFurniture_Container_C_Interact_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.ExecuteUbergraph_BP_MasterFurniture_Container
struct ABP_MasterFurniture_Container_C_ExecuteUbergraph_BP_MasterFurniture_Container_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_MasterFurniture_Container.BP_MasterFurniture_Container_C.OnFreeContainer__DelegateSignature
struct ABP_MasterFurniture_Container_C_OnFreeContainer__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
