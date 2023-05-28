// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AppleARKitLightEstimate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitLightEstimate() {}
// Cross Module References
	APPLEARKIT_API UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitLightEstimate();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AppleARKitLightEstimate;
class UScriptStruct* FAppleARKitLightEstimate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AppleARKitLightEstimate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AppleARKitLightEstimate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAppleARKitLightEstimate, (UObject*)Z_Construct_UPackage__Script_AppleARKit(), TEXT("AppleARKitLightEstimate"));
	}
	return Z_Registration_Info_UScriptStruct_AppleARKitLightEstimate.OuterSingleton;
}
template<> APPLEARKIT_API UScriptStruct* StaticStruct<FAppleARKitLightEstimate>()
{
	return FAppleARKitLightEstimate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientIntensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbientColorTemperatureKelvin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AmbientColorTemperatureKelvin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A light estimate represented as spherical harmonics\n */" },
		{ "ModuleRelativePath", "Private/AppleARKitLightEstimate.h" },
		{ "ToolTip", "A light estimate represented as spherical harmonics" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAppleARKitLightEstimate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Comment", "/** True if light estimation was enabled for the session and light estimation was successful */" },
		{ "ModuleRelativePath", "Private/AppleARKitLightEstimate.h" },
		{ "ToolTip", "True if light estimation was enabled for the session and light estimation was successful" },
	};
#endif
	void Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FAppleARKitLightEstimate*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAppleARKitLightEstimate), &Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_AmbientIntensity_MetaData[] = {
		{ "Comment", "/**\n\x09 * Ambient intensity of the lighting.\n\x09 * \n\x09 * In a well lit environment, this value is close to 1000. It typically ranges from 0 \n\x09 * (very dark) to around 2000 (very bright).\n\x09 */" },
		{ "ModuleRelativePath", "Private/AppleARKitLightEstimate.h" },
		{ "ToolTip", "Ambient intensity of the lighting.\n\nIn a well lit environment, this value is close to 1000. It typically ranges from 0\n(very dark) to around 2000 (very bright)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_AmbientIntensity = { "AmbientIntensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppleARKitLightEstimate, AmbientIntensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_AmbientIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_AmbientIntensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin_MetaData[] = {
		{ "Comment", "/**\n\x09 * Color Temperature in Kelvin of light\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Private/AppleARKitLightEstimate.h" },
		{ "ToolTip", "Color Temperature in Kelvin of light" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin = { "AmbientColorTemperatureKelvin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAppleARKitLightEstimate, AmbientColorTemperatureKelvin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_AmbientIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewProp_AmbientColorTemperatureKelvin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
		nullptr,
		&NewStructOps,
		"AppleARKitLightEstimate",
		sizeof(FAppleARKitLightEstimate),
		alignof(FAppleARKitLightEstimate),
		Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAppleARKitLightEstimate()
	{
		if (!Z_Registration_Info_UScriptStruct_AppleARKitLightEstimate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AppleARKitLightEstimate.InnerSingleton, Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AppleARKitLightEstimate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitLightEstimate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitLightEstimate_h_Statics::ScriptStructInfo[] = {
		{ FAppleARKitLightEstimate::StaticStruct, Z_Construct_UScriptStruct_FAppleARKitLightEstimate_Statics::NewStructOps, TEXT("AppleARKitLightEstimate"), &Z_Registration_Info_UScriptStruct_AppleARKitLightEstimate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAppleARKitLightEstimate), 37335167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitLightEstimate_h_2029078602(TEXT("/Script/AppleARKit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitLightEstimate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_AppleARKitLightEstimate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
