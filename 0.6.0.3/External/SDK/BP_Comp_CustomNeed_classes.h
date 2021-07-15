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

// BlueprintGeneratedClass BP_Comp_CustomNeed.BP_Comp_CustomNeed_C
// 0x0064 (FullSize[0x0114] - InheritedSize[0x00B0])
class UBP_Comp_CustomNeed_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               Active;                                                    // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2G7F[0x3];                                     // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NeedsTimer;                                                // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBP_Struct_NeedCustom                       NeedDetails;                                               // 0x00C0(0x0028) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GroundAnimalBase_C*                      GroundAnimal;                                              // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementAcceptanceRadius;                                  // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Debug_Current_Need;                                        // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DebugActorSearch;                                          // 0x00F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PX5G[0x2];                                     // 0x00F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ActorSearchRadius;                                         // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_B3Q7[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                NaturalNeedTimerHandle;                                    // 0x0100(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              CurrentNeed;                                               // 0x0108(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       BiggestNeed;                                               // 0x010C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Comp_CustomNeed.BP_Comp_CustomNeed_C");
		return ptr;
	}



	void fnGetClosestActor(class AActor** NearbyActor);
	void fnExecuteCustomNeed();
	void OnFail_A0E617C64EA1A7EFC98DEABB3BB6A50D(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_A0E617C64EA1A7EFC98DEABB3BB6A50D(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnFail_527661CF4A79736405D21CA66FE7333B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void OnSuccess_527661CF4A79736405D21CA66FE7333B(TEnumAsByte<AIModule_EPathFollowingResult> MovementResult);
	void EventDetermineNaturalNeed();
	void ReceiveBeginPlay();
	void EventFinishedNeed();
	void EventNeed_SingleActor();
	void EventNeed_ClosestActor();
	void EventNeed_CustomCode();
	void ExecuteUbergraph_BP_Comp_CustomNeed(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
