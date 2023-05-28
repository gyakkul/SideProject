// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintAssetNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintAssetNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintAssetNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintAssetNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UBlueprintAssetNodeSpawner::StaticRegisterNativesUBlueprintAssetNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintAssetNodeSpawner);
	UClass* Z_Construct_UClass_UBlueprintAssetNodeSpawner_NoRegister()
	{
		return UBlueprintAssetNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes care of spawning various asset related nodes (nodes associated with \n * an asset).\n */" },
		{ "IncludePath", "BlueprintAssetNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintAssetNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning various asset related nodes (nodes associated with\nan asset)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::NewProp_AssetData_MetaData[] = {
		{ "Comment", "/** The asset to configure new nodes with. */" },
		{ "ModuleRelativePath", "Classes/BlueprintAssetNodeSpawner.h" },
		{ "ToolTip", "The asset to configure new nodes with." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintAssetNodeSpawner, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::NewProp_AssetData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::NewProp_AssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintAssetNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::ClassParams = {
		&UBlueprintAssetNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintAssetNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UBlueprintAssetNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintAssetNodeSpawner.OuterSingleton, Z_Construct_UClass_UBlueprintAssetNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintAssetNodeSpawner.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintAssetNodeSpawner>()
	{
		return UBlueprintAssetNodeSpawner::StaticClass();
	}
	UBlueprintAssetNodeSpawner::UBlueprintAssetNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintAssetNodeSpawner);
	UBlueprintAssetNodeSpawner::~UBlueprintAssetNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintAssetNodeSpawner, UBlueprintAssetNodeSpawner::StaticClass, TEXT("UBlueprintAssetNodeSpawner"), &Z_Registration_Info_UClass_UBlueprintAssetNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintAssetNodeSpawner), 691050777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_141967206(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintAssetNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
