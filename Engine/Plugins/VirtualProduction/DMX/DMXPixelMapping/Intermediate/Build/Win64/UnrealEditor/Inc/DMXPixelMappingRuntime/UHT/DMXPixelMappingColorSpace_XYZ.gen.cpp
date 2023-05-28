// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ColorSpace/DMXPixelMappingColorSpace_XYZ.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingColorSpace_XYZ() {}
// Cross Module References
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_NoRegister();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXPixelMappingColorSpace_XYZ::StaticRegisterNativesUDMXPixelMappingColorSpace_XYZ()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingColorSpace_XYZ);
	UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_NoRegister()
	{
		return UDMXPixelMappingColorSpace_XYZ::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LuminanceAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LuminanceAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLuminance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLuminance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLuminance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLuminance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingColorSpace,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "CIE 1931 XYZ" },
		{ "IncludePath", "ColorSpace/DMXPixelMappingColorSpace_XYZ.h" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_XYZ.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_XAttribute_MetaData[] = {
		{ "Category", "XYZ" },
		{ "Comment", "/** Attribute sent for X */" },
		{ "DisplayName", "X Attribute" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_XYZ.h" },
		{ "ToolTip", "Attribute sent for X" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_XAttribute = { "XAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_XYZ, XAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_XAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_XAttribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_ZAttribute_MetaData[] = {
		{ "Category", "XYZ" },
		{ "Comment", "/** Attribute sent for Z */" },
		{ "DisplayName", "Z Attribute" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_XYZ.h" },
		{ "ToolTip", "Attribute sent for Z" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_ZAttribute = { "ZAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_XYZ, ZAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_ZAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_ZAttribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_LuminanceAttribute_MetaData[] = {
		{ "Category", "XYZ" },
		{ "Comment", "/** Attribute sent for Y */" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_XYZ.h" },
		{ "ToolTip", "Attribute sent for Y" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_LuminanceAttribute = { "LuminanceAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_XYZ, LuminanceAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_LuminanceAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_LuminanceAttribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_MinLuminance_MetaData[] = {
		{ "Category", "Luminance" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Min Luminance */" },
		{ "EditCondition", "LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromWhite || LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_XYZ.h" },
		{ "ToolTip", "Min Luminance" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_MinLuminance = { "MinLuminance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_XYZ, MinLuminance), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_MinLuminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_MinLuminance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_MaxLuminance_MetaData[] = {
		{ "Category", "Luminance" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Max Luminance */" },
		{ "EditCondition", "LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromWhite || LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_XYZ.h" },
		{ "ToolTip", "Max Luminance" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_MaxLuminance = { "MaxLuminance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_XYZ, MaxLuminance), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_MaxLuminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_MaxLuminance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_XAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_ZAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_LuminanceAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_MinLuminance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::NewProp_MaxLuminance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingColorSpace_XYZ>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::ClassParams = {
		&UDMXPixelMappingColorSpace_XYZ::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_XYZ.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_XYZ.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_XYZ.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingColorSpace_XYZ>()
	{
		return UDMXPixelMappingColorSpace_XYZ::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingColorSpace_XYZ);
	UDMXPixelMappingColorSpace_XYZ::~UDMXPixelMappingColorSpace_XYZ() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_XYZ_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_XYZ_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingColorSpace_XYZ, UDMXPixelMappingColorSpace_XYZ::StaticClass, TEXT("UDMXPixelMappingColorSpace_XYZ"), &Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_XYZ, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingColorSpace_XYZ), 1471617446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_XYZ_h_3402988999(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_XYZ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_XYZ_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
