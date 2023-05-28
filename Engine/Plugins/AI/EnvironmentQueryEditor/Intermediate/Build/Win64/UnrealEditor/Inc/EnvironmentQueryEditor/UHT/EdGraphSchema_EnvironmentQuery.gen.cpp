// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdGraphSchema_EnvironmentQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_EnvironmentQuery() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphSchema();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EnvironmentQueryEditor();
// End Cross Module References
	void UEdGraphSchema_EnvironmentQuery::StaticRegisterNativesUEdGraphSchema_EnvironmentQuery()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_EnvironmentQuery);
	UClass* Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_NoRegister()
	{
		return UEdGraphSchema_EnvironmentQuery::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentQueryEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphSchema_EnvironmentQuery.h" },
		{ "ModuleRelativePath", "Public/EdGraphSchema_EnvironmentQuery.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_EnvironmentQuery>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_Statics::ClassParams = {
		&UEdGraphSchema_EnvironmentQuery::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery()
	{
		if (!Z_Registration_Info_UClass_UEdGraphSchema_EnvironmentQuery.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_EnvironmentQuery.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphSchema_EnvironmentQuery.OuterSingleton;
	}
	template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<UEdGraphSchema_EnvironmentQuery>()
	{
		return UEdGraphSchema_EnvironmentQuery::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_EnvironmentQuery);
	UEdGraphSchema_EnvironmentQuery::~UEdGraphSchema_EnvironmentQuery() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EdGraphSchema_EnvironmentQuery_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EdGraphSchema_EnvironmentQuery_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_EnvironmentQuery, UEdGraphSchema_EnvironmentQuery::StaticClass, TEXT("UEdGraphSchema_EnvironmentQuery"), &Z_Registration_Info_UClass_UEdGraphSchema_EnvironmentQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_EnvironmentQuery), 1584762606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EdGraphSchema_EnvironmentQuery_h_2082393696(TEXT("/Script/EnvironmentQueryEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EdGraphSchema_EnvironmentQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EdGraphSchema_EnvironmentQuery_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
