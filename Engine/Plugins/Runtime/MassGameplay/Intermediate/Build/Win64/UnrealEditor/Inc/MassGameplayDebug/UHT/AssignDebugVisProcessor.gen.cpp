// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassGameplayDebug/Public/AssignDebugVisProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignDebugVisProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UAssignDebugVisProcessor();
	MASSGAMEPLAYDEBUG_API UClass* Z_Construct_UClass_UAssignDebugVisProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassGameplayDebug();
// End Cross Module References
	void UAssignDebugVisProcessor::StaticRegisterNativesUAssignDebugVisProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssignDebugVisProcessor);
	UClass* Z_Construct_UClass_UAssignDebugVisProcessor_NoRegister()
	{
		return UAssignDebugVisProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UAssignDebugVisProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssignDebugVisProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayDebug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssignDebugVisProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssignDebugVisProcessor.h" },
		{ "ModuleRelativePath", "Public/AssignDebugVisProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssignDebugVisProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssignDebugVisProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssignDebugVisProcessor_Statics::ClassParams = {
		&UAssignDebugVisProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssignDebugVisProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssignDebugVisProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssignDebugVisProcessor()
	{
		if (!Z_Registration_Info_UClass_UAssignDebugVisProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssignDebugVisProcessor.OuterSingleton, Z_Construct_UClass_UAssignDebugVisProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssignDebugVisProcessor.OuterSingleton;
	}
	template<> MASSGAMEPLAYDEBUG_API UClass* StaticClass<UAssignDebugVisProcessor>()
	{
		return UAssignDebugVisProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssignDebugVisProcessor);
	UAssignDebugVisProcessor::~UAssignDebugVisProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssignDebugVisProcessor, UAssignDebugVisProcessor::StaticClass, TEXT("UAssignDebugVisProcessor"), &Z_Registration_Info_UClass_UAssignDebugVisProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssignDebugVisProcessor), 742742989U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_1643826988(TEXT("/Script/MassGameplayDebug"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayDebug_Public_AssignDebugVisProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
