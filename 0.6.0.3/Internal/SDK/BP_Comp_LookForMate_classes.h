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

// BlueprintGeneratedClass BP_Comp_LookForMate.BP_Comp_LookForMate_C
// 0x00B8 (FullSize[0x0168] - InheritedSize[0x00B0])
class UBP_Comp_LookForMate_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               Active;                                                    // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Male_LookForMate_;                                         // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Female_LookForMate_;                                       // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R5T4[0x1];                                     // 0x00BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LookForPartnerFrequency;                                   // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                PartnerEventHandler;                                       // 0x00C0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              PartnerSearchRadius;                                       // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ActiveSearch_;                                             // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DebugPartnerSearch;                                        // 0x00CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F0CY[0x2];                                     // 0x00CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       OwnerSpecies;                                              // 0x00D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<BP_Enum_AnimalSex_EBP_Enum_AnimalSex>  OwnerSex;                                                  // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DebugNearestPartner;                                       // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WantsToBreed;                                              // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PXKZ[0x5];                                     // 0x00EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABP_GroundAnimalBase_C*                      Owner;                                                     // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnedHearts;                                             // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YDTI[0x3];                                     // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BreedingTimer;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      MaleClass;                                                 // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      FemaleClass;                                               // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   MinMaxOffspring;                                           // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                HeartsTimerHandler;                                        // 0x0118(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                NumOffspring;                                              // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InheritBehaviors_;                                         // 0x0124(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6SNR[0x3];                                     // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      MaleOffspring;                                             // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      FemaleOffspring;                                           // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_AIRoamBehavior_EBP_Enum_AIRoamBehavior> oRoamBehavior;                                             // 0x0138(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<BP_Enum_GroundEngageBehavior_EBP_Enum_GroundEngageBehavior> oEngageBehavior;                                           // 0x0139(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L1C3[0x6];                                     // 0x013A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               AdditionalTags;                                            // 0x0140(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               OffspringFollowsParent_;                                   // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SIOI[0x3];                                     // 0x0151(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              oWalkSpeed;                                                // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayParticles;                                          // 0x0158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ED0Z[0x3];                                     // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ParticlesLocation;                                         // 0x015C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Comp_LookForMate.BP_Comp_LookForMate_C");
		return ptr;
	}



	void fnSetAttributes(class ABP_GroundAnimalBase_C* Actor);
	void fnLookForPartner();
	void EventSearchForPartner();
	void ReceiveBeginPlay();
	void EventBreeding(bool Partner_);
	void ExecuteUbergraph_BP_Comp_LookForMate(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
