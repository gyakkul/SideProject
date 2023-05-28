// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQuery();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType();
	GAMEPLAYTAGS_API UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReferenceHelper();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayContainerMatchType;
	static UEnum* EGameplayContainerMatchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayContainerMatchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayContainerMatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayContainerMatchType"));
		}
		return Z_Registration_Info_UEnum_EGameplayContainerMatchType.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayContainerMatchType>()
	{
		return EGameplayContainerMatchType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_Statics::Enumerators[] = {
		{ "EGameplayContainerMatchType::Any", (int64)EGameplayContainerMatchType::Any },
		{ "EGameplayContainerMatchType::All", (int64)EGameplayContainerMatchType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "//\x09Means the filter is only populated if all of the tags in this container match.\n" },
		{ "All.Name", "EGameplayContainerMatchType::All" },
		{ "All.ToolTip", "Means the filter is only populated if all of the tags in this container match." },
		{ "Any.Comment", "//\x09Means the filter is populated by any tag matches in this container.\n" },
		{ "Any.Name", "EGameplayContainerMatchType::Any" },
		{ "Any.ToolTip", "Means the filter is populated by any tag matches in this container." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		"EGameplayContainerMatchType",
		"EGameplayContainerMatchType",
		Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayContainerMatchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayContainerMatchType.InnerSingleton, Z_Construct_UEnum_GameplayTags_EGameplayContainerMatchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayContainerMatchType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTag;
class UScriptStruct* FGameplayTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTag, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTag"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTag.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTag>()
{
	return FGameplayTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTag_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A single gameplay tag, which represents a hierarchical name of the form x.y that is registered in the GameplayTagsManager\n * You can filter the gameplay tags displayed in the editor using, meta = (Categories = \"Tag1.Tag2.Tag3\"))\n */" },
		{ "DisableSplitPin", "" },
		{ "HasNativeBreak", "/Script/GameplayTags.BlueprintGameplayTagLibrary.GetTagName" },
		{ "HasNativeMake", "/Script/GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "A single gameplay tag, which represents a hierarchical name of the form x.y that is registered in the GameplayTagsManager\nYou can filter the gameplay tags displayed in the editor using, meta = (Categories = \"Tag1.Tag2.Tag3\"))" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTag>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTag_Statics::NewProp_TagName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** This Tags Name */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "This Tags Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTag, TagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTag_Statics::NewProp_TagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTag_Statics::NewProp_TagName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTag_Statics::NewProp_TagName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTag",
		sizeof(FGameplayTag),
		alignof(FGameplayTag),
		Z_Construct_UScriptStruct_FGameplayTag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTag_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTag.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTag.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagContainer;
class UScriptStruct* FGameplayTagContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainer, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagContainer.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagContainer>()
{
	return FGameplayTagContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A Tag Container holds a collection of FGameplayTags, tags are included explicitly by adding them, and implicitly from adding child tags */" },
		{ "HasNativeBreak", "/Script/GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer" },
		{ "HasNativeMake", "/Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "A Tag Container holds a collection of FGameplayTags, tags are included explicitly by adding them, and implicitly from adding child tags" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags_Inner = { "GameplayTags", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Array of gameplay tags */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Array of gameplay tags" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0020080001020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagContainer, GameplayTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags_MetaData)) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags_Inner = { "ParentTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags_MetaData[] = {
		{ "Comment", "/** Array of expanded parent tags, in addition to GameplayTags. Used to accelerate parent searches. May contain duplicates in some cases */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Array of expanded parent tags, in addition to GameplayTags. Used to accelerate parent searches. May contain duplicates in some cases" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags = { "ParentTags", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagContainer, ParentTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewProp_ParentTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagContainer",
		sizeof(FGameplayTagContainer),
		alignof(FGameplayTagContainer),
		Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagContainer.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagContainer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagReferenceHelper;
class UScriptStruct* FGameplayTagReferenceHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagReferenceHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagReferenceHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagReferenceHelper, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagReferenceHelper"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagReferenceHelper.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagReferenceHelper>()
{
	return FGameplayTagReferenceHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagReferenceHelper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagReferenceHelper",
		sizeof(FGameplayTagReferenceHelper),
		alignof(FGameplayTagReferenceHelper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagReferenceHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagReferenceHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagReferenceHelper.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagReferenceHelper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagCreationWidgetHelper;
class UScriptStruct* FGameplayTagCreationWidgetHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagCreationWidgetHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagCreationWidgetHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagCreationWidgetHelper"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagCreationWidgetHelper.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagCreationWidgetHelper>()
{
	return FGameplayTagCreationWidgetHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper struct: drop this in another struct to get an embedded create new tag widget. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Helper struct: drop this in another struct to get an embedded create new tag widget." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagCreationWidgetHelper>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagCreationWidgetHelper",
		sizeof(FGameplayTagCreationWidgetHelper),
		alignof(FGameplayTagCreationWidgetHelper),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagCreationWidgetHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagCreationWidgetHelper.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagCreationWidgetHelper.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTagQueryExprType;
	static UEnum* EGameplayTagQueryExprType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("EGameplayTagQueryExprType"));
		}
		return Z_Registration_Info_UEnum_EGameplayTagQueryExprType.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UEnum* StaticEnum<EGameplayTagQueryExprType::Type>()
	{
		return EGameplayTagQueryExprType_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_Statics::Enumerators[] = {
		{ "EGameplayTagQueryExprType::Undefined", (int64)EGameplayTagQueryExprType::Undefined },
		{ "EGameplayTagQueryExprType::AnyTagsMatch", (int64)EGameplayTagQueryExprType::AnyTagsMatch },
		{ "EGameplayTagQueryExprType::AllTagsMatch", (int64)EGameplayTagQueryExprType::AllTagsMatch },
		{ "EGameplayTagQueryExprType::NoTagsMatch", (int64)EGameplayTagQueryExprType::NoTagsMatch },
		{ "EGameplayTagQueryExprType::AnyExprMatch", (int64)EGameplayTagQueryExprType::AnyExprMatch },
		{ "EGameplayTagQueryExprType::AllExprMatch", (int64)EGameplayTagQueryExprType::AllExprMatch },
		{ "EGameplayTagQueryExprType::NoExprMatch", (int64)EGameplayTagQueryExprType::NoExprMatch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_Statics::Enum_MetaDataParams[] = {
		{ "AllExprMatch.Name", "EGameplayTagQueryExprType::AllExprMatch" },
		{ "AllTagsMatch.Name", "EGameplayTagQueryExprType::AllTagsMatch" },
		{ "AnyExprMatch.Name", "EGameplayTagQueryExprType::AnyExprMatch" },
		{ "AnyTagsMatch.Name", "EGameplayTagQueryExprType::AnyTagsMatch" },
		{ "Comment", "/** Enumerates the list of supported query expression types. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "NoExprMatch.Name", "EGameplayTagQueryExprType::NoExprMatch" },
		{ "NoTagsMatch.Name", "EGameplayTagQueryExprType::NoTagsMatch" },
		{ "ToolTip", "Enumerates the list of supported query expression types." },
		{ "Undefined.Name", "EGameplayTagQueryExprType::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		"EGameplayTagQueryExprType",
		"EGameplayTagQueryExprType::Type",
		Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType()
	{
		if (!Z_Registration_Info_UEnum_EGameplayTagQueryExprType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTagQueryExprType.InnerSingleton, Z_Construct_UEnum_GameplayTags_EGameplayTagQueryExprType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayTagQueryExprType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagQuery;
class UScriptStruct* FGameplayTagQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagQuery, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagQuery"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagQuery.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagQuery>()
{
	return FGameplayTagQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagQuery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TokenStreamVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TokenStreamVersion;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagDictionary_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagDictionary_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagDictionary;
		static const UECodeGen_Private::FBytePropertyParams NewProp_QueryTokenStream_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryTokenStream_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryTokenStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AutoDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An FGameplayTagQuery is a logical query that can be run against an FGameplayTagContainer.  A query that succeeds is said to \"match\".\n * Queries are logical expressions that can test the intersection properties of another tag container (all, any, or none), or the matching state of a set of sub-expressions\n * (all, any, or none). This allows queries to be arbitrarily recursive and very expressive.  For instance, if you wanted to test if a given tag container contained tags \n * ((A && B) || (C)) && (!D), you would construct your query in the form ALL( ANY( ALL(A,B), ALL(C) ), NONE(D) )\n * \n * You can expose the query structs to Blueprints and edit them with a custom editor, or you can construct them natively in code. \n * \n * Example of how to build a query via code:\n *\x09""FGameplayTagQuery Q;\n *\x09Q.BuildQuery(\n *\x09\x09""FGameplayTagQueryExpression()\n * \x09\x09.AllTagsMatch()\n *\x09\x09.AddTag(FGameplayTag::RequestGameplayTag(FName(TEXT(\"Animal.Mammal.Dog.Corgi\"))))\n *\x09\x09.AddTag(FGameplayTag::RequestGameplayTag(FName(TEXT(\"Plant.Tree.Spruce\"))))\n *\x09\x09);\n * \n * Queries are internally represented as a byte stream that is memory-efficient and can be evaluated quickly at runtime.\n * Note: these have an extensive details and graph pin customization for editing, so there is no need to expose the internals to Blueprints.\n */" },
		{ "HasNativeMake", "/Script/GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "An FGameplayTagQuery is a logical query that can be run against an FGameplayTagContainer.  A query that succeeds is said to \"match\".\nQueries are logical expressions that can test the intersection properties of another tag container (all, any, or none), or the matching state of a set of sub-expressions\n(all, any, or none). This allows queries to be arbitrarily recursive and very expressive.  For instance, if you wanted to test if a given tag container contained tags\n((A && B) || (C)) && (!D), you would construct your query in the form ALL( ANY( ALL(A,B), ALL(C) ), NONE(D) )\n\nYou can expose the query structs to Blueprints and edit them with a custom editor, or you can construct them natively in code.\n\nExample of how to build a query via code:\n    FGameplayTagQuery Q;\n    Q.BuildQuery(\n            FGameplayTagQueryExpression()\n            .AllTagsMatch()\n            .AddTag(FGameplayTag::RequestGameplayTag(FName(TEXT(\"Animal.Mammal.Dog.Corgi\"))))\n            .AddTag(FGameplayTag::RequestGameplayTag(FName(TEXT(\"Plant.Tree.Spruce\"))))\n            );\n\nQueries are internally represented as a byte stream that is memory-efficient and can be evaluated quickly at runtime.\nNote: these have an extensive details and graph pin customization for editing, so there is no need to expose the internals to Blueprints." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagQuery>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TokenStreamVersion_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** Versioning for future token stream protocol changes. See EGameplayTagQueryStreamVersion. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Versioning for future token stream protocol changes. See EGameplayTagQueryStreamVersion." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TokenStreamVersion = { "TokenStreamVersion", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagQuery, TokenStreamVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TokenStreamVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TokenStreamVersion_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary_Inner = { "TagDictionary", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** List of tags referenced by this entire query. Token stream stored indices into this list. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "List of tags referenced by this entire query. Token stream stored indices into this list." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary = { "TagDictionary", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagQuery, TagDictionary), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary_MetaData)) }; // 1225434376
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream_Inner = { "QueryTokenStream", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** Stream representation of the actual hierarchical query */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Stream representation of the actual hierarchical query" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream = { "QueryTokenStream", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagQuery, QueryTokenStream), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_UserDescription_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** User-provided string describing the query */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "User-provided string describing the query" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_UserDescription = { "UserDescription", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagQuery, UserDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_UserDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_UserDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_AutoDescription_MetaData[] = {
		{ "Category", "Hidden" },
		{ "Comment", "/** Auto-generated string describing the query */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Auto-generated string describing the query" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_AutoDescription = { "AutoDescription", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagQuery, AutoDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_AutoDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_AutoDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TokenStreamVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_TagDictionary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_QueryTokenStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_UserDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewProp_AutoDescription,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagQuery",
		sizeof(FGameplayTagQuery),
		alignof(FGameplayTagQuery),
		Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagQuery.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagQuery.InnerSingleton;
	}
	void UEditableGameplayTagQuery::StaticRegisterNativesUEditableGameplayTagQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableGameplayTagQuery);
	UClass* Z_Construct_UClass_UEditableGameplayTagQuery_NoRegister()
	{
		return UEditableGameplayTagQuery::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootExpression_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagQueryExportText_Helper_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQueryExportText_Helper;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQuery_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * This is an editor-only representation of a query, designed to be editable with a typical property window. \n * To edit a query in the editor, an FGameplayTagQuery is converted to a set of UObjects and edited,  When finished,\n * the query struct is rewritten and these UObjects are discarded.\n * This query representation is not intended for runtime use.\n */" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "This is an editor-only representation of a query, designed to be editable with a typical property window.\nTo edit a query in the editor, an FGameplayTagQuery is converted to a set of UObjects and edited,  When finished,\nthe query struct is rewritten and these UObjects are discarded.\nThis query representation is not intended for runtime use." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_UserDescription_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** User-supplied description, shown in property details. Auto-generated description is shown if not supplied. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "User-supplied description, shown in property details. Auto-generated description is shown if not supplied." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_UserDescription = { "UserDescription", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableGameplayTagQuery, UserDescription), METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_UserDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_UserDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_RootExpression_MetaData[] = {
		{ "Category", "Query" },
		{ "Comment", "/** The base expression of this query. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "The base expression of this query." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_RootExpression = { "RootExpression", nullptr, (EPropertyFlags)0x0016000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableGameplayTagQuery, RootExpression), Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_RootExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_RootExpression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_TagQueryExportText_Helper_MetaData[] = {
		{ "Comment", "/** Property to hold a gameplay tag query so we can use the exporttext path to get a string representation. */" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
		{ "ToolTip", "Property to hold a gameplay tag query so we can use the exporttext path to get a string representation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_TagQueryExportText_Helper = { "TagQueryExportText_Helper", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableGameplayTagQuery, TagQueryExportText_Helper), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_TagQueryExportText_Helper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_TagQueryExportText_Helper_MetaData)) }; // 689482789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_UserDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_RootExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQuery_Statics::NewProp_TagQueryExportText_Helper,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQuery_Statics::ClassParams = {
		&UEditableGameplayTagQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableGameplayTagQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::PropPointers),
		0,
		0x009030A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQuery()
	{
		if (!Z_Registration_Info_UClass_UEditableGameplayTagQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableGameplayTagQuery.OuterSingleton, Z_Construct_UClass_UEditableGameplayTagQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditableGameplayTagQuery.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UEditableGameplayTagQuery>()
	{
		return UEditableGameplayTagQuery::StaticClass();
	}
	UEditableGameplayTagQuery::UEditableGameplayTagQuery(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQuery);
	UEditableGameplayTagQuery::~UEditableGameplayTagQuery() {}
	void UEditableGameplayTagQueryExpression::StaticRegisterNativesUEditableGameplayTagQueryExpression()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableGameplayTagQueryExpression);
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister()
	{
		return UEditableGameplayTagQueryExpression::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression::StaticClass,
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
		0x001030A9u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression()
	{
		if (!Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.OuterSingleton, Z_Construct_UClass_UEditableGameplayTagQueryExpression_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UEditableGameplayTagQueryExpression>()
	{
		return UEditableGameplayTagQueryExpression::StaticClass();
	}
	UEditableGameplayTagQueryExpression::UEditableGameplayTagQueryExpression(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression);
	UEditableGameplayTagQueryExpression::~UEditableGameplayTagQueryExpression() {}
	void UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyTagsMatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableGameplayTagQueryExpression_AnyTagsMatch);
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Any Tags Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Expr" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AnyTagsMatch, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::NewProp_Tags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AnyTagsMatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::PropPointers),
		0,
		0x000030A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch()
	{
		if (!Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch.OuterSingleton, Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UEditableGameplayTagQueryExpression_AnyTagsMatch>()
	{
		return UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass();
	}
	UEditableGameplayTagQueryExpression_AnyTagsMatch::UEditableGameplayTagQueryExpression_AnyTagsMatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AnyTagsMatch);
	UEditableGameplayTagQueryExpression_AnyTagsMatch::~UEditableGameplayTagQueryExpression_AnyTagsMatch() {}
	void UEditableGameplayTagQueryExpression_AllTagsMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AllTagsMatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableGameplayTagQueryExpression_AllTagsMatch);
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "All Tags Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Expr" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AllTagsMatch, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::NewProp_Tags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AllTagsMatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::PropPointers),
		0,
		0x000030A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch()
	{
		if (!Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.OuterSingleton, Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UEditableGameplayTagQueryExpression_AllTagsMatch>()
	{
		return UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass();
	}
	UEditableGameplayTagQueryExpression_AllTagsMatch::UEditableGameplayTagQueryExpression_AllTagsMatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AllTagsMatch);
	UEditableGameplayTagQueryExpression_AllTagsMatch::~UEditableGameplayTagQueryExpression_AllTagsMatch() {}
	void UEditableGameplayTagQueryExpression_NoTagsMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_NoTagsMatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableGameplayTagQueryExpression_NoTagsMatch);
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "No Tags Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Expr" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_NoTagsMatch, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::NewProp_Tags_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_NoTagsMatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::PropPointers),
		0,
		0x000030A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch()
	{
		if (!Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.OuterSingleton, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UEditableGameplayTagQueryExpression_NoTagsMatch>()
	{
		return UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass();
	}
	UEditableGameplayTagQueryExpression_NoTagsMatch::UEditableGameplayTagQueryExpression_NoTagsMatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_NoTagsMatch);
	UEditableGameplayTagQueryExpression_NoTagsMatch::~UEditableGameplayTagQueryExpression_NoTagsMatch() {}
	void UEditableGameplayTagQueryExpression_AnyExprMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AnyExprMatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableGameplayTagQueryExpression_AnyExprMatch);
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Expressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Expressions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Any Expressions Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_Inner_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_Inner = { "Expressions", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AnyExprMatch, Expressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::NewProp_Expressions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AnyExprMatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::PropPointers),
		0,
		0x008030A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch()
	{
		if (!Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch.OuterSingleton, Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UEditableGameplayTagQueryExpression_AnyExprMatch>()
	{
		return UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass();
	}
	UEditableGameplayTagQueryExpression_AnyExprMatch::UEditableGameplayTagQueryExpression_AnyExprMatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AnyExprMatch);
	UEditableGameplayTagQueryExpression_AnyExprMatch::~UEditableGameplayTagQueryExpression_AnyExprMatch() {}
	void UEditableGameplayTagQueryExpression_AllExprMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_AllExprMatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableGameplayTagQueryExpression_AllExprMatch);
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Expressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Expressions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "All Expressions Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_Inner_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_Inner = { "Expressions", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_AllExprMatch, Expressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::NewProp_Expressions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_AllExprMatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::PropPointers),
		0,
		0x008030A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch()
	{
		if (!Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllExprMatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllExprMatch.OuterSingleton, Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllExprMatch.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UEditableGameplayTagQueryExpression_AllExprMatch>()
	{
		return UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass();
	}
	UEditableGameplayTagQueryExpression_AllExprMatch::UEditableGameplayTagQueryExpression_AllExprMatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_AllExprMatch);
	UEditableGameplayTagQueryExpression_AllExprMatch::~UEditableGameplayTagQueryExpression_AllExprMatch() {}
	void UEditableGameplayTagQueryExpression_NoExprMatch::StaticRegisterNativesUEditableGameplayTagQueryExpression_NoExprMatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditableGameplayTagQueryExpression_NoExprMatch);
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_NoRegister()
	{
		return UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass();
	}
	struct Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Expressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Expressions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditableGameplayTagQueryExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "No Expressions Match" },
		{ "IncludePath", "GameplayTagContainer.h" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_Inner_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_Inner = { "Expressions", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_MetaData[] = {
		{ "Category", "Expr" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameplayTagContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditableGameplayTagQueryExpression_NoExprMatch, Expressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::NewProp_Expressions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableGameplayTagQueryExpression_NoExprMatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::ClassParams = {
		&UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::PropPointers),
		0,
		0x008030A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch()
	{
		if (!Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoExprMatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoExprMatch.OuterSingleton, Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoExprMatch.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UEditableGameplayTagQueryExpression_NoExprMatch>()
	{
		return UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass();
	}
	UEditableGameplayTagQueryExpression_NoExprMatch::UEditableGameplayTagQueryExpression_NoExprMatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableGameplayTagQueryExpression_NoExprMatch);
	UEditableGameplayTagQueryExpression_NoExprMatch::~UEditableGameplayTagQueryExpression_NoExprMatch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_Statics::EnumInfo[] = {
		{ EGameplayContainerMatchType_StaticEnum, TEXT("EGameplayContainerMatchType"), &Z_Registration_Info_UEnum_EGameplayContainerMatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3109490235U) },
		{ EGameplayTagQueryExprType_StaticEnum, TEXT("EGameplayTagQueryExprType"), &Z_Registration_Info_UEnum_EGameplayTagQueryExprType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3642232455U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTag::StaticStruct, Z_Construct_UScriptStruct_FGameplayTag_Statics::NewStructOps, TEXT("GameplayTag"), &Z_Registration_Info_UScriptStruct_GameplayTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTag), 1225434376U) },
		{ FGameplayTagContainer::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagContainer_Statics::NewStructOps, TEXT("GameplayTagContainer"), &Z_Registration_Info_UScriptStruct_GameplayTagContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagContainer), 3057219007U) },
		{ FGameplayTagReferenceHelper::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagReferenceHelper_Statics::NewStructOps, TEXT("GameplayTagReferenceHelper"), &Z_Registration_Info_UScriptStruct_GameplayTagReferenceHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagReferenceHelper), 884125661U) },
		{ FGameplayTagCreationWidgetHelper::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagCreationWidgetHelper_Statics::NewStructOps, TEXT("GameplayTagCreationWidgetHelper"), &Z_Registration_Info_UScriptStruct_GameplayTagCreationWidgetHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagCreationWidgetHelper), 1822369202U) },
		{ FGameplayTagQuery::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagQuery_Statics::NewStructOps, TEXT("GameplayTagQuery"), &Z_Registration_Info_UScriptStruct_GameplayTagQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagQuery), 689482789U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditableGameplayTagQuery, UEditableGameplayTagQuery::StaticClass, TEXT("UEditableGameplayTagQuery"), &Z_Registration_Info_UClass_UEditableGameplayTagQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableGameplayTagQuery), 1252037128U) },
		{ Z_Construct_UClass_UEditableGameplayTagQueryExpression, UEditableGameplayTagQueryExpression::StaticClass, TEXT("UEditableGameplayTagQueryExpression"), &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableGameplayTagQueryExpression), 2294556322U) },
		{ Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch, UEditableGameplayTagQueryExpression_AnyTagsMatch::StaticClass, TEXT("UEditableGameplayTagQueryExpression_AnyTagsMatch"), &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyTagsMatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableGameplayTagQueryExpression_AnyTagsMatch), 3200870177U) },
		{ Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch, UEditableGameplayTagQueryExpression_AllTagsMatch::StaticClass, TEXT("UEditableGameplayTagQueryExpression_AllTagsMatch"), &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllTagsMatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableGameplayTagQueryExpression_AllTagsMatch), 1289726686U) },
		{ Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch, UEditableGameplayTagQueryExpression_NoTagsMatch::StaticClass, TEXT("UEditableGameplayTagQueryExpression_NoTagsMatch"), &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoTagsMatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableGameplayTagQueryExpression_NoTagsMatch), 1079017622U) },
		{ Z_Construct_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch, UEditableGameplayTagQueryExpression_AnyExprMatch::StaticClass, TEXT("UEditableGameplayTagQueryExpression_AnyExprMatch"), &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AnyExprMatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableGameplayTagQueryExpression_AnyExprMatch), 2114432827U) },
		{ Z_Construct_UClass_UEditableGameplayTagQueryExpression_AllExprMatch, UEditableGameplayTagQueryExpression_AllExprMatch::StaticClass, TEXT("UEditableGameplayTagQueryExpression_AllExprMatch"), &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_AllExprMatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableGameplayTagQueryExpression_AllExprMatch), 3263901763U) },
		{ Z_Construct_UClass_UEditableGameplayTagQueryExpression_NoExprMatch, UEditableGameplayTagQueryExpression_NoExprMatch::StaticClass, TEXT("UEditableGameplayTagQueryExpression_NoExprMatch"), &Z_Registration_Info_UClass_UEditableGameplayTagQueryExpression_NoExprMatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditableGameplayTagQueryExpression_NoExprMatch), 3189288632U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_633136045(TEXT("/Script/GameplayTags"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagContainer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
