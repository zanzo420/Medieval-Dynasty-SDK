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

// BlueprintGeneratedClass BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C
// 0x001C (FullSize[0x00CC] - InheritedSize[0x00B0])
class UBP_AnimalRelationsComponent_C : public UActorComponent
{
public:
	struct FString                                     HouseID;                                                   // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_MasterBuilding_C*                        HouseReference;                                            // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceForBabyBirthPerMale;                                 // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AnimalRelationsComponent.BP_AnimalRelationsComponent_C");
		return ptr;
	}



	void UnassignHouse();
	void CheckChanceForBabyBirth(class ABP_AnimalBase_C* SelfAnimal);
	void SetRelationsData(const struct FString& HouseID);
	void GetHouse(class ABP_MasterBuilding_C** House, struct FString* House_ID);
	void AssignHouse(class ABP_MasterBuilding_C* House);
	void RelationsInit();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
