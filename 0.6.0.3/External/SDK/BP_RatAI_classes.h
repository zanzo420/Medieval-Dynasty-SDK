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

// BlueprintGeneratedClass BP_RatAI.BP_RatAI_C
// 0x0010 (FullSize[0x0BE0] - InheritedSize[0x0BD0])
class ABP_RatAI_C : public ABP_GroundAnimalBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ABP_AI_POI_Base_C*                           HomeBasePrey;                                              // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RatAI.BP_RatAI_C");
		return ptr;
	}



	void EventEngagementStart();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_RatAI(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
