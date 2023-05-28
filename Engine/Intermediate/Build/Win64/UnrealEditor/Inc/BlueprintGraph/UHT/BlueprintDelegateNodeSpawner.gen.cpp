// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintDelegateNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintDelegateNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintDelegateNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintDelegateNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UBlueprintDelegateNodeSpawner::StaticRegisterNativesUBlueprintDelegateNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintDelegateNodeSpawner);
	UClass* Z_Construct_UClass_UBlueprintDelegateNodeSpawner_NoRegister()
	{
		return UBlueprintDelegateNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFieldNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes care of spawning various nodes associated with delegates. Serves as the \n * \"action\" portion for certain FBlueprintActionMenuItems. Evolved from \n * FEdGraphSchemaAction_K2Delegate, FEdGraphSchemaAction_K2AssignDelegate, etc.\n */" },
		{ "IncludePath", "BlueprintDelegateNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintDelegateNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning various nodes associated with delegates. Serves as the\n\"action\" portion for certain FBlueprintActionMenuItems. Evolved from\nFEdGraphSchemaAction_K2Delegate, FEdGraphSchemaAction_K2AssignDelegate, etc." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintDelegateNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::ClassParams = {
		&UBlueprintDelegateNodeSpawner::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintDelegateNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UBlueprintDelegateNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintDelegateNodeSpawner.OuterSingleton, Z_Construct_UClass_UBlueprintDelegateNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintDelegateNodeSpawner.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintDelegateNodeSpawner>()
	{
		return UBlueprintDelegateNodeSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintDelegateNodeSpawner);
	UBlueprintDelegateNodeSpawner::~UBlueprintDelegateNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintDelegateNodeSpawner, UBlueprintDelegateNodeSpawner::StaticClass, TEXT("UBlueprintDelegateNodeSpawner"), &Z_Registration_Info_UClass_UBlueprintDelegateNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintDelegateNodeSpawner), 1904996441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_3080889786(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintDelegateNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
