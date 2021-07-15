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

// BlueprintGeneratedClass BP_AnimHoldable_BakeryShovel.BP_AnimHoldable_BakeryShovel_C
// 0x0018 (FullSize[0x06E0] - InheritedSize[0x06C8])
class ABP_AnimHoldable_BakeryShovel_C : public ABP_MasterAnimHoldable_Static_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                                 FoodMesh;                                                  // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimHoldable_BakeryShovel.BP_AnimHoldable_BakeryShovel_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void HoldableNotify(const struct FName& NotifyName);
	void ExecuteUbergraph_BP_AnimHoldable_BakeryShovel(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
