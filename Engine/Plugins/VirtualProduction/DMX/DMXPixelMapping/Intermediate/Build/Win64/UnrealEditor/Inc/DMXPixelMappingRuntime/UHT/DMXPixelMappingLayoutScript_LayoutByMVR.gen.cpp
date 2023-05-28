// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LayoutScripts/DMXPixelMappingLayoutScript_LayoutByMVR.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingLayoutScript_LayoutByMVR() {}
// Cross Module References
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UEnum* Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXPixelMappingMVRProjectionPlane;
	static UEnum* EDMXPixelMappingMVRProjectionPlane_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingMVRProjectionPlane.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXPixelMappingMVRProjectionPlane.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingRuntime(), TEXT("EDMXPixelMappingMVRProjectionPlane"));
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingMVRProjectionPlane.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UEnum* StaticEnum<EDMXPixelMappingMVRProjectionPlane>()
	{
		return EDMXPixelMappingMVRProjectionPlane_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane_Statics::Enumerators[] = {
		{ "EDMXPixelMappingMVRProjectionPlane::XY", (int64)EDMXPixelMappingMVRProjectionPlane::XY },
		{ "EDMXPixelMappingMVRProjectionPlane::XZ", (int64)EDMXPixelMappingMVRProjectionPlane::XZ },
		{ "EDMXPixelMappingMVRProjectionPlane::YZ", (int64)EDMXPixelMappingMVRProjectionPlane::YZ },
		{ "EDMXPixelMappingMVRProjectionPlane::YX", (int64)EDMXPixelMappingMVRProjectionPlane::YX },
		{ "EDMXPixelMappingMVRProjectionPlane::ZX", (int64)EDMXPixelMappingMVRProjectionPlane::ZX },
		{ "EDMXPixelMappingMVRProjectionPlane::ZY", (int64)EDMXPixelMappingMVRProjectionPlane::ZY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines which MVR coordinates are projected to a Pixel Mapping Layout */" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_LayoutByMVR.h" },
		{ "ToolTip", "Defines which MVR coordinates are projected to a Pixel Mapping Layout" },
		{ "XY.Name", "EDMXPixelMappingMVRProjectionPlane::XY" },
		{ "XZ.Name", "EDMXPixelMappingMVRProjectionPlane::XZ" },
		{ "YX.Name", "EDMXPixelMappingMVRProjectionPlane::YX" },
		{ "YZ.Name", "EDMXPixelMappingMVRProjectionPlane::YZ" },
		{ "ZX.Name", "EDMXPixelMappingMVRProjectionPlane::ZX" },
		{ "ZY.Name", "EDMXPixelMappingMVRProjectionPlane::ZY" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
		nullptr,
		"EDMXPixelMappingMVRProjectionPlane",
		"EDMXPixelMappingMVRProjectionPlane",
		Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelMappingMVRProjectionPlane.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXPixelMappingMVRProjectionPlane.InnerSingleton, Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXPixelMappingMVRProjectionPlane.InnerSingleton;
	}
	void UDMXPixelMappingLayoutScript_LayoutByMVR::StaticRegisterNativesUDMXPixelMappingLayoutScript_LayoutByMVR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingLayoutScript_LayoutByMVR);
	UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_NoRegister()
	{
		return UDMXPixelMappingLayoutScript_LayoutByMVR::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionPlane_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionPlane_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarginCentimeters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarginCentimeters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSizePixels_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ComponentSizePixels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingLayoutScript,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Layout Settings" },
		{ "Comment", "/** Arranges the components given their coordinates in the DMX Library's MVR specs */" },
		{ "DisplayName", "Layout by MVR" },
		{ "IncludePath", "LayoutScripts/DMXPixelMappingLayoutScript_LayoutByMVR.h" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_LayoutByMVR.h" },
		{ "ToolTip", "Arranges the components given their coordinates in the DMX Library's MVR specs" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ProjectionPlane_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ProjectionPlane_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** Which axis or axes are projected to the Pixel Mapping Layout */" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_LayoutByMVR.h" },
		{ "ToolTip", "Which axis or axes are projected to the Pixel Mapping Layout" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ProjectionPlane = { "ProjectionPlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript_LayoutByMVR, ProjectionPlane), Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelMappingMVRProjectionPlane, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ProjectionPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ProjectionPlane_MetaData)) }; // 2946868460
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_MarginCentimeters_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "Comment", "/** Margin of the MVR fixtures, in centimeters */" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_LayoutByMVR.h" },
		{ "ToolTip", "Margin of the MVR fixtures, in centimeters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_MarginCentimeters = { "MarginCentimeters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript_LayoutByMVR, MarginCentimeters), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_MarginCentimeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_MarginCentimeters_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ComponentSizePixels_MetaData[] = {
		{ "Category", "Layout Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size each component should take, in pixels */" },
		{ "ModuleRelativePath", "Private/LayoutScripts/DMXPixelMappingLayoutScript_LayoutByMVR.h" },
		{ "ToolTip", "Size each component should take, in pixels" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ComponentSizePixels = { "ComponentSizePixels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutScript_LayoutByMVR, ComponentSizePixels), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ComponentSizePixels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ComponentSizePixels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ProjectionPlane_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ProjectionPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_MarginCentimeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::NewProp_ComponentSizePixels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingLayoutScript_LayoutByMVR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::ClassParams = {
		&UDMXPixelMappingLayoutScript_LayoutByMVR::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingLayoutScript_LayoutByMVR>()
	{
		return UDMXPixelMappingLayoutScript_LayoutByMVR::StaticClass();
	}
	UDMXPixelMappingLayoutScript_LayoutByMVR::UDMXPixelMappingLayoutScript_LayoutByMVR(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingLayoutScript_LayoutByMVR);
	UDMXPixelMappingLayoutScript_LayoutByMVR::~UDMXPixelMappingLayoutScript_LayoutByMVR() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_Statics::EnumInfo[] = {
		{ EDMXPixelMappingMVRProjectionPlane_StaticEnum, TEXT("EDMXPixelMappingMVRProjectionPlane"), &Z_Registration_Info_UEnum_EDMXPixelMappingMVRProjectionPlane, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2946868460U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR, UDMXPixelMappingLayoutScript_LayoutByMVR::StaticClass, TEXT("UDMXPixelMappingLayoutScript_LayoutByMVR"), &Z_Registration_Info_UClass_UDMXPixelMappingLayoutScript_LayoutByMVR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingLayoutScript_LayoutByMVR), 4065626804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_1150739813(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_LayoutScripts_DMXPixelMappingLayoutScript_LayoutByMVR_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
