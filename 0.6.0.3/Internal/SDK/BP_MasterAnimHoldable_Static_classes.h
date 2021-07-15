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

// BlueprintGeneratedClass BP_MasterAnimHoldable_Static.BP_MasterAnimHoldable_Static_C
// 0x0010 (FullSize[0x06C8] - InheritedSize[0x06B8])
class ABP_MasterAnimHoldable_Static_C : public ABP_MasterAnimHoldable_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                        Mesh;                                                      // 0x06C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterAnimHoldable_Static.BP_MasterAnimHoldable_Static_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MasterAnimHoldable_Static(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
