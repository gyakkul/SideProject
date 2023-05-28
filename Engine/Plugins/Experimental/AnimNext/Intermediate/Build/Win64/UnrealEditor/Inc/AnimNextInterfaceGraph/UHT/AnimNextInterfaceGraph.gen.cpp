// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/AnimNextInterfaceGraph.h"
#include "RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextInterfaceGraph() {}
// Cross Module References
	ANIMNEXTINTERFACE_API UClass* Z_Construct_UClass_UAnimNextInterface_NoRegister();
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterfaceGraph();
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	RIGVM_API UClass* Z_Construct_UClass_URigVM_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraph();
// End Cross Module References
	void UAnimNextInterfaceGraph::StaticRegisterNativesUAnimNextInterfaceGraph()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextInterfaceGraph);
	UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_NoRegister()
	{
		return UAnimNextInterfaceGraph::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextInterfaceGraph_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigVM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RigVM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRuntimeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMRuntimeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnTypeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnTypeStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReturnTypeStruct;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A user-created graph of logic used to supply data\n" },
		{ "IncludePath", "AnimNextInterfaceGraph.h" },
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph.h" },
		{ "ToolTip", "A user-created graph of logic used to supply data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_RigVM_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_RigVM = { "RigVM", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph, RigVM), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_RigVM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_RigVM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_VMRuntimeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_VMRuntimeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_VMRuntimeSettings_MetaData)) }; // 2495750411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_ReturnTypeName_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_ReturnTypeName = { "ReturnTypeName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph, ReturnTypeName), METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_ReturnTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_ReturnTypeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_ReturnTypeStruct_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_ReturnTypeStruct = { "ReturnTypeStruct", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph, ReturnTypeStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_ReturnTypeStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_ReturnTypeStruct_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_EditorData_MetaData[] = {
		{ "Category", "Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_EditorData = { "EditorData", nullptr, (EPropertyFlags)0x00460008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph, EditorData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_EditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_EditorData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_RigVM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_VMRuntimeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_ReturnTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_ReturnTypeStruct,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::NewProp_EditorData,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimNextInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimNextInterfaceGraph, IAnimNextInterface), false },  // 3851592269
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextInterfaceGraph>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::ClassParams = {
		&UAnimNextInterfaceGraph::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNextInterfaceGraph()
	{
		if (!Z_Registration_Info_UClass_UAnimNextInterfaceGraph.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextInterfaceGraph.OuterSingleton, Z_Construct_UClass_UAnimNextInterfaceGraph_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextInterfaceGraph.OuterSingleton;
	}
	template<> ANIMNEXTINTERFACEGRAPH_API UClass* StaticClass<UAnimNextInterfaceGraph>()
	{
		return UAnimNextInterfaceGraph::StaticClass();
	}
	UAnimNextInterfaceGraph::UAnimNextInterfaceGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextInterfaceGraph);
	UAnimNextInterfaceGraph::~UAnimNextInterfaceGraph() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimNextInterfaceGraph_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimNextInterfaceGraph_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextInterfaceGraph, UAnimNextInterfaceGraph::StaticClass, TEXT("UAnimNextInterfaceGraph"), &Z_Registration_Info_UClass_UAnimNextInterfaceGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextInterfaceGraph), 2114483580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimNextInterfaceGraph_h_490698293(TEXT("/Script/AnimNextInterfaceGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimNextInterfaceGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Internal_AnimNextInterfaceGraph_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
