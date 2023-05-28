// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQuery() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryOption_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQuery::StaticRegisterNativesUEnvQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQuery);
	UClass* Z_Construct_UClass_UEnvQuery_NoRegister()
	{
		return UEnvQuery::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EdGraph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_QueryName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Options_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQuery_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnvironmentQuery/EnvQuery.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph_MetaData[] = {
		{ "Comment", "/** Graph for query */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
		{ "ToolTip", "Graph for query" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph = { "EdGraph", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQuery, EdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName = { "QueryName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQuery, QueryName), METADATA_PARAMS(Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEnvQueryOption_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/EnvQuery.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQuery, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQuery_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_EdGraph,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_QueryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQuery_Statics::NewProp_Options,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQuery_Statics::ClassParams = {
		&UEnvQuery::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQuery_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQuery()
	{
		if (!Z_Registration_Info_UClass_UEnvQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQuery.OuterSingleton, Z_Construct_UClass_UEnvQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQuery.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQuery>()
	{
		return UEnvQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQuery);
	UEnvQuery::~UEnvQuery() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQuery, UEnvQuery::StaticClass, TEXT("UEnvQuery"), &Z_Registration_Info_UClass_UEnvQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQuery), 275934987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_2007675814(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_EnvQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
