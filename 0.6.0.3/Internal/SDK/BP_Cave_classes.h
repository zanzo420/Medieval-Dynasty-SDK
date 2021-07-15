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

// BlueprintGeneratedClass BP_Cave.BP_Cave_C
// 0x0070 (FullSize[0x0290] - InheritedSize[0x0220])
class ABP_Cave_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        VolumeMesh;                                                // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UArrowComponent*                             Arrow;                                                     // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ABP_SystemsManager_C*                        SystemsManagerReference;                                   // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BaseTemperature;                                           // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LevelOfWarming;                                            // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_CaveBlocker_C*>                   CaveInfarctions;                                           // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AStaticMeshActor*>                    CaveDecorations;                                           // 0x0258(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_CaveTorch_C*>                     CaveTorches;                                               // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FName                                       CaveTag;                                                   // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SlotSettings>                    NPCWorkSlot;                                               // 0x0280(0x0010) (Edit, BlueprintVisible, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cave.BP_Cave_C");
		return ptr;
	}



	void EnableDecorations();
	void DisableDecorations();
	void UpdateDecorationList();
	void UserConstructionScript();
	void BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__VolumeMesh_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void SetCaveAccessible(bool Accessible);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Cave(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
