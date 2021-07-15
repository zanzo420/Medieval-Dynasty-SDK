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

// BlueprintGeneratedClass BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A.BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C
// 0x0014 (FullSize[0x0428] - InheritedSize[0x0414])
class ABP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C : public ABP_MasterBuildModule_C
{
public:
	unsigned char                                      UnknownData_IPZP[0x4];                                     // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Ladder;                                                    // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A.BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A_C");
		return ptr;
	}



	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void ExecuteUbergraph_BP_BuildModule_HenHouse_Wattle_Wall_A_Door_A(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
