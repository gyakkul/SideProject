// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerToolsEditMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerToolsEditMode() {}
// Cross Module References
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_USequencerToolsEditMode();
	SEQUENCERANIMTOOLS_API UClass* Z_Construct_UClass_USequencerToolsEditMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode();
	UPackage* Z_Construct_UPackage__Script_SequencerAnimTools();
// End Cross Module References
	void USequencerToolsEditMode::StaticRegisterNativesUSequencerToolsEditMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerToolsEditMode);
	UClass* Z_Construct_UClass_USequencerToolsEditMode_NoRegister()
	{
		return USequencerToolsEditMode::StaticClass();
	}
	struct Z_Construct_UClass_USequencerToolsEditMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerToolsEditMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLegacyWidgetEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerAnimTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerToolsEditMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequencerToolsEditMode.h" },
		{ "ModuleRelativePath", "Public/SequencerToolsEditMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerToolsEditMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerToolsEditMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerToolsEditMode_Statics::ClassParams = {
		&USequencerToolsEditMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerToolsEditMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerToolsEditMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerToolsEditMode()
	{
		if (!Z_Registration_Info_UClass_USequencerToolsEditMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerToolsEditMode.OuterSingleton, Z_Construct_UClass_USequencerToolsEditMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerToolsEditMode.OuterSingleton;
	}
	template<> SEQUENCERANIMTOOLS_API UClass* StaticClass<USequencerToolsEditMode>()
	{
		return USequencerToolsEditMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerToolsEditMode);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_SequencerToolsEditMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_SequencerToolsEditMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerToolsEditMode, USequencerToolsEditMode::StaticClass, TEXT("USequencerToolsEditMode"), &Z_Registration_Info_UClass_USequencerToolsEditMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerToolsEditMode), 97460985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_SequencerToolsEditMode_h_274036742(TEXT("/Script/SequencerAnimTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_SequencerToolsEditMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_SequencerAnimTools_Source_SequencerAnimTools_Public_SequencerToolsEditMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
