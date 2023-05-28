// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassGameplayDebug/Public/DebugVisLocationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugVisLocationProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UDebugVisLocationProcessor();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UDebugVisLocationProcessor_NoRegister();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassProcessor_UpdateDebugVis();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UMassProcessor_UpdateDebugVis_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassGameplayDebug();
// End Cross Module References
	void UDebugVisLocationProcessor::StaticRegisterNativesUDebugVisLocationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugVisLocationProcessor);
	UClass* Z_Construct_UClass_UDebugVisLocationProcessor_NoRegister()
	{
		return UDebugVisLocationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UDebugVisLocationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugVisLocationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugVisLocationProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DebugVisLocationProcessor.h" },
		{ "ModuleRelativePath", "Public/DebugVisLocationProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugVisLocationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugVisLocationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugVisLocationProcessor_Statics::ClassParams = {
		&UDebugVisLocationProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDebugVisLocationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugVisLocationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugVisLocationProcessor()
	{
		if (!Z_Registration_Info_UClass_UDebugVisLocationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugVisLocationProcessor.OuterSingleton, Z_Construct_UClass_UDebugVisLocationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDebugVisLocationProcessor.OuterSingleton;
	}
	template<> MASSGAMEPLAYDEBUG_API UClass* StaticClass<UDebugVisLocationProcessor>()
	{
		return UDebugVisLocationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugVisLocationProcessor);
	UDebugVisLocationProcessor::~UDebugVisLocationProcessor() {}
	void UMassProcessor_UpdateDebugVis::StaticRegisterNativesUMassProcessor_UpdateDebugVis()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassProcessor_UpdateDebugVis);
	UClass* Z_Construct_UClass_UMassProcessor_UpdateDebugVis_NoRegister()
	{
		return UMassProcessor_UpdateDebugVis::StaticClass();
	}
	struct Z_Construct_UClass_UMassProcessor_UpdateDebugVis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassProcessor_UpdateDebugVis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassProcessor_UpdateDebugVis_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//----------------------------------------------------------------------//\n// new one \n//----------------------------------------------------------------------//\n//class UMassDebugger;\n" },
		{ "IncludePath", "DebugVisLocationProcessor.h" },
		{ "ModuleRelativePath", "Public/DebugVisLocationProcessor.h" },
		{ "ToolTip", "new one\n----------------------------------------------------------------------\nclass UMassDebugger;" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassProcessor_UpdateDebugVis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassProcessor_UpdateDebugVis>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassProcessor_UpdateDebugVis_Statics::ClassParams = {
		&UMassProcessor_UpdateDebugVis::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassProcessor_UpdateDebugVis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassProcessor_UpdateDebugVis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassProcessor_UpdateDebugVis()
	{
		if (!Z_Registration_Info_UClass_UMassProcessor_UpdateDebugVis.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassProcessor_UpdateDebugVis.OuterSingleton, Z_Construct_UClass_UMassProcessor_UpdateDebugVis_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassProcessor_UpdateDebugVis.OuterSingleton;
	}
	template<> MASSGAMEPLAYDEBUG_API UClass* StaticClass<UMassProcessor_UpdateDebugVis>()
	{
		return UMassProcessor_UpdateDebugVis::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassProcessor_UpdateDebugVis);
	UMassProcessor_UpdateDebugVis::~UMassProcessor_UpdateDebugVis() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_DebugVisLocationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_DebugVisLocationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDebugVisLocationProcessor, UDebugVisLocationProcessor::StaticClass, TEXT("UDebugVisLocationProcessor"), &Z_Registration_Info_UClass_UDebugVisLocationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugVisLocationProcessor), 291488814U) },
		{ Z_Construct_UClass_UMassProcessor_UpdateDebugVis, UMassProcessor_UpdateDebugVis::StaticClass, TEXT("UMassProcessor_UpdateDebugVis"), &Z_Registration_Info_UClass_UMassProcessor_UpdateDebugVis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassProcessor_UpdateDebugVis), 3544070943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_DebugVisLocationProcessor_h_3737958245(TEXT("/Script/MassGameplayDebug"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_DebugVisLocationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_DebugVisLocationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
