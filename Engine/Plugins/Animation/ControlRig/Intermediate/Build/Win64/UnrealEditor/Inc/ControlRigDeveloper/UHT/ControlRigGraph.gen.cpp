// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Graph/ControlRigGraph.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigGraph() {}
// Cross Module References
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraph();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraph_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMController_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEditorSideObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRigDeveloper();
// End Cross Module References
	void UControlRigGraph::StaticRegisterNativesUControlRigGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigGraph);
	UClass* Z_Construct_UClass_UControlRigGraph_NoRegister()
	{
		return UControlRigGraph::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelNodePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModelNodePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFunctionDefinition_MetaData[];
#endif
		static void NewProp_bIsFunctionDefinition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFunctionDefinition;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateController;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigGraph_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/ControlRigGraph.h" },
		{ "ModuleRelativePath", "Public/Graph/ControlRigGraph.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigGraph_Statics::NewProp_ModelNodePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/ControlRigGraph.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigGraph_Statics::NewProp_ModelNodePath = { "ModelNodePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigGraph, ModelNodePath), METADATA_PARAMS(Z_Construct_UClass_UControlRigGraph_Statics::NewProp_ModelNodePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigGraph_Statics::NewProp_ModelNodePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigGraph_Statics::NewProp_bIsFunctionDefinition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/ControlRigGraph.h" },
	};
#endif
	void Z_Construct_UClass_UControlRigGraph_Statics::NewProp_bIsFunctionDefinition_SetBit(void* Obj)
	{
		((UControlRigGraph*)Obj)->bIsFunctionDefinition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigGraph_Statics::NewProp_bIsFunctionDefinition = { "bIsFunctionDefinition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigGraph), &Z_Construct_UClass_UControlRigGraph_Statics::NewProp_bIsFunctionDefinition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigGraph_Statics::NewProp_bIsFunctionDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigGraph_Statics::NewProp_bIsFunctionDefinition_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigGraph_Statics::NewProp_TemplateController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/ControlRigGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigGraph_Statics::NewProp_TemplateController = { "TemplateController", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigGraph, TemplateController), Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigGraph_Statics::NewProp_TemplateController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigGraph_Statics::NewProp_TemplateController_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigGraph_Statics::NewProp_ModelNodePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigGraph_Statics::NewProp_bIsFunctionDefinition,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigGraph_Statics::NewProp_TemplateController,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UControlRigGraph_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URigVMEditorSideObject_NoRegister, (int32)VTABLE_OFFSET(UControlRigGraph, IRigVMEditorSideObject), false },  // 132755185
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigGraph_Statics::ClassParams = {
		&UControlRigGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigGraph_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigGraph_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigGraph()
	{
		if (!Z_Registration_Info_UClass_UControlRigGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigGraph.OuterSingleton, Z_Construct_UClass_UControlRigGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigGraph.OuterSingleton;
	}
	template<> CONTROLRIGDEVELOPER_API UClass* StaticClass<UControlRigGraph>()
	{
		return UControlRigGraph::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigGraph);
	UControlRigGraph::~UControlRigGraph() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigGraph)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigGraph, UControlRigGraph::StaticClass, TEXT("UControlRigGraph"), &Z_Registration_Info_UClass_UControlRigGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigGraph), 2466549953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_987465520(TEXT("/Script/ControlRigDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
