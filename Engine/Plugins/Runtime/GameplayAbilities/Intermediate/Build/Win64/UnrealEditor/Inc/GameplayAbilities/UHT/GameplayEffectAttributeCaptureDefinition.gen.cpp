// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectAttributeCaptureDefinition.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectAttributeCaptureDefinition() {}
// Cross Module References
	GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource;
	static UEnum* EGameplayEffectAttributeCaptureSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("EGameplayEffectAttributeCaptureSource"));
		}
		return Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UEnum* StaticEnum<EGameplayEffectAttributeCaptureSource>()
	{
		return EGameplayEffectAttributeCaptureSource_StaticEnum();
	}
	struct Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::Enumerators[] = {
		{ "EGameplayEffectAttributeCaptureSource::Source", (int64)EGameplayEffectAttributeCaptureSource::Source },
		{ "EGameplayEffectAttributeCaptureSource::Target", (int64)EGameplayEffectAttributeCaptureSource::Target },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumeration for options of where to capture gameplay attributes from for gameplay effects. */" },
		{ "ModuleRelativePath", "Public/GameplayEffectAttributeCaptureDefinition.h" },
		{ "Source.Comment", "/** Source (caster) of the gameplay effect. */" },
		{ "Source.Name", "EGameplayEffectAttributeCaptureSource::Source" },
		{ "Source.ToolTip", "Source (caster) of the gameplay effect." },
		{ "Target.Comment", "/** Target (recipient) of the gameplay effect. */" },
		{ "Target.Name", "EGameplayEffectAttributeCaptureSource::Target" },
		{ "Target.ToolTip", "Target (recipient) of the gameplay effect." },
		{ "ToolTip", "Enumeration for options of where to capture gameplay attributes from for gameplay effects." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		"EGameplayEffectAttributeCaptureSource",
		"EGameplayEffectAttributeCaptureSource",
		Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource()
	{
		if (!Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.InnerSingleton, Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition;
class UScriptStruct* FGameplayEffectAttributeCaptureDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectAttributeCaptureDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectAttributeCaptureDefinition>()
{
	return FGameplayEffectAttributeCaptureDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeToCapture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeToCapture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapshot_MetaData[];
#endif
		static void NewProp_bSnapshot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapshot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Struct defining gameplay attribute capture options for gameplay effects */" },
		{ "ModuleRelativePath", "Public/GameplayEffectAttributeCaptureDefinition.h" },
		{ "ToolTip", "Struct defining gameplay attribute capture options for gameplay effects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectAttributeCaptureDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Gameplay attribute to capture */" },
		{ "ModuleRelativePath", "Public/GameplayEffectAttributeCaptureDefinition.h" },
		{ "ToolTip", "Gameplay attribute to capture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture = { "AttributeToCapture", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectAttributeCaptureDefinition, AttributeToCapture), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture_MetaData)) }; // 2095245243
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Source of the gameplay attribute */" },
		{ "ModuleRelativePath", "Public/GameplayEffectAttributeCaptureDefinition.h" },
		{ "ToolTip", "Source of the gameplay attribute" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource = { "AttributeSource", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectAttributeCaptureDefinition, AttributeSource), Z_Construct_UEnum_GameplayAbilities_EGameplayEffectAttributeCaptureSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_MetaData)) }; // 2491728411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Whether the attribute should be snapshotted or not */" },
		{ "ModuleRelativePath", "Public/GameplayEffectAttributeCaptureDefinition.h" },
		{ "ToolTip", "Whether the attribute should be snapshotted or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_SetBit(void* Obj)
	{
		((FGameplayEffectAttributeCaptureDefinition*)Obj)->bSnapshot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot = { "bSnapshot", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGameplayEffectAttributeCaptureDefinition), &Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeToCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_AttributeSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewProp_bSnapshot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"GameplayEffectAttributeCaptureDefinition",
		sizeof(FGameplayEffectAttributeCaptureDefinition),
		alignof(FGameplayEffectAttributeCaptureDefinition),
		Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics::EnumInfo[] = {
		{ EGameplayEffectAttributeCaptureSource_StaticEnum, TEXT("EGameplayEffectAttributeCaptureSource"), &Z_Registration_Info_UEnum_EGameplayEffectAttributeCaptureSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2491728411U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics::ScriptStructInfo[] = {
		{ FGameplayEffectAttributeCaptureDefinition::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectAttributeCaptureDefinition_Statics::NewStructOps, TEXT("GameplayEffectAttributeCaptureDefinition"), &Z_Registration_Info_UScriptStruct_GameplayEffectAttributeCaptureDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectAttributeCaptureDefinition), 361294328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_3071466994(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_GameplayEffectAttributeCaptureDefinition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
