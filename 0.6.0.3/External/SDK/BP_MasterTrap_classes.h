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

// BlueprintGeneratedClass BP_MasterTrap.BP_MasterTrap_C
// 0x00C8 (FullSize[0x0510] - InheritedSize[0x0448])
class ABP_MasterTrap_C : public ABP_MasterFurniture_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FText                                       InteractActionText_Activate;                               // 0x0450(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InteractActionText_Deactivate;                             // 0x0468(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InteractActionText_Full;                                   // 0x0480(0x0018) (Edit, BlueprintVisible)
	float                                              InteractionTime;                                           // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Active;                                                    // 0x049C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0TXJ[0x3];                                     // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FST_ItemSource>                      Resources;                                                 // 0x04A0(0x0010) (Edit, BlueprintVisible)
	bool                                               Caught;                                                    // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<E_Skills_E_Skills>                     Skill;                                                     // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SW5W[0x2];                                     // 0x04B2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueSkill;                                                // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  CatchSound;                                                // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  OpenSound;                                                 // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  CloseSound;                                                // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NightBonus;                                                // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IL7L[0x3];                                     // 0x04D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FST_Time                                    ActivationTime;                                            // 0x04D4(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_Time                                    CatchTime;                                                 // 0x04EC(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<E_TechnologyTypes_E_TechnologyTypes>   Technology;                                                // 0x0504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8GG8[0x3];                                     // 0x0505(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ValueTechnology;                                           // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Condition;                                                 // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MasterTrap.BP_MasterTrap_C");
		return ptr;
	}



	void LoadTrapData(const struct FST_SAVE_Traps& FurnitureData);
	void GetInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, float* Condition, bool* CustomText, struct FText* Text, bool* CustomColor, struct FLinearColor* Color);
	void IsInteractCondition(class ABP_BaseCharacter_C* BaseCharacter, bool* CheckCondition);
	void GetTrapDataToSave(struct FST_SAVE_Traps* FurnitureData);
	void GetInteractAction(struct FText* InteractActionText, struct FText* InteractSecondActionText);
	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void ActivateTrap(bool Load);
	void Catch(bool Load);
	void Interact(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool Timer);
	void DeactivateTrap();
	void PickUpAnimal(class ABP_BaseCharacter_C* BaseCharacter);
	void Update();
	void FinishFurniture(bool Load);
	void ExecuteUbergraph_BP_MasterTrap(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
