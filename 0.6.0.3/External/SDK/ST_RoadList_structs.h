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

// UserDefinedStruct ST_RoadList.ST_RoadList
// 0x0018
struct FST_RoadList
{
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership_14_99DA961248E04F8682B44AB5E8C05CA5;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RL6Q[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ABP_MasterRoadSpline_C*>              ListOfRoads_16_9F52855D41B0A66F620750B76CF003EE;           // 0x0008(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
