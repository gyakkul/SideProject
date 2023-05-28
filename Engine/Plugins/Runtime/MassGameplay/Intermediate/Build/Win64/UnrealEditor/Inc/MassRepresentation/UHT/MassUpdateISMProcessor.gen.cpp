// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassUpdateISMProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassUpdateISMProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassUpdateISMProcessor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassUpdateISMProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void UMassUpdateISMProcessor::StaticRegisterNativesUMassUpdateISMProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassUpdateISMProcessor);
	UClass* Z_Construct_UClass_UMassUpdateISMProcessor_NoRegister()
	{
		return UMassUpdateISMProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassUpdateISMProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassUpdateISMProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassUpdateISMProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassUpdateISMProcessor.h" },
		{ "ModuleRelativePath", "Public/MassUpdateISMProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassUpdateISMProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassUpdateISMProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassUpdateISMProcessor_Statics::ClassParams = {
		&UMassUpdateISMProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassUpdateISMProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassUpdateISMProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassUpdateISMProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassUpdateISMProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassUpdateISMProcessor.OuterSingleton, Z_Construct_UClass_UMassUpdateISMProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassUpdateISMProcessor.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<UMassUpdateISMProcessor>()
	{
		return UMassUpdateISMProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassUpdateISMProcessor);
	UMassUpdateISMProcessor::~UMassUpdateISMProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassUpdateISMProcessor, UMassUpdateISMProcessor::StaticClass, TEXT("UMassUpdateISMProcessor"), &Z_Registration_Info_UClass_UMassUpdateISMProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassUpdateISMProcessor), 4028874575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_2197741995(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassUpdateISMProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
