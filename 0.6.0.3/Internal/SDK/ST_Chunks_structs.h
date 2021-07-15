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

// UserDefinedStruct ST_Chunks.ST_Chunks
// 0x0138
struct FST_Chunks
{
	int                                                ID_23_19F40B2D4E8D5F66FA3503875744BFCC;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KP90[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             Corners_9_53EF7C4740A8BAAE52DAE6847ED67A7B;                // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FVector                                     CenterLocation_14_991B101C4715C844EF7EFCBEA2AA1789;        // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Occupied_17_98D0CB3F403A5FAED7A1B89F1998B04F;              // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_ChunkStates_E_ChunkStates>           ChunkState_67_7126F8804F76EE4FA58E049CA0B24803;            // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FieldPlantStages_E_FieldPlantStages> PlantState_54_F4410E78473E53B34632BCBA8086AD74;            // 0x0026(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KLWW[0x1];                                     // 0x0027(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        PlantSlotsID_66_10BB7415476FA6A91404D6AF9CB1B33D;          // 0x0028(0x0010) (Edit, BlueprintVisible)
	float                                              Fertility_43_5D8FB7E943C251D35DCEF0BD276EC45A;             // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GDFO[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Seed                                    CurrentSeed_47_DFE114D34DDB8DB31E63B1A772152F4B;           // 0x0040(0x0078) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_Seed                                    TargetSeed_50_9D315E0846D90AF9AAFCD4918D0BC34E;            // 0x00B8(0x0078) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               RecentlySown_70_64036DB245363E80E92B76BDD5AC1757;          // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_C1FK[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Seasons_73_BA7F60A94F4C3DF4256D06BD874708CD;               // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
