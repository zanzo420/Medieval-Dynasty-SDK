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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ST_BuildingModuleSocket.ST_BuildingModuleSocket
// 0x0044
struct FST_BuildingModuleSocket
{
	struct FTransform                                  Transform_5_742E87C0481A3EC65E7FC4A54AD5E7F2;              // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TArray<struct FDataTableRowHandle>                 Modules_23_3D55FB2A4518C904BB3480B24D86D9E3;               // 0x0030(0x0010) (Edit, BlueprintVisible)
	int                                                InitialModuleIndex_22_E8E9726A4DB7B827435FDDA15698A2D4;    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
