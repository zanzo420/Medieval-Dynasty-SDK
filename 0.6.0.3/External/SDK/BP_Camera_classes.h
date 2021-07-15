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

// BlueprintGeneratedClass BP_Camera.BP_Camera_C
// 0x0564 (FullSize[0x0784] - InheritedSize[0x0220])
class ABP_Camera_C : public AActor
{
public:
	class UCameraComponent*                            FP_ActionCamera;                                           // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ECKC[0x8];                                     // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPostProcessSettings                        PostProcess;                                               // 0x0230(0x0550) (Edit, BlueprintVisible, ExposeOnSpawn)
	float                                              FieldOfView;                                               // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Camera.BP_Camera_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
