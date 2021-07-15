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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Comp_Group.BP_Comp_Group_C
// 0x0034 (FullSize[0x00E4] - InheritedSize[0x00B0])
class UBP_Comp_Group_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               Active;                                                    // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<BP_Enum_GroupMode_EBP_Enum_GroupMode>  GroupMode;                                                 // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UKS7[0x6];                                     // 0x00BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_GroupManager_C*                          GroupManager;                                              // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      Owner;                                                     // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GroupLeader_;                                              // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_THNX[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxLeaderDistance;                                         // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PartOfAGroup_;                                             // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CheckLeadership;                                           // 0x00D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_S46P[0x2];                                     // 0x00DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AutoGroupManagerTag;                                       // 0x00DC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Comp_Group.BP_Comp_Group_C");
		return ptr;
	}



	void EventRegisterWithGroup();
	void ReceiveBeginPlay();
	void EventRegisterWithAutoGroupTag();
	void EventRegisterWithAutoGroup();
	void ExecuteUbergraph_BP_Comp_Group(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
