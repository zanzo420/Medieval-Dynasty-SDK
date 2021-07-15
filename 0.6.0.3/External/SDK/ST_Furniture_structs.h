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

// UserDefinedStruct ST_Furniture.ST_Furniture
// 0x0075
struct FST_Furniture
{
	struct FName                                       TechnologySchemeID_82_9CB1E476446F5B565B4693A22BEF06D3;    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon_64_492B534B4CB32FE9C57F0BBE4DB47EBD;                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name_2_9176F3044DCF96898285B1B969D47957;                   // 0x0010(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_15_D6076A164E280AD2D7A5C99914C7C764;           // 0x0028(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      BuildingClass_43_D0A4637948415EDC3BB10E8473C522F5;         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FurnitureCategories_E_FurnitureCategories> Category_48_F572CB8E45AD5CA37C0A83A2487401B3;              // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_FurnitureType_E_FurnitureType>       FurnitureType_85_B1CDF05141E53220E8D44CB098A5BB01;         // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RFRW[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_ItemResource>                    Resources_19_88356C944C31F9983BCB97B3918A68C5;             // 0x0050(0x0010) (Edit, BlueprintVisible)
	float                                              MaxPlacementAngle_52_5F5DD4E84590C782B5D86FA45737F4A4;     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlacementOnLandscape_59_B822C7794E1978F0AD07C385B9D4E937;  // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PlacementOnFloor_60_941DF62A46F5204D094C72977ADA0253;      // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PlacementOnWall_61_3DEB52604434CA38C368218B98D44322;       // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AutomaticVerticalRotation_90_FDF399E74681277A0A0ADE83782CDF74; // 0x0067(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsLockedByTechnology_69_B1B027B14A6D918DD767078D8D37CBC4;  // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   TechnologyType_79_4294923E4BAD60B26865E598F857E8FB;        // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WQBO[0x2];                                     // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TechnologyLevel_80_FC68CF1B4DBD7FC647D9A3B371AA4C7B;       // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TechnologyCost_81_81FE9C964D4C3091DE826A8D6EE82A1A;        // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SeasonalRemove_87_2FD878C94832928D28F528B21A7EBA3E;        // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
