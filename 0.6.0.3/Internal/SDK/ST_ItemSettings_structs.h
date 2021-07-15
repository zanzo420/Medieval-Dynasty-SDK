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

// UserDefinedStruct ST_ItemSettings.ST_ItemSettings
// 0x0110
struct FST_ItemSettings
{
	struct FText                                       Name_2_0F6942554FF42FF85BEDD3A18817C5BC;                   // 0x0000(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ShortDescription_54_5CE992304BA2A12BA9FB23A408554B6F;      // 0x0018(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description_57_DCAD748D425CF3DDFF7DF2B59A4BF3E0;           // 0x0030(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_ItemCategories_E_ItemCategories>     Category_7_9C3B04A844A662B3DC7F67BA23B7D8C1;               // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ItemSubCategories_E_ItemSubCategories> SubCategory_19_7AD71F4F4A5DCD8460576788A409D638;           // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Droppable_10_5050046546B7EF0A4A36929A660DE69A;             // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JW3H[0x5];                                     // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  Icon_13_97F7A1E7482864A723E09AA3C0F762D3;                  // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      WorldMesh_77_A3DD2CE84C4293C7F8B84F81F050A925[0x28];       // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               UseCondition_21_21EBD9064D62473D72B8B28C3A5E8631;          // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OSG5[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_ItemResource>                    BrokenItems_71_67B096714135FEB226E084A1B454A620;           // 0x0088(0x0010) (Edit, BlueprintVisible)
	bool                                               UseFreshness_30_0FD8674847F42FE2A019029CA3F964C2;          // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GO1Q[0x3];                                     // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FreshnessPerSeason_38_9B1A08AE4E990944FF4F3E84CE38756E;    // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FST_ItemResource>                    ExpiredItems_69_4893FD344A9C3DF46A5C00B9ABE132EB;          // 0x00A0(0x0010) (Edit, BlueprintVisible)
	bool                                               UseCapacity_42_4753C86E4DA6F6CF507FF58C86A9750E;           // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_38QL[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Capacity_45_08CF246946B817630F67A293A6E5F8CD;              // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         ExhaustedItem_48_2B7BA8AE465AF5B1175AEAA7BA98DE46;         // 0x00B8(0x0010) (Edit, BlueprintVisible, NoDestructor)
	bool                                               SeasonalRemove_Player_70_A14566AE4847059197A45597024DAA64; // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SeasonalRemove_73_DE4213404320BB797864A08DD3085F96;        // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MTZS[0x6];                                     // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AdditionalWorldMesh_76_E95EEBE344BE4CE4795A43A7BB3EFB47[0x28]; // 0x00CA(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TEnumAsByte<E_Production_StoragePlaces_E_Production_StoragePlaces> Storage_63_D123E2AE403A457B2B7277A7FC0F3289;               // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_ShopType_E_ShopType>                 ShopType_87_2FDBA15445D266CCC10216911144FA8D;              // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WSRM[0x2];                                     // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RenderDistance_68_656BDA964FEC0F8BCB4574AADEA54BF3;        // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Quest_75_DD8EE38745B0DFF1E35945947FFBA4D7;                 // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QJDD[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundCue*                                   Consume_Sound_84_FCF2F9CD4059189844F19E95C474BFE1;         // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
