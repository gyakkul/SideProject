// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Modulators/DMXModulator_PixelMappingFrameDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXModulator_PixelMappingFrameDelay() {}
// Cross Module References
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXModulator_PixelMappingFrameDelay::StaticRegisterNativesUDMXModulator_PixelMappingFrameDelay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXModulator_PixelMappingFrameDelay);
	UClass* Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_NoRegister()
	{
		return UDMXModulator_PixelMappingFrameDelay::StaticClass();
	}
	struct Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DelayFrames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXModulator,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX" },
		{ "Comment", "/** Delays the incoming singal by number of Delay Frames. Only useful for PixelMapping and constant frame rates. */" },
		{ "DisplayName", "DMX Modulator Constant Frame Delay" },
		{ "IncludePath", "Modulators/DMXModulator_PixelMappingFrameDelay.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_PixelMappingFrameDelay.h" },
		{ "ToolTip", "Delays the incoming singal by number of Delay Frames. Only useful for PixelMapping and constant frame rates." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::NewProp_DelayFrames_MetaData[] = {
		{ "Category", "DMX" },
		{ "ClampMax", "120" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The time by which signals are delayed in Seconds */" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_PixelMappingFrameDelay.h" },
		{ "ToolTip", "The time by which signals are delayed in Seconds" },
		{ "UIMax", "120" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::NewProp_DelayFrames = { "DelayFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXModulator_PixelMappingFrameDelay, DelayFrames), METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::NewProp_DelayFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::NewProp_DelayFrames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::NewProp_DelayFrames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXModulator_PixelMappingFrameDelay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::ClassParams = {
		&UDMXModulator_PixelMappingFrameDelay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay()
	{
		if (!Z_Registration_Info_UClass_UDMXModulator_PixelMappingFrameDelay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXModulator_PixelMappingFrameDelay.OuterSingleton, Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXModulator_PixelMappingFrameDelay.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXModulator_PixelMappingFrameDelay>()
	{
		return UDMXModulator_PixelMappingFrameDelay::StaticClass();
	}
	UDMXModulator_PixelMappingFrameDelay::UDMXModulator_PixelMappingFrameDelay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXModulator_PixelMappingFrameDelay);
	UDMXModulator_PixelMappingFrameDelay::~UDMXModulator_PixelMappingFrameDelay() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_Modulators_DMXModulator_PixelMappingFrameDelay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_Modulators_DMXModulator_PixelMappingFrameDelay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXModulator_PixelMappingFrameDelay, UDMXModulator_PixelMappingFrameDelay::StaticClass, TEXT("UDMXModulator_PixelMappingFrameDelay"), &Z_Registration_Info_UClass_UDMXModulator_PixelMappingFrameDelay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXModulator_PixelMappingFrameDelay), 1693756362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_Modulators_DMXModulator_PixelMappingFrameDelay_h_1668114293(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_Modulators_DMXModulator_PixelMappingFrameDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Private_Modulators_DMXModulator_PixelMappingFrameDelay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
