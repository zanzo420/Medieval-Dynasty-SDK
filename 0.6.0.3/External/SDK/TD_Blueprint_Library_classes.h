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

// Class TD_Blueprint_Library.TD_Blueprint_Library
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTD_Blueprint_Library : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TD_Blueprint_Library.TD_Blueprint_Library");
		return ptr;
	}



	float STATIC_TDBPL_VelocityToMh(const struct FVector& Velocity);
	float STATIC_TDBPL_VelocityToKmh(const struct FVector& Velocity);
	struct FVector STATIC_TDBPL_VectorToGrid(const struct FVector& Vector, int GridSize, bool SnapX, bool SnapY, bool SnapZ);
	struct FVector STATIC_TDBPL_TargetVectorToGrid(class AActor* Actor, int GridSize, bool SnapX, bool SnapY, bool SnapZ);
	void STATIC_TDBPL_StartEnd(class UObject* WorldContextObject, struct FVector* Start, struct FVector* End, float Horizontal, float Vertical, float Distance, class USceneComponent* Scene, bool bDrawDebugCone);
	void STATIC_TDBPL_SpreadControlSimple(float* RefMoving, float* RefShooting, float* OutSpread, float IncreaseDecreaseRatio, float Min, float Max, bool IsMoving, bool IsShooting);
	void STATIC_TDBPL_SpreadControlShooting(float* Ref, float* OutHorizontal, float* OutVertical, float IncreaseRatio, float DecreaseRatio, float HorizontalMin, float HorizontalMax, float VerticalMin, float VerticalMax, bool IsShooting);
	void STATIC_TDBPL_SpreadControlMoving(float* Ref, float* OutHorizontal, float* OutVertical, float IncreaseRatio, float DecreaseRatio, float HorizontalMin, float HorizontalMax, float VerticalMin, float VerticalMax, bool IsMoving);
	bool STATIC_TDBPL_SnapToGridActor(class AActor* Actor, int GridSize, bool SnapX, bool SnapY, bool SnapZ);
	void STATIC_TDBPL_SingleShotTraceSingleByChannel(class UObject* WorldContextObject, struct FHitResult* OutHit, class USceneComponent* Scene, float Distance, float Spread, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, TD_Blueprint_Library_EDebugTrace DrawDebugType, bool IgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	void STATIC_TDBPL_ShotgunTraceSingleByChannel(class UObject* WorldContextObject, TArray<struct FHitResult>* OutHits, class USceneComponent* Scene, int NumberOfTraces, float Distance, float Spread, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, TD_Blueprint_Library_EDebugTrace DrawDebugType, bool IgnoreSelf, const struct FLinearColor& TraceColor, const struct FLinearColor& TraceHitColor, float DrawTime);
	void STATIC_TDBPL_SetMaxFPS(int FPS);
	bool STATIC_TDBPL_SetActorRotationSmoothConstant(class AActor* Actor, const struct FRotator& Rotation, float Speed, bool Teleport);
	bool STATIC_TDBPL_SetActorRotationSmooth(class AActor* Actor, const struct FRotator& Rotation, float Speed, bool Teleport);
	bool STATIC_TDBPL_SetActorLocationSmoothConstant(class AActor* Actor, const struct FVector& Location, float Speed, bool Sweep, bool Teleport, struct FHitResult* SweepHitResult);
	bool STATIC_TDBPL_SetActorLocationSmooth(class AActor* Actor, const struct FVector& Location, float Speed, bool Sweep, bool Teleport, struct FHitResult* SweepHitResult);
	bool STATIC_TDBPL_SetActorLocationAndRotationSmoothConstant(class AActor* Actor, const struct FVector& Location, const struct FRotator& Rotation, float Speed, bool Sweep, bool Teleport, struct FHitResult* SweepHitResult);
	bool STATIC_TDBPL_SetActorLocationAndRotationSmooth(class AActor* Actor, const struct FVector& Location, const struct FRotator& Rotation, float Speed, bool Sweep, bool Teleport, struct FHitResult* SweepHitResult);
	void STATIC_TDBPL_RicochetSphereTrace(class UObject* WorldContextObject, TArray<struct FHitResult>* OutHits, const struct FVector& Start, const struct FVector& End, int NumberOfTraces, float Radius, TD_Blueprint_Library_EDebugTrace DrawDebugType, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, const struct FLinearColor& TraceColor, float DrawTime);
	void STATIC_TDBPL_RicochetLineTrace(class UObject* WorldContextObject, TArray<struct FHitResult>* OutHits, const struct FVector& Start, const struct FVector& End, int NumberOfTraces, TD_Blueprint_Library_EDebugTrace DrawDebugType, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, const struct FLinearColor& TraceColor, float DrawTime);
	void STATIC_TDBPL_MultiBranch(bool A, bool B, bool C, TD_Blueprint_Library_EeMultiBranch* Out);
	bool STATIC_TDBPL_MouseLineTracePure(class UObject* WorldContextObject, struct FHitResult* OutHit, class APlayerController* PlayerController, float Distance, TD_Blueprint_Library_EDebugTrace DrawDebugType, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, const struct FLinearColor& TraceColor, float DrawTime);
	bool STATIC_TDBPL_MouseLineTrace(class UObject* WorldContextObject, struct FHitResult* OutHit, class APlayerController* PlayerController, float Distance, TD_Blueprint_Library_EDebugTrace DrawDebugType, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, const struct FLinearColor& TraceColor, float DrawTime);
	bool STATIC_TDBPL_IsXboxOne();
	bool STATIC_TDBPL_IsWindows64();
	bool STATIC_TDBPL_IsWindows32();
	bool STATIC_TDBPL_IsWindows();
	bool STATIC_TDBPL_IsTVOS();
	bool STATIC_TDBPL_IsTestBuild();
	bool STATIC_TDBPL_IsSwitch();
	bool STATIC_TDBPL_IsShippingBuild();
	bool STATIC_TDBPL_IsRunningOnBattery();
	bool STATIC_TDBPL_IsPS4();
	bool STATIC_TDBPL_IsPlayInEditor();
	bool STATIC_TDBPL_IsMovingVertically(class AActor* Actor);
	bool STATIC_TDBPL_IsMovingHorizontally(class AActor* Actor);
	bool STATIC_TDBPL_IsMoving(class AActor* Actor);
	bool STATIC_TDBPL_IsMacOS();
	bool STATIC_TDBPL_IsLinux();
	bool STATIC_TDBPL_IsIOS();
	bool STATIC_TDBPL_IsDevelopmentBuild();
	bool STATIC_TDBPL_IsDesktop();
	bool STATIC_TDBPL_IsDebugBuild();
	bool STATIC_TDBPL_IsApple();
	bool STATIC_TDBPL_IsAndroid();
	struct FVector STATIC_TDBPL_InvertVector(const struct FVector& Vector);
	int STATIC_TDBPL_InvertInteger(int Integer);
	float STATIC_TDBPL_InvertFloat(float Float);
	int STATIC_TDBPL_iIncrementByValue(int* Ref, int Value);
	int STATIC_TDBPL_iDecrementByValue(int* Ref, int Value);
	void STATIC_TDBPL_HasMoreThan(bool* Return, int* Length, const struct FString& String, int Chars);
	void STATIC_TDBPL_HasLessThan(bool* Return, int* Length, const struct FString& String, int Chars);
	bool STATIC_TDBPL_GetUseBorderlessWindow();
	bool STATIC_TDBPL_GetStartInVR();
	struct FString STATIC_TDBPL_GetProjectVersion();
	struct FString STATIC_TDBPL_GetProjectName();
	struct FGuid STATIC_TDBPL_GetProjectID();
	struct FString STATIC_TDBPL_GetProjectDescription();
	bool STATIC_TDBPL_GetPreserveAspectRatio();
	struct FString STATIC_TDBPL_GetOSVersion();
	struct FVector STATIC_TDBPL_GetMiddlePoint(const struct FVector& A, const struct FVector& B);
	struct FString STATIC_TDBPL_GetGPUBrand();
	void STATIC_TDBPL_GetGeneralProjectSettingsPure(struct FProjectSettings* Settings);
	void STATIC_TDBPL_GetGeneralProjectSettings(struct FProjectSettings* Settings);
	float STATIC_TDBPL_GetFPS();
	float STATIC_TDBPL_GetDistanceToVector(const struct FVector& A, const struct FVector& B, bool Z);
	struct FText STATIC_TDBPL_GetDisplayedTitle();
	struct FText STATIC_TDBPL_GetDebugTitleInfo();
	struct FString STATIC_TDBPL_GetCPUVendor();
	struct FString STATIC_TDBPL_GetCPUBrand();
	int STATIC_TDBPL_GetCPU_NOT();
	int STATIC_TDBPL_GetCPU_NOC();
	struct FString STATIC_TDBPL_GetCompanySupportContact();
	struct FString STATIC_TDBPL_GetCompanyPrivacyPolicy();
	struct FString STATIC_TDBPL_GetCompanyName();
	struct FString STATIC_TDBPL_GetCompanyLicensingTerms();
	struct FString STATIC_TDBPL_GetCompanyHomepage();
	struct FString STATIC_TDBPL_GetCompanyDistinguishedName();
	struct FString STATIC_TDBPL_GetCompanyCopyrightNotice();
	bool STATIC_TDBPL_GetAllowWindowResize();
	bool STATIC_TDBPL_GetAllowMinimize();
	bool STATIC_TDBPL_GetAllowMaximize();
	bool STATIC_TDBPL_GetAllowClose();
	struct FString STATIC_TDBPL_FindNumeric(const struct FString& String);
	struct FRotator STATIC_TDBPL_FindLookAtActorRotation(class AActor* Actor, class AActor* Target);
	float STATIC_TDBPL_fIncrementByValue(float* Ref, float Value);
	float STATIC_TDBPL_fGetWorldGravityZ(class UObject* WorldContextObject);
	float STATIC_TDBPL_fDecrementByValue(float* Ref, float Value);
	void STATIC_TDBPL_DrawDebugGrid2D(float Z, int Size, int Spacing, class UObject* WorldContextObject, const struct FLinearColor& LineColor, float Duration, float Thickness);
	void STATIC_TDBPL_DrawDebugDonut(const struct FMatrix& TransformMatrix, float InnerRadius, float OuterRadius, int Segments, class UObject* WorldContextObject, const struct FLinearColor& LineColor, bool PersistentLines, float Duration, float Thickness);
	void STATIC_TDBPL_DrawDebugCrosshair(const struct FVector& AxisLoc, const struct FRotator& AxisRot, float Scale, class UObject* WorldContextObject, const struct FLinearColor& LineColor, bool PersistentLines, float Duration);
	float STATIC_TDBPL_DotUpVector(class USceneComponent* Target, const struct FVector& Normal);
	float STATIC_TDBPL_DotRightVector(class USceneComponent* Target, const struct FVector& Normal);
	float STATIC_TDBPL_DotForwardVector(class USceneComponent* Target, const struct FVector& Normal);
	bool STATIC_TDBPL_ContainsUppercase(const struct FString& String);
	bool STATIC_TDBPL_ContainsNumber(const struct FString& String);
	void STATIC_TDBPL_CombineSpread(float* OutHorizontal, float* OutVertical, float HorizontalMoving, float VerticalMoving, float HorizontalShooting, float VerticalShooting);
	bool STATIC_TDBPL_AlignToSurfaceSmoothConstant(class AActor* Actor, const struct FVector& Normal, float Speed, bool Teleport);
	bool STATIC_TDBPL_AlignToSurfaceSmooth(class AActor* Actor, const struct FVector& Normal, float Speed, bool Teleport);
	bool STATIC_TDBPL_AlignToSurfaceInstant(class AActor* Actor, const struct FVector& Normal, bool Teleport);
	void STATIC_TDBPL_AlignToSurface(float* ASD, class UPrimitiveComponent* PrimitiveComponent, float Force, float Strenght, bool AccelChange, const struct FVector& Normal, bool Roll, bool Pitch);
	bool STATIC_TDBPL_AddSpringForceSphereTrace(class UObject* WorldContextObject, struct FHitResult* OutHit, float* Ref, class UPrimitiveComponent* PrimitiveComponent, const struct FVector& TraceStart, const struct FVector& TraceDirection, float TraceRadius, float TraceDistance, float SpringStiffness, float SpringDamping, bool AccelChange, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, TD_Blueprint_Library_EASFDebugTrace DrawDebugType, const struct FLinearColor& TraceColor);
	bool STATIC_TDBPL_AddSpringForceLineTrace(class UObject* WorldContextObject, struct FHitResult* OutHit, float* Ref, class UPrimitiveComponent* PrimitiveComponent, const struct FVector& TraceStart, const struct FVector& TraceDirection, float TraceDistance, float SpringStiffness, float SpringDamping, bool AccelChange, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, TD_Blueprint_Library_EASFDebugTrace DrawDebugType, const struct FLinearColor& TraceColor);
	bool STATIC_TDBPL_AddSpringForceAtLocationSphereTrace(class UObject* WorldContextObject, struct FHitResult* OutHit, float* Ref, class UPrimitiveComponent* PrimitiveComponent, const struct FVector& TraceStart, const struct FVector& TraceDirection, float TraceRadius, float TraceDistance, float SpringStiffness, float SpringDamping, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, TD_Blueprint_Library_EASFDebugTrace DrawDebugType, const struct FLinearColor& TraceColor);
	bool STATIC_TDBPL_AddSpringForceAtLocationLineTrace(class UObject* WorldContextObject, struct FHitResult* OutHit, float* Ref, class UPrimitiveComponent* PrimitiveComponent, const struct FVector& TraceStart, const struct FVector& TraceDirection, float TraceDistance, float SpringStiffness, float SpringDamping, TEnumAsByte<Engine_ETraceTypeQuery> TraceChannel, bool TraceComplex, TArray<class AActor*> ActorsToIgnore, bool IgnoreSelf, TD_Blueprint_Library_EASFDebugTrace DrawDebugType, const struct FLinearColor& TraceColor);
	void STATIC_TDBPL_AddSpringForceAtLocation(class UPrimitiveComponent* PrimitiveComponent, float* Ref, float Distance, float RestLength, float Stiffness, float Damping, const struct FVector& Normal, const struct FVector& Location);
	void STATIC_TDBPL_AddSpringForce(class UPrimitiveComponent* PrimitiveComponent, float* Ref, float Distance, float RestLength, float Stiffness, float Damping, const struct FVector& Normal, bool AccelChange);
	bool STATIC_TDBPL_ActorLookAtTargetSmoothConstant(class AActor* Actor, class AActor* Target, const struct FVector& Location, float Speed, bool Teleport);
	bool STATIC_TDBPL_ActorLookAtTargetSmooth(class AActor* Actor, class AActor* Target, const struct FVector& Location, float Speed, bool Teleport);
	bool STATIC_TDBPL_ActorLookAtTargetInstant(class AActor* Actor, class AActor* Target, const struct FVector& Location, bool Teleport);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
