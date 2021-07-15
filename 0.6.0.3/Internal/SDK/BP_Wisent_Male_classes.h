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

// BlueprintGeneratedClass BP_Wisent_Male.BP_Wisent_Male_C
// 0x0018 (FullSize[0x0C08] - InheritedSize[0x0BF0])
class ABP_Wisent_Male_C : public ABP_WisentAI_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0BF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCapsuleComponent*                           CapsuleCollider_Body;                                      // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                           PelvisCapsule;                                             // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wisent_Male.BP_Wisent_Male_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void EventDead();
	void ExecuteUbergraph_BP_Wisent_Male(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
