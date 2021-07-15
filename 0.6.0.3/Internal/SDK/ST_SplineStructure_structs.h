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

// UserDefinedStruct ST_SplineStructure.ST_SplineStructure
// 0x0121
struct FST_SplineStructure
{
	struct FName                                       TechnologySchemeID_72_A69C6AEA41CDDEA376A24B8A3BECA02E;    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_2_9176F3044DCF96898285B1B969D47957;                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_15_D6076A164E280AD2D7A5C99914C7C764;           // 0x0020(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      BuildingClass_92_D0A4637948415EDC3BB10E8473C522F5;         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  FirstMeshTransform_76_EC4F995041F83D723C60BA9D44D196E6;    // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	unsigned char                                      FirstMesh_89_0939F4F144C9BA2A85F65996744A810E[0x28];       // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ConstructionMesh_90_64E6F89040225034F603F8A1C69DF183[0x28]; // 0x0098(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      SplineMesh_91_904C69A646E9957D904D04BF36E9A4FE[0x28];      // 0x00C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TArray<struct FST_ItemResource>                    GhostResources_56_88356C944C31F9983BCB97B3918A68C5;        // 0x00E8(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_ItemResource>                    Resources_80_DC7A6B2E4548F9E2FD06EB9F98A27989;             // 0x00F8(0x0010) (Edit, BlueprintVisible)
	float                                              StepSize_59_1976A5B84F3DD8F2AA50239549DEE395;              // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLockedByTechnology_46_917AD40843D243E91DEB208F491EC1A4;  // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyType_48_E13292F044E1BD7440DD5ABCB1792F4F;        // 0x010D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZXCD[0x2];                                     // 0x010E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TechnologyLevel_51_D872A3D2445F3382BE6F6488F91B7BAE;       // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TechnologyCost_52_21D301484F60E0B8C180C3BCA4840DCB;        // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TechnologyPoints_83_A82F4FDE4951B13629B3CCB61D7D1DD9;      // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkillPoints_85_9689952C4F846117A5DBA79FE3D5A139;           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_MaterialType_E_MaterialType>         MaterialType_88_72924F094287C1B3C644B8B2153982CB;          // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
