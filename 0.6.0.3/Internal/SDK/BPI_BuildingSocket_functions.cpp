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

// Function BPI_BuildingSocket.BPI_BuildingSocket_C.CheckSocketCompatibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     BuildingHandler                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BuildingSocket_C::CheckSocketCompatibility(const struct FDataTableRowHandle& BuildingHandler, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BuildingSocket.BPI_BuildingSocket_C.CheckSocketCompatibility");

	UBPI_BuildingSocket_C_CheckSocketCompatibility_Params params;
	params.BuildingHandler = BuildingHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;

}


// Function BPI_BuildingSocket.BPI_BuildingSocket_C.GetBuildingHandlers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     HandlerToCompare               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// TArray<struct FDataTableRowHandle> BuildingHandlers               (Parm, OutParm)
// bool                           Compatibility                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBPI_BuildingSocket_C::GetBuildingHandlers(const struct FDataTableRowHandle& HandlerToCompare, TArray<struct FDataTableRowHandle>* BuildingHandlers, bool* Compatibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BuildingSocket.BPI_BuildingSocket_C.GetBuildingHandlers");

	UBPI_BuildingSocket_C_GetBuildingHandlers_Params params;
	params.HandlerToCompare = HandlerToCompare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BuildingHandlers != nullptr)
		*BuildingHandlers = params.BuildingHandlers;
	if (Compatibility != nullptr)
		*Compatibility = params.Compatibility;

}


// Function BPI_BuildingSocket.BPI_BuildingSocket_C.GetSocketLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Transform                      (Parm, OutParm, IsPlainOldData, NoDestructor)
void UBPI_BuildingSocket_C::GetSocketLocation(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_BuildingSocket.BPI_BuildingSocket_C.GetSocketLocation");

	UBPI_BuildingSocket_C_GetSocketLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
