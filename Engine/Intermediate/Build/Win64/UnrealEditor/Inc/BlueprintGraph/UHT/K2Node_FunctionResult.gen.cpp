// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_FunctionResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_FunctionResult() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionResult();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionResult_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionTerminator();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_FunctionResult::StaticRegisterNativesUK2Node_FunctionResult()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_FunctionResult);
	UClass* Z_Construct_UClass_UK2Node_FunctionResult_NoRegister()
	{
		return UK2Node_FunctionResult::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_FunctionResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_FunctionResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_FunctionTerminator,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionResult_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_FunctionResult.h" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionResult.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_FunctionResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_FunctionResult>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_FunctionResult_Statics::ClassParams = {
		&UK2Node_FunctionResult::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_FunctionResult()
	{
		if (!Z_Registration_Info_UClass_UK2Node_FunctionResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_FunctionResult.OuterSingleton, Z_Construct_UClass_UK2Node_FunctionResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_FunctionResult.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_FunctionResult>()
	{
		return UK2Node_FunctionResult::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_FunctionResult);
	UK2Node_FunctionResult::~UK2Node_FunctionResult() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_FunctionResult, UK2Node_FunctionResult::StaticClass, TEXT("UK2Node_FunctionResult"), &Z_Registration_Info_UClass_UK2Node_FunctionResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_FunctionResult), 3533844830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_2895207429(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
