// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/GameplayTagRedirectors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagRedirectors() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagRedirect;
class UScriptStruct* FGameplayTagRedirect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagRedirect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagRedirect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagRedirect, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagRedirect"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagRedirect.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagRedirect>()
{
	return FGameplayTagRedirect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldTagName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OldTagName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTagName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewTagName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single redirect from a deleted tag to the new tag that should replace it */" },
		{ "ModuleRelativePath", "Public/GameplayTagRedirectors.h" },
		{ "ToolTip", "A single redirect from a deleted tag to the new tag that should replace it" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagRedirect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/GameplayTagRedirectors.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName = { "OldTagName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagRedirect, OldTagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName_MetaData[] = {
		{ "Category", "GameplayTags" },
		{ "ModuleRelativePath", "Public/GameplayTagRedirectors.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName = { "NewTagName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagRedirect, NewTagName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_OldTagName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewProp_NewTagName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagRedirect",
		sizeof(FGameplayTagRedirect),
		alignof(FGameplayTagRedirect),
		Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagRedirect()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagRedirect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagRedirect.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagRedirect.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTagRedirect::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagRedirect_Statics::NewStructOps, TEXT("GameplayTagRedirect"), &Z_Registration_Info_UScriptStruct_GameplayTagRedirect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagRedirect), 633842574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h_3563006794(TEXT("/Script/GameplayTags"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagRedirectors_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
