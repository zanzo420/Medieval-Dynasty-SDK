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

// BlueprintGeneratedClass BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C
// 0x0028 (FullSize[0x06F0] - InheritedSize[0x06C8])
class ABP_AnimHoldable_Stick_C : public ABP_MasterAnimHoldable_Static_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              FadeTimeline_Alpha_CC90D4B24DEECA7C880D64863B0EA502;       // 0x06D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeTimeline__Direction_CC90D4B24DEECA7C880D64863B0EA502;  // 0x06DC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ACMQ[0x3];                                     // 0x06DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeTimeline;                                              // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    DynamicMeatMaterial;                                       // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimHoldable_Stick.BP_AnimHoldable_Stick_C");
		return ptr;
	}



	void FadeTimeline__FinishedFunc();
	void FadeTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void FryFood();
	void ExecuteUbergraph_BP_AnimHoldable_Stick(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
