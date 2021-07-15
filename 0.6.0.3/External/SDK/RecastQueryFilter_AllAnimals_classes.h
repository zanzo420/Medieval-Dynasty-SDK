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

// BlueprintGeneratedClass RecastQueryFilter_AllAnimals.RecastQueryFilter_AllAnimals_C
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class URecastQueryFilter_AllAnimals_C : public URecastFilter_UseDefaultArea
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RecastQueryFilter_AllAnimals.RecastQueryFilter_AllAnimals_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
