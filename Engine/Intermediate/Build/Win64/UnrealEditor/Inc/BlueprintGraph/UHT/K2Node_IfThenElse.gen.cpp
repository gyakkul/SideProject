// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_IfThenElse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_IfThenElse() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_IfThenElse();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_IfThenElse_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_IfThenElse::StaticRegisterNativesUK2Node_IfThenElse()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_IfThenElse);
	UClass* Z_Construct_UClass_UK2Node_IfThenElse_NoRegister()
	{
		return UK2Node_IfThenElse::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_IfThenElse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_IfThenElse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_IfThenElse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_IfThenElse.h" },
		{ "Keywords", "if bool branch" },
		{ "ModuleRelativePath", "Classes/K2Node_IfThenElse.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_IfThenElse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_IfThenElse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_IfThenElse_Statics::ClassParams = {
		&UK2Node_IfThenElse::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_IfThenElse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_IfThenElse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_IfThenElse()
	{
		if (!Z_Registration_Info_UClass_UK2Node_IfThenElse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_IfThenElse.OuterSingleton, Z_Construct_UClass_UK2Node_IfThenElse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_IfThenElse.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_IfThenElse>()
	{
		return UK2Node_IfThenElse::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_IfThenElse);
	UK2Node_IfThenElse::~UK2Node_IfThenElse() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_IfThenElse_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_IfThenElse_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_IfThenElse, UK2Node_IfThenElse::StaticClass, TEXT("UK2Node_IfThenElse"), &Z_Registration_Info_UClass_UK2Node_IfThenElse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_IfThenElse), 1145983659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_IfThenElse_h_1003175469(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_IfThenElse_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_IfThenElse_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
