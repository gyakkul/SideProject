// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/SingleSelectionMeshEditingTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleSelectionMeshEditingTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void USingleSelectionMeshEditingToolBuilder::StaticRegisterNativesUSingleSelectionMeshEditingToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleSelectionMeshEditingToolBuilder);
	UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_NoRegister()
	{
		return USingleSelectionMeshEditingToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USingleSelectionMeshEditingToolBuilder is a base tool builder for single\n * selection tools that define a common set of ToolTarget interfaces required\n * for editing meshes.\n */" },
		{ "IncludePath", "BaseTools/SingleSelectionMeshEditingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleSelectionMeshEditingTool.h" },
		{ "ToolTip", "USingleSelectionMeshEditingToolBuilder is a base tool builder for single\nselection tools that define a common set of ToolTarget interfaces required\nfor editing meshes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleSelectionMeshEditingToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::ClassParams = {
		&USingleSelectionMeshEditingToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.OuterSingleton, Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<USingleSelectionMeshEditingToolBuilder>()
	{
		return USingleSelectionMeshEditingToolBuilder::StaticClass();
	}
	USingleSelectionMeshEditingToolBuilder::USingleSelectionMeshEditingToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleSelectionMeshEditingToolBuilder);
	USingleSelectionMeshEditingToolBuilder::~USingleSelectionMeshEditingToolBuilder() {}
	void USingleSelectionMeshEditingTool::StaticRegisterNativesUSingleSelectionMeshEditingTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleSelectionMeshEditingTool);
	UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool_NoRegister()
	{
		return USingleSelectionMeshEditingTool::StaticClass();
	}
	struct Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TargetWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputSelection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Single Selection Mesh Editing tool base class.\n */" },
		{ "IncludePath", "BaseTools/SingleSelectionMeshEditingTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/SingleSelectionMeshEditingTool.h" },
		{ "ToolTip", "Single Selection Mesh Editing tool base class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_TargetWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/SingleSelectionMeshEditingTool.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USingleSelectionMeshEditingTool, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_TargetWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_TargetWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_InputSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/SingleSelectionMeshEditingTool.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_InputSelection = { "InputSelection", nullptr, (EPropertyFlags)0x0024080020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USingleSelectionMeshEditingTool, InputSelection_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_InputSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_InputSelection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_TargetWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::NewProp_InputSelection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleSelectionMeshEditingTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::ClassParams = {
		&USingleSelectionMeshEditingTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool()
	{
		if (!Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.OuterSingleton, Z_Construct_UClass_USingleSelectionMeshEditingTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USingleSelectionMeshEditingTool.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<USingleSelectionMeshEditingTool>()
	{
		return USingleSelectionMeshEditingTool::StaticClass();
	}
	USingleSelectionMeshEditingTool::USingleSelectionMeshEditingTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleSelectionMeshEditingTool);
	USingleSelectionMeshEditingTool::~USingleSelectionMeshEditingTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleSelectionMeshEditingTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleSelectionMeshEditingTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder, USingleSelectionMeshEditingToolBuilder::StaticClass, TEXT("USingleSelectionMeshEditingToolBuilder"), &Z_Registration_Info_UClass_USingleSelectionMeshEditingToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleSelectionMeshEditingToolBuilder), 4119177848U) },
		{ Z_Construct_UClass_USingleSelectionMeshEditingTool, USingleSelectionMeshEditingTool::StaticClass, TEXT("USingleSelectionMeshEditingTool"), &Z_Registration_Info_UClass_USingleSelectionMeshEditingTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleSelectionMeshEditingTool), 3812509623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleSelectionMeshEditingTool_h_529349343(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleSelectionMeshEditingTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_SingleSelectionMeshEditingTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
