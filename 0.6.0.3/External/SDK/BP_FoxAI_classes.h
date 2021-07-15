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

// BlueprintGeneratedClass BP_FoxAI.BP_FoxAI_C
// 0x0019 (FullSize[0x0BE9] - InheritedSize[0x0BD0])
class ABP_FoxAI_C : public ABP_GroundAnimalBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCapsuleComponent*                           PelvisCapsule;                                             // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_AI_POI_Base_C*                           HomeBasePrey;                                              // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasAttacked;                                               // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FoxAI.BP_FoxAI_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void EventEngagementStart();
	void FearDecrease();
	void AnimalTookDamage();
	void ExecuteUbergraph_BP_FoxAI(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
