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

// Function BP_BuildSocket.BP_BuildSocket_C.CheckSocketCompatibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     BuildingHandler                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BuildSocket_C::CheckSocketCompatibility(const struct FDataTableRowHandle& BuildingHandler, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildSocket.BP_BuildSocket_C.CheckSocketCompatibility");

	ABP_BuildSocket_C_CheckSocketCompatibility_Params params;
	params.BuildingHandler = BuildingHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BP_BuildSocket.BP_BuildSocket_C.GetBuildingHandlers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     HandlerToCompare               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TArray<struct FDataTableRowHandle> BuildingHandlers               (Parm, OutParm)
// bool                           Compatibility                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_BuildSocket_C::GetBuildingHandlers(const struct FDataTableRowHandle& HandlerToCompare, TArray<struct FDataTableRowHandle>* BuildingHandlers, bool* Compatibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildSocket.BP_BuildSocket_C.GetBuildingHandlers");

	ABP_BuildSocket_C_GetBuildingHandlers_Params params;
	params.HandlerToCompare = HandlerToCompare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingHandlers != nullptr)
		*BuildingHandlers = params.BuildingHandlers;
	if (Compatibility != nullptr)
		*Compatibility = params.Compatibility;

}


// Function BP_BuildSocket.BP_BuildSocket_C.GetSocketLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void ABP_BuildSocket_C::GetSocketLocation(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildSocket.BP_BuildSocket_C.GetSocketLocation");

	ABP_BuildSocket_C_GetSocketLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

}


// Function BP_BuildSocket.BP_BuildSocket_C.GetBuildingType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Buildings_E_Buildings> GetBuildingType                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BuildSocket_C::GetBuildingType(TEnumAsByte<E_Buildings_E_Buildings>* GetBuildingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildSocket.BP_BuildSocket_C.GetBuildingType");

	ABP_BuildSocket_C_GetBuildingType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GetBuildingType != nullptr)
		*GetBuildingType = params.GetBuildingType;

}


// Function BP_BuildSocket.BP_BuildSocket_C.GetEntrances
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         Entrances                      (Parm, OutParm)
void ABP_BuildSocket_C::GetEntrances(TArray<struct FVector>* Entrances)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildSocket.BP_BuildSocket_C.GetEntrances");

	ABP_BuildSocket_C_GetEntrances_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Entrances != nullptr)
		*Entrances = params.Entrances;

}


// Function BP_BuildSocket.BP_BuildSocket_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_BuildSocket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BuildSocket.BP_BuildSocket_C.UserConstructionScript");

	ABP_BuildSocket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
