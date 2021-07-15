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

// BlueprintGeneratedClass BP_InfinityResourceFoliage.BP_InfinityResourceFoliage_C
// 0x000F (FullSize[0x08A0] - InheritedSize[0x0891])
class UBP_InfinityResourceFoliage_C : public UBP_MasterFoliage_C
{
public:
	unsigned char                                      UnknownData_9XW3[0x7];                                     // 0x0891(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0898(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InfinityResourceFoliage.BP_InfinityResourceFoliage_C");
		return ptr;
	}



	void IsInteractable(class ABP_BaseCharacter_C* BaseCharacter, bool* Interactable, bool* Possibility, bool* ShowPressUI, bool* ShowTimerUI, bool* ShowOnlyName, float* Time, float* Distance);
	void GenerateDroppedResources(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit);
	void ToolInteract(class ABP_BaseCharacter_C* BaseCharacter, const struct FHitResult& Hit, bool UseChunkData, const struct FST_Chunks& ChunkData);
	void ExecuteUbergraph_BP_InfinityResourceFoliage(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
