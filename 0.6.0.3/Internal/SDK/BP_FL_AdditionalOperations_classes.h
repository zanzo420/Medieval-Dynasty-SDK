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

// BlueprintGeneratedClass BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_FL_AdditionalOperations_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FL_AdditionalOperations.BP_FL_AdditionalOperations_C");
		return ptr;
	}



	void STATIC_Cut_Text_Sex_Specyfic(const struct FText& Male, const struct FText& Female, TEnumAsByte<E_Sex_E_Sex> Sex, class UObject* __WorldContext, struct FText* CutText);
	bool STATIC_GetSaveFiles(class UObject* __WorldContext, TArray<struct FString>* Files);
	void STATIC_Fix_Custom_Old_Save_Files(const struct FString& SaveName, const struct FString& SaveNameToCheck, int UserIndex, class UObject* __WorldContext, bool* Success);
	void STATIC_GetCustomSaveData(const struct FString& SaveName, const struct FString& SaveNameToCheck, int UserIndex, class UObject* __WorldContext, class USAVE_Data_C** SAVE_Data);
	void STATIC_FixOldSaveFiles(const struct FString& SaveDataSlotName, const struct FString& SaveGameSlotName, int SaveNameIndex, int UserIndex, const struct FString& FileSaveName, class UObject* __WorldContext, bool* Success);
	void STATIC_GetSaveData(const struct FString& SaveDataSlotName, const struct FString& SaveGameSlotName, int SaveNameIndex, int UserIndex, const struct FString& FileSaveName, class UObject* __WorldContext, class USAVE_Data_C** SAVE_Data);
	void STATIC_DisplayMountInformation(float Speed, const struct FVector& Velocity, float AngleDotProduct, class UObject* __WorldContext);
	void STATIC_GetClosestActor(TArray<class AActor*>* Actors, class AActor* Actor, const struct FVector& Location, class UObject* __WorldContext, bool* Found, class AActor** ClosestActor);
	void STATIC_GetClosestActor_Hit_(TArray<struct FHitResult>* HitResults, class AActor* Actor, const struct FVector& Location, class UObject* __WorldContext, bool* Found, class AActor** ClosestActor);
	void STATIC_GetIconLetterByKey(const struct FKey& Key, bool Gamepad, class UObject* __WorldContext, class UTexture2D** Icon, struct FText* Letter, bool* Found);
	void STATIC_SelectRandomIDFromPool_byte_(TArray<unsigned char>* IDs, TArray<float>* ChanceToPlay, TArray<unsigned char>* IDsToExclude, class UObject* __WorldContext, unsigned char* SelectedPoseID);
	bool STATIC_IsSpecifiedMontagePlaying(class UAnimInstance* AnimInstance, class UAnimMontage* Montage, class UObject* __WorldContext);
	void STATIC_GetMaterialWithSpecifiedWord(class UMeshComponent* Mesh, const struct FString& SearchString, class UObject* __WorldContext, class UMaterialInterface** Material, int* Index, bool* Success_);
	void STATIC_Ease_CustomCurve_(float Alpha, float A, float B, class UCurveFloat* Curve, class UObject* __WorldContext, float* Result);
	void STATIC_GetIconByActionMapping(const struct FName& MappingToFind, bool Gamepad_, class UObject* __WorldContext, class UTexture2D** Icon, struct FText* Letter);
	void STATIC_CompareHitActorsAndComponents(const struct FHitResult& A, const struct FHitResult& B, class UObject* __WorldContext, bool* SameActor, bool* SameComponent);
	void STATIC_SelectRandomID_byte_(unsigned char CurrentPoseID, unsigned char MaxPoseID, bool ShuffleMode, TArray<float>* ChanceToPlay, TArray<unsigned char>* IDsToExclude, class UObject* __WorldContext, unsigned char* SelectedPoseID);
	void STATIC_SelectRandomID_int_(int CurrentPoseID, int MaxPoseID, bool ShuffleMode, TArray<float>* ChanceToPlay, class UObject* __WorldContext, int* SelectedPoseID);
	bool STATIC_CompareCameraRotationLimits(const struct FST_CameraRotationLimits& Input_Struct_A, const struct FST_CameraRotationLimits& Input_Struct_B, class UObject* __WorldContext);
	bool STATIC_CompareMontageSettings(const struct FST_MontagesSettings& Input_Struct_A, const struct FST_MontagesSettings& Input_Struct_B, class UObject* __WorldContext);
	struct FVector STATIC_CalculateTargetPosition(class ACharacter* InteractingCharacter, class ACharacter* Animal, float Distance_Offset_Multiplier, class UObject* __WorldContext);
	float STATIC_CalculateAngleBetweenDirectionVectors(const struct FVector& DirectionVector, const struct FVector& CharacterDirectionVector, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
