// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScalableFloat.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CurveTable.h"
#include "DataRegistryId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScalableFloat() {}
// Cross Module References
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveTableRowHandle();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScalableFloat;
class UScriptStruct* FScalableFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScalableFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScalableFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalableFloat, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("ScalableFloat"));
	}
	return Z_Registration_Info_UScriptStruct_ScalableFloat.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FScalableFloat>()
{
	return FScalableFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScalableFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegistryType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalableFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Generic numerical value in the form Value * Curve[Level] */" },
		{ "ModuleRelativePath", "Public/ScalableFloat.h" },
		{ "ToolTip", "Generic numerical value in the form Value * Curve[Level]" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScalableFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalableFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ScalableFloat" },
		{ "Comment", "/** Raw value, is multiplied by curve */" },
		{ "ModuleRelativePath", "Public/ScalableFloat.h" },
		{ "ToolTip", "Raw value, is multiplied by curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScalableFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "ScalableFloat" },
		{ "Comment", "/** Curve that is evaluated at a specific level. If found, it is multipled by Value */" },
		{ "ModuleRelativePath", "Public/ScalableFloat.h" },
		{ "ToolTip", "Curve that is evaluated at a specific level. If found, it is multipled by Value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScalableFloat, Curve), Z_Construct_UScriptStruct_FCurveTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Curve_MetaData)) }; // 2401088054
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_RegistryType_MetaData[] = {
		{ "Category", "ScalableFloat" },
		{ "Comment", "/** Name of Data Registry containing curve to use. If set the RowName inside Curve is used as the item name */" },
		{ "ModuleRelativePath", "Public/ScalableFloat.h" },
		{ "ToolTip", "Name of Data Registry containing curve to use. If set the RowName inside Curve is used as the item name" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_RegistryType = { "RegistryType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScalableFloat, RegistryType), Z_Construct_UScriptStruct_FDataRegistryType, METADATA_PARAMS(Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_RegistryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_RegistryType_MetaData)) }; // 1634035463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalableFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalableFloat_Statics::NewProp_RegistryType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalableFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"ScalableFloat",
		sizeof(FScalableFloat),
		alignof(FScalableFloat),
		Z_Construct_UScriptStruct_FScalableFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalableFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScalableFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalableFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_ScalableFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScalableFloat.InnerSingleton, Z_Construct_UScriptStruct_FScalableFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScalableFloat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_ScalableFloat_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_ScalableFloat_h_Statics::ScriptStructInfo[] = {
		{ FScalableFloat::StaticStruct, Z_Construct_UScriptStruct_FScalableFloat_Statics::NewStructOps, TEXT("ScalableFloat"), &Z_Registration_Info_UScriptStruct_ScalableFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScalableFloat), 1811381276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_ScalableFloat_h_664315095(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_ScalableFloat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_ScalableFloat_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
