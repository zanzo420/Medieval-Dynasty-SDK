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

// BlueprintGeneratedClass BP_BuildingRestrictionArea.BP_BuildingRestrictionArea_C
// 0x002C (FullSize[0x024C] - InheritedSize[0x0220])
class ABP_BuildingRestrictionArea_C : public AActor
{
public:
	class UBoxComponent*                               Box;                                                       // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender;                                                // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership;                                                 // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4JLE[0x3];                                     // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Size;                                                      // 0x0234(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x0240(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BuildingRestrictionArea.BP_BuildingRestrictionArea_C");
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
