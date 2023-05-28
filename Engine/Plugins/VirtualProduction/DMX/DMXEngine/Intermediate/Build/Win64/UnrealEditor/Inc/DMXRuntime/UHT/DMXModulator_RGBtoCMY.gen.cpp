// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Modulators/DMXModulator_RGBtoCMY.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXModulator_RGBtoCMY() {}
// Cross Module References
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_RGBtoCMY();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_RGBtoCMY_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXModulator_RGBtoCMY::StaticRegisterNativesUDMXModulator_RGBtoCMY()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXModulator_RGBtoCMY);
	UClass* Z_Construct_UClass_UDMXModulator_RGBtoCMY_NoRegister()
	{
		return UDMXModulator_RGBtoCMY::StaticClass();
	}
	struct Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeRedToCyan_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeRedToCyan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeGreenToMagenta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeGreenToMagenta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBlueToYellow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeBlueToYellow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXModulator,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX" },
		{ "Comment", "/** Converts Attributes from RGB to CMY  */" },
		{ "DisplayName", "DMX Modulator RGB to CMY" },
		{ "IncludePath", "Modulators/DMXModulator_RGBtoCMY.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_RGBtoCMY.h" },
		{ "ToolTip", "Converts Attributes from RGB to CMY" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeRedToCyan_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "RGB to CMY" },
		{ "Comment", "/** The name of the attribute that is converted from Red to Cyan */" },
		{ "DisplayName", "Red to Cyan" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_RGBtoCMY.h" },
		{ "ToolTip", "The name of the attribute that is converted from Red to Cyan" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeRedToCyan = { "AttributeRedToCyan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXModulator_RGBtoCMY, AttributeRedToCyan), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeRedToCyan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeRedToCyan_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeGreenToMagenta_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "RGB to CMY" },
		{ "Comment", "/** The name of the attribute that is converted from Green to Magenta */" },
		{ "DisplayName", "Green to Magenta" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_RGBtoCMY.h" },
		{ "ToolTip", "The name of the attribute that is converted from Green to Magenta" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeGreenToMagenta = { "AttributeGreenToMagenta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXModulator_RGBtoCMY, AttributeGreenToMagenta), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeGreenToMagenta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeGreenToMagenta_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeBlueToYellow_MetaData[] = {
		{ "AdvancedDisplay", "" },
		{ "Category", "RGB to CMY" },
		{ "Comment", "/** The name of the attribute that is converted from Blue to Yellow */" },
		{ "DisplayName", "Blue to Yellow" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_RGBtoCMY.h" },
		{ "ToolTip", "The name of the attribute that is converted from Blue to Yellow" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeBlueToYellow = { "AttributeBlueToYellow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXModulator_RGBtoCMY, AttributeBlueToYellow), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeBlueToYellow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeBlueToYellow_MetaData)) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeRedToCyan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeGreenToMagenta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::NewProp_AttributeBlueToYellow,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXModulator_RGBtoCMY>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::ClassParams = {
		&UDMXModulator_RGBtoCMY::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXModulator_RGBtoCMY()
	{
		if (!Z_Registration_Info_UClass_UDMXModulator_RGBtoCMY.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXModulator_RGBtoCMY.OuterSingleton, Z_Construct_UClass_UDMXModulator_RGBtoCMY_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXModulator_RGBtoCMY.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXModulator_RGBtoCMY>()
	{
		return UDMXModulator_RGBtoCMY::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXModulator_RGBtoCMY);
	UDMXModulator_RGBtoCMY::~UDMXModulator_RGBtoCMY() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_RGBtoCMY_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_RGBtoCMY_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXModulator_RGBtoCMY, UDMXModulator_RGBtoCMY::StaticClass, TEXT("UDMXModulator_RGBtoCMY"), &Z_Registration_Info_UClass_UDMXModulator_RGBtoCMY, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXModulator_RGBtoCMY), 3932977601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_RGBtoCMY_h_3529655108(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_RGBtoCMY_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_RGBtoCMY_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
