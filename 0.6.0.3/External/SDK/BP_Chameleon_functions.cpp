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

// Function BP_Chameleon.BP_Chameleon_C.UpdateAlcohol
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::UpdateAlcohol(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.UpdateAlcohol");

	ABP_Chameleon_C_UpdateAlcohol_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.UpdateInspectorMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::UpdateInspectorMode(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.UpdateInspectorMode");

	ABP_Chameleon_C_UpdateInspectorMode_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.InspectorModeFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::InspectorModeFunc(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.InspectorModeFunc");

	ABP_Chameleon_C_InspectorModeFunc_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.UpdateColoredVignette
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::UpdateColoredVignette(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.UpdateColoredVignette");

	ABP_Chameleon_C_UpdateColoredVignette_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.ColoredVignetteFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::ColoredVignetteFunc(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.ColoredVignetteFunc");

	ABP_Chameleon_C_ColoredVignetteFunc_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.UpdateCustomDepthHighlighter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ignore_7___9___11_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_7___9___11_          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ignore_8___10___12_            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_8___10___12_         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ignore_9___10_                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_9___10_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ignore_11___12_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_11___12_             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ignore_7_13_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_7_13_                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::UpdateCustomDepthHighlighter(bool Ignore_7___9___11_, float Intensity_7___9___11_, bool Ignore_8___10___12_, float Intensity_8___10___12_, bool Ignore_9___10_, float Intensity_9___10_, bool Ignore_11___12_, float Intensity_11___12_, bool Ignore_7_13_, float Intensity_7_13_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.UpdateCustomDepthHighlighter");

	ABP_Chameleon_C_UpdateCustomDepthHighlighter_Params params;
	params.Ignore_7___9___11_ = Ignore_7___9___11_;
	params.Intensity_7___9___11_ = Intensity_7___9___11_;
	params.Ignore_8___10___12_ = Ignore_8___10___12_;
	params.Intensity_8___10___12_ = Intensity_8___10___12_;
	params.Ignore_9___10_ = Ignore_9___10_;
	params.Intensity_9___10_ = Intensity_9___10_;
	params.Ignore_11___12_ = Ignore_11___12_;
	params.Intensity_11___12_ = Intensity_11___12_;
	params.Ignore_7_13_ = Ignore_7_13_;
	params.Intensity_7_13_ = Intensity_7_13_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.UpdateVignette
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::UpdateVignette(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.UpdateVignette");

	ABP_Chameleon_C_UpdateVignette_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.UpdateInfected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::UpdateInfected(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.UpdateInfected");

	ABP_Chameleon_C_UpdateInfected_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.UpdateRadialBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::UpdateRadialBlur(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.UpdateRadialBlur");

	ABP_Chameleon_C_UpdateRadialBlur_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.UpdateCustomHighlighter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ignore_1_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_1_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ignore_2_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_2_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ignore_3_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_3_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ignore_4_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_4_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ignore_5_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_5_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Ignore_6_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          Intensity_6_                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::UpdateCustomHighlighter(bool Ignore_1_, float Intensity_1_, bool Ignore_2_, float Intensity_2_, bool Ignore_3_, float Intensity_3_, bool Ignore_4_, float Intensity_4_, bool Ignore_5_, float Intensity_5_, bool Ignore_6_, float Intensity_6_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.UpdateCustomHighlighter");

	ABP_Chameleon_C_UpdateCustomHighlighter_Params params;
	params.Ignore_1_ = Ignore_1_;
	params.Intensity_1_ = Intensity_1_;
	params.Ignore_2_ = Ignore_2_;
	params.Intensity_2_ = Intensity_2_;
	params.Ignore_3_ = Ignore_3_;
	params.Intensity_3_ = Intensity_3_;
	params.Ignore_4_ = Ignore_4_;
	params.Intensity_4_ = Intensity_4_;
	params.Ignore_5_ = Ignore_5_;
	params.Intensity_5_ = Intensity_5_;
	params.Ignore_6_ = Ignore_6_;
	params.Intensity_6_ = Intensity_6_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.SetCustomHighlighter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::SetCustomHighlighter(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.SetCustomHighlighter");

	ABP_Chameleon_C_SetCustomHighlighter_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Create Effect Material Instance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterial*               Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic* Instance                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::Create_Effect_Material_Instance(class UMaterial* Material, class UMaterialInstanceDynamic** Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Create Effect Material Instance");

	ABP_Chameleon_C_Create_Effect_Material_Instance_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instance != nullptr)
		*Instance = params.Instance;

}


// Function BP_Chameleon.BP_Chameleon_C.Zone Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Zone_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Zone Func");

	ABP_Chameleon_C_Zone_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Grid Cell Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Grid_Cell_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Grid Cell Func");

	ABP_Chameleon_C_Grid_Cell_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Disco Ball Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Disco_Ball_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Disco Ball Func");

	ABP_Chameleon_C_Disco_Ball_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Colored AO Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Colored_AO_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Colored AO Func");

	ABP_Chameleon_C_Colored_AO_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Infected Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Infected_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Infected Func");

	ABP_Chameleon_C_Infected_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Actor Featurette Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Actor_Featurette_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Actor Featurette Func");

	ABP_Chameleon_C_Actor_Featurette_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Set Advanced Effect Features (No Custom Depth)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAdvancedEffectFeaturesNoCustomDepth Features                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*               Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic* Dynamic_Material_Instance      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::Set_Advanced_Effect_Features__No_Custom_Depth_(const struct FAdvancedEffectFeaturesNoCustomDepth& Features, class UMaterial* Material, class UMaterialInstanceDynamic* Dynamic_Material_Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Set Advanced Effect Features (No Custom Depth)");

	ABP_Chameleon_C_Set_Advanced_Effect_Features__No_Custom_Depth__Params params;
	params.Features = Features;
	params.Material = Material;
	params.Dynamic_Material_Instance = Dynamic_Material_Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Set Advanced Effect Features
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAdvancedEffectFeatures Features                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*               Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic* Dynamic_Material_Instance      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::Set_Advanced_Effect_Features(const struct FAdvancedEffectFeatures& Features, class UMaterial* Material, class UMaterialInstanceDynamic* Dynamic_Material_Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Set Advanced Effect Features");

	ABP_Chameleon_C_Set_Advanced_Effect_Features_Params params;
	params.Features = Features;
	params.Material = Material;
	params.Dynamic_Material_Instance = Dynamic_Material_Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Wired Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Wired_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Wired Func");

	ABP_Chameleon_C_Wired_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Digitize Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Digitize_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Digitize Func");

	ABP_Chameleon_C_Digitize_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.2D Transform Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::_2D_Transform_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.2D Transform Func");

	ABP_Chameleon_C__2D_Transform_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.SetEffectPriority
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Priority                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*               Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::SetEffectPriority(int Priority, class UMaterial* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.SetEffectPriority");

	ABP_Chameleon_C_SetEffectPriority_Params params;
	params.Priority = Priority;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.ApplyChameleonSettings
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Chameleon_C::ApplyChameleonSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.ApplyChameleonSettings");

	ABP_Chameleon_C_ApplyChameleonSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Custom Depth Highlighter (NC) Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Custom_Depth_Highlighter__NC__Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Custom Depth Highlighter (NC) Func");

	ABP_Chameleon_C_Custom_Depth_Highlighter__NC__Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Custom Depth Highlighter Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Custom_Depth_Highlighter_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Custom Depth Highlighter Func");

	ABP_Chameleon_C_Custom_Depth_Highlighter_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Toon Shading Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Toon_Shading_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Toon Shading Func");

	ABP_Chameleon_C_Toon_Shading_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Sharpen Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Sharpen_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Sharpen Func");

	ABP_Chameleon_C_Sharpen_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Sonar Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Sonar_Func(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Sonar Func");

	ABP_Chameleon_C_Sonar_Func_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.TV Noise Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::TV_Noise_Func(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.TV Noise Func");

	ABP_Chameleon_C_TV_Noise_Func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;

}


// Function BP_Chameleon.BP_Chameleon_C.Tiles Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Tiles_Func(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Tiles Func");

	ABP_Chameleon_C_Tiles_Func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;

}


// Function BP_Chameleon.BP_Chameleon_C.Pulse Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Pulse_Func(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Pulse Func");

	ABP_Chameleon_C_Pulse_Func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;

}


// Function BP_Chameleon.BP_Chameleon_C.Kuwahara Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Kuwahara_Func(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Kuwahara Func");

	ABP_Chameleon_C_Kuwahara_Func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;

}


// Function BP_Chameleon.BP_Chameleon_C.Invert Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Invert_Func(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Invert Func");

	ABP_Chameleon_C_Invert_Func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;

}


// Function BP_Chameleon.BP_Chameleon_C.Hard Emboss Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Hard_Emboss_Func(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Hard Emboss Func");

	ABP_Chameleon_C_Hard_Emboss_Func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;

}


// Function BP_Chameleon.BP_Chameleon_C.Emboss Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Emboss_Func(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Emboss Func");

	ABP_Chameleon_C_Emboss_Func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;

}


// Function BP_Chameleon.BP_Chameleon_C.Edge Detect Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Edge_Detect_Func(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Edge Detect Func");

	ABP_Chameleon_C_Edge_Detect_Func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;

}


// Function BP_Chameleon.BP_Chameleon_C.Distance Fog Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Distance_Fog_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Distance Fog Func");

	ABP_Chameleon_C_Distance_Fog_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Radial Blur Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Radial_Blur_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Radial Blur Func");

	ABP_Chameleon_C_Radial_Blur_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Monochrome Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Monochrome_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Monochrome Func");

	ABP_Chameleon_C_Monochrome_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Hue Panner Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Hue_Panner_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Hue Panner Func");

	ABP_Chameleon_C_Hue_Panner_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Glitch Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Glitch_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Glitch Func");

	ABP_Chameleon_C_Glitch_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Comic Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Comic_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Comic Func");

	ABP_Chameleon_C_Comic_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Colorize Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Colorize_Func(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Colorize Func");

	ABP_Chameleon_C_Colorize_Func_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Blur Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Blur_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Blur Func");

	ABP_Chameleon_C_Blur_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Drug Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Drug_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Drug Func");

	ABP_Chameleon_C_Drug_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Alcohol Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Alcohol_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Alcohol Func");

	ABP_Chameleon_C_Alcohol_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.InitChameleon
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_Chameleon_C::InitChameleon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.InitChameleon");

	ABP_Chameleon_C_InitChameleon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Channel Swapper Func
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Channel_Swapper_Func(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Channel Swapper Func");

	ABP_Chameleon_C_Channel_Swapper_Func_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.Channel Clamper Func
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void ABP_Chameleon_C::Channel_Clamper_Func(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.Channel Clamper Func");

	ABP_Chameleon_C_Channel_Clamper_Func_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;

}


// Function BP_Chameleon.BP_Chameleon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Chameleon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.UserConstructionScript");

	ABP_Chameleon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.VignetteAnimation__FinishedFunc
// (BlueprintEvent)
void ABP_Chameleon_C::VignetteAnimation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.VignetteAnimation__FinishedFunc");

	ABP_Chameleon_C_VignetteAnimation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.VignetteAnimation__UpdateFunc
// (BlueprintEvent)
void ABP_Chameleon_C::VignetteAnimation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.VignetteAnimation__UpdateFunc");

	ABP_Chameleon_C_VignetteAnimation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABP_Chameleon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.ReceiveBeginPlay");

	ABP_Chameleon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.PlayAnimation_ColoredVignette
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::PlayAnimation_ColoredVignette(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.PlayAnimation_ColoredVignette");

	ABP_Chameleon_C_PlayAnimation_ColoredVignette_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Chameleon.BP_Chameleon_C.ExecuteUbergraph_BP_Chameleon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Chameleon_C::ExecuteUbergraph_BP_Chameleon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Chameleon.BP_Chameleon_C.ExecuteUbergraph_BP_Chameleon");

	ABP_Chameleon_C_ExecuteUbergraph_BP_Chameleon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Chameleon_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(MaterialBillboard, UMaterialBillboardComponent);
	READ_PTR_FULL(InternalPP, UPostProcessComponent);
	READ_PTR_FULL(Bounding_Box, UBoxComponent);
	READ_PTR_FULL(VignetteAnimation, UTimelineComponent);
	READ_PTR_FULL(mChannelClamper, UMaterial);
	READ_PTR_FULL(iChannelClamper, UMaterialInstanceDynamic);
	READ_PTR_FULL(mDistanceFog, UMaterial);
	READ_PTR_FULL(mChannelSwapper, UMaterial);
	READ_PTR_FULL(mAlcohol, UMaterial);
	READ_PTR_FULL(mDrug, UMaterial);
	READ_PTR_FULL(mBlur, UMaterial);
	READ_PTR_FULL(iDistanceFog, UMaterialInstanceDynamic);
	READ_PTR_FULL(iChannelSwapper, UMaterialInstanceDynamic);
	READ_PTR_FULL(iAlcohol, UMaterialInstanceDynamic);
	READ_PTR_FULL(iDrug, UMaterialInstanceDynamic);
	READ_PTR_FULL(iBlur, UMaterialInstanceDynamic);
	READ_PTR_FULL(mColorize, UMaterial);
	READ_PTR_FULL(iColorize, UMaterialInstanceDynamic);
	READ_PTR_FULL(mComic, UMaterial);
	READ_PTR_FULL(iComic, UMaterialInstanceDynamic);
	READ_PTR_FULL(mEdgeDetect, UMaterial);
	READ_PTR_FULL(iEdgeDetect, UMaterialInstanceDynamic);
	READ_PTR_FULL(mEmboss, UMaterial);
	READ_PTR_FULL(iEmboss, UMaterialInstanceDynamic);
	READ_PTR_FULL(mGlitch, UMaterial);
	READ_PTR_FULL(iGlitch, UMaterialInstanceDynamic);
	READ_PTR_FULL(mHardEmboss, UMaterial);
	READ_PTR_FULL(iHardEmboss, UMaterialInstanceDynamic);
	READ_PTR_FULL(mHuePanner, UMaterial);
	READ_PTR_FULL(iHuePanner, UMaterialInstanceDynamic);
	READ_PTR_FULL(mMonochrome, UMaterial);
	READ_PTR_FULL(iMonochrome, UMaterialInstanceDynamic);
	READ_PTR_FULL(mRadialBlur, UMaterial);
	READ_PTR_FULL(iRadialBlur, UMaterialInstanceDynamic);
	READ_PTR_FULL(mInvert, UMaterial);
	READ_PTR_FULL(iInvert, UMaterialInstanceDynamic);
	READ_PTR_FULL(mKuwahara, UMaterial);
	READ_PTR_FULL(iKuwahara, UMaterialInstanceDynamic);
	READ_PTR_FULL(mPulse, UMaterial);
	READ_PTR_FULL(iPulse, UMaterialInstanceDynamic);
	READ_PTR_FULL(mTiles, UMaterial);
	READ_PTR_FULL(iTiles, UMaterialInstanceDynamic);
	READ_PTR_FULL(mTVNoise, UMaterial);
	READ_PTR_FULL(iTVNoise, UMaterialInstanceDynamic);
	READ_PTR_FULL(mSonar, UMaterial);
	READ_PTR_FULL(iSonar, UMaterialInstanceDynamic);
	READ_PTR_FULL(mSharpen, UMaterial);
	READ_PTR_FULL(iSharpen, UMaterialInstanceDynamic);
	READ_PTR_FULL(mToonShading, UMaterial);
	READ_PTR_FULL(iToonShading, UMaterialInstanceDynamic);
	READ_PTR_FULL(mCustomDepthHighlighter, UMaterial);
	READ_PTR_FULL(iCustomDepthHighlighter, UMaterialInstanceDynamic);
	READ_PTR_FULL(mCustomDepthHighlighterClip, UMaterial);
	READ_PTR_FULL(iCustomDepthHighlighterClip, UMaterialInstanceDynamic);
	READ_PTR_FULL(m2DTransform, UMaterial);
	READ_PTR_FULL(i2DTransform, UMaterialInstanceDynamic);
	READ_PTR_FULL(mDigitize, UMaterial);
	READ_PTR_FULL(iDigitize, UMaterialInstanceDynamic);
	READ_PTR_FULL(iWired, UMaterialInstanceDynamic);
	READ_PTR_FULL(mWired, UMaterial);
	READ_PTR_FULL(mActorFeaturette, UMaterial);
	READ_PTR_FULL(iActorFeaturette, UMaterialInstanceDynamic);
	READ_PTR_FULL(mInfected, UMaterial);
	READ_PTR_FULL(iInfected, UMaterialInstanceDynamic);
	READ_PTR_FULL(mColoredAO, UMaterial);
	READ_PTR_FULL(iColoredAO, UMaterialInstanceDynamic);
	READ_PTR_FULL(mDiscoBall, UMaterial);
	READ_PTR_FULL(iDiscoBall, UMaterialInstanceDynamic);
	READ_PTR_FULL(mGridCell, UMaterial);
	READ_PTR_FULL(iGridCell, UMaterialInstanceDynamic);
	READ_PTR_FULL(mZone, UMaterial);
	READ_PTR_FULL(iZone, UMaterialInstanceDynamic);
	READ_PTR_FULL(mCustomHighlighter, UMaterial);
	READ_PTR_FULL(iCustomHighlighter, UMaterialInstanceDynamic);
	READ_PTR_FULL(mColoredVignette, UMaterial);
	READ_PTR_FULL(iColoredViognette, UMaterialInstanceDynamic);
	READ_PTR_FULL(mInspectorMode, UMaterial);
	READ_PTR_FULL(iInspectorMode, UMaterialInstanceDynamic);
}

void ABP_Chameleon_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(MaterialBillboard);
	DELE_PTR_FULL(InternalPP);
	DELE_PTR_FULL(Bounding_Box);
	DELE_PTR_FULL(VignetteAnimation);
	DELE_PTR_FULL(mChannelClamper);
	DELE_PTR_FULL(iChannelClamper);
	DELE_PTR_FULL(mDistanceFog);
	DELE_PTR_FULL(mChannelSwapper);
	DELE_PTR_FULL(mAlcohol);
	DELE_PTR_FULL(mDrug);
	DELE_PTR_FULL(mBlur);
	DELE_PTR_FULL(iDistanceFog);
	DELE_PTR_FULL(iChannelSwapper);
	DELE_PTR_FULL(iAlcohol);
	DELE_PTR_FULL(iDrug);
	DELE_PTR_FULL(iBlur);
	DELE_PTR_FULL(mColorize);
	DELE_PTR_FULL(iColorize);
	DELE_PTR_FULL(mComic);
	DELE_PTR_FULL(iComic);
	DELE_PTR_FULL(mEdgeDetect);
	DELE_PTR_FULL(iEdgeDetect);
	DELE_PTR_FULL(mEmboss);
	DELE_PTR_FULL(iEmboss);
	DELE_PTR_FULL(mGlitch);
	DELE_PTR_FULL(iGlitch);
	DELE_PTR_FULL(mHardEmboss);
	DELE_PTR_FULL(iHardEmboss);
	DELE_PTR_FULL(mHuePanner);
	DELE_PTR_FULL(iHuePanner);
	DELE_PTR_FULL(mMonochrome);
	DELE_PTR_FULL(iMonochrome);
	DELE_PTR_FULL(mRadialBlur);
	DELE_PTR_FULL(iRadialBlur);
	DELE_PTR_FULL(mInvert);
	DELE_PTR_FULL(iInvert);
	DELE_PTR_FULL(mKuwahara);
	DELE_PTR_FULL(iKuwahara);
	DELE_PTR_FULL(mPulse);
	DELE_PTR_FULL(iPulse);
	DELE_PTR_FULL(mTiles);
	DELE_PTR_FULL(iTiles);
	DELE_PTR_FULL(mTVNoise);
	DELE_PTR_FULL(iTVNoise);
	DELE_PTR_FULL(mSonar);
	DELE_PTR_FULL(iSonar);
	DELE_PTR_FULL(mSharpen);
	DELE_PTR_FULL(iSharpen);
	DELE_PTR_FULL(mToonShading);
	DELE_PTR_FULL(iToonShading);
	DELE_PTR_FULL(mCustomDepthHighlighter);
	DELE_PTR_FULL(iCustomDepthHighlighter);
	DELE_PTR_FULL(mCustomDepthHighlighterClip);
	DELE_PTR_FULL(iCustomDepthHighlighterClip);
	DELE_PTR_FULL(m2DTransform);
	DELE_PTR_FULL(i2DTransform);
	DELE_PTR_FULL(mDigitize);
	DELE_PTR_FULL(iDigitize);
	DELE_PTR_FULL(iWired);
	DELE_PTR_FULL(mWired);
	DELE_PTR_FULL(mActorFeaturette);
	DELE_PTR_FULL(iActorFeaturette);
	DELE_PTR_FULL(mInfected);
	DELE_PTR_FULL(iInfected);
	DELE_PTR_FULL(mColoredAO);
	DELE_PTR_FULL(iColoredAO);
	DELE_PTR_FULL(mDiscoBall);
	DELE_PTR_FULL(iDiscoBall);
	DELE_PTR_FULL(mGridCell);
	DELE_PTR_FULL(iGridCell);
	DELE_PTR_FULL(mZone);
	DELE_PTR_FULL(iZone);
	DELE_PTR_FULL(mCustomHighlighter);
	DELE_PTR_FULL(iCustomHighlighter);
	DELE_PTR_FULL(mColoredVignette);
	DELE_PTR_FULL(iColoredViognette);
	DELE_PTR_FULL(mInspectorMode);
	DELE_PTR_FULL(iInspectorMode);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
