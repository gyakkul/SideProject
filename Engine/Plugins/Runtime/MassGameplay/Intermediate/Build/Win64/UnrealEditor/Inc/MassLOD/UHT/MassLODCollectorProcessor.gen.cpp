// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassLOD/Public/MassLODCollectorProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLODCollectorProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSLOD_API UClass* Z_Construct_UClass_UMassLODCollectorProcessor();
	MASSLOD_API UClass* Z_Construct_UClass_UMassLODCollectorProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassLOD();
// End Cross Module References
	void UMassLODCollectorProcessor::StaticRegisterNativesUMassLODCollectorProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassLODCollectorProcessor);
	UClass* Z_Construct_UClass_UMassLODCollectorProcessor_NoRegister()
	{
		return UMassLODCollectorProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassLODCollectorProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassLODCollectorProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLODCollectorProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * LOD collector which combines collection of LOD information for both Viewer and Simulation LODing when possible.\n */" },
		{ "DisplayName", "LOD Collector" },
		{ "IncludePath", "MassLODCollectorProcessor.h" },
		{ "ModuleRelativePath", "Public/MassLODCollectorProcessor.h" },
		{ "ToolTip", "* LOD collector which combines collection of LOD information for both Viewer and Simulation LODing when possible." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassLODCollectorProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassLODCollectorProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassLODCollectorProcessor_Statics::ClassParams = {
		&UMassLODCollectorProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassLODCollectorProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLODCollectorProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassLODCollectorProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassLODCollectorProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassLODCollectorProcessor.OuterSingleton, Z_Construct_UClass_UMassLODCollectorProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassLODCollectorProcessor.OuterSingleton;
	}
	template<> MASSLOD_API UClass* StaticClass<UMassLODCollectorProcessor>()
	{
		return UMassLODCollectorProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassLODCollectorProcessor);
	UMassLODCollectorProcessor::~UMassLODCollectorProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassLODCollectorProcessor, UMassLODCollectorProcessor::StaticClass, TEXT("UMassLODCollectorProcessor"), &Z_Registration_Info_UClass_UMassLODCollectorProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassLODCollectorProcessor), 945848686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_1312984337(TEXT("/Script/MassLOD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODCollectorProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
