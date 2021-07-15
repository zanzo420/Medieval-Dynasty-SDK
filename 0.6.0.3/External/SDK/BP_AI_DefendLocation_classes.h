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

// BlueprintGeneratedClass BP_AI_DefendLocation.BP_AI_DefendLocation_C
// 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
class ABP_AI_DefendLocation_C : public ATargetPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                               Trigger;                                                   // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender;                                                // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Active;                                                    // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9YUF[0x3];                                     // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TriggerScale;                                              // 0x023C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_GroundAnimalBase_C*>              GroundAnimals;                                             // 0x0248(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<struct FName>                               ActorTags;                                                 // 0x0258(0x0010) (Edit, BlueprintVisible)
	class AActor*                                      OverlappedActor;                                           // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AI_DefendLocation.BP_AI_DefendLocation_C");
		return ptr;
	}



	void fnCallAnimals();
	void fnCheckActor(class AActor* Actor);
	void UserConstructionScript();
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_14_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_BP_AI_DefendLocation(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
