// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ColorSpace/DMXPixelMappingColorSpace_xyY.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingColorSpace_xyY() {}
// Cross Module References
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_NoRegister();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXPixelMappingColorSpace_xyY::StaticRegisterNativesUDMXPixelMappingColorSpace_xyY()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingColorSpace_xyY);
	UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_NoRegister()
	{
		return UDMXPixelMappingColorSpace_xyY::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YAttribute;
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
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingColorSpace,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "CIE 1931 xyY" },
		{ "IncludePath", "ColorSpace/DMXPixelMappingColorSpace_xyY.h" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_xyY.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_XAttribute_MetaData[] = {
		{ "Category", "XY" },
		{ "Comment", "/** Attribute sent for x */" },
		{ "DisplayName", "x Attribute" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_xyY.h" },
		{ "ToolTip", "Attribute sent for x" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_XAttribute = { "XAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_xyY, XAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_XAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_XAttribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_YAttribute_MetaData[] = {
		{ "Category", "XY" },
		{ "Comment", "/** Attribute sent for y */" },
		{ "DisplayName", "y Attribute" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_xyY.h" },
		{ "ToolTip", "Attribute sent for y" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_YAttribute = { "YAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_xyY, YAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_YAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_YAttribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_LuminanceAttribute_MetaData[] = {
		{ "Category", "Luminance" },
		{ "Comment", "/** Attribute sent for Y */" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_xyY.h" },
		{ "ToolTip", "Attribute sent for Y" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_LuminanceAttribute = { "LuminanceAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_xyY, LuminanceAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_LuminanceAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_LuminanceAttribute_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_MinLuminance_MetaData[] = {
		{ "Category", "Luminance" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Min Luminance */" },
		{ "EditCondition", "LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromWhite || LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_xyY.h" },
		{ "SliderMax", "1.000000" },
		{ "SliderMin", "0.000000" },
		{ "ToolTip", "Min Luminance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_MinLuminance = { "MinLuminance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_xyY, MinLuminance), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_MinLuminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_MinLuminance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_MaxLuminance_MetaData[] = {
		{ "Category", "Luminance" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Max Luminance */" },
		{ "EditCondition", "LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromWhite || LuminanceType == EDMXPixelMappingLuminanceType_RGBCMY::FromAlpha" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/ColorSpace/DMXPixelMappingColorSpace_xyY.h" },
		{ "SliderMax", "1.000000" },
		{ "SliderMin", "0.000000" },
		{ "ToolTip", "Max Luminance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_MaxLuminance = { "MaxLuminance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingColorSpace_xyY, MaxLuminance), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_MaxLuminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_MaxLuminance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_XAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_YAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_LuminanceAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_MinLuminance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::NewProp_MaxLuminance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingColorSpace_xyY>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::ClassParams = {
		&UDMXPixelMappingColorSpace_xyY::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_xyY.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_xyY.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_xyY.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingColorSpace_xyY>()
	{
		return UDMXPixelMappingColorSpace_xyY::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingColorSpace_xyY);
	UDMXPixelMappingColorSpace_xyY::~UDMXPixelMappingColorSpace_xyY() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_xyY_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_xyY_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingColorSpace_xyY, UDMXPixelMappingColorSpace_xyY::StaticClass, TEXT("UDMXPixelMappingColorSpace_xyY"), &Z_Registration_Info_UClass_UDMXPixelMappingColorSpace_xyY, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingColorSpace_xyY), 3548304646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_xyY_h_747739208(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_xyY_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_ColorSpace_DMXPixelMappingColorSpace_xyY_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
