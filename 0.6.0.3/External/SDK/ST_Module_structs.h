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

// UserDefinedStruct ST_Module.ST_Module
// 0x0100
struct FST_Module
{
	struct FText                                       Name_2_9176F3044DCF96898285B1B969D47957;                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ImprovedName_106_8FD568934A1B867F6D842990B1EB39A1;         // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_15_D6076A164E280AD2D7A5C99914C7C764;           // 0x0030(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_ModuleType_E_ModuleType>             ModuleType_82_AF4CD1C844A77B425413449817A2E39C;            // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MaterialType_E_MaterialType>         MaterialType_81_7E8BF9FD43A3DA1E4D8AD3BB9E5C8B2A;          // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseWarming_84_91DC91784CF06FCF4BFB90BE46358718;            // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Improveable_103_DCE53554453821FAD03488ADCB6C2DDF;          // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              BaseLevelOfWarming_85_8676ECBD4EE4F94437C699A181FD7BA3;    // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BonusLevelOfWarming_88_E48B513147C3C0692617F1B68541709A;   // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JMLV[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_ItemResource>                    BaseResources_46_88356C944C31F9983BCB97B3918A68C5;         // 0x0058(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_ItemResource>                    BonusLevelResources_93_F40A22C7431A581B4DB0778FCF153B42;   // 0x0068(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      BaseMaterial_109_68C979544F38EEE156F3BC81174487CD[0x28];   // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      BonusMaterial_108_2EFFD744480A07B25B42349BCE62691E[0x28];  // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      BuildingClass_107_D0A4637948415EDC3BB10E8473C522F5[0x28];  // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      CustomBaseMaterials_114_19BFE6A14E05F6BC0831A59CDF2D67CF[0x10]; // 0x00F0(0x0010) UNKNOWN PROPERTY: ArrayProperty

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
