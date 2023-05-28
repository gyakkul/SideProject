// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayCueTranslator.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayCueTranslator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueTranslator();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueTranslator_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueTranslator_Test();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueTranslator_Test_NoRegister();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslationLink();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslationManager();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslatorNode();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagsManager_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex;
class UScriptStruct* FGameplayCueTranslatorNodeIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueTranslatorNodeIndex"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueTranslatorNodeIndex>()
{
	return FGameplayCueTranslatorNodeIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Simple index/handle for referencing items in FGameplayCueTranslationManager::TranslationLUT  */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "Simple index/handle for referencing items in FGameplayCueTranslationManager::TranslationLUT" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueTranslatorNodeIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueTranslatorNodeIndex, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCueTranslatorNodeIndex",
		sizeof(FGameplayCueTranslatorNodeIndex),
		alignof(FGameplayCueTranslatorNodeIndex),
		Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink;
class UScriptStruct* FGameplayCueTranslationLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueTranslationLink, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueTranslationLink"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueTranslationLink>()
{
	return FGameplayCueTranslationLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RulesCDO_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RulesCDO;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a translation from one FGameplayCueTranslatorNode to many others. You will have one of these links per UGameplayCueTranslator that can translate a node. */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "Represents a translation from one FGameplayCueTranslatorNode to many others. You will have one of these links per UGameplayCueTranslator that can translate a node." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueTranslationLink>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::NewProp_RulesCDO_MetaData[] = {
		{ "Comment", "/** The rule that provides this translation */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The rule that provides this translation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::NewProp_RulesCDO = { "RulesCDO", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueTranslationLink, RulesCDO), Z_Construct_UClass_UGameplayCueTranslator_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::NewProp_RulesCDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::NewProp_RulesCDO_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::NewProp_RulesCDO,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCueTranslationLink",
		sizeof(FGameplayCueTranslationLink),
		alignof(FGameplayCueTranslationLink),
		Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslationLink()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode;
class UScriptStruct* FGameplayCueTranslatorNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueTranslatorNode"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueTranslatorNode>()
{
	return FGameplayCueTranslatorNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedGameplayTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameplayTagName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CachedGameplayTagName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A node in our translation table/graph. The node represents an actual gameplaytag or a possible gameplay tag, with links to what it can be translated into. */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "A node in our translation table/graph. The node represents an actual gameplaytag or a possible gameplay tag, with links to what it can be translated into." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueTranslatorNode>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayCueTranslationLink, METADATA_PARAMS(nullptr, 0) }; // 3779186766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links_MetaData[] = {
		{ "Comment", "/** Ways we can be translated into another FGameplayCueTranslatorNode */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "Ways we can be translated into another FGameplayCueTranslatorNode" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueTranslatorNode, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links_MetaData)) }; // 3779186766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "/** Our index into FGameplayCueTranslationManager::TranslationLUT  */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "Our index into FGameplayCueTranslationManager::TranslationLUT" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueTranslatorNode, CachedIndex), Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedIndex_MetaData)) }; // 623001588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTag_MetaData[] = {
		{ "Comment", "/** The FGameplayTag if this tag actually exists. This will always exist at runtime. In editor builds, it may not (GameplayCueEditor) */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "The FGameplayTag if this tag actually exists. This will always exist at runtime. In editor builds, it may not (GameplayCueEditor)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTag = { "CachedGameplayTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueTranslatorNode, CachedGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTag_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTagName_MetaData[] = {
		{ "Comment", "/** FName of the tag. This will always be valid, whether the tag is in the GameplayTag dictionary or not. */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "FName of the tag. This will always be valid, whether the tag is in the GameplayTag dictionary or not." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTagName = { "CachedGameplayTagName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueTranslatorNode, CachedGameplayTagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTagName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_Links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewProp_CachedGameplayTagName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCueTranslatorNode",
		sizeof(FGameplayCueTranslatorNode),
		alignof(FGameplayCueTranslatorNode),
		Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslatorNode()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager;
class UScriptStruct* FGameplayCueTranslationManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayCueTranslationManager, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayCueTranslationManager"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayCueTranslationManager>()
{
	return FGameplayCueTranslationManager::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationLUT_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationLUT_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TranslationLUT;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationNameToIndexMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TranslationNameToIndexMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationNameToIndexMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TranslationNameToIndexMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TagManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This is the struct that does the actual translation. It lives on the GameplayCueManager and encapsulates all translation logic. */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "This is the struct that does the actual translation. It lives on the GameplayCueManager and encapsulates all translation logic." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayCueTranslationManager>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT_Inner = { "TranslationLUT", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayCueTranslatorNode, METADATA_PARAMS(nullptr, 0) }; // 3614987673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT_MetaData[] = {
		{ "Comment", "/** The Look Up Table */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "The Look Up Table" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT = { "TranslationLUT", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueTranslationManager, TranslationLUT), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT_MetaData)) }; // 3614987673
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_ValueProp = { "TranslationNameToIndexMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex, METADATA_PARAMS(nullptr, 0) }; // 623001588
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_Key_KeyProp = { "TranslationNameToIndexMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_MetaData[] = {
		{ "Comment", "/** Acceleration map from gameplay tag name to index into TranslationLUT  */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "Acceleration map from gameplay tag name to index into TranslationLUT" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap = { "TranslationNameToIndexMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueTranslationManager, TranslationNameToIndexMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_MetaData)) }; // 623001588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TagManager_MetaData[] = {
		{ "Comment", "/** Cached reference to tag manager */" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "Cached reference to tag manager" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TagManager = { "TagManager", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayCueTranslationManager, TagManager), Z_Construct_UClass_UGameplayTagsManager_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TagManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TagManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationLUT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TranslationNameToIndexMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewProp_TagManager,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayCueTranslationManager",
		sizeof(FGameplayCueTranslationManager),
		alignof(FGameplayCueTranslationManager),
		Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayCueTranslationManager()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.InnerSingleton, Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager.InnerSingleton;
	}
	void UGameplayCueTranslator::StaticRegisterNativesUGameplayCueTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueTranslator);
	UClass* Z_Construct_UClass_UGameplayCueTranslator_NoRegister()
	{
		return UGameplayCueTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayCueTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayCueTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueTranslator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09This is the base class for GameplayCue Translators. This is what games must extend from in order to add their own rules.\n *\x09These are not instantiated, and are basically just a holder for virtual functions that are called on the CDO.\n *\n *\x09There are two main things this class provides:\n *\x09\x09""1. A set of translation rules. E.g., \"I translate GameplayCue.A.B.C into GameplayCue.X.B.C\", or rather \"I translate A into X\". (GetTranslationNameSpawns)\n *\x09\x09""2. A runtime function to actually do the translation, based on the actors and parameters involved in the gameplay cue event. (GameplayCueToTranslationIndex)\n *\n *\n */" },
		{ "IncludePath", "GameplayCueTranslator.h" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "This is the base class for GameplayCue Translators. This is what games must extend from in order to add their own rules.\nThese are not instantiated, and are basically just a holder for virtual functions that are called on the CDO.\n\nThere are two main things this class provides:\n        1. A set of translation rules. E.g., \"I translate GameplayCue.A.B.C into GameplayCue.X.B.C\", or rather \"I translate A into X\". (GetTranslationNameSpawns)\n        2. A runtime function to actually do the translation, based on the actors and parameters involved in the gameplay cue event. (GameplayCueToTranslationIndex)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayCueTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueTranslator_Statics::ClassParams = {
		&UGameplayCueTranslator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayCueTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayCueTranslator()
	{
		if (!Z_Registration_Info_UClass_UGameplayCueTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueTranslator.OuterSingleton, Z_Construct_UClass_UGameplayCueTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayCueTranslator.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueTranslator>()
	{
		return UGameplayCueTranslator::StaticClass();
	}
	UGameplayCueTranslator::UGameplayCueTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueTranslator);
	UGameplayCueTranslator::~UGameplayCueTranslator() {}
	void UGameplayCueTranslator_Test::StaticRegisterNativesUGameplayCueTranslator_Test()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayCueTranslator_Test);
	UClass* Z_Construct_UClass_UGameplayCueTranslator_Test_NoRegister()
	{
		return UGameplayCueTranslator_Test::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayCueTranslator_Test_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayCueTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09This is an example translator class.\n */" },
		{ "IncludePath", "GameplayCueTranslator.h" },
		{ "ModuleRelativePath", "Public/GameplayCueTranslator.h" },
		{ "ToolTip", "This is an example translator class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayCueTranslator_Test>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::ClassParams = {
		&UGameplayCueTranslator_Test::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayCueTranslator_Test()
	{
		if (!Z_Registration_Info_UClass_UGameplayCueTranslator_Test.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayCueTranslator_Test.OuterSingleton, Z_Construct_UClass_UGameplayCueTranslator_Test_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayCueTranslator_Test.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayCueTranslator_Test>()
	{
		return UGameplayCueTranslator_Test::StaticClass();
	}
	UGameplayCueTranslator_Test::UGameplayCueTranslator_Test(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayCueTranslator_Test);
	UGameplayCueTranslator_Test::~UGameplayCueTranslator_Test() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics::ScriptStructInfo[] = {
		{ FGameplayCueTranslatorNodeIndex::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueTranslatorNodeIndex_Statics::NewStructOps, TEXT("GameplayCueTranslatorNodeIndex"), &Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNodeIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueTranslatorNodeIndex), 623001588U) },
		{ FGameplayCueTranslationLink::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueTranslationLink_Statics::NewStructOps, TEXT("GameplayCueTranslationLink"), &Z_Registration_Info_UScriptStruct_GameplayCueTranslationLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueTranslationLink), 3779186766U) },
		{ FGameplayCueTranslatorNode::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueTranslatorNode_Statics::NewStructOps, TEXT("GameplayCueTranslatorNode"), &Z_Registration_Info_UScriptStruct_GameplayCueTranslatorNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueTranslatorNode), 3614987673U) },
		{ FGameplayCueTranslationManager::StaticStruct, Z_Construct_UScriptStruct_FGameplayCueTranslationManager_Statics::NewStructOps, TEXT("GameplayCueTranslationManager"), &Z_Registration_Info_UScriptStruct_GameplayCueTranslationManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayCueTranslationManager), 2202816771U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayCueTranslator, UGameplayCueTranslator::StaticClass, TEXT("UGameplayCueTranslator"), &Z_Registration_Info_UClass_UGameplayCueTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueTranslator), 3979417232U) },
		{ Z_Construct_UClass_UGameplayCueTranslator_Test, UGameplayCueTranslator_Test::StaticClass, TEXT("UGameplayCueTranslator_Test"), &Z_Registration_Info_UClass_UGameplayCueTranslator_Test, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayCueTranslator_Test), 3183895443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_2928599134(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayCueTranslator_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
