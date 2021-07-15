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

// BlueprintGeneratedClass BP_SignPlate.BP_SignPlate_C
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class ABP_SignPlate_C : public AActor
{
public:
	class UStaticMeshComponent*                        S_SignPlate;                                               // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_SignPlateVariants_E_SignPlateVariants> PlateMesh;                                                 // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_SignName_E_SignName>                 Name;                                                      // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0CNU[0x6];                                     // 0x022A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SignPlate.BP_SignPlate_C");
		return ptr;
	}



	void Init(TEnumAsByte<E_SignName_E_SignName> Name, TEnumAsByte<E_SignPlateVariants_E_SignPlateVariants> PlateMesh);
	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
