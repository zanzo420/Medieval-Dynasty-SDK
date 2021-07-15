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

// BlueprintGeneratedClass BPI_AqiatocWorld.BPI_AqiatocWorld_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_AqiatocWorld_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AqiatocWorld.BPI_AqiatocWorld_C");
		return ptr;
	}



	void OnWorldOriginChanged(const struct FIntVector& Old_Origin, const struct FIntVector& New_Origin);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
