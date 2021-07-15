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

// UserDefinedStruct ST_SAVE_Buildings.ST_SAVE_Buildings
// 0x0185
struct FST_SAVE_Buildings
{
	struct FVector                                     Pos_36_4A28E9104EDB1143C1C3C0A4EAA4A813;                   // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rot_37_41862FFC481133EEB55374942A2B83BC;                   // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ZPos_38_FF5007614E145281E222E0A182CC7398;                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Name_8_5CAD6AB84536BD2BE0FA85AD59E10B3C;                   // 0x001C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2IFB[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CustomName_101_9084EA1443B26A3FB16A4B9CBAC0090F;           // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ID_11_4AB0F4B241BF2E27776E629BFBAA0FCD;                    // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	unsigned char                                      Owner_40_A38A3A764BFC3A75E76FADA3A0C9F07A;                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4CN0[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SAVE_Modules>                    Modules_28_8478A9384B2C2FA21A134AA358167D40;               // 0x0050(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_Furnitures>                 Furnitures_57_D9FC8CE24FE16DE30F12298D937629A9;            // 0x0060(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_ActivityFurnitures>         ActivityFurnitures_58_4E8DE55D4A851C8A05C50AB2132FC78E;    // 0x0070(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_Campfires>                  Campfires_59_04C982E246E587DF685771AC4044389D;             // 0x0080(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_RefillableContainers>       RefillableContainers_60_3C1713664D168D1BE9606C9FA8C0FB87;  // 0x0090(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_Containers>                 Containers_61_542EA7E74DB129E6865E1790F049F0D1;            // 0x00A0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_Production_Progress>        Production_65_00A02DF94CF4DF201C1FE8948199C24F;            // 0x00B0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FST_SAVE_Trade_Progress>             Trading_113_39FC0CFF4BB839F662E8899555E127AF;              // 0x00C0(0x0010) (Edit, BlueprintVisible)
	TMap<TEnumAsByte<E_Profession_E_Profession>, int>  WorkIntensity_71_9C0328A644B9766A7C88BB91545B5BDF;         // 0x00D0(0x0050) (Edit, BlueprintVisible)
	TMap<TEnumAsByte<E_Tools_Activity_E_Tools_Activity>, struct FST_ToolCost> ToolsBuffer_118_137A92324AB6747A399BA4B732BE0166;          // 0x0120(0x0050) (Edit, BlueprintVisible)
	float                                              Wood_82_DF3FBBAB413CB2BFC6E9EBB6146B901E;                  // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Food_83_36027E2D4E52A5B6D8D1779117F410A4;                  // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Water_104_0F734F854D1FB358D4533BBC4B5886BF;                // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FC_92_DEA6F8B64B34403E18E7EC834D2E24EC;                    // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7841[0x3];                                     // 0x017D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Event_BuildingMultipliers               Events_96_389A338746C12D945B382EA90BEF610C;                // 0x0180(0x0004) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Shop_107_3797FAE04D4BCC7CF2C5108A65C0C49D;                 // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
