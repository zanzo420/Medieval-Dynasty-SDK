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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass alb_BP_FunctionLib.alb_BP_FunctionLib_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class Ualb_BP_FunctionLib_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass alb_BP_FunctionLib.alb_BP_FunctionLib_C");
		return ptr;
	}



	void STATIC_alb_SmoothSpline(class USplineComponent* Spline, int NumSteps, bool doFixEndPoints, class UObject* __WorldContext);
	void STATIC_alb_Local_name_(const struct FName& In, class UObject* __WorldContext, struct FName* Out);
	void STATIC_alb_Local_transform_(const struct FTransform& In, class UObject* __WorldContext, struct FTransform* Out);
	void STATIC_alb_Local_string_(const struct FString& In, class UObject* __WorldContext, struct FString* Out);
	void STATIC_alb_Local_int_(int In, class UObject* __WorldContext, int* Out);
	void STATIC_alb_Local_bool_(bool In, class UObject* __WorldContext, bool* Out);
	void STATIC_alb_OffsetArray_vector_(TArray<struct FVector>* In, int ShiftBy, class UObject* __WorldContext, TArray<struct FVector>* Out);
	void STATIC_alb_OffsetArray_float_(TArray<float>* In, int ShiftBy, class UObject* __WorldContext, TArray<float>* Out);
	void STATIC_alb_OffsetArray_int_(TArray<int>* In, int ShiftBy, class UObject* __WorldContext, TArray<int>* Out);
	void STATIC_alb_MathArray_vector_(TArray<struct FVector>* In, class UObject* __WorldContext, struct FVector* Min, struct FVector* Max, struct FVector* Average);
	void STATIC_alb_toName_integer_(int In, class UObject* __WorldContext, struct FName* Out);
	void STATIC_alb_SmoothArray_transform_(TArray<struct FTransform>* In, int NumSteps, class UObject* __WorldContext, TArray<struct FTransform>* smooth);
	void STATIC_alb_SmoothArray_vector_(TArray<struct FVector>* In, int NumSteps, class UObject* __WorldContext, TArray<struct FVector>* smooth);
	void STATIC_alb_SmoothArray_float_(TArray<float>* In, int NumSteps, class UObject* __WorldContext, TArray<float>* smooth);
	void STATIC_alb_RandomSign_float_(class UObject* __WorldContext, float* Float, int* Int);
	void STATIC_alb_SortArrayIndexList_float_(TArray<float>* In, class UObject* __WorldContext, TArray<int>* Out);
	void STATIC_alb_Compare_vector_(const struct FVector& A, const struct FVector& B, class UObject* __WorldContext, struct FVector* MaxValues, struct FVector* MinValues, struct FVector* LongerVector);
	void STATIC_alb_Average_vector_(const struct FVector& A, const struct FVector& B, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_NormalizeToRange_float_(float In, float Min, float Max, class UObject* __WorldContext, float* Saturated, float* _1_x);
	void STATIC_alb_Add_transform_(const struct FTransform& A, const struct FTransform& B, class UObject* __WorldContext, struct FTransform* Add, struct FTransform* Compose);
	void STATIC_alb_LocalToWorld_transform_(const struct FTransform& LocalSpace, const struct FTransform& InCoordSys, class UObject* __WorldContext, struct FTransform* WorldSpace);
	void STATIC_alb_WorldToLocal_transform_(const struct FTransform& WorldSpace, const struct FTransform& InCoordSys, class UObject* __WorldContext, struct FTransform* LocalSpace);
	void STATIC_alb_TraceDown(const struct FVector& In, class UObject* __WorldContext, float* Distance, struct FVector* Location, struct FVector* Normal);
	void STATIC_alb_Local_vector_(const struct FVector& In, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_Local_float_(float In, class UObject* __WorldContext, float* Out);
	void STATIC_alb_SortArray_float_(TArray<float>* In, bool doReverse, class UObject* __WorldContext, TArray<float>* Out);
	void STATIC_alb_LocalToWorld_component_(const struct FTransform& LocalSpace, class USceneComponent* InCoordSys, class UObject* __WorldContext, struct FTransform* WorldSpace);
	void STATIC_alb_TextFromArray(TArray<struct FText>* TextArray, class UTextRenderComponent* TextComponent, class UObject* __WorldContext, struct FText* Text, struct FString* String);
	void STATIC_alb_Sin_vector_(const struct FVector& In, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_MathArray_float_(TArray<float>* In, class UObject* __WorldContext, float* Average, float* Median, float* Sum, float* Sum_Abs);
	void STATIC_alb_isEven_integer_(int In, class UObject* __WorldContext, bool* Out);
	void STATIC_alb_CircleData_float_(float Radius, class UObject* __WorldContext, float* Circumference, float* Area, float* Volume);
	void STATIC_alb_Lerp3_float_(float A, float B, float C, float Alpha, class UObject* __WorldContext, float* Out);
	void STATIC_alb_Lerp3_vector_(const struct FVector& A, const struct FVector& B, const struct FVector& C, float Alpha, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_LoopAfterMax_float_(float In, float Max, class UObject* __WorldContext, float* Out);
	void STATIC_alb_LoopAfterMax_int_(int In, int Max, class UObject* __WorldContext, int* Out);
	void STATIC_alb_MakeInactive(class USceneComponent* Component, class AActor* Actor, bool doIncludeChildren, bool doHide, class UObject* __WorldContext);
	void STATIC_alb_OneDividedBy_float_(float In, class UObject* __WorldContext, float* Out);
	void STATIC_alb_PowerSign_float_(float In, float Power, class UObject* __WorldContext, float* Out);
	void STATIC_alb_Chance_float_(float Chance, float OutOf, class UObject* __WorldContext, bool* Out);
	void STATIC_alb_Chance_int_(int Chance, int OutOf, class UObject* __WorldContext, bool* Out);
	void STATIC_alb_SmoothStep_float_(float In, class UObject* __WorldContext, float* Out);
	void STATIC_alb_Add_bool_(bool A, bool B, bool C, bool D, class UObject* __WorldContext, int* Out);
	void STATIC_alb_Flip_bool_(bool In, class UObject* __WorldContext, bool* Out);
	void STATIC_alb_RandomVector_vector_(const struct FVector& Min, const struct FVector& Max, bool doNormalize, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_MakeRange_vector_(const struct FVector& In, const struct FVector& Range, bool doPercent, class UObject* __WorldContext, struct FVector* Min, struct FVector* Max, struct FVector* Random);
	void STATIC_alb_Curves_float_(float In, class UObject* __WorldContext, float* Bell, float* Bulge, float* Pinch, float* SmoothStep, float* SmoothStepInv);
	void STATIC_alb_Threshold_float_(float In, float Value, class UObject* __WorldContext, float* Float, bool* Bool);
	void STATIC_alb_Lerp5_float_(float A, float B, float C, float D, float E, float Alpha, class UObject* __WorldContext, float* Out);
	void STATIC_alb_Lerp5_vector_(const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FVector& D, const struct FVector& E, float Alpha, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_Convert_string_(const struct FString& In, class UObject* __WorldContext, float* Float, int* Int, struct FVector* Vector, bool* Bool, struct FString* String, struct FText* Text);
	void STATIC_alb_Convert_float_(float In, class UObject* __WorldContext, float* Float, int* Int, struct FVector* Vector, bool* Bool, struct FString* String, struct FText* Text);
	void STATIC_alb_Saturate_vector_(const struct FVector& In, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_SwapChannels_vector_(const struct FVector& In, class UObject* __WorldContext, struct FVector* Random_Value, TArray<struct FVector>* Array);
	void STATIC_alb_DestroyChildComponents(class USceneComponent* In, class UObject* __WorldContext, int* NumDestroyed);
	void STATIC_alb_OneMinus_float_(float In, class UObject* __WorldContext, float* Out);
	void STATIC_alb_Saturate_float_(float In, class UObject* __WorldContext, float* Out);
	void STATIC_alb_BiasScale_float_(float In, float Bias, float Scale, bool doDivide, class UObject* __WorldContext, float* Out, float* Saturated, float* Abs);
	void STATIC_alb_MakeRange_float_(float In, float Range, bool doPercent, bool doStream, class UObject* __WorldContext, float* Min, float* Max, float* Random);
	void STATIC_alb_Comparison_boolean_(bool A, bool B, class UObject* __WorldContext, bool* TT, bool* TF, bool* FT, bool* FF);
	void STATIC_alb_ScaleArray_float_(TArray<float>* In, float Min, float Max, class UObject* __WorldContext, TArray<float>* Out);
	void STATIC_alb_Clamp_vector_(const struct FVector& In, float Min, float Max, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_Abs_vector_(const struct FVector& In, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_Sign_vector_(const struct FVector& In, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_Null(class UObject* __WorldContext);
	void STATIC_alb_SmoothStep_vector_(const struct FVector& In, int Iterations, class UObject* __WorldContext, struct FVector* Out);
	void STATIC_alb_Delta_float_(float A, float B, class UObject* __WorldContext, float* Out);
	void STATIC_alb_Distance_vector_(const struct FVector& A, const struct FVector& B, bool do2D, class UObject* __WorldContext, float* Out);
	void STATIC_alb_Angle_vector_(const struct FVector& A, const struct FVector& B, bool do2D, class UObject* __WorldContext, float* Degrees, float* _0_1);
	void STATIC_alb_SmoothStepIterated_float_(float In, int Iterations, class UObject* __WorldContext, float* Out);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
