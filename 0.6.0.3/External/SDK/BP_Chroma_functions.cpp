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

// Function BP_Chroma.BP_Chroma_C.PrepareHealthFrames
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Chroma_C::PrepareHealthFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.PrepareHealthFrames");

	ABP_Chroma_C_PrepareHealthFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.PrepareFoodFrames
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Chroma_C::PrepareFoodFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.PrepareFoodFrames");

	ABP_Chroma_C_PrepareFoodFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.PrepareWaterFrames
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Chroma_C::PrepareWaterFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.PrepareWaterFrames");

	ABP_Chroma_C_PrepareWaterFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.UpdateQuickslots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Chroma_C::UpdateQuickslots()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.UpdateQuickslots");

	ABP_Chroma_C_UpdateQuickslots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.CheckIfWaterUpdateNeeded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          water                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::CheckIfWaterUpdateNeeded(float water)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.CheckIfWaterUpdateNeeded");

	ABP_Chroma_C_CheckIfWaterUpdateNeeded_Params params;
	params.water = water;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.CheckIfFoodUpdateNeeded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::CheckIfFoodUpdateNeeded(float Food)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.CheckIfFoodUpdateNeeded");

	ABP_Chroma_C_CheckIfFoodUpdateNeeded_Params params;
	params.Food = Food;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.CheckIfHealthUpdateNeeded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::CheckIfHealthUpdateNeeded(float Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.CheckIfHealthUpdateNeeded");

	ABP_Chroma_C_CheckIfHealthUpdateNeeded_Params params;
	params.Health = Health;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.HandleInactiveKeys
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Animation_ID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>> Keys                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Threshold                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::HandleInactiveKeys(int Animation_ID, TArray<TEnumAsByte<ChromaSDKPlugin_EChromaSDKKeyboardKey>>* Keys, int Threshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.HandleInactiveKeys");

	ABP_Chroma_C_HandleInactiveKeys_Params params;
	params.Animation_ID = Animation_ID;
	params.Threshold = Threshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Keys != nullptr)
		*Keys = params.Keys;

}


// Function BP_Chroma.BP_Chroma_C.UpdateChromaAnimationEffect
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Chroma_C::UpdateChromaAnimationEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.UpdateChromaAnimationEffect");

	ABP_Chroma_C_UpdateChromaAnimationEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.UpdateChromaAnimation
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Chroma_C::UpdateChromaAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.UpdateChromaAnimation");

	ABP_Chroma_C_UpdateChromaAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.InitChromaHealthBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health_Percentage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::InitChromaHealthBar(float Health_Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.InitChromaHealthBar");

	ABP_Chroma_C_InitChromaHealthBar_Params params;
	params.Health_Percentage = Health_Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.InitChromaFoodBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food_Percentage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::InitChromaFoodBar(float Food_Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.InitChromaFoodBar");

	ABP_Chroma_C_InitChromaFoodBar_Params params;
	params.Food_Percentage = Food_Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.InitChromaWaterBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Water_Percentage               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::InitChromaWaterBar(float Water_Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.InitChromaWaterBar");

	ABP_Chroma_C_InitChromaWaterBar_Params params;
	params.Water_Percentage = Water_Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Chroma_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.ReceiveBeginPlay");

	ABP_Chroma_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.UpdateChromaWaterBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Water_Percentage               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::UpdateChromaWaterBar(float Water_Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.UpdateChromaWaterBar");

	ABP_Chroma_C_UpdateChromaWaterBar_Params params;
	params.Water_Percentage = Water_Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.UpdateQuickslotBar
// (BlueprintCallable, BlueprintEvent)
void ABP_Chroma_C::UpdateQuickslotBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.UpdateQuickslotBar");

	ABP_Chroma_C_UpdateQuickslotBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.BindChromaQuickslotEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APC_Player_C*            PCPlayerReference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ABP_Chroma_C::BindChromaQuickslotEvent(class APC_Player_C* PCPlayerReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.BindChromaQuickslotEvent");

	ABP_Chroma_C_BindChromaQuickslotEvent_Params params;
	params.PCPlayerReference = PCPlayerReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.UpdateChromaFoodBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Food_Percentage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::UpdateChromaFoodBar(float Food_Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.UpdateChromaFoodBar");

	ABP_Chroma_C_UpdateChromaFoodBar_Params params;
	params.Food_Percentage = Food_Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.ChromaHitEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_DamageType_E_DamageType> Damage_Type                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::ChromaHitEffect(TEnumAsByte<E_DamageType_E_DamageType> Damage_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.ChromaHitEffect");

	ABP_Chroma_C_ChromaHitEffect_Params params;
	params.Damage_Type = Damage_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.ReceiveTick");

	ABP_Chroma_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.UpdateChromaHealthBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Health_Percentage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::UpdateChromaHealthBar(float Health_Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.UpdateChromaHealthBar");

	ABP_Chroma_C_UpdateChromaHealthBar_Params params;
	params.Health_Percentage = Health_Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.InitChromaBars
// (BlueprintCallable, BlueprintEvent)
void ABP_Chroma_C::InitChromaBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.InitChromaBars");

	ABP_Chroma_C_InitChromaBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chroma.BP_Chroma_C.ExecuteUbergraph_BP_Chroma
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chroma_C::ExecuteUbergraph_BP_Chroma(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chroma.BP_Chroma_C.ExecuteUbergraph_BP_Chroma");

	ABP_Chroma_C_ExecuteUbergraph_BP_Chroma_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Chroma_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(PCPlayerReference, APC_Player_C);
}

void ABP_Chroma_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(PCPlayerReference);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
