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

// BlueprintGeneratedClass BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C
// 0x0020 (FullSize[0x0468] - InheritedSize[0x0448])
class ABP_Furniture_ArcheryTarget_C : public ABP_MasterFurniture_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        TargetCenter;                                              // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                               ObstructionMesh;                                           // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Furniture_ArcheryTarget.BP_Furniture_ArcheryTarget_C");
		return ptr;
	}



	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void CalculatePoints(const struct FVector& InitialLocation, const struct FVector& HitLocation);
	void CheckObstruction(bool* CanBePlaced_);
	void DisableGhost();
	void EnableGhost();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ExecuteUbergraph_BP_Furniture_ArcheryTarget(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
