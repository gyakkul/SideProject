// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassAI/Source/MassAIDebug/Public/MassDebugStateTreeProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassDebugStateTreeProcessor() {}
// Cross Module References
	MASSAIDEBUG_API UClass* Z_Construct_UClass_UMassDebugStateTreeProcessor();
	MASSAIDEBUG_API UClass* Z_Construct_UClass_UMassDebugStateTreeProcessor_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	UPackage* Z_Construct_UPackage__Script_MassAIDebug();
// End Cross Module References
	void UMassDebugStateTreeProcessor::StaticRegisterNativesUMassDebugStateTreeProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassDebugStateTreeProcessor);
	UClass* Z_Construct_UClass_UMassDebugStateTreeProcessor_NoRegister()
	{
		return UMassDebugStateTreeProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassDebugStateTreeProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassDebugStateTreeProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebugStateTreeProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassDebugStateTreeProcessor.h" },
		{ "ModuleRelativePath", "Public/MassDebugStateTreeProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassDebugStateTreeProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassDebugStateTreeProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassDebugStateTreeProcessor_Statics::ClassParams = {
		&UMassDebugStateTreeProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassDebugStateTreeProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebugStateTreeProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassDebugStateTreeProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassDebugStateTreeProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassDebugStateTreeProcessor.OuterSingleton, Z_Construct_UClass_UMassDebugStateTreeProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassDebugStateTreeProcessor.OuterSingleton;
	}
	template<> MASSAIDEBUG_API UClass* StaticClass<UMassDebugStateTreeProcessor>()
	{
		return UMassDebugStateTreeProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassDebugStateTreeProcessor);
	UMassDebugStateTreeProcessor::~UMassDebugStateTreeProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassDebugStateTreeProcessor, UMassDebugStateTreeProcessor::StaticClass, TEXT("UMassDebugStateTreeProcessor"), &Z_Registration_Info_UClass_UMassDebugStateTreeProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassDebugStateTreeProcessor), 186487418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_2740038672(TEXT("/Script/MassAIDebug"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIDebug_Public_MassDebugStateTreeProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
