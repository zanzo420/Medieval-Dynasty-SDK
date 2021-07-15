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

// BlueprintGeneratedClass BP_MasterFurniture_Light.BP_MasterFurniture_Light_C
// 0x0019 (FullSize[0x0461] - InheritedSize[0x0448])
class ABP_MasterFurniture_Light_C : public ABP_MasterFurniture_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBoxComponent*                               ObstructionMesh;                                           // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Fire;                                                      // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterFurniture_Light.BP_MasterFurniture_Light_C");
		return ptr;
	}



	void OnOwnershipSwap(TEnumAsByte<E_Ownership_E_Ownership> NewOwnership);
	void DisableGhost();
	void EnableGhost();
	void GetActivityFurnitureDataToSave(struct FST_SAVE_ActivityFurnitures* FurnitureData);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void CheckObstruction(bool* CanBePlaced_);
	void ShowInspectorUI();
	void UpdateOnTimeOfDayChanged(TEnumAsByte<E_TimeOfDay_E_TimeOfDay> TimeOfDay);
	void StartFire();
	void PutOutFire();
	void FinishFurniture(bool Load);
	void SetMeshMobility(TEnumAsByte<Engine_EComponentMobility> Mobility);
	void ExecuteUbergraph_BP_MasterFurniture_Light(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
