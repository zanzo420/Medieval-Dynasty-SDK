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

// BlueprintGeneratedClass BPI_Buildings.BPI_Buildings_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_Buildings_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Buildings.BPI_Buildings_C");
		return ptr;
	}



	void GetBuildingReference(class ABP_MasterBuilding_C** MasterBuilding);
	void GetEntrances(TArray<struct FVector>* Entrances);
	void GetBuildingType(TEnumAsByte<E_Buildings_E_Buildings>* GetBuildingType);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
