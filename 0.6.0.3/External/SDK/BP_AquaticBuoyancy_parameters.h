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

// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.GetSurfceDistance
struct UBP_AquaticBuoyancy_C_GetSurfceDistance_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.Validate Mesh
struct UBP_AquaticBuoyancy_C_Validate_Mesh_Params
{
};

// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.SetAquaticVolume
struct UBP_AquaticBuoyancy_C_SetAquaticVolume_Params
{
	class ABP_AquaticSurface_C*                        AquaticSurface;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.SetTickMode
struct UBP_AquaticBuoyancy_C_SetTickMode_Params
{
	bool                                               InWater;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.UpdateInFluid
struct UBP_AquaticBuoyancy_C_UpdateInFluid_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ReceiveBeginPlay
struct UBP_AquaticBuoyancy_C_ReceiveBeginPlay_Params
{
};

// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ReceiveTick
struct UBP_AquaticBuoyancy_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_AquaticBuoyancy.BP_AquaticBuoyancy_C.ExecuteUbergraph_BP_AquaticBuoyancy
struct UBP_AquaticBuoyancy_C_ExecuteUbergraph_BP_AquaticBuoyancy_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
