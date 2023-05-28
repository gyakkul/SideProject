// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceCameraSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceCameraSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings;
class UScriptStruct* FLevelSequenceCameraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceCameraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceCameraSettings>()
{
	return FLevelSequenceCameraSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAspectRatioAxisConstraint_MetaData[];
#endif
		static void NewProp_bOverrideAspectRatioAxisConstraint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAspectRatioAxisConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceCameraSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceCameraSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "Aspect Ratio" },
		{ "ModuleRelativePath", "Public/LevelSequenceCameraSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_SetBit(void* Obj)
	{
		((FLevelSequenceCameraSettings*)Obj)->bOverrideAspectRatioAxisConstraint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint = { "bOverrideAspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLevelSequenceCameraSettings), &Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "Aspect Ratio" },
		{ "EditCondition", "bOverrideAspectRatioAxisConstraint" },
		{ "ModuleRelativePath", "Public/LevelSequenceCameraSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint = { "AspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceCameraSettings, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint_MetaData)) }; // 3405006504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_bOverrideAspectRatioAxisConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewProp_AspectRatioAxisConstraint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceCameraSettings",
		sizeof(FLevelSequenceCameraSettings),
		alignof(FLevelSequenceCameraSettings),
		Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h_Statics::ScriptStructInfo[] = {
		{ FLevelSequenceCameraSettings::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceCameraSettings_Statics::NewStructOps, TEXT("LevelSequenceCameraSettings"), &Z_Registration_Info_UScriptStruct_LevelSequenceCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceCameraSettings), 1520971703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h_2342035520(TEXT("/Script/LevelSequence"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceCameraSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
