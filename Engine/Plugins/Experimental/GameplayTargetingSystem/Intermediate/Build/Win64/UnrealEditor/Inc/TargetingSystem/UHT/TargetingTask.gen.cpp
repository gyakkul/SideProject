// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/Tasks/TargetingTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingTask() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	void UTargetingTask::StaticRegisterNativesUTargetingTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingTask);
	UClass* Z_Construct_UClass_UTargetingTask_NoRegister()
	{
		return UTargetingTask::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@class UTargetingTask\n*\n*\x09The base object type that all Targeting Tasks will derive from. The idea\n*\x09is the targeting system will take target requests that are collections of\n*\x09target tasks that will potentially generate/remove and perform operations\n*\x09on sets of targeting results data.\n*\n*\x09Potential Task Implementations:\n*\n*\x09Selection Tasks:\n*\x09Target selection tasks would be used to build up a collection of target\n*\x09request results. It is recommend they are added first in the targeting\n*\x09request. Things like ray casts, AOE shapes, actors under a reticle, etc\n*\x09""are cases that generally fall under selection.\n*\n*\x09""Filtering Tasks:\n*\x09Target filtering tasks are used to reduce the target result data set to\n*\x09those targets that match a given criteria. Things like actor class, team\n*\x09""distance, facing, etc.\n*\n*\x09Sorting Tasks:\n*\x09Target sorting tasks would be useful to take the set and put them in an order\n*\x09the end user might prefer to make decisions on. Distance (min/max), score rating\n*\x09""etc.\n*/" },
		{ "IncludePath", "Tasks/TargetingTask.h" },
		{ "ModuleRelativePath", "Tasks/TargetingTask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@class UTargetingTask\n\nThe base object type that all Targeting Tasks will derive from. The idea\nis the targeting system will take target requests that are collections of\ntarget tasks that will potentially generate/remove and perform operations\non sets of targeting results data.\n\nPotential Task Implementations:\n\nSelection Tasks:\nTarget selection tasks would be used to build up a collection of target\nrequest results. It is recommend they are added first in the targeting\nrequest. Things like ray casts, AOE shapes, actors under a reticle, etc\nare cases that generally fall under selection.\n\nFiltering Tasks:\nTarget filtering tasks are used to reduce the target result data set to\nthose targets that match a given criteria. Things like actor class, team\ndistance, facing, etc.\n\nSorting Tasks:\nTarget sorting tasks would be useful to take the set and put them in an order\nthe end user might prefer to make decisions on. Distance (min/max), score rating\netc." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingTask_Statics::ClassParams = {
		&UTargetingTask::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingTask()
	{
		if (!Z_Registration_Info_UClass_UTargetingTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingTask.OuterSingleton, Z_Construct_UClass_UTargetingTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingTask.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetingTask>()
	{
		return UTargetingTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingTask);
	UTargetingTask::~UTargetingTask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingTask, UTargetingTask::StaticClass, TEXT("UTargetingTask"), &Z_Registration_Info_UClass_UTargetingTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingTask), 1648226622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingTask_h_3050970014(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
