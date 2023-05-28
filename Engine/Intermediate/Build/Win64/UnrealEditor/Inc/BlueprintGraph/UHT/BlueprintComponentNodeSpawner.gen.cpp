// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintComponentNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintComponentNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintComponentNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintComponentNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UBlueprintComponentNodeSpawner::StaticRegisterNativesUBlueprintComponentNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintComponentNodeSpawner);
	UClass* Z_Construct_UClass_UBlueprintComponentNodeSpawner_NoRegister()
	{
		return UBlueprintComponentNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentAssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes care of spawning UK2Node_AddComponent nodes. Acts as the \"action\" \n * portion of certain FBlueprintActionMenuItems. Evolved from \n * FEdGraphSchemaAction_K2AddComponent.\n */" },
		{ "IncludePath", "BlueprintComponentNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintComponentNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning UK2Node_AddComponent nodes. Acts as the \"action\"\nportion of certain FBlueprintActionMenuItems. Evolved from\nFEdGraphSchemaAction_K2AddComponent." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Comment", "/** The component class to configure new nodes with. */" },
		{ "ModuleRelativePath", "Classes/BlueprintComponentNodeSpawner.h" },
		{ "ToolTip", "The component class to configure new nodes with." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintComponentNodeSpawner, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Comment", "/** The name of the component class to configure new nodes with. */" },
		{ "ModuleRelativePath", "Classes/BlueprintComponentNodeSpawner.h" },
		{ "ToolTip", "The name of the component class to configure new nodes with." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintComponentNodeSpawner, ComponentName), METADATA_PARAMS(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentAssetName_MetaData[] = {
		{ "Comment", "/** The name of the asset name that needs to be loaded */" },
		{ "ModuleRelativePath", "Classes/BlueprintComponentNodeSpawner.h" },
		{ "ToolTip", "The name of the asset name that needs to be loaded" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentAssetName = { "ComponentAssetName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintComponentNodeSpawner, ComponentAssetName), METADATA_PARAMS(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentAssetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::NewProp_ComponentAssetName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintComponentNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::ClassParams = {
		&UBlueprintComponentNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintComponentNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UBlueprintComponentNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintComponentNodeSpawner.OuterSingleton, Z_Construct_UClass_UBlueprintComponentNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintComponentNodeSpawner.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintComponentNodeSpawner>()
	{
		return UBlueprintComponentNodeSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintComponentNodeSpawner);
	UBlueprintComponentNodeSpawner::~UBlueprintComponentNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintComponentNodeSpawner, UBlueprintComponentNodeSpawner::StaticClass, TEXT("UBlueprintComponentNodeSpawner"), &Z_Registration_Info_UClass_UBlueprintComponentNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintComponentNodeSpawner), 1700259699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_1159384149(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintComponentNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
