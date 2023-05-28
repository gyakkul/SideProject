// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintFunctionNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintFunctionNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFunctionNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFunctionNodeSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UBlueprintFunctionNodeSpawner::StaticRegisterNativesUBlueprintFunctionNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintFunctionNodeSpawner);
	UClass* Z_Construct_UClass_UBlueprintFunctionNodeSpawner_NoRegister()
	{
		return UBlueprintFunctionNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintFunctionNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintFunctionNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFieldNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFunctionNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes care of spawning various UK2Node_CallFunction nodes. Acts as the \n * \"action\" portion of certain FBlueprintActionMenuItems. \n */" },
		{ "IncludePath", "BlueprintFunctionNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintFunctionNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning various UK2Node_CallFunction nodes. Acts as the\n\"action\" portion of certain FBlueprintActionMenuItems." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintFunctionNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintFunctionNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintFunctionNodeSpawner_Statics::ClassParams = {
		&UBlueprintFunctionNodeSpawner::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintFunctionNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFunctionNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintFunctionNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UBlueprintFunctionNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintFunctionNodeSpawner.OuterSingleton, Z_Construct_UClass_UBlueprintFunctionNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintFunctionNodeSpawner.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintFunctionNodeSpawner>()
	{
		return UBlueprintFunctionNodeSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintFunctionNodeSpawner);
	UBlueprintFunctionNodeSpawner::~UBlueprintFunctionNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintFunctionNodeSpawner, UBlueprintFunctionNodeSpawner::StaticClass, TEXT("UBlueprintFunctionNodeSpawner"), &Z_Registration_Info_UClass_UBlueprintFunctionNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintFunctionNodeSpawner), 2086853242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_1817577420(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFunctionNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
