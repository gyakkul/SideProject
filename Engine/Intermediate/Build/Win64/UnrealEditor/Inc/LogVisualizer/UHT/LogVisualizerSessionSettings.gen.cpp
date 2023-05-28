// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Developer/LogVisualizer/Public/LogVisualizerSessionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogVisualizerSessionSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_ULogVisualizerSessionSettings();
	LOGVISUALIZER_API UClass* Z_Construct_UClass_ULogVisualizerSessionSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LogVisualizer();
// End Cross Module References
	void ULogVisualizerSessionSettings::StaticRegisterNativesULogVisualizerSessionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULogVisualizerSessionSettings);
	UClass* Z_Construct_UClass_ULogVisualizerSessionSettings_NoRegister()
	{
		return ULogVisualizerSessionSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULogVisualizerSessionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGraphsVisualization_MetaData[];
#endif
		static void NewProp_bEnableGraphsVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGraphsVisualization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LogVisualizer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LogVisualizerSessionSettings.h" },
		{ "ModuleRelativePath", "Public/LogVisualizerSessionSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::NewProp_bEnableGraphsVisualization_MetaData[] = {
		{ "Category", "VisualLogger" },
		{ "Comment", "/**Whether to show trivial logs, i.e. the ones with only one entry.*/" },
		{ "ModuleRelativePath", "Public/LogVisualizerSessionSettings.h" },
		{ "ToolTip", "Whether to show trivial logs, i.e. the ones with only one entry." },
	};
#endif
	void Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::NewProp_bEnableGraphsVisualization_SetBit(void* Obj)
	{
		((ULogVisualizerSessionSettings*)Obj)->bEnableGraphsVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::NewProp_bEnableGraphsVisualization = { "bEnableGraphsVisualization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULogVisualizerSessionSettings), &Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::NewProp_bEnableGraphsVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::NewProp_bEnableGraphsVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::NewProp_bEnableGraphsVisualization_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::NewProp_bEnableGraphsVisualization,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogVisualizerSessionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::ClassParams = {
		&ULogVisualizerSessionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULogVisualizerSessionSettings()
	{
		if (!Z_Registration_Info_UClass_ULogVisualizerSessionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogVisualizerSessionSettings.OuterSingleton, Z_Construct_UClass_ULogVisualizerSessionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULogVisualizerSessionSettings.OuterSingleton;
	}
	template<> LOGVISUALIZER_API UClass* StaticClass<ULogVisualizerSessionSettings>()
	{
		return ULogVisualizerSessionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogVisualizerSessionSettings);
	ULogVisualizerSessionSettings::~ULogVisualizerSessionSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULogVisualizerSessionSettings, ULogVisualizerSessionSettings::StaticClass, TEXT("ULogVisualizerSessionSettings"), &Z_Registration_Info_UClass_ULogVisualizerSessionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogVisualizerSessionSettings), 2155592160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_699148983(TEXT("/Script/LogVisualizer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_LogVisualizer_Public_LogVisualizerSessionSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
