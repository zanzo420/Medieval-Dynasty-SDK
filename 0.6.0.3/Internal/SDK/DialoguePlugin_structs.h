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

// ScriptStruct DialoguePlugin.DialogueNode
// 0x0088
struct FDialogueNode
{
	int                                                ID;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               isPlayer;                                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LBLM[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Text;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<int>                                        Links;                                                     // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                                   Coordinates;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDialogueEvents*>                     Events;                                                    // 0x0038(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UDialogueConditions*>                 Conditions;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USoundBase*                                  Sound;                                                     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogueWave*                               DialogueWave;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       BubbleComment;                                             // 0x0068(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                               bDrawBubbleComment;                                        // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YLO[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
