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

// BlueprintGeneratedClass BP_Furniture_Trough.BP_Furniture_Trough_C
// 0x0028 (FullSize[0x0490] - InheritedSize[0x0468])
class ABP_Furniture_Trough_C : public ABP_Furniture_RefillableContainer_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBoxComponent*                               ObstructionMesh;                                           // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      S_Animal_Feed;                                             // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class US_Animal_Feed_AnimBP_C*                     FeedAnimReference;                                         // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Furniture_Trough.BP_Furniture_Trough_C");
		return ptr;
	}



	void CheckObstruction(bool* CanBePlaced_);
	void UpdateCapacityAnimation(float CapacityRatio);
	void DisableGhost();
	void EnableGhost();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Furniture_Trough(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
