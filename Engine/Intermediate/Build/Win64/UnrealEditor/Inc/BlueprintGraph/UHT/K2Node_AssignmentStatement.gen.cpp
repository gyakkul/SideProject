// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_AssignmentStatement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_AssignmentStatement() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AssignmentStatement();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AssignmentStatement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_AssignmentStatement::StaticRegisterNativesUK2Node_AssignmentStatement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_AssignmentStatement);
	UClass* Z_Construct_UClass_UK2Node_AssignmentStatement_NoRegister()
	{
		return UK2Node_AssignmentStatement::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AssignmentStatement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AssignmentStatement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AssignmentStatement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_AssignmentStatement.h" },
		{ "ModuleRelativePath", "Classes/K2Node_AssignmentStatement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AssignmentStatement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AssignmentStatement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AssignmentStatement_Statics::ClassParams = {
		&UK2Node_AssignmentStatement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AssignmentStatement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AssignmentStatement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AssignmentStatement()
	{
		if (!Z_Registration_Info_UClass_UK2Node_AssignmentStatement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_AssignmentStatement.OuterSingleton, Z_Construct_UClass_UK2Node_AssignmentStatement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_AssignmentStatement.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_AssignmentStatement>()
	{
		return UK2Node_AssignmentStatement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AssignmentStatement);
	UK2Node_AssignmentStatement::~UK2Node_AssignmentStatement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_AssignmentStatement, UK2Node_AssignmentStatement::StaticClass, TEXT("UK2Node_AssignmentStatement"), &Z_Registration_Info_UClass_UK2Node_AssignmentStatement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_AssignmentStatement), 1922164052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_1389209376(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
