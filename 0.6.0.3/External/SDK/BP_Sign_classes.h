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

// BlueprintGeneratedClass BP_Sign.BP_Sign_C
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class ABP_Sign_C : public AActor
{
public:
	class UStaticMeshComponent*                        S_SignPost_Pole;                                           // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_SignPlateSettings>               Plates;                                                    // 0x0228(0x0010) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sign.BP_Sign_C");
		return ptr;
	}



	void CalculateLocation(float ZLocation, struct FVector* Location);
	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
