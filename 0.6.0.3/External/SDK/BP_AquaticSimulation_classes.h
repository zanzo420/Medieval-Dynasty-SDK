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

// BlueprintGeneratedClass BP_AquaticSimulation.BP_AquaticSimulation_C
// 0x0105 (FullSize[0x0325] - InheritedSize[0x0220])
class ABP_AquaticSimulation_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                               Volume;                                                    // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                frameIndex;                                                // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeAccumulator;                                           // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AreaSize;                                                  // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FW7N[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    SimulationInstance;                                        // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    SplatInstance;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_AquaticSurface_C*>                AquaticSurfaces;                                           // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_AquaticCaustic_C*>                AquaticCaustics;                                           // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	int                                                TextureResolution;                                         // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   TargetPoint;                                               // 0x027C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C96E[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBS_AquaticInteraction>              Interactions;                                              // 0x0288(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                RemoveInteraction;                                         // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TextureToWorld;                                            // 0x029C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   HalfSize;                                                  // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InterpStepSize;                                            // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AreaSizeInv;                                               // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   LocationShift;                                             // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   LocationShiftPrev;                                         // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TextureResolutionInv;                                      // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InterpSpeed;                                               // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WorldToTexture;                                            // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              UpdateRate;                                                // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxInterations;                                            // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTimeAccumulator;                                        // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimationRate;                                             // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxCameraDistance;                                         // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaveTravelSpeed;                                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaveDamping;                                               // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaveNormalScale;                                           // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8WX5[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTextureRenderTarget2D*>              RenderTargets;                                             // 0x02F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   SimulationFocus;                                           // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SimulationCameraRadiusSq;                                  // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SimulationCameraForward;                                   // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SimulationCameraDistance;                                  // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DrawDebug;                                                 // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G4Z7[0x3];                                     // 0x0315(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntVector                                  PrevWorldOrigin;                                           // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoInteractionUpdate;                                       // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AquaticSimulation.BP_AquaticSimulation_C");
		return ptr;
	}



	void OnWorldOriginChanged(const struct FIntVector& OldLocation, const struct FIntVector& NewLocation, bool* Update);
	void SpawnSplash(struct FBS_AquaticInteraction* Interaction, class ABP_AquaticSurface_C* Surface, const struct FVector& NewLocation);
	void UpdateSimulationFocus();
	void DrawSplat(const struct FVector2D& ScreenSize, class UCanvas* Canvas, float ForceSize, const struct FVector& Location, float Radius);
	bool IsLocal();
	class UTextureRenderTarget2D* NewRenderTarget();
	void DebugDraw();
	void AddInteraction(const struct FST_AquaticInteractionData& Interaction, const struct FVector& Location, float Duration, bool VisibilityTest);
	void SetTargetPoint(const struct FVector& TargetLocation, float InterpSpeed, float MaxDistance);
	void RemoveInteractionFinished();
	void UpdateRenderPosition();
	void UpdateInteractionTime(int Index, float DeltaTime, bool* Draw);
	void RemoveInteractionActor(class AActor* Target);
	void AddInteractionActor(class ABP_AquaticSurface_C* InteractionSurface, class AActor* Target);
	void UpdateInteraction(class UCanvas* Canvas, const struct FVector2D& ScreenSize, int Interaction, float DeltaTime);
	void GetRenderTarget(int NumFramesOld, class UTextureRenderTarget2D** HeightRT);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UpdateTransform();
	void ExecuteUbergraph_BP_AquaticSimulation(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
