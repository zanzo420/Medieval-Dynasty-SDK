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

// UserDefinedStruct ST_TaskList.ST_TaskList
// 0x001E
struct FST_TaskList
{
	TEnumAsByte<E_BuildingActivities_E_BuildingActivities> Activities_2_1511836D4BACE8A879C670B66F85162C;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7BT9[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Priority_8_04D3C050422488ABC1835AACF8EA1989;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor_16_29C1BEF147C0C999E5C033BCC3886B0E;                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Destination_5_01F1C3FA498F8C988CE1FE848BE19945;            // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tools_E_Tools>                       NeedItems_21_AE937817431593260AAA29B12197E4C3;             // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOccupied_23_B48A43B848B4DFB2939CDFAD7DEA49E5;            // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
