// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sound/SlateSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateSound() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateSound;
class UScriptStruct* FSlateSound::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateSound.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateSound.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateSound, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateSound"));
	}
	return Z_Registration_Info_UScriptStruct_SlateSound.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateSound>()
{
	return FSlateSound::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlateSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ResourceObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateSound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An intermediary to make UBaseSound available for Slate to play sounds\n */" },
		{ "ModuleRelativePath", "Public/Sound/SlateSound.h" },
		{ "ToolTip", "An intermediary to make UBaseSound available for Slate to play sounds" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateSound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateSound>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateSound_Statics::NewProp_ResourceObject_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundBase" },
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * Pointer to the USoundBase. Holding onto it as a UObject because USoundBase is not available in Slate core.\n\x09 * Edited via FSlateSoundStructCustomization to ensure you can only set USoundBase assets on it.\n\x09 */" },
		{ "DisplayName", "Sound" },
		{ "ModuleRelativePath", "Public/Sound/SlateSound.h" },
		{ "ToolTip", "Pointer to the USoundBase. Holding onto it as a UObject because USoundBase is not available in Slate core.\nEdited via FSlateSoundStructCustomization to ensure you can only set USoundBase assets on it." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSlateSound_Statics::NewProp_ResourceObject = { "ResourceObject", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateSound, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateSound_Statics::NewProp_ResourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSound_Statics::NewProp_ResourceObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateSound_Statics::NewProp_ResourceObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateSound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateSound",
		sizeof(FSlateSound),
		alignof(FSlateSound),
		Z_Construct_UScriptStruct_FSlateSound_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateSound_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateSound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateSound()
	{
		if (!Z_Registration_Info_UScriptStruct_SlateSound.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateSound.InnerSingleton, Z_Construct_UScriptStruct_FSlateSound_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlateSound.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Sound_SlateSound_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Sound_SlateSound_h_Statics::ScriptStructInfo[] = {
		{ FSlateSound::StaticStruct, Z_Construct_UScriptStruct_FSlateSound_Statics::NewStructOps, TEXT("SlateSound"), &Z_Registration_Info_UScriptStruct_SlateSound, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateSound), 2826200611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Sound_SlateSound_h_1626637863(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Sound_SlateSound_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Sound_SlateSound_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
