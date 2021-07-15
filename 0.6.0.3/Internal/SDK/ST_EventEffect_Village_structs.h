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

// UserDefinedStruct ST_EventEffect_Village.ST_EventEffect_Village
// 0x0074
struct FST_EventEffect_Village
{
	TEnumAsByte<E_EventEffect_VillageType_E_EventEffect_VillageType> VillageEventType_33_55F97C684C4D278BFE9E59A636A597BC;      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UsePrecent__45_9F2C2E4449B3F33D3D5E3089BCB30C65;           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GKF3[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_EventEffect_Village_Buildings           BuildingDamage_34_6BB616754EBC0756661DA88CA0BAD118;        // 0x0004(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_EventEffect_Village_Fields              FieldDamage_35_1EF4EE734B28FEBDFAA9F6B096638755;           // 0x001C(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_91ZE[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_EventEffect_Village_Resources           ResourcesRemove_36_6EEC7B9E496021726332D69ADEA0199C;       // 0x0038(0x0038) (Edit, BlueprintVisible, HasGetValueTypeHash)
	float                                              TaxChange_42_1F11566F4D51B58F657DF28301C4727F;             // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
