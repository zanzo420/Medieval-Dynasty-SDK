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

// BlueprintGeneratedClass BP_Pig_Male.BP_Pig_Male_C
// 0x0038 (FullSize[0x0D19] - InheritedSize[0x0CE1])
class ABP_Pig_Male_C : public ABP_HusbandryAI_C
{
public:
	unsigned char                                      UnknownData_GK3E[0x7];                                     // 0x0CE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                         // 0x0CF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           PelvisCapsule;                                             // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           CapsuleCollider_Body;                                      // 0x0D00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHeldItem;                                                // 0x0D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G637[0x7];                                     // 0x0D09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                StunTimer;                                                 // 0x0D10(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_GroundNaturalBehaviors_EBP_Enum_GroundNaturalBehaviors> LastBiggestNeed;                                           // 0x0D18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pig_Male.BP_Pig_Male_C");
		return ptr;
	}



	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void ReceiveBeginPlay();
	void EventDead();
	void UnStun();
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void MovingTime();
	void BndEvt__AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void ExecuteUbergraph_BP_Pig_Male(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
