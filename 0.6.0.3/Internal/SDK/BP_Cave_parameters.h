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

// Function BP_Cave.BP_Cave_C.EnableDecorations
struct ABP_Cave_C_EnableDecorations_Params
{
};

// Function BP_Cave.BP_Cave_C.DisableDecorations
struct ABP_Cave_C_DisableDecorations_Params
{
};

// Function BP_Cave.BP_Cave_C.UpdateDecorationList
struct ABP_Cave_C_UpdateDecorationList_Params
{
};

// Function BP_Cave.BP_Cave_C.UserConstructionScript
struct ABP_Cave_C_UserConstructionScript_Params
{
};

// Function BP_Cave.BP_Cave_C.BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Cave_C_BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function BP_Cave.BP_Cave_C.BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABP_Cave_C_BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Cave.BP_Cave_C.SetCaveAccessible
struct ABP_Cave_C_SetCaveAccessible_Params
{
	bool                                               Accessible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Cave.BP_Cave_C.ReceiveBeginPlay
struct ABP_Cave_C_ReceiveBeginPlay_Params
{
};

// Function BP_Cave.BP_Cave_C.ExecuteUbergraph_BP_Cave
struct ABP_Cave_C_ExecuteUbergraph_BP_Cave_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
