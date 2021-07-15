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

// BlueprintGeneratedClass BPI_BuildingSocket.BPI_BuildingSocket_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_BuildingSocket_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_BuildingSocket.BPI_BuildingSocket_C");
		return ptr;
	}



	void CheckSocketCompatibility(const struct FDataTableRowHandle& BuildingHandler, bool* Success);
	void GetBuildingHandlers(const struct FDataTableRowHandle& HandlerToCompare, TArray<struct FDataTableRowHandle>* BuildingHandlers, bool* Compatibility);
	void GetSocketLocation(struct FTransform* Transform);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
