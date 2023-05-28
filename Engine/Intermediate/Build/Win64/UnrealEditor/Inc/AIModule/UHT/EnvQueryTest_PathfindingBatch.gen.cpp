// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_PathfindingBatch.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_PathfindingBatch() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Pathfinding();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_PathfindingBatch();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryTest_PathfindingBatch::StaticRegisterNativesUEnvQueryTest_PathfindingBatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_PathfindingBatch);
	UClass* Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_NoRegister()
	{
		return UEnvQueryTest_PathfindingBatch::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScanRangeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScanRangeMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest_Pathfinding,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_PathfindingBatch.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_PathfindingBatch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::NewProp_ScanRangeMultiplier_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** multiplier for max distance between point and context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_PathfindingBatch.h" },
		{ "ToolTip", "multiplier for max distance between point and context" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::NewProp_ScanRangeMultiplier = { "ScanRangeMultiplier", nullptr, (EPropertyFlags)0x0010048000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_PathfindingBatch, ScanRangeMultiplier), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::NewProp_ScanRangeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::NewProp_ScanRangeMultiplier_MetaData)) }; // 2399041136
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::NewProp_ScanRangeMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_PathfindingBatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::ClassParams = {
		&UEnvQueryTest_PathfindingBatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_PathfindingBatch()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_PathfindingBatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_PathfindingBatch>()
	{
		return UEnvQueryTest_PathfindingBatch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_PathfindingBatch);
	UEnvQueryTest_PathfindingBatch::~UEnvQueryTest_PathfindingBatch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_PathfindingBatch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_PathfindingBatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_PathfindingBatch, UEnvQueryTest_PathfindingBatch::StaticClass, TEXT("UEnvQueryTest_PathfindingBatch"), &Z_Registration_Info_UClass_UEnvQueryTest_PathfindingBatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_PathfindingBatch), 102595968U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_PathfindingBatch_h_3597741214(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_PathfindingBatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_PathfindingBatch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
