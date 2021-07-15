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

// BlueprintGeneratedClass WaterCollider.WaterCollider_C
// 0x0050 (FullSize[0x0270] - InheritedSize[0x0220])
class AWaterCollider_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0220(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USplineComponent*                            Spline;                                                    // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               AsCollider_;                                               // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               ShouldTeleportPlayer;                                      // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WKDS[0x2];                                     // 0x023A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TargetLocation;                                            // 0x023C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LookAtLocation;                                            // 0x0248(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsFading;                                                  // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Entered;                                                   // 0x0255(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZPT0[0x2];                                     // 0x0256(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_PlayerCharacter_C*                       PlayerReference;                                           // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      MountReference;                                            // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TraceHalfHeight;                                           // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TraceRadius;                                               // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterCollider.WaterCollider_C");
		return ptr;
	}



	void TeleportNPC(class ABP_NPC_C* NPC);
	void CalculateTargetLocation(class ABP_PlayerCharacter_C* PlayerCharacterReference, float Distance, struct FVector* TargetPosition, struct FVector* LookAtPosition);
	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void TeleportPlayer();
	void SelectBehaviour(class ABP_PlayerCharacter_C* PlayerReference, class AActor* MountReference);
	void MovePlayer();
	void ExecuteUbergraph_WaterCollider(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
