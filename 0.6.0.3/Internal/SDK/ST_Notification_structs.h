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

// UserDefinedStruct ST_Notification.ST_Notification
// 0x0058
struct FST_Notification
{
	struct FST_ItemInventorys                          Item_11_2FB91FD24F6E53A984DF6B9A765ACBD1;                  // 0x0000(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NotificationImage_12_075DB9D54F77B8024B072F97009C9401;     // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Notifications_E_Notifications>       NotificationType_13_CFBB9A7E4EAA38C3A3021D9D4098C6F7;      // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_94ZE[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       WarningText_14_43A7C41A435CE8300053FA8A1403211C;           // 0x0038(0x0018) (Edit, BlueprintVisible)
	float                                              NotificationTimeOut_15_BF6A11E5472F671B7A2F4E89B515F7CC;   // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NotificationDelay_16_90034FA84E879F259C97E4A7860C267A;     // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
