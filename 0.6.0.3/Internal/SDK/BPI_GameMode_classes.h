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

// BlueprintGeneratedClass BPI_GameMode.BPI_GameMode_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_GameMode_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_GameMode.BPI_GameMode_C");
		return ptr;
	}



	void GetDefaultSaveSlotNames(struct FString* SaveDataSlotName, struct FString* SaveGameSlotName);
	void BPI_FixOldSaveFiles(bool* Success);
	void BPI_QuickLoad(bool* Success);
	void BPI_AutoSave(bool* Success);
	void BPI_QuickSave(bool* Success);
	void BPI_CreateNewSaveGame(const struct FString& UserSaveName, int* GameSavedAtSlot, struct FString* SaveFileName);
	void BPI_SaveData();
	void BPI_ClearSaveSlot(const struct FString& SlotName);
	void BPI_SaveGameToSelectedSlot(const struct FString& UserSaveName, const struct FString& DataSlotName, const struct FString& GameSlotName);
	void BPI_LoadGameFromSelectedSlot(const struct FString& SlotName, bool* Success);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
