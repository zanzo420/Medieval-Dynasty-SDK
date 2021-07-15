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

// Class DialoguePlugin.DialogueEvents
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDialogueEvents : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DialoguePlugin.DialogueEvents");
		return ptr;
	}



	void RecieveEventTriggered(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void AfterRead();
	void BeforeDelete();

};

// Class DialoguePlugin.DialogueConditions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDialogueConditions : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DialoguePlugin.DialogueConditions");
		return ptr;
	}



	bool IsConditionMet_Internal(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	bool IsConditionMet(class APlayerController* ConsideringPlayer, class AActor* NPCActor);
	void AfterRead();
	void BeforeDelete();

};

// Class DialoguePlugin.OrCondition
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UOrCondition : public UDialogueConditions
{
public:
	TArray<class UDialogueConditions*>                 OrConditions;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DialoguePlugin.OrCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DialoguePlugin.AndCondition
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAndCondition : public UDialogueConditions
{
public:
	TArray<class UDialogueConditions*>                 AndConditions;                                             // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DialoguePlugin.AndCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DialoguePlugin.Dialogue
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UDialogue : public UDataAsset
{
public:
	bool                                               DisplayIdleSplines;                                        // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VX7I[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Name;                                                      // 0x0038(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FDialogueNode>                       Data;                                                      // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int                                                NextNodeId;                                                // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M7H3[0x24];                                    // 0x0064(0x0024) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DialoguePlugin.Dialogue");
		return ptr;
	}



	TArray<struct FDialogueNode> GetNextNodes(const struct FDialogueNode& Node);
	struct FDialogueNode GetFirstNode();
	void CleanOuter();
	void STATIC_CallFunctionByName(class UObject* Object, const struct FString& FunctionName);
	void AssignPersistentOuter(class UGameInstance* inGameInstance);
	void AfterRead();
	void BeforeDelete();

};

// Class DialoguePlugin.DialogueUserWidget
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UDialogueUserWidget : public UUserWidget
{
public:
	class AActor*                                      NPCActor;                                                  // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DialoguePlugin.DialogueUserWidget");
		return ptr;
	}



	bool RunStringReplacer(const struct FString& originalString, struct FString* resultString);
	void RunEventsForNode(const struct FDialogueNode& Node);
	struct FText ReplaceVarStrings(const struct FText& InText);
	bool IsConditionsMetForNode(const struct FDialogueNode& Node);
	TArray<struct FString> FindVarStrings(const struct FText& InText);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
