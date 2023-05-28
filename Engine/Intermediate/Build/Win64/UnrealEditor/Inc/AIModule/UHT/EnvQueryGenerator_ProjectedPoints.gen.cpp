// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_ProjectedPoints() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryGenerator_ProjectedPoints::StaticRegisterNativesUEnvQueryGenerator_ProjectedPoints()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_ProjectedPoints);
	UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_NoRegister()
	{
		return UEnvQueryGenerator_ProjectedPoints::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** trace params */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_ProjectedPoints.h" },
		{ "ToolTip", "trace params" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData = { "ProjectionData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_ProjectedPoints, ProjectionData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData_MetaData)) }; // 3505047610
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::NewProp_ProjectionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_ProjectedPoints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::ClassParams = {
		&UEnvQueryGenerator_ProjectedPoints::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_ProjectedPoints>()
	{
		return UEnvQueryGenerator_ProjectedPoints::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_ProjectedPoints);
	UEnvQueryGenerator_ProjectedPoints::~UEnvQueryGenerator_ProjectedPoints() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints, UEnvQueryGenerator_ProjectedPoints::StaticClass, TEXT("UEnvQueryGenerator_ProjectedPoints"), &Z_Registration_Info_UClass_UEnvQueryGenerator_ProjectedPoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_ProjectedPoints), 2652113539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h_3429031275(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_ProjectedPoints_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
