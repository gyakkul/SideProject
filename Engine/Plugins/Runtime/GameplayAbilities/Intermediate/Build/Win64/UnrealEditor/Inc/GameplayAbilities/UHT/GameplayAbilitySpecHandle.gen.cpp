// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySpecHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilitySpecHandle() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle;
class UScriptStruct* FGameplayAbilitySpecHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayAbilitySpecHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayAbilitySpecHandle>()
{
	return FGameplayAbilitySpecHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Handle that points to a specific granted ability. These are globally unique */" },
		{ "ModuleRelativePath", "Public/GameplayAbilitySpecHandle.h" },
		{ "ToolTip", "Handle that points to a specific granted ability. These are globally unique" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayAbilitySpecHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayAbilitySpecHandle.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayAbilitySpecHandle, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewProp_Handle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayAbilitySpecHandle",
		sizeof(FGameplayAbilitySpecHandle),
		alignof(FGameplayAbilitySpecHandle),
		Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.InnerSingleton, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpecHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpecHandle_h_Statics::ScriptStructInfo[] = {
		{ FGameplayAbilitySpecHandle::StaticStruct, Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle_Statics::NewStructOps, TEXT("GameplayAbilitySpecHandle"), &Z_Registration_Info_UScriptStruct_GameplayAbilitySpecHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayAbilitySpecHandle), 3562347300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpecHandle_h_1651081438(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpecHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitySpecHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
