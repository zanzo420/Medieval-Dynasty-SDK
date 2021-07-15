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

// BlueprintGeneratedClass BP_MasterAnimHoldable_Flail.BP_MasterAnimHoldable_Flail_C
// 0x0010 (FullSize[0x06D8] - InheritedSize[0x06C8])
class ABP_MasterAnimHoldable_Flail_C : public ABP_MasterAnimHoldable_Skeletal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                                ThreshingMontage;                                          // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterAnimHoldable_Flail.BP_MasterAnimHoldable_Flail_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void StartThreshing();
	void HoldableNotify(const struct FName& NotifyName);
	void ExecuteUbergraph_BP_MasterAnimHoldable_Flail(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
