// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/Tasks/TargetingFilterTask_SortByDistance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingFilterTask_SortByDistance() {}
// Cross Module References
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_SortByDistance();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingFilterTask_SortByDistance_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSortTask_Base();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	void UTargetingFilterTask_SortByDistance::StaticRegisterNativesUTargetingFilterTask_SortByDistance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingFilterTask_SortByDistance);
	UClass* Z_Construct_UClass_UTargetingFilterTask_SortByDistance_NoRegister()
	{
		return UTargetingFilterTask_SortByDistance::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingFilterTask_SortByDistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingFilterTask_SortByDistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetingSortTask_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingFilterTask_SortByDistance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09@class UTargetingFilterTask_SortByDistance\n*\n*\x09Simple sorting filter based on the distance to the source actor.\n*\x09Note: This filter will use the FTargetingDefaultResultsSet and \n*\x09use the Score factor defined for each target to store the distance\n*\x09""and sort by that value.\n*/" },
		{ "IncludePath", "Tasks/TargetingFilterTask_SortByDistance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Tasks/TargetingFilterTask_SortByDistance.h" },
		{ "ToolTip", "@class UTargetingFilterTask_SortByDistance\n\nSimple sorting filter based on the distance to the source actor.\nNote: This filter will use the FTargetingDefaultResultsSet and\nuse the Score factor defined for each target to store the distance\nand sort by that value." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingFilterTask_SortByDistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingFilterTask_SortByDistance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingFilterTask_SortByDistance_Statics::ClassParams = {
		&UTargetingFilterTask_SortByDistance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTargetingFilterTask_SortByDistance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingFilterTask_SortByDistance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingFilterTask_SortByDistance()
	{
		if (!Z_Registration_Info_UClass_UTargetingFilterTask_SortByDistance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingFilterTask_SortByDistance.OuterSingleton, Z_Construct_UClass_UTargetingFilterTask_SortByDistance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingFilterTask_SortByDistance.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetingFilterTask_SortByDistance>()
	{
		return UTargetingFilterTask_SortByDistance::StaticClass();
	}
	UTargetingFilterTask_SortByDistance::UTargetingFilterTask_SortByDistance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingFilterTask_SortByDistance);
	UTargetingFilterTask_SortByDistance::~UTargetingFilterTask_SortByDistance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingFilterTask_SortByDistance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingFilterTask_SortByDistance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingFilterTask_SortByDistance, UTargetingFilterTask_SortByDistance::StaticClass, TEXT("UTargetingFilterTask_SortByDistance"), &Z_Registration_Info_UClass_UTargetingFilterTask_SortByDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingFilterTask_SortByDistance), 2767583744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingFilterTask_SortByDistance_h_1526326340(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingFilterTask_SortByDistance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingFilterTask_SortByDistance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
