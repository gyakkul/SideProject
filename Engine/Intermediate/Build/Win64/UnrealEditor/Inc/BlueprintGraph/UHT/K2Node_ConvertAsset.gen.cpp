// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_ConvertAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_ConvertAsset() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ConvertAsset();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ConvertAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_ConvertAsset::StaticRegisterNativesUK2Node_ConvertAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_ConvertAsset);
	UClass* Z_Construct_UClass_UK2Node_ConvertAsset_NoRegister()
	{
		return UK2Node_ConvertAsset::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_ConvertAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_ConvertAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ConvertAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This node converts between hard and soft references, for both objects and classes. The name is historical from when they were called asset IDs */" },
		{ "IncludePath", "K2Node_ConvertAsset.h" },
		{ "ModuleRelativePath", "Classes/K2Node_ConvertAsset.h" },
		{ "ToolTip", "This node converts between hard and soft references, for both objects and classes. The name is historical from when they were called asset IDs" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_ConvertAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_ConvertAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_ConvertAsset_Statics::ClassParams = {
		&UK2Node_ConvertAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_ConvertAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ConvertAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_ConvertAsset()
	{
		if (!Z_Registration_Info_UClass_UK2Node_ConvertAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_ConvertAsset.OuterSingleton, Z_Construct_UClass_UK2Node_ConvertAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_ConvertAsset.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_ConvertAsset>()
	{
		return UK2Node_ConvertAsset::StaticClass();
	}
	UK2Node_ConvertAsset::UK2Node_ConvertAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_ConvertAsset);
	UK2Node_ConvertAsset::~UK2Node_ConvertAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ConvertAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ConvertAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_ConvertAsset, UK2Node_ConvertAsset::StaticClass, TEXT("UK2Node_ConvertAsset"), &Z_Registration_Info_UClass_UK2Node_ConvertAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_ConvertAsset), 1049932921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ConvertAsset_h_414445433(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ConvertAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ConvertAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
