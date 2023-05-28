// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_MakeMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MakeMap() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MakeContainer();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MakeMap();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MakeMap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_MakeMap::StaticRegisterNativesUK2Node_MakeMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_MakeMap);
	UClass* Z_Construct_UClass_UK2Node_MakeMap_NoRegister()
	{
		return UK2Node_MakeMap::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MakeMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MakeMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_MakeContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_MakeMap.h" },
		{ "ModuleRelativePath", "Classes/K2Node_MakeMap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MakeMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MakeMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MakeMap_Statics::ClassParams = {
		&UK2Node_MakeMap::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_MakeMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_MakeMap()
	{
		if (!Z_Registration_Info_UClass_UK2Node_MakeMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_MakeMap.OuterSingleton, Z_Construct_UClass_UK2Node_MakeMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_MakeMap.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MakeMap>()
	{
		return UK2Node_MakeMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MakeMap);
	UK2Node_MakeMap::~UK2Node_MakeMap() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MakeMap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MakeMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_MakeMap, UK2Node_MakeMap::StaticClass, TEXT("UK2Node_MakeMap"), &Z_Registration_Info_UClass_UK2Node_MakeMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_MakeMap), 2692973203U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MakeMap_h_1532881684(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MakeMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MakeMap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
