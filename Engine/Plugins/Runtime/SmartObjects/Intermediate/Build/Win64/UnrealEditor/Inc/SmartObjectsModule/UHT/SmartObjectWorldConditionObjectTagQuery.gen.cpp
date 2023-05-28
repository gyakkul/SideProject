// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldConditions/SmartObjectWorldConditionObjectTagQuery.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectWorldConditionObjectTagQuery() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQueryState;
class UScriptStruct* FSmartObjectWorldConditionObjectTagQueryState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQueryState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQueryState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectWorldConditionObjectTagQueryState"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQueryState.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectWorldConditionObjectTagQueryState>()
{
	return FSmartObjectWorldConditionObjectTagQueryState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * World condition to match Smart Object's runtime tags.\n */" },
		{ "ModuleRelativePath", "Public/WorldConditions/SmartObjectWorldConditionObjectTagQuery.h" },
		{ "ToolTip", "World condition to match Smart Object's runtime tags." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectWorldConditionObjectTagQueryState>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		nullptr,
		&NewStructOps,
		"SmartObjectWorldConditionObjectTagQueryState",
		sizeof(FSmartObjectWorldConditionObjectTagQueryState),
		alignof(FSmartObjectWorldConditionObjectTagQueryState),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQueryState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQueryState.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQueryState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSmartObjectWorldConditionObjectTagQuery>() == std::is_polymorphic<FSmartObjectWorldConditionBase>(), "USTRUCT FSmartObjectWorldConditionObjectTagQuery cannot be polymorphic unless super FSmartObjectWorldConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQuery;
class UScriptStruct* FSmartObjectWorldConditionObjectTagQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectWorldConditionObjectTagQuery"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQuery.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectWorldConditionObjectTagQuery>()
{
	return FSmartObjectWorldConditionObjectTagQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Match Runtime Object Tags" },
		{ "ModuleRelativePath", "Public/WorldConditions/SmartObjectWorldConditionObjectTagQuery.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectWorldConditionObjectTagQuery>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::NewProp_TagQuery_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Smart Object's runtime tags needs to match this query for the condition to evaluate true. */" },
		{ "ModuleRelativePath", "Public/WorldConditions/SmartObjectWorldConditionObjectTagQuery.h" },
		{ "ToolTip", "Smart Object's runtime tags needs to match this query for the condition to evaluate true." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartObjectWorldConditionObjectTagQuery, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::NewProp_TagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::NewProp_TagQuery_MetaData)) }; // 689482789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::NewProp_TagQuery,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase,
		&NewStructOps,
		"SmartObjectWorldConditionObjectTagQuery",
		sizeof(FSmartObjectWorldConditionObjectTagQuery),
		alignof(FSmartObjectWorldConditionObjectTagQuery),
		Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQuery.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQuery.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionObjectTagQuery_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionObjectTagQuery_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectWorldConditionObjectTagQueryState::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQueryState_Statics::NewStructOps, TEXT("SmartObjectWorldConditionObjectTagQueryState"), &Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQueryState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectWorldConditionObjectTagQueryState), 3180154788U) },
		{ FSmartObjectWorldConditionObjectTagQuery::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectWorldConditionObjectTagQuery_Statics::NewStructOps, TEXT("SmartObjectWorldConditionObjectTagQuery"), &Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionObjectTagQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectWorldConditionObjectTagQuery), 785291964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionObjectTagQuery_h_853703515(TEXT("/Script/SmartObjectsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionObjectTagQuery_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionObjectTagQuery_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
