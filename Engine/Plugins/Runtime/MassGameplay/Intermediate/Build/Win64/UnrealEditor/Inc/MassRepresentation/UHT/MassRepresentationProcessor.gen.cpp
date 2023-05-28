// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassRepresentationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassRepresentationProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationFragmentDestructor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationFragmentDestructor_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationProcessor_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void UMassRepresentationProcessor::StaticRegisterNativesUMassRepresentationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassRepresentationProcessor);
	UClass* Z_Construct_UClass_UMassRepresentationProcessor_NoRegister()
	{
		return UMassRepresentationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassRepresentationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassRepresentationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRepresentationProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassRepresentationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassRepresentationProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassRepresentationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassRepresentationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassRepresentationProcessor_Statics::ClassParams = {
		&UMassRepresentationProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassRepresentationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRepresentationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassRepresentationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassRepresentationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassRepresentationProcessor.OuterSingleton, Z_Construct_UClass_UMassRepresentationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassRepresentationProcessor.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassRepresentationProcessor>()
	{
		return UMassRepresentationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassRepresentationProcessor);
	UMassRepresentationProcessor::~UMassRepresentationProcessor() {}
	void UMassVisualizationProcessor::StaticRegisterNativesUMassVisualizationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassVisualizationProcessor);
	UClass* Z_Construct_UClass_UMassVisualizationProcessor_NoRegister()
	{
		return UMassVisualizationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassVisualizationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassVisualizationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassRepresentationProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVisualizationProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassRepresentationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassRepresentationProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassVisualizationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassVisualizationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassVisualizationProcessor_Statics::ClassParams = {
		&UMassVisualizationProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassVisualizationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassVisualizationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassVisualizationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassVisualizationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassVisualizationProcessor.OuterSingleton, Z_Construct_UClass_UMassVisualizationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassVisualizationProcessor.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassVisualizationProcessor>()
	{
		return UMassVisualizationProcessor::StaticClass();
	}
	UMassVisualizationProcessor::UMassVisualizationProcessor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassVisualizationProcessor);
	UMassVisualizationProcessor::~UMassVisualizationProcessor() {}
	void UMassRepresentationFragmentDestructor::StaticRegisterNativesUMassRepresentationFragmentDestructor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassRepresentationFragmentDestructor);
	UClass* Z_Construct_UClass_UMassRepresentationFragmentDestructor_NoRegister()
	{
		return UMassRepresentationFragmentDestructor::StaticClass();
	}
	struct Z_Construct_UClass_UMassRepresentationFragmentDestructor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassRepresentationFragmentDestructor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRepresentationFragmentDestructor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassRepresentationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassRepresentationProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassRepresentationFragmentDestructor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassRepresentationFragmentDestructor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassRepresentationFragmentDestructor_Statics::ClassParams = {
		&UMassRepresentationFragmentDestructor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassRepresentationFragmentDestructor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRepresentationFragmentDestructor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassRepresentationFragmentDestructor()
	{
		if (!Z_Registration_Info_UClass_UMassRepresentationFragmentDestructor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassRepresentationFragmentDestructor.OuterSingleton, Z_Construct_UClass_UMassRepresentationFragmentDestructor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassRepresentationFragmentDestructor.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassRepresentationFragmentDestructor>()
	{
		return UMassRepresentationFragmentDestructor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassRepresentationFragmentDestructor);
	UMassRepresentationFragmentDestructor::~UMassRepresentationFragmentDestructor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassRepresentationProcessor, UMassRepresentationProcessor::StaticClass, TEXT("UMassRepresentationProcessor"), &Z_Registration_Info_UClass_UMassRepresentationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassRepresentationProcessor), 2513092007U) },
		{ Z_Construct_UClass_UMassVisualizationProcessor, UMassVisualizationProcessor::StaticClass, TEXT("UMassVisualizationProcessor"), &Z_Registration_Info_UClass_UMassVisualizationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassVisualizationProcessor), 1590485942U) },
		{ Z_Construct_UClass_UMassRepresentationFragmentDestructor, UMassRepresentationFragmentDestructor::StaticClass, TEXT("UMassRepresentationFragmentDestructor"), &Z_Registration_Info_UClass_UMassRepresentationFragmentDestructor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassRepresentationFragmentDestructor), 3224408055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_1961945035(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
