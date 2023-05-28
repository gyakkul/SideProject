// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Project.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Project() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Project();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Project_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvTraceData();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryTest_Project::StaticRegisterNativesUEnvQueryTest_Project()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Project);
	UClass* Z_Construct_UClass_UEnvQueryTest_Project_NoRegister()
	{
		return UEnvQueryTest_Project::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Project_Statics
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
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Project_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Project_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Projects points on navigation or geometry, will modify value of projected items.\n * Works only on item type: point\n */" },
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Project.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Project.h" },
		{ "ToolTip", "Projects points on navigation or geometry, will modify value of projected items.\nWorks only on item type: point" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Project_Statics::NewProp_ProjectionData_MetaData[] = {
		{ "Category", "Test" },
		{ "Comment", "/** trace params */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Project.h" },
		{ "ToolTip", "trace params" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Project_Statics::NewProp_ProjectionData = { "ProjectionData", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Project, ProjectionData), Z_Construct_UScriptStruct_FEnvTraceData, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Project_Statics::NewProp_ProjectionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Project_Statics::NewProp_ProjectionData_MetaData)) }; // 3505047610
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Project_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Project_Statics::NewProp_ProjectionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Project_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Project>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Project_Statics::ClassParams = {
		&UEnvQueryTest_Project::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_Project_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Project_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Project_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Project_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_Project()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryTest_Project.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Project.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Project_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryTest_Project.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Project>()
	{
		return UEnvQueryTest_Project::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Project);
	UEnvQueryTest_Project::~UEnvQueryTest_Project() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Project, UEnvQueryTest_Project::StaticClass, TEXT("UEnvQueryTest_Project"), &Z_Registration_Info_UClass_UEnvQueryTest_Project, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Project), 2628961277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_304183665(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Project_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
