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

// UserDefinedStruct ST_ItemOutfit.ST_ItemOutfit
// 0x00F0
struct FST_ItemOutfit
{
	TEnumAsByte<E_EquipmentCategories_E_EquipmentCategories> EquipmentSlot_13_0719CDA84379C1A84AF3EA8ECDC759AB;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IZ2X[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      EquippedMesh_30_5CA016B24273B02A0AA21E933E8EBF4B[0x28];    // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      AlternativeEquippedMesh_31_461B6ED645C5E9BFB420C387C5B991BF[0x28]; // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      EquippedStaticMesh_32_B6FF261A480EEE7E6518C2BDA82189F7[0x28]; // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	float                                              HeatProtection_16_90CD6DAF46A9093D676E27B794F6F710;        // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ColdProtection_18_B3804E5E44AADA4961E8058DA2F37B18;        // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ColorTable>                      Dyes_22_9982E67A4BCC1F4369471DA0475ADC81;                  // 0x0088(0x0010) (Edit, BlueprintVisible)
	float                                              WeightCapacity_25_F15BDCD9442B50EA77F9739EC07C070D;        // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W9I7[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      EquipParams_29_72B85DBF4874A705C6913C8A6E6C5435[0x50];     // 0x009C(0x0050) UNKNOWN PROPERTY: SetProperty

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
