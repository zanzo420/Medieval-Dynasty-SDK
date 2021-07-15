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

// Function BPI_AqiatocWorld.BPI_AqiatocWorld_C.OnWorldOriginChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector              Old_Origin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntVector              New_Origin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_AqiatocWorld_C::OnWorldOriginChanged(const struct FIntVector& Old_Origin, const struct FIntVector& New_Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_AqiatocWorld.BPI_AqiatocWorld_C.OnWorldOriginChanged");

	UBPI_AqiatocWorld_C_OnWorldOriginChanged_Params params;
	params.Old_Origin = Old_Origin;
	params.New_Origin = New_Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBPI_AqiatocWorld_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBPI_AqiatocWorld_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
