// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdVisualizationLODProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdVisualizationLODProcessor() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdLODCollectorProcessor();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdLODCollectorProcessor_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdVisualizationLODProcessor();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdVisualizationLODProcessor_NoRegister();
	MASSLOD_API UClass* Z_Construct_UClass_UMassLODCollectorProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationLODProcessor();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdVisualizationLODProcessor::StaticRegisterNativesUMassCrowdVisualizationLODProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdVisualizationLODProcessor);
	UClass* Z_Construct_UClass_UMassCrowdVisualizationLODProcessor_NoRegister()
	{
		return UMassCrowdVisualizationLODProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdVisualizationLODProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdVisualizationLODProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassVisualizationLODProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdVisualizationLODProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Created a crowd version for parallelization of the crowd with the traffic\n */" },
		{ "DisplayName", "Crowd visualization LOD" },
		{ "IncludePath", "MassCrowdVisualizationLODProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdVisualizationLODProcessor.h" },
		{ "ToolTip", "* Created a crowd version for parallelization of the crowd with the traffic" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdVisualizationLODProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdVisualizationLODProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdVisualizationLODProcessor_Statics::ClassParams = {
		&UMassCrowdVisualizationLODProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdVisualizationLODProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdVisualizationLODProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdVisualizationLODProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdVisualizationLODProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdVisualizationLODProcessor.OuterSingleton, Z_Construct_UClass_UMassCrowdVisualizationLODProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdVisualizationLODProcessor.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdVisualizationLODProcessor>()
	{
		return UMassCrowdVisualizationLODProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdVisualizationLODProcessor);
	UMassCrowdVisualizationLODProcessor::~UMassCrowdVisualizationLODProcessor() {}
	void UMassCrowdLODCollectorProcessor::StaticRegisterNativesUMassCrowdLODCollectorProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdLODCollectorProcessor);
	UClass* Z_Construct_UClass_UMassCrowdLODCollectorProcessor_NoRegister()
	{
		return UMassCrowdLODCollectorProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdLODCollectorProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdLODCollectorProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassLODCollectorProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdLODCollectorProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Created a crowd version for parallelization of the crowd with the traffic\n */" },
		{ "DisplayName", "Crowd LOD Collection" },
		{ "IncludePath", "MassCrowdVisualizationLODProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdVisualizationLODProcessor.h" },
		{ "ToolTip", "* Created a crowd version for parallelization of the crowd with the traffic" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdLODCollectorProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdLODCollectorProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdLODCollectorProcessor_Statics::ClassParams = {
		&UMassCrowdLODCollectorProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdLODCollectorProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdLODCollectorProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdLODCollectorProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdLODCollectorProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdLODCollectorProcessor.OuterSingleton, Z_Construct_UClass_UMassCrowdLODCollectorProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdLODCollectorProcessor.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdLODCollectorProcessor>()
	{
		return UMassCrowdLODCollectorProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdLODCollectorProcessor);
	UMassCrowdLODCollectorProcessor::~UMassCrowdLODCollectorProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationLODProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationLODProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdVisualizationLODProcessor, UMassCrowdVisualizationLODProcessor::StaticClass, TEXT("UMassCrowdVisualizationLODProcessor"), &Z_Registration_Info_UClass_UMassCrowdVisualizationLODProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdVisualizationLODProcessor), 1834337324U) },
		{ Z_Construct_UClass_UMassCrowdLODCollectorProcessor, UMassCrowdLODCollectorProcessor::StaticClass, TEXT("UMassCrowdLODCollectorProcessor"), &Z_Registration_Info_UClass_UMassCrowdLODCollectorProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdLODCollectorProcessor), 1021173997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationLODProcessor_h_303618364(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationLODProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdVisualizationLODProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
