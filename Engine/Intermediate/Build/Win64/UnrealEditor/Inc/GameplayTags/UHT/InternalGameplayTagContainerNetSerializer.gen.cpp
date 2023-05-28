// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/InternalGameplayTagContainerNetSerializer.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternalGameplayTagContainerNetSerializer() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper;
class UScriptStruct* FGameplayTagContainerNetSerializerSerializationHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagContainerNetSerializerSerializationHelper"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagContainerNetSerializerSerializationHelper>()
{
	return FGameplayTagContainerNetSerializerSerializationHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/InternalGameplayTagContainerNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagContainerNetSerializerSerializationHelper>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags_Inner = { "GameplayTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "ModuleRelativePath", "Private/InternalGameplayTagContainerNetSerializer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayTagContainerNetSerializerSerializationHelper, GameplayTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewProp_GameplayTags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		nullptr,
		&NewStructOps,
		"GameplayTagContainerNetSerializerSerializationHelper",
		sizeof(FGameplayTagContainerNetSerializerSerializationHelper),
		alignof(FGameplayTagContainerNetSerializerSerializationHelper),
		Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTagContainerNetSerializerSerializationHelper::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper_Statics::NewStructOps, TEXT("GameplayTagContainerNetSerializerSerializationHelper"), &Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerSerializationHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagContainerNetSerializerSerializationHelper), 3777176689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h_2929118575(TEXT("/Script/GameplayTags"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Private_InternalGameplayTagContainerNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
