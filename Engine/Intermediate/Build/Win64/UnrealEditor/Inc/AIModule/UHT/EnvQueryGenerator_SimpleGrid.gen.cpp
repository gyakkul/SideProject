// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryGenerator_SimpleGrid() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryGenerator_SimpleGrid::StaticRegisterNativesUEnvQueryGenerator_SimpleGrid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryGenerator_SimpleGrid);
	UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_NoRegister()
	{
		return UEnvQueryGenerator_SimpleGrid::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceBetween_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceBetween;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GenerateAround_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GenerateAround;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryGenerator_ProjectedPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Simple grid, generates points in 2D square around context\n */" },
		{ "DisplayName", "Points: Grid" },
		{ "IncludePath", "EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h" },
		{ "ToolTip", "Simple grid, generates points in 2D square around context" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** half of square's extent, like a radius */" },
		{ "DisplayName", "GridHalfSize" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h" },
		{ "ToolTip", "half of square's extent, like a radius" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_SimpleGrid, GridSize), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_GridSize_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_SpaceBetween_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** generation density */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h" },
		{ "ToolTip", "generation density" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_SpaceBetween = { "SpaceBetween", nullptr, (EPropertyFlags)0x0010008000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_SimpleGrid, SpaceBetween), Z_Construct_UScriptStruct_FAIDataProviderFloatValue, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_SpaceBetween_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_SpaceBetween_MetaData)) }; // 2399041136
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_GenerateAround_MetaData[] = {
		{ "Category", "Generator" },
		{ "Comment", "/** context */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Generators/EnvQueryGenerator_SimpleGrid.h" },
		{ "ToolTip", "context" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_GenerateAround = { "GenerateAround", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryGenerator_SimpleGrid, GenerateAround), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_GenerateAround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_GenerateAround_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_SpaceBetween,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::NewProp_GenerateAround,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryGenerator_SimpleGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::ClassParams = {
		&UEnvQueryGenerator_SimpleGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.OuterSingleton, Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryGenerator_SimpleGrid>()
	{
		return UEnvQueryGenerator_SimpleGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryGenerator_SimpleGrid);
	UEnvQueryGenerator_SimpleGrid::~UEnvQueryGenerator_SimpleGrid() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryGenerator_SimpleGrid, UEnvQueryGenerator_SimpleGrid::StaticClass, TEXT("UEnvQueryGenerator_SimpleGrid"), &Z_Registration_Info_UClass_UEnvQueryGenerator_SimpleGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryGenerator_SimpleGrid), 725024257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_1504853603(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Generators_EnvQueryGenerator_SimpleGrid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
