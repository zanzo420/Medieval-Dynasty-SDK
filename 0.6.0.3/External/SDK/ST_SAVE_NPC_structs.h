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

// UserDefinedStruct ST_SAVE_NPC.ST_SAVE_NPC
// 0x0401
struct FST_SAVE_NPC
{
	struct FString                                     NPC_ID_59_B8A1D96346DB3806BD805295AA367715;                // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                         NPC_Handler_195_4EAD905D43751A5D8393E9AFF793015F;          // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FVector                                     Location_39_4C2448BC4B735D194B54FA9D985F6F13;              // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation_40_9212B41444B2E7B08BED74BF6BF580F8;              // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Name_8_63A4E40E4D8977E5B706FBBF07AC5400;                   // 0x0038(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      Sex_104_CD61F4494D307C5E53005EBAD6444FBA;                  // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5JAN[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Age_17_95D4C25B404796B039F50EAB60304D82;                   // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mood_56_CF87A144455D92DB6C482FB22BA8C487;                  // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_SAVE_NPC_Skillss                        Skills_72_BC25071441646825BA0361A6C186A2B6;                // 0x005C(0x0030) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G09Y[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_SAVE_Inventory>                  EQ_111_E8A95A55473CB02502A1959F9FCF1D1C;                   // 0x0090(0x0010) (Edit, BlueprintVisible)
	struct FString                                     MomID_109_5DE07FAF47BE56B42F3BC98B7AB68B92;                // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DadID_110_7087EB0247EE117BF1A62FAF40DE9814;                // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     PartnerID_43_560F89B34FAFBB9E633AEEA1F5BCF3B1;             // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             SiblingsID_192_EEDE6A104DAB041B55674DA4631B350C;           // 0x00D0(0x0010) (Edit, BlueprintVisible)
	TArray<struct FString>                             ChildrenID_50_F52D40B648BCA71F5BA60FAF1E1D68A1;            // 0x00E0(0x0010) (Edit, BlueprintVisible)
	struct FString                                     HouseID_54_E7D4DA9742156BA4D70F2BB25201678B;               // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     WorkID_112_05C5011E43B9B7BE5F08A899CC440EE1;               // 0x0100(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int                                                Affection_67_01ECE1EE46B4B9610E6C6FB8E16F7074;             // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TimeBirth_113_F854738E44A363B3B3BDEE848D8F1D2B;            // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPregnant_88_69E3B7024C6FCB44EC598EB68048803E;            // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BOQC[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_MatchingNPC>                     PossHusband_149_BC042D84468318059CC447AE855D6E02;          // 0x0120(0x0010) (Edit, BlueprintVisible)
	float                                              BabyChance_146_EEC9A08E4CE8B38F4867D29917D313FF;           // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasInfant_89_4903B57C4A1774CE3D38EF86D63B3F03;             // 0x0134(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OEC0[0x3];                                     // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_SAVE_NPC_Blackboards                    Blackboards_71_0177B3A7450B7ECBE7F4458B66F91CC7;           // 0x0138(0x003C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NightPatrol_120_5D0FE97344AD42E54A16218E28BC5307;          // 0x0174(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      Ownership_105_EEFEBD7744D0F6A22748D4A7ACB0A79D;            // 0x0175(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Profession_106_230E5B484AED46A30FFA34AC7185AD51;           // 0x0176(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      OutNPCType_114_B6C5094F40B0C2E8B431DF8C43DCA253;           // 0x0177(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      OutNPCOwner_179_A0A1724744546CFCDE574DAA9EFA2556;          // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Vendor_91_C7086D2E41ADD62E493DD5BCFB480F2A;                // 0x0179(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JYUD[0x2];                                     // 0x017A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       VendorCat_171_F6F6EF47476415CFCB6B1089FC880018;            // 0x017C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HKNK[0x4];                                     // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<E_BodyParts_E_BodyParts>, int>    BPIndexes_118_5DEEFABD408E52037417B29EDF5763E1;            // 0x0188(0x0050) (Edit, BlueprintVisible)
	struct FName                                       MeshName_117_CA5D9E2B40869A88CD0BF7BF67CD7EA2;             // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SkinTone_154_FB8409874CE98FE5705C529B1F0ADE9E;             // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                HairColor_155_B5C398CD4764339A39DB9C8729577794;            // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HeadID_164_3CF60D5E48EF6DC80ED2EBA09F847A05;               // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BagMode_180_47C3C8D142ADF4CD37016D81E859AB05;              // 0x0204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      BuildMode_181_286481204FA699AA7E5B63B2228C2EBE;            // 0x0205(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MQS4[0x2];                                     // 0x0206(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_QuestInfo_Save                          QuestToGive_134_1C469672472442DDCCABBB8BEC950872;          // 0x0208(0x0150) (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               IsStoryNPC_136_7799BD824AA3B2A56EED9D94BE0A446D;           // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2EMP[0x3];                                     // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                HairID_165_D60FC8024DA127C5083A279B1BD5FDED;               // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<E_Profession_E_Profession>, struct FST_NPCSeasonClothing> PresetsIDs_166_980BA472412B10BA3984DCB92C30E02A;           // 0x0360(0x0050) (Edit, BlueprintVisible)
	struct FST_SAVE_NPCDialogue                        Dialogue_140_6358380044D8558348534F8C345DE45E;             // 0x03B0(0x0028) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FST_Event_CharacterMultipliers              Events_174_82387D39480CD50F9D3F7E9C065345C3;               // 0x03D8(0x001C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G06T[0x4];                                     // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDialogue*                                   ActualDialogue_184_DFBB0C574C2ACE6F2A459CAF7B26DF31;       // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Personality_188_F5E5534B4D1756759B92FC8CEA951381;          // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
