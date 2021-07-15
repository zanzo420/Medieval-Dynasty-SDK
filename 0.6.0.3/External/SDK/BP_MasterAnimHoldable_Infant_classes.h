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

// BlueprintGeneratedClass BP_MasterAnimHoldable_Infant.BP_MasterAnimHoldable_Infant_C
// 0x0008 (FullSize[0x06D0] - InheritedSize[0x06C8])
class ABP_MasterAnimHoldable_Infant_C : public ABP_MasterAnimHoldable_Skeletal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterAnimHoldable_Infant.BP_MasterAnimHoldable_Infant_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void CheckIfStillValid();
	void ExecuteUbergraph_BP_MasterAnimHoldable_Infant(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
