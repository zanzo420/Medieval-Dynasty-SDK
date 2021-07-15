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

// UserDefinedStruct ST_CustomNPC.ST_CustomNPC
// 0x00DB
struct FST_CustomNPC
{
	struct FDataTableRowHandle                         RowName_100_3C9ED039409A31282838B7A671E5B358;              // 0x0000(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FText                                       Name_94_56C16C554015D6B9175C2EB4B82D90CF;                  // 0x0010(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<E_Sex_E_Sex>                           Sex_97_F7A203124AE551D407BB3FA3EFEC87D8;                   // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4K44[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Age_74_9B263E474D618870FA373EACF61C817D;                   // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinDeadAge_111_9FFF029841BBF75D374B06BA61285367;           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_CharacterType_E_CharacterType>       CharacterType_34_58D303B54EAE43A59F155CA244FC05B1;         // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_Ownership_E_Ownership>               Ownership_92_B72FCC164B262826B96C298F8F3C562B;             // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_OutsideNPCTypes_E_OutsideNPCTypes>   OutsideNPCType_36_6D5A0AA54E9986F5CD909790D8A193FD;        // 0x0036(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TRJ0[0x9];                                     // 0x0037(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  TransformLocation_114_991DF9EB4F258F85BC05C3ACB0784DCA;    // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	bool                                               IsVendor_38_6796B918467CDBBCD56E318F76C1D78E;              // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VSSR[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDataTableRowHandle                         VendorCategory_108_1B6266B4455BA75F1729909CD5E40F20;       // 0x0078(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FString                                     PartnerID_66_C7228DA945771356E1CEBFA84699087B;             // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             ChildrenID_67_638B53424933A4E73C1F0BB76AE6769D;            // 0x0098(0x0010) (Edit, BlueprintVisible)
	struct FString                                     MotherID_70_C059756744C8A02A3EA3A883D75CC7E2;              // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     HouseID_59_4642897347FBC73042DDA28E25292357;               // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     WorkplaceID_76_658AE34A411D7DC8C47B37B8DE0416B3;           // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<E_Profession_E_Profession>             Profession_90_2D883673460A95C178626EAB4CED5742;            // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NightPatrol_103_AF6F6FD94CADEBD6D418579EB098C4FC;          // 0x00D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsStoryNPC_105_2BB4BA9A45C8A6E71C109E915F64C895;           // 0x00DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
