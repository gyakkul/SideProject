// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/BlueprintNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UBlueprintNodeSpawner::StaticRegisterNativesUBlueprintNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintNodeSpawner);
	UClass* Z_Construct_UClass_UBlueprintNodeSpawner_NoRegister()
	{
		return UBlueprintNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NodeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Intended to be wrapped and used by FBlueprintActionMenuItem. Rather than \n * sub-classing the menu item, we choose to subclass this instead (for \n * different node types). That way, we get the type inference that comes with  \n * UObjects (and we don't have to continuously compare identification strings). \n */" },
		{ "IncludePath", "BlueprintNodeSpawner.h" },
		{ "ModuleRelativePath", "Public/BlueprintNodeSpawner.h" },
		{ "ToolTip", "Intended to be wrapped and used by FBlueprintActionMenuItem. Rather than\nsub-classing the menu item, we choose to subclass this instead (for\ndifferent node types). That way, we get the type inference that comes with\nUObjects (and we don't have to continuously compare identification strings)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintNodeSpawner_Statics::NewProp_NodeClass_MetaData[] = {
		{ "Comment", "/** Holds the node type that this spawner will instantiate. */" },
		{ "ModuleRelativePath", "Public/BlueprintNodeSpawner.h" },
		{ "ToolTip", "Holds the node type that this spawner will instantiate." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintNodeSpawner_Statics::NewProp_NodeClass = { "NodeClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintNodeSpawner, NodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintNodeSpawner_Statics::NewProp_NodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintNodeSpawner_Statics::NewProp_NodeClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintNodeSpawner_Statics::NewProp_NodeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintNodeSpawner_Statics::ClassParams = {
		&UBlueprintNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UBlueprintNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintNodeSpawner.OuterSingleton, Z_Construct_UClass_UBlueprintNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintNodeSpawner.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintNodeSpawner>()
	{
		return UBlueprintNodeSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintNodeSpawner);
	UBlueprintNodeSpawner::~UBlueprintNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintNodeSpawner, UBlueprintNodeSpawner::StaticClass, TEXT("UBlueprintNodeSpawner"), &Z_Registration_Info_UClass_UBlueprintNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintNodeSpawner), 1730545635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_3510211268(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Public_BlueprintNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
