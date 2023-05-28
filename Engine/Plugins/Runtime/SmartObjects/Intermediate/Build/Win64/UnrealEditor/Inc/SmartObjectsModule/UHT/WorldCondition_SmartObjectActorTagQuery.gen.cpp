// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldConditions/WorldCondition_SmartObjectActorTagQuery.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldCondition_SmartObjectActorTagQuery() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQueryState;
class UScriptStruct* FWorldCondition_SmartObjectActorTagQueryState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQueryState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQueryState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("WorldCondition_SmartObjectActorTagQueryState"));
	}
	return Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQueryState.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FWorldCondition_SmartObjectActorTagQueryState>()
{
	return FWorldCondition_SmartObjectActorTagQueryState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldConditions/WorldCondition_SmartObjectActorTagQuery.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldCondition_SmartObjectActorTagQueryState>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"WorldCondition_SmartObjectActorTagQueryState",
		sizeof(FWorldCondition_SmartObjectActorTagQueryState),
		alignof(FWorldCondition_SmartObjectActorTagQueryState),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQueryState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQueryState.InnerSingleton, Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQueryState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FWorldCondition_SmartObjectActorTagQuery>() == std::is_polymorphic<FSmartObjectWorldConditionBase>(), "USTRUCT FWorldCondition_SmartObjectActorTagQuery cannot be polymorphic unless super FSmartObjectWorldConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQuery;
class UScriptStruct* FWorldCondition_SmartObjectActorTagQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("WorldCondition_SmartObjectActorTagQuery"));
	}
	return Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQuery.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FWorldCondition_SmartObjectActorTagQuery>()
{
	return FWorldCondition_SmartObjectActorTagQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * World condition to match tags of the Smart Object's owning Actor (which must implement IGameplayTagAssetInterface or have an AbilitySystemComponent).\n */" },
		{ "DisplayName", "Match Gameplay tags on SmartObject actor" },
		{ "ModuleRelativePath", "Public/WorldConditions/WorldCondition_SmartObjectActorTagQuery.h" },
		{ "ToolTip", "World condition to match tags of the Smart Object's owning Actor (which must implement IGameplayTagAssetInterface or have an AbilitySystemComponent)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldCondition_SmartObjectActorTagQuery>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::NewProp_TagQuery_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Tags on the Smart Object's owning actor that need to match this query for the condition to evaluate true. */" },
		{ "ModuleRelativePath", "Public/WorldConditions/WorldCondition_SmartObjectActorTagQuery.h" },
		{ "ToolTip", "Tags on the Smart Object's owning actor that need to match this query for the condition to evaluate true." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldCondition_SmartObjectActorTagQuery, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::NewProp_TagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::NewProp_TagQuery_MetaData)) }; // 689482789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::NewProp_TagQuery,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase,
		&NewStructOps,
		"WorldCondition_SmartObjectActorTagQuery",
		sizeof(FWorldCondition_SmartObjectActorTagQuery),
		alignof(FWorldCondition_SmartObjectActorTagQuery),
		Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQuery.InnerSingleton, Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQuery.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_WorldCondition_SmartObjectActorTagQuery_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_WorldCondition_SmartObjectActorTagQuery_h_Statics::ScriptStructInfo[] = {
		{ FWorldCondition_SmartObjectActorTagQueryState::StaticStruct, Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQueryState_Statics::NewStructOps, TEXT("WorldCondition_SmartObjectActorTagQueryState"), &Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQueryState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldCondition_SmartObjectActorTagQueryState), 1614458174U) },
		{ FWorldCondition_SmartObjectActorTagQuery::StaticStruct, Z_Construct_UScriptStruct_FWorldCondition_SmartObjectActorTagQuery_Statics::NewStructOps, TEXT("WorldCondition_SmartObjectActorTagQuery"), &Z_Registration_Info_UScriptStruct_WorldCondition_SmartObjectActorTagQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldCondition_SmartObjectActorTagQuery), 2209135559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_WorldCondition_SmartObjectActorTagQuery_h_1649641749(TEXT("/Script/SmartObjectsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_WorldCondition_SmartObjectActorTagQuery_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_WorldCondition_SmartObjectActorTagQuery_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
