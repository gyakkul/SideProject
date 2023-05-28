// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Modulators/DMXModulator_CMYtoRGB.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXModulator_CMYtoRGB() {}
// Cross Module References
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_CMYtoRGB();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_CMYtoRGB_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXModulator_CMYtoRGB::StaticRegisterNativesUDMXModulator_CMYtoRGB()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXModulator_CMYtoRGB);
	UClass* Z_Construct_UClass_UDMXModulator_CMYtoRGB_NoRegister()
	{
		return UDMXModulator_CMYtoRGB::StaticClass();
	}
	struct Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCyanToRed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeCyanToRed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeMagentaToGreen_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeMagentaToGreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeYellowToBlue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeYellowToBlue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXModulator,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX" },
		{ "Comment", "/** Converts Attributes from CMY to RGB. */" },
		{ "DisplayName", "DMX Modulator CMY to RGB" },
		{ "IncludePath", "Modulators/DMXModulator_CMYtoRGB.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_CMYtoRGB.h" },
		{ "ToolTip", "Converts Attributes from CMY to RGB." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeCyanToRed_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "CMY to RGB" },
		{ "Comment", "/** The name of the attribute that is converted from Cyan to Red */" },
		{ "DisplayName", "Cyan to Red" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_CMYtoRGB.h" },
		{ "ToolTip", "The name of the attribute that is converted from Cyan to Red" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeCyanToRed = { "AttributeCyanToRed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXModulator_CMYtoRGB, AttributeCyanToRed), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeCyanToRed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeCyanToRed_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeMagentaToGreen_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "CMY to RGB" },
		{ "Comment", "/** The name of the attribute that is converted from Magenta to Green */" },
		{ "DisplayName", "Magenta to Green" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_CMYtoRGB.h" },
		{ "ToolTip", "The name of the attribute that is converted from Magenta to Green" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeMagentaToGreen = { "AttributeMagentaToGreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXModulator_CMYtoRGB, AttributeMagentaToGreen), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeMagentaToGreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeMagentaToGreen_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeYellowToBlue_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "CMY to RGB" },
		{ "Comment", "/** The name of the attribute that is converted from Yellow to Blue */" },
		{ "DisplayName", "Yellow to Blue" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_CMYtoRGB.h" },
		{ "ToolTip", "The name of the attribute that is converted from Yellow to Blue" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeYellowToBlue = { "AttributeYellowToBlue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXModulator_CMYtoRGB, AttributeYellowToBlue), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeYellowToBlue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeYellowToBlue_MetaData)) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeCyanToRed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeMagentaToGreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::NewProp_AttributeYellowToBlue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXModulator_CMYtoRGB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::ClassParams = {
		&UDMXModulator_CMYtoRGB::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXModulator_CMYtoRGB()
	{
		if (!Z_Registration_Info_UClass_UDMXModulator_CMYtoRGB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXModulator_CMYtoRGB.OuterSingleton, Z_Construct_UClass_UDMXModulator_CMYtoRGB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXModulator_CMYtoRGB.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXModulator_CMYtoRGB>()
	{
		return UDMXModulator_CMYtoRGB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXModulator_CMYtoRGB);
	UDMXModulator_CMYtoRGB::~UDMXModulator_CMYtoRGB() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_CMYtoRGB_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_CMYtoRGB_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXModulator_CMYtoRGB, UDMXModulator_CMYtoRGB::StaticClass, TEXT("UDMXModulator_CMYtoRGB"), &Z_Registration_Info_UClass_UDMXModulator_CMYtoRGB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXModulator_CMYtoRGB), 873039344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_CMYtoRGB_h_298349845(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_CMYtoRGB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_CMYtoRGB_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
