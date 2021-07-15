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

// BlueprintGeneratedClass EQS_Context_GetEngageActor.EQS_Context_GetEngageActor_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UEQS_Context_GetEngageActor_C : public UEnvQueryContext_BlueprintBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EQS_Context_GetEngageActor.EQS_Context_GetEngageActor_C");
		return ptr;
	}



	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
