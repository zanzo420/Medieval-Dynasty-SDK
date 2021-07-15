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

// Function BP_Orchard.BP_Orchard_C.CanBeDestroyed?
struct ABP_Orchard_C_CanBeDestroyed__Params
{
	bool                                               CanBeDestroyed_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Orchard.BP_Orchard_C.GenerateDestruction
struct ABP_Orchard_C_GenerateDestruction_Params
{
	float                                              Intensity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.ChunkInteraction
struct ABP_Orchard_C_ChunkInteraction_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Timer;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  Hit;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Orchard.BP_Orchard_C.GetAdditionalMeshComponentForStage
struct ABP_Orchard_C_GetAdditionalMeshComponentForStage_Params
{
	TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   StaticMeshComponent;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.UpdateChunkGround
struct ABP_Orchard_C_UpdateChunkGround_Params
{
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.ToolInteraction
struct ABP_Orchard_C_ToolInteraction_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseChunkData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FST_Chunks                                  ChunkData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.GetInteractName
struct ABP_Orchard_C_GetInteractName_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InteractName;                                              // (Parm, OutParm)
};

// Function BP_Orchard.BP_Orchard_C.GetInteractTool_UI
struct ABP_Orchard_C_GetInteractTool_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BagMode_E_BagMode>                   BagMode;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingModifications_E_BuildingModifications> BuildingMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.IsToolNeeded
struct ABP_Orchard_C_IsToolNeeded_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CheckTools;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Success;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Orchard.BP_Orchard_C.IsToolInteractable_UI
struct ABP_Orchard_C_IsToolInteractable_UI_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Orchard.BP_Orchard_C.GetInteractTool
struct ABP_Orchard_C_GetInteractTool_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       Tool;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.IsInteractable
struct ABP_Orchard_C_IsInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowPressUI;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowTimerUI;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowOnlyName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Time;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.IsToolInteractable
struct ABP_Orchard_C_IsToolInteractable_Params
{
	class ABP_BaseCharacter_C*                         BaseCharacter;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Interactable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Possibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Orchard.BP_Orchard_C.SeasonalUpdateChunk
struct ABP_Orchard_C_SeasonalUpdateChunk_Params
{
	int                                                ChunkId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.UpdateMeshes
struct ABP_Orchard_C_UpdateMeshes_Params
{
};

// Function BP_Orchard.BP_Orchard_C.GetMeshComponentForStage
struct ABP_Orchard_C_GetMeshComponentForStage_Params
{
	TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantStage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent*   StaticMeshComponent;                                       // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.InitInstances
struct ABP_Orchard_C_InitInstances_Params
{
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_503076CD4F399D9320ED3AB74CCE4E7E
struct ABP_Orchard_C_OnLoaded_503076CD4F399D9320ED3AB74CCE4E7E_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_384B94C9491C72D8E694A2BDB2C8B78F
struct ABP_Orchard_C_OnLoaded_384B94C9491C72D8E694A2BDB2C8B78F_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_15DDAFB6407C3D143BF45F966B37DFF4
struct ABP_Orchard_C_OnLoaded_15DDAFB6407C3D143BF45F966B37DFF4_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_51C49ED744F870B3EB3DD98D89604DB6
struct ABP_Orchard_C_OnLoaded_51C49ED744F870B3EB3DD98D89604DB6_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_222D89C1496B5C445688F388BA2043F7
struct ABP_Orchard_C_OnLoaded_222D89C1496B5C445688F388BA2043F7_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_9785A01D42DB795A38CB589DED83761E
struct ABP_Orchard_C_OnLoaded_9785A01D42DB795A38CB589DED83761E_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_B00316DA44D90DDEC4B9D5BBCA417073
struct ABP_Orchard_C_OnLoaded_B00316DA44D90DDEC4B9D5BBCA417073_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_12C8322D44974212EF81D8974382BD7A
struct ABP_Orchard_C_OnLoaded_12C8322D44974212EF81D8974382BD7A_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_5457B7784E13A01A8812188E76A8F8FB
struct ABP_Orchard_C_OnLoaded_5457B7784E13A01A8812188E76A8F8FB_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_157FC6FF48B590EBF8ABE7997CFF8CF8
struct ABP_Orchard_C_OnLoaded_157FC6FF48B590EBF8ABE7997CFF8CF8_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_99EDBE2048E88D15AF8A15948CEC2BB7
struct ABP_Orchard_C_OnLoaded_99EDBE2048E88D15AF8A15948CEC2BB7_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_7E49F5824B888C9B1FD19DA2EE501163
struct ABP_Orchard_C_OnLoaded_7E49F5824B888C9B1FD19DA2EE501163_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_DBE66E404ED8E392F1D038A2A43D7E33
struct ABP_Orchard_C_OnLoaded_DBE66E404ED8E392F1D038A2A43D7E33_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_FC4A34B94C818928FE536889C67E50EA
struct ABP_Orchard_C_OnLoaded_FC4A34B94C818928FE536889C67E50EA_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_2EB7392E429E7C1AEDA5A1AAE66AD98F
struct ABP_Orchard_C_OnLoaded_2EB7392E429E7C1AEDA5A1AAE66AD98F_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_3E069F4745B8B84D15236FB32E03DFE6
struct ABP_Orchard_C_OnLoaded_3E069F4745B8B84D15236FB32E03DFE6_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_444579C246696AC34CFDBDA68FAA90BF
struct ABP_Orchard_C_OnLoaded_444579C246696AC34CFDBDA68FAA90BF_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_4C9EF34C45BB2EDE68501DB58B45D1C4
struct ABP_Orchard_C_OnLoaded_4C9EF34C45BB2EDE68501DB58B45D1C4_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_FAA0540D4C51080925409598469E5FE9
struct ABP_Orchard_C_OnLoaded_FAA0540D4C51080925409598469E5FE9_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_31AC4F5748F82636BD5BF6918986A652
struct ABP_Orchard_C_OnLoaded_31AC4F5748F82636BD5BF6918986A652_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_D983F6A84E3B5B60A8263B82186B3A6D
struct ABP_Orchard_C_OnLoaded_D983F6A84E3B5B60A8263B82186B3A6D_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_142EA7314D0B2667D3AD5B9FB8589681
struct ABP_Orchard_C_OnLoaded_142EA7314D0B2667D3AD5B9FB8589681_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_23A3D7214CFA255F51B3CAB112D869BD
struct ABP_Orchard_C_OnLoaded_23A3D7214CFA255F51B3CAB112D869BD_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_8EC0D1C54C3EBC7B92B03483F14A8C06
struct ABP_Orchard_C_OnLoaded_8EC0D1C54C3EBC7B92B03483F14A8C06_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_291A46F240F9782F181121B58DE33847
struct ABP_Orchard_C_OnLoaded_291A46F240F9782F181121B58DE33847_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_11EDFDCC4DA47572E0AFCCB35F3D5DAB
struct ABP_Orchard_C_OnLoaded_11EDFDCC4DA47572E0AFCCB35F3D5DAB_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_684D9F5B4DCE0173B9E831844F207701
struct ABP_Orchard_C_OnLoaded_684D9F5B4DCE0173B9E831844F207701_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_EE82731845CCBCFDCD303998CAE67BAA
struct ABP_Orchard_C_OnLoaded_EE82731845CCBCFDCD303998CAE67BAA_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.OnLoaded_BCD9CDF14AB3CD44C01D6690AE88BE1E
struct ABP_Orchard_C_OnLoaded_BCD9CDF14AB3CD44C01D6690AE88BE1E_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Orchard.BP_Orchard_C.InitMeshes
struct ABP_Orchard_C_InitMeshes_Params
{
	bool                                               Load;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Orchard.BP_Orchard_C.ExecuteUbergraph_BP_Orchard
struct ABP_Orchard_C_ExecuteUbergraph_BP_Orchard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
