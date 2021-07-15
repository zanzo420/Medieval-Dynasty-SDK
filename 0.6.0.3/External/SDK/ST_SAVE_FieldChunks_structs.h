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

// UserDefinedStruct ST_SAVE_FieldChunks.ST_SAVE_FieldChunks
// 0x0024
struct FST_SAVE_FieldChunks
{
	int                                                ID_2_7E0554E84AB70C151D5E8E9CBA17C95F;                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ChunkStates_E_ChunkStates>           ChunkState_5_BDB6DBB943732F038C9EEE93FFE43CAD;             // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantState_8_517B7A2442DAAEA005163E84F1F38A55;             // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1EWO[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Fertility_11_8E69DF164C9125F260492EAB5A4438F1;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CurrentSeed_16_603EE657458C81A03E70ABB9821EF3EC;           // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TargetSeed_17_C57F6DA54C19B0CD14A2069DBAF884C9;            // 0x0014(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RecentlySown_20_F63C80194A2A722E76E1EFB82257D582;          // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LUFY[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Seasons_24_92F385E74BD1B16CFEFB6798A9463EA6;               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
