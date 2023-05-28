// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/MultiSelectionMeshEditingTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiSelectionMeshEditingTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMultiSelectionTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UMultiSelectionMeshEditingToolBuilder::StaticRegisterNativesUMultiSelectionMeshEditingToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiSelectionMeshEditingToolBuilder);
	UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_NoRegister()
	{
		return UMultiSelectionMeshEditingToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMultiSelectionMeshEditingToolBuilder is a base tool builder for multi\n * selection tools that define a common set of ToolTarget interfaces required\n * for editing meshes.\n */" },
		{ "IncludePath", "BaseTools/MultiSelectionMeshEditingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MultiSelectionMeshEditingTool.h" },
		{ "ToolTip", "UMultiSelectionMeshEditingToolBuilder is a base tool builder for multi\nselection tools that define a common set of ToolTarget interfaces required\nfor editing meshes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiSelectionMeshEditingToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::ClassParams = {
		&UMultiSelectionMeshEditingToolBuilder::StaticClass,
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
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.OuterSingleton, Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMultiSelectionMeshEditingToolBuilder>()
	{
		return UMultiSelectionMeshEditingToolBuilder::StaticClass();
	}
	UMultiSelectionMeshEditingToolBuilder::UMultiSelectionMeshEditingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiSelectionMeshEditingToolBuilder);
	UMultiSelectionMeshEditingToolBuilder::~UMultiSelectionMeshEditingToolBuilder() {}
	void UMultiSelectionMeshEditingTool::StaticRegisterNativesUMultiSelectionMeshEditingTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiSelectionMeshEditingTool);
	UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool_NoRegister()
	{
		return UMultiSelectionMeshEditingTool::StaticClass();
	}
	struct Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Multi Selection Mesh Editing tool base class.\n */" },
		{ "IncludePath", "BaseTools/MultiSelectionMeshEditingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/MultiSelectionMeshEditingTool.h" },
		{ "ToolTip", "Multi Selection Mesh Editing tool base class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/MultiSelectionMeshEditingTool.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiSelectionMeshEditingTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::NewProp_TargetWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::NewProp_TargetWorld_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::NewProp_TargetWorld,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiSelectionMeshEditingTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::ClassParams = {
		&UMultiSelectionMeshEditingTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool()
	{
		if (!Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.OuterSingleton, Z_Construct_UClass_UMultiSelectionMeshEditingTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UMultiSelectionMeshEditingTool>()
	{
		return UMultiSelectionMeshEditingTool::StaticClass();
	}
	UMultiSelectionMeshEditingTool::UMultiSelectionMeshEditingTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiSelectionMeshEditingTool);
	UMultiSelectionMeshEditingTool::~UMultiSelectionMeshEditingTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiSelectionMeshEditingTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiSelectionMeshEditingTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder, UMultiSelectionMeshEditingToolBuilder::StaticClass, TEXT("UMultiSelectionMeshEditingToolBuilder"), &Z_Registration_Info_UClass_UMultiSelectionMeshEditingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiSelectionMeshEditingToolBuilder), 3015247332U) },
		{ Z_Construct_UClass_UMultiSelectionMeshEditingTool, UMultiSelectionMeshEditingTool::StaticClass, TEXT("UMultiSelectionMeshEditingTool"), &Z_Registration_Info_UClass_UMultiSelectionMeshEditingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiSelectionMeshEditingTool), 2941445755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiSelectionMeshEditingTool_h_3215604667(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiSelectionMeshEditingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_MultiSelectionMeshEditingTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
