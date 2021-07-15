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

// UserDefinedStruct ST_MasterEventEffect.ST_MasterEventEffect
// 0x0108
struct FST_MasterEventEffect
{
	float                                              HappenChance_20_39679BEE4CED146667487F9ADC27C00C;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               MustHappen_26_0A0614D04B821ECDC17634A77071019D;            // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_74RO[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ChoiceConsequence_23_0DA8A7C64EBB7CAF5D87F3928EF75266;     // 0x0008(0x0018) (Edit, BlueprintVisible)
	int                                                BoundEffect_30_93343EF04D7D310060359AB5E90B9259;           // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_EventEffectType_E_EventEffectType>   EffectType_10_692A6B144C03155FFDCD6B87239ACEAA;            // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E9ZU[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_EventEffect_PlayerParameters            PlayerEffect_11_8CE116B14354270A004EE3B8154B504E;          // 0x0028(0x0030) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_EventEffect_NPCParameter                NPCEffect_12_0FDAD2494B4F336705E4DF860A9E9015;             // 0x0058(0x0028) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FST_EventEffect_Village                     VillageEffect_13_5190742A48AD37BAB64414A3C0325FC7;         // 0x0080(0x0078) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_EventEffect_HusbandryAnimals            HusbandryEffect_14_0E403B4C40415EBD0EAF7C9939138AC4;       // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
