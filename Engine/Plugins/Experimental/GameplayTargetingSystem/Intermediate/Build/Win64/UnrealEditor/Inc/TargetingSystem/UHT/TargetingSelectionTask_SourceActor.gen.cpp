// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/Tasks/TargetingSelectionTask_SourceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingSelectionTask_SourceActor() {}
// Cross Module References
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSelectionTask_SourceActor();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSelectionTask_SourceActor_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	void UTargetingSelectionTask_SourceActor::StaticRegisterNativesUTargetingSelectionTask_SourceActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingSelectionTask_SourceActor);
	UClass* Z_Construct_UClass_UTargetingSelectionTask_SourceActor_NoRegister()
	{
		return UTargetingSelectionTask_SourceActor::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingSelectionTask_SourceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingSelectionTask_SourceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetingTask,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_SourceActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@class UTargetingSelectionTask_SourceActor\n*\n*\x09Simple targeting selection task that gets the source actor\n*\x09""defined in the targeting source context.\n*/" },
		{ "IncludePath", "Tasks/TargetingSelectionTask_SourceActor.h" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_SourceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@class UTargetingSelectionTask_SourceActor\n\nSimple targeting selection task that gets the source actor\ndefined in the targeting source context." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingSelectionTask_SourceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingSelectionTask_SourceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingSelectionTask_SourceActor_Statics::ClassParams = {
		&UTargetingSelectionTask_SourceActor::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_SourceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_SourceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingSelectionTask_SourceActor()
	{
		if (!Z_Registration_Info_UClass_UTargetingSelectionTask_SourceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingSelectionTask_SourceActor.OuterSingleton, Z_Construct_UClass_UTargetingSelectionTask_SourceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingSelectionTask_SourceActor.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetingSelectionTask_SourceActor>()
	{
		return UTargetingSelectionTask_SourceActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingSelectionTask_SourceActor);
	UTargetingSelectionTask_SourceActor::~UTargetingSelectionTask_SourceActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_SourceActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_SourceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingSelectionTask_SourceActor, UTargetingSelectionTask_SourceActor::StaticClass, TEXT("UTargetingSelectionTask_SourceActor"), &Z_Registration_Info_UClass_UTargetingSelectionTask_SourceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingSelectionTask_SourceActor), 1455425652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_SourceActor_h_3274924515(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_SourceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_SourceActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
