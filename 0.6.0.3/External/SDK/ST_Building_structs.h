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

// UserDefinedStruct ST_Building.ST_Building
// 0x00C9
struct FST_Building
{
	class UTexture2D*                                  Icon_45_B0C90AE14B05A514E925D08246EB99C5;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_2_9176F3044DCF96898285B1B969D47957;                   // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_15_D6076A164E280AD2D7A5C99914C7C764;           // 0x0020(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_Buildings_E_Buildings>               BuildingType_28_62A5CF4D49EEC033A1A3CDAE612A0048;          // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_BuildingCategories_E_BuildingCategories> BuildingCategory_69_257E87BF43BE9921217425851133E47E;      // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P3JQ[0x2];                                     // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BaseTax_109_8676ECBD4EE4F94437C699A181FD7BA3;              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemResource>                    BaseResources_46_88356C944C31F9983BCB97B3918A68C5;         // 0x0040(0x0010) (Edit, BlueprintVisible)
	class UClass*                                      BuildingClass_20_D0A4637948415EDC3BB10E8473C522F5;         // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_BuildingModuleSocket>            Modules_42_F1052D5A430FF115077ECE92DE9D67EA;               // 0x0058(0x0010) (Edit, BlueprintVisible)
	int                                                EmptyModulesForTemperature_75_C06D24B14648A53A934B1781E33375B0; // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3Y48[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FDataTableRowHandle>                 Professions_115_371559944DE3DB18FC15D790BEEB97F2;          // 0x0070(0x0010) (Edit, BlueprintVisible)
	float                                              WorkRadius_63_D82F5DA54D39579BE920C890C938D785;            // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Tasks_E_Tasks>                       WorkplaceTask_35_15EAEB524B765DE6FD13C38C271C805C;         // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZFQD[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaxPeople_72_CE1CD90141E3A027CA3AE7905DD9E993;             // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalNumberOfAnimals_50_53E31FD54B749723161392A0583F922B;  // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Level_78_FFA2EF2B4933F958105952B30FC440B9;                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlacementOnlySocket_82_D473B0A84C44FEB1656C068A7BA323C8;   // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MOOY[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 SkeletonBuildingMesh_88_7B16B3F14210EADC1B4B22A746AD8FAC;  // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_BuildingTechnology                      RequiredTechnology_107_B5996AD9401DD710454A78A8F04EEE9A;   // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_Production>                      ProductionSettings_110_876E074748CBCE16033B579F09B77255;   // 0x00A8(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_Transport>                       TransportSettings_111_1D43E8A946B5F5FFBAFFD29FBF71A639;    // 0x00B8(0x0010) (Edit, BlueprintVisible)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyDevelopment_103_5E951CF44591DA897E1109AEDEA9D4AD; // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
