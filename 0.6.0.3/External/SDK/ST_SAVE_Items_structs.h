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

// UserDefinedStruct ST_SAVE_Items.ST_SAVE_Items
// 0x0054
struct FST_SAVE_Items
{
	struct FTransform                                  Transform_35_599F07FF4917E529863A70820DB49534;             // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	struct FName                                       Name_43_04F182DF448A2C0DAD25188538053F12;                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count_12_C28937934D6E59E5A3B2CC86C1C3BBFE;                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HP_15_771BC86C40A6AA2358FA66BF8E05F0B7;                    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SPO_16_F1BE94C749B07C801F418FA78AAB4E50;                   // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SP_17_7AF5F9EF4AA4385C9AA3C0BB258A8F1A;                    // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9FSX[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LT_46_9DE3FEAC485A7DA42A8636B9F308F5A5;                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Capacity_22_8073CAED48CEF52E167C0CAEFC4FEFE5;              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Fresh_45_0FE2EDE64ED012089356FE923FEA0FCD;                 // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      Owner_47_042C8D67465E0D93845E5D9A575DBF0E;                 // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SRO_31_3DB48CEC4A2E7F2E0DBAF2B625EE660F;                   // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SR_32_F80B05DC489C8279FE24BBAC7B324F7B;                    // 0x0052(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AM_49_A0EADD464C4D4BA6A1DF91A4CA5F73F4;                    // 0x0053(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
