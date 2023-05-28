// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusDeformerInstance.h"
#include "ComputeFramework/ComputeGraphInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDeformerInstance() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeGraph_NoRegister();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeGraphInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformerInstanceSettings();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformer_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceSettings();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformerInstanceSettings_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableContainer_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo;
class UScriptStruct* FOptimusDeformerInstanceExecInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusDeformerInstanceExecInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusDeformerInstanceExecInfo>()
{
	return FOptimusDeformerInstanceExecInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GraphType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComputeGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraphInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComputeGraphInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure with cached state for a single compute graph. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Structure with cached state for a single compute graph." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusDeformerInstanceExecInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphName_MetaData[] = {
		{ "Comment", "/** The name of the graph */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The name of the graph" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDeformerInstanceExecInfo, GraphName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType_MetaData[] = {
		{ "Comment", "/** The graph type. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The graph type." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType = { "GraphType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDeformerInstanceExecInfo, GraphType), Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType_MetaData)) }; // 818714182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraph_MetaData[] = {
		{ "Comment", "/** The ComputeGraph asset. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The ComputeGraph asset." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraph = { "ComputeGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDeformerInstanceExecInfo, ComputeGraph), Z_Construct_UClass_UComputeGraph_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraphInstance_MetaData[] = {
		{ "Comment", "/** The cached state for the ComputeGraph. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The cached state for the ComputeGraph." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraphInstance = { "ComputeGraphInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDeformerInstanceExecInfo, ComputeGraphInstance), Z_Construct_UScriptStruct_FComputeGraphInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraphInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraphInstance_MetaData)) }; // 1452545955
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_GraphType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewProp_ComputeGraphInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusDeformerInstanceExecInfo",
		sizeof(FOptimusDeformerInstanceExecInfo),
		alignof(FOptimusDeformerInstanceExecInfo),
		Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding;
class UScriptStruct* FOptimusDeformerInstanceComponentBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusDeformerInstanceComponentBinding"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusDeformerInstanceComponentBinding>()
{
	return FOptimusDeformerInstanceComponentBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProviderName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProviderName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Defines a binding between a component provider in the graph and an actor component in the component hierarchy on\n *  the actor whose deformable component we're bound to.\n */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Defines a binding between a component provider in the graph and an actor component in the component hierarchy on\nthe actor whose deformable component we're bound to." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusDeformerInstanceComponentBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ProviderName_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Binding name on deformer graph. */" },
		{ "DisplayName", "Binding" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Binding name on deformer graph." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ProviderName = { "ProviderName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDeformerInstanceComponentBinding, ProviderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ProviderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ProviderName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Component name to bind. This should be sanitized before storage. */" },
		{ "DisplayName", "Component" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Component name to bind. This should be sanitized before storage." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDeformerInstanceComponentBinding, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ComponentName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ProviderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewProp_ComponentName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusDeformerInstanceComponentBinding",
		sizeof(FOptimusDeformerInstanceComponentBinding),
		alignof(FOptimusDeformerInstanceComponentBinding),
		Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.InnerSingleton, Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding.InnerSingleton;
	}
	void UOptimusDeformerInstanceSettings::StaticRegisterNativesUOptimusDeformerInstanceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeformerInstanceSettings);
	UClass* Z_Construct_UClass_UOptimusDeformerInstanceSettings_NoRegister()
	{
		return UOptimusDeformerInstanceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Deformer_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Deformer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshDeformerInstanceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OptimusDeformerInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Deformer_MetaData[] = {
		{ "Comment", "/** Stored weak pointer to a deformer. This is only required by the details customization for resolving binding class types. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Stored weak pointer to a deformer. This is only required by the details customization for resolving binding class types." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Deformer = { "Deformer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformerInstanceSettings, Deformer), Z_Construct_UClass_UOptimusDeformer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Deformer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Deformer_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding, METADATA_PARAMS(nullptr, 0) }; // 680909675
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings_MetaData[] = {
		{ "Category", "Deformer|DeformerSettings" },
		{ "Comment", "/** Array of binding descriptions. This is fixed and used by GetComponentBindings() to resolve final bindings for a given context. */" },
		{ "DisplayName", "Component Bindings" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Array of binding descriptions. This is fixed and used by GetComponentBindings() to resolve final bindings for a given context." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0040000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformerInstanceSettings, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings_MetaData)) }; // 680909675
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Deformer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::NewProp_Bindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDeformerInstanceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::ClassParams = {
		&UOptimusDeformerInstanceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusDeformerInstanceSettings()
	{
		if (!Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.OuterSingleton, Z_Construct_UClass_UOptimusDeformerInstanceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDeformerInstanceSettings>()
	{
		return UOptimusDeformerInstanceSettings::StaticClass();
	}
	UOptimusDeformerInstanceSettings::UOptimusDeformerInstanceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeformerInstanceSettings);
	UOptimusDeformerInstanceSettings::~UOptimusDeformerInstanceSettings() {}
	DEFINE_FUNCTION(UOptimusDeformerInstance::execEnqueueTriggerGraph)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InTriggerGraphName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnqueueTriggerGraph(Z_Param_InTriggerGraphName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusDeformerInstance::execGetVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOptimusVariableDescription*>*)Z_Param__Result=P_THIS->GetVariables();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusDeformerInstance::execSetTransformVariable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTransformVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusDeformerInstance::execSetVector4Variable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVector4Variable(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusDeformerInstance::execSetVectorVariable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetVectorVariable(Z_Param_InVariableName,Z_Param_Out_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusDeformerInstance::execSetFloatVariable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetFloatVariable(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusDeformerInstance::execSetIntVariable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetIntVariable(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusDeformerInstance::execSetBoolVariable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InVariableName);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBoolVariable(Z_Param_InVariableName,Z_Param_InValue);
		P_NATIVE_END;
	}
	void UOptimusDeformerInstance::StaticRegisterNativesUOptimusDeformerInstance()
	{
		UClass* Class = UOptimusDeformerInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnqueueTriggerGraph", &UOptimusDeformerInstance::execEnqueueTriggerGraph },
			{ "GetVariables", &UOptimusDeformerInstance::execGetVariables },
			{ "SetBoolVariable", &UOptimusDeformerInstance::execSetBoolVariable },
			{ "SetFloatVariable", &UOptimusDeformerInstance::execSetFloatVariable },
			{ "SetIntVariable", &UOptimusDeformerInstance::execSetIntVariable },
			{ "SetTransformVariable", &UOptimusDeformerInstance::execSetTransformVariable },
			{ "SetVector4Variable", &UOptimusDeformerInstance::execSetVector4Variable },
			{ "SetVectorVariable", &UOptimusDeformerInstance::execSetVectorVariable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics
	{
		struct OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms
		{
			FName InTriggerGraphName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTriggerGraphName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_InTriggerGraphName = { "InTriggerGraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms, InTriggerGraphName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_InTriggerGraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Trigger a named trigger graph to run on the next tick */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Trigger a named trigger graph to run on the next tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "EnqueueTriggerGraph", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::OptimusDeformerInstance_eventEnqueueTriggerGraph_Parms), Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics
	{
		struct OptimusDeformerInstance_eventGetVariables_Parms
		{
			TArray<UOptimusVariableDescription*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusVariableDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventGetVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Get an array containing all the variables. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Get an array containing all the variables." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "GetVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::OptimusDeformerInstance_eventGetVariables_Parms), Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics
	{
		struct OptimusDeformerInstance_eventSetBoolVariable_Parms
		{
			FName InVariableName;
			bool InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetBoolVariable_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((OptimusDeformerInstance_eventSetBoolVariable_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetBoolVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusDeformerInstance_eventSetBoolVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetBoolVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Set the value of a boolean variable. */" },
		{ "DisplayName", "Set Variable (Boolean)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Set the value of a boolean variable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetBoolVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::OptimusDeformerInstance_eventSetBoolVariable_Parms), Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics
	{
		struct OptimusDeformerInstance_eventSetFloatVariable_Parms
		{
			FName InVariableName;
			double InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetFloatVariable_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetFloatVariable_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusDeformerInstance_eventSetFloatVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetFloatVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Set the value of a float variable. */" },
		{ "DisplayName", "Set Variable (Float)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Set the value of a float variable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetFloatVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::OptimusDeformerInstance_eventSetFloatVariable_Parms), Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics
	{
		struct OptimusDeformerInstance_eventSetIntVariable_Parms
		{
			FName InVariableName;
			int32 InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetIntVariable_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetIntVariable_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusDeformerInstance_eventSetIntVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetIntVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Set the value of an integer variable. */" },
		{ "DisplayName", "Set Variable (Integer)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Set the value of an integer variable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetIntVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::OptimusDeformerInstance_eventSetIntVariable_Parms), Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics
	{
		struct OptimusDeformerInstance_eventSetTransformVariable_Parms
		{
			FName InVariableName;
			FTransform InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetTransformVariable_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetTransformVariable_Parms, InValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusDeformerInstance_eventSetTransformVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetTransformVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Set the value of a transform variable. */" },
		{ "DisplayName", "Set Variable (Transform)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Set the value of a transform variable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetTransformVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::OptimusDeformerInstance_eventSetTransformVariable_Parms), Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics
	{
		struct OptimusDeformerInstance_eventSetVector4Variable_Parms
		{
			FName InVariableName;
			FVector4 InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVector4Variable_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVector4Variable_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusDeformerInstance_eventSetVector4Variable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetVector4Variable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Set the value of a 4-vector variable. */" },
		{ "DisplayName", "Set Variable (Vector4)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Set the value of a 4-vector variable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetVector4Variable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::OptimusDeformerInstance_eventSetVector4Variable_Parms), Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics
	{
		struct OptimusDeformerInstance_eventSetVectorVariable_Parms
		{
			FName InVariableName;
			FVector InValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVectorVariable_Parms, InVariableName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformerInstance_eventSetVectorVariable_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InValue_MetaData)) };
	void Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OptimusDeformerInstance_eventSetVectorVariable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(OptimusDeformerInstance_eventSetVectorVariable_Parms), &Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InVariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Deformer" },
		{ "Comment", "/** Set the value of a 3-vector variable. */" },
		{ "DisplayName", "Set Variable (Vector)" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Set the value of a 3-vector variable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformerInstance, nullptr, "SetVectorVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::OptimusDeformerInstance_eventSetVectorVariable_Parms), Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeformerInstance);
	UClass* Z_Construct_UClass_UOptimusDeformerInstance_NoRegister()
	{
		return UOptimusDeformerInstance::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusDeformerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InstanceSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComputeGraphExecInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraphExecInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComputeGraphExecInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Variables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusDeformerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshDeformerInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptimusDeformerInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_EnqueueTriggerGraph, "EnqueueTriggerGraph" }, // 3961325305
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_GetVariables, "GetVariables" }, // 944626163
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetBoolVariable, "SetBoolVariable" }, // 4064448354
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetFloatVariable, "SetFloatVariable" }, // 3798380279
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetIntVariable, "SetIntVariable" }, // 888553200
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetTransformVariable, "SetTransformVariable" }, // 3338602221
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetVector4Variable, "SetVector4Variable" }, // 3681567111
		{ &Z_Construct_UFunction_UOptimusDeformerInstance_SetVectorVariable, "SetVectorVariable" }, // 2152008950
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformerInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Class representing an instance of an Optimus Mesh Deformer.\n * This implements the UMeshDeformerInstance interface to enqueue the graph execution.\n * It also contains the per instance deformer variable state and local state for each of the graphs in the deformer.\n */" },
		{ "IncludePath", "OptimusDeformerInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Class representing an instance of an Optimus Mesh Deformer.\nThis implements the UMeshDeformerInstance interface to enqueue the graph execution.\nIt also contains the per instance deformer variable state and local state for each of the graphs in the deformer." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Comment", "/** The Mesh Component that owns this Mesh Deformer Instance. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The Mesh Component that owns this Mesh Deformer Instance." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformerInstance, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_InstanceSettings_MetaData[] = {
		{ "Comment", "/** The settings for this Mesh Deformer Instance. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "The settings for this Mesh Deformer Instance." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_InstanceSettings = { "InstanceSettings", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformerInstance, InstanceSettings), Z_Construct_UClass_UOptimusDeformerInstanceSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_InstanceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_InstanceSettings_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos_Inner = { "ComputeGraphExecInfos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo, METADATA_PARAMS(nullptr, 0) }; // 1276845932
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos_MetaData[] = {
		{ "Comment", "/** An array of state. One for each graph owned by the deformer. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "An array of state. One for each graph owned by the deformer." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos = { "ComputeGraphExecInfos", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformerInstance, ComputeGraphExecInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos_MetaData)) }; // 1276845932
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_Variables_MetaData[] = {
		{ "Comment", "/** Storage for variable data. */" },
		{ "ModuleRelativePath", "Public/OptimusDeformerInstance.h" },
		{ "ToolTip", "Storage for variable data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformerInstance, Variables), Z_Construct_UClass_UOptimusVariableContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_Variables_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDeformerInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_InstanceSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_ComputeGraphExecInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformerInstance_Statics::NewProp_Variables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusDeformerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDeformerInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeformerInstance_Statics::ClassParams = {
		&UOptimusDeformerInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOptimusDeformerInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstance_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformerInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusDeformerInstance()
	{
		if (!Z_Registration_Info_UClass_UOptimusDeformerInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeformerInstance.OuterSingleton, Z_Construct_UClass_UOptimusDeformerInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusDeformerInstance.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDeformerInstance>()
	{
		return UOptimusDeformerInstance::StaticClass();
	}
	UOptimusDeformerInstance::UOptimusDeformerInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeformerInstance);
	UOptimusDeformerInstance::~UOptimusDeformerInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics::ScriptStructInfo[] = {
		{ FOptimusDeformerInstanceExecInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusDeformerInstanceExecInfo_Statics::NewStructOps, TEXT("OptimusDeformerInstanceExecInfo"), &Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceExecInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusDeformerInstanceExecInfo), 1276845932U) },
		{ FOptimusDeformerInstanceComponentBinding::StaticStruct, Z_Construct_UScriptStruct_FOptimusDeformerInstanceComponentBinding_Statics::NewStructOps, TEXT("OptimusDeformerInstanceComponentBinding"), &Z_Registration_Info_UScriptStruct_OptimusDeformerInstanceComponentBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusDeformerInstanceComponentBinding), 680909675U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDeformerInstanceSettings, UOptimusDeformerInstanceSettings::StaticClass, TEXT("UOptimusDeformerInstanceSettings"), &Z_Registration_Info_UClass_UOptimusDeformerInstanceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeformerInstanceSettings), 542283146U) },
		{ Z_Construct_UClass_UOptimusDeformerInstance, UOptimusDeformerInstance::StaticClass, TEXT("UOptimusDeformerInstance"), &Z_Registration_Info_UClass_UOptimusDeformerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeformerInstance), 1450007080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_1909149658(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformerInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
