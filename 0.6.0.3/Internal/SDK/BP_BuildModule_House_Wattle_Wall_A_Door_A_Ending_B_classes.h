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

// BlueprintGeneratedClass BP_BuildModule_House_Wattle_Wall_A_Door_A_Ending_B.BP_BuildModule_House_Wattle_Wall_A_Door_A_Ending_B_C
// 0x003C (FullSize[0x0450] - InheritedSize[0x0414])
class ABP_BuildModule_House_Wattle_Wall_A_Door_A_Ending_B_C : public ABP_MasterBuildModule_C
{
public:
	unsigned char                                      UnknownData_VJ5J[0x4];                                     // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             DoorCreakSound;                                            // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavLinkComponent*                           NavLink;                                                   // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        S_Building_Stairs_A;                                       // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Hinge;                                                     // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                         // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Door_1;                                                    // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildModule_House_Wattle_Wall_A_Door_A_Ending_B.BP_BuildModule_House_Wattle_Wall_A_Door_A_Ending_B_C");
		return ptr;
	}



	void SetStairs();
	void UserConstructionScript();
	void ConstructedModule(bool Load);
	void ReceiveBeginPlay();
	void UnconstructedModule(bool Load);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__Door_0_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_BP_BuildModule_House_Wattle_Wall_A_Door_A_Ending_B(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
