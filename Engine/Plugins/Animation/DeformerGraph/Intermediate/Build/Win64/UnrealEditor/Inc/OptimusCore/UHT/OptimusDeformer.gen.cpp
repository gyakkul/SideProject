// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusDeformer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDeformer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusActionStack_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBindingContainer();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBindingContainer_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeGraph_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformer();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDeformer_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraph_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPathResolver_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceContainer();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceContainer_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceDescription_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableContainer();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableContainer_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister();
	OPTIMUSCORE_API UEnum* Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusComputeGraphInfo();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo;
class UScriptStruct* FOptimusComputeGraphInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusComputeGraphInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusComputeGraphInfo>()
{
	return FOptimusComputeGraphInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GraphType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GraphType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComputeGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusComputeGraphInfo>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType = { "GraphType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusComputeGraphInfo, GraphType), Z_Construct_UEnum_OptimusCore_EOptimusNodeGraphType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType_MetaData)) }; // 818714182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphName_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusComputeGraphInfo, GraphName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_ComputeGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_ComputeGraph = { "ComputeGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusComputeGraphInfo, ComputeGraph), Z_Construct_UClass_UOptimusComputeGraph_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_ComputeGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_ComputeGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_GraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewProp_ComputeGraph,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusComputeGraphInfo",
		sizeof(FOptimusComputeGraphInfo),
		alignof(FOptimusComputeGraphInfo),
		Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusComputeGraphInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo.InnerSingleton;
	}
	void UOptimusComponentSourceBindingContainer::StaticRegisterNativesUOptimusComponentSourceBindingContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusComponentSourceBindingContainer);
	UClass* Z_Construct_UClass_UOptimusComponentSourceBindingContainer_NoRegister()
	{
		return UOptimusComponentSourceBindingContainer::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A container class that owns component source bindings. This is used to ensure we don't end up\n  * with a namespace clash between graphs, variables, bindings and resources.\n  */" },
		{ "IncludePath", "OptimusDeformer.h" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
		{ "ToolTip", "A container class that owns component source bindings. This is used to ensure we don't end up\nwith a namespace clash between graphs, variables, bindings and resources." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusComponentSourceBindingContainer, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::NewProp_Bindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusComponentSourceBindingContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::ClassParams = {
		&UOptimusComponentSourceBindingContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusComponentSourceBindingContainer()
	{
		if (!Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.OuterSingleton, Z_Construct_UClass_UOptimusComponentSourceBindingContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusComponentSourceBindingContainer>()
	{
		return UOptimusComponentSourceBindingContainer::StaticClass();
	}
	UOptimusComponentSourceBindingContainer::UOptimusComponentSourceBindingContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusComponentSourceBindingContainer);
	UOptimusComponentSourceBindingContainer::~UOptimusComponentSourceBindingContainer() {}
	void UOptimusVariableContainer::StaticRegisterNativesUOptimusVariableContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusVariableContainer);
	UClass* Z_Construct_UClass_UOptimusVariableContainer_NoRegister()
	{
		return UOptimusVariableContainer::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusVariableContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Descriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Descriptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusVariableContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusVariableContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A container class that owns variable descriptors. This is used to ensure we don't end up\n  * with a namespace clash between graphs, variables and resources.\n  */" },
		{ "IncludePath", "OptimusDeformer.h" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
		{ "ToolTip", "A container class that owns variable descriptors. This is used to ensure we don't end up\nwith a namespace clash between graphs, variables and resources." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions_Inner = { "Descriptions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusVariableDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions = { "Descriptions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusVariableContainer, Descriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusVariableContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableContainer_Statics::NewProp_Descriptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusVariableContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusVariableContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusVariableContainer_Statics::ClassParams = {
		&UOptimusVariableContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusVariableContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableContainer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusVariableContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusVariableContainer()
	{
		if (!Z_Registration_Info_UClass_UOptimusVariableContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusVariableContainer.OuterSingleton, Z_Construct_UClass_UOptimusVariableContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusVariableContainer.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusVariableContainer>()
	{
		return UOptimusVariableContainer::StaticClass();
	}
	UOptimusVariableContainer::UOptimusVariableContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusVariableContainer);
	UOptimusVariableContainer::~UOptimusVariableContainer() {}
	void UOptimusResourceContainer::StaticRegisterNativesUOptimusResourceContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusResourceContainer);
	UClass* Z_Construct_UClass_UOptimusResourceContainer_NoRegister()
	{
		return UOptimusResourceContainer::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusResourceContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Descriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Descriptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusResourceContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusResourceContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A container class that owns resource descriptors. This is used to ensure we don't end up\n  * with a namespace clash between graphs, variables and resources.\n  */" },
		{ "IncludePath", "OptimusDeformer.h" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
		{ "ToolTip", "A container class that owns resource descriptors. This is used to ensure we don't end up\nwith a namespace clash between graphs, variables and resources." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions_Inner = { "Descriptions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions = { "Descriptions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusResourceContainer, Descriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusResourceContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceContainer_Statics::NewProp_Descriptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusResourceContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusResourceContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusResourceContainer_Statics::ClassParams = {
		&UOptimusResourceContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusResourceContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceContainer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusResourceContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusResourceContainer()
	{
		if (!Z_Registration_Info_UClass_UOptimusResourceContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusResourceContainer.OuterSingleton, Z_Construct_UClass_UOptimusResourceContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusResourceContainer.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusResourceContainer>()
	{
		return UOptimusResourceContainer::StaticClass();
	}
	UOptimusResourceContainer::UOptimusResourceContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusResourceContainer);
	UOptimusResourceContainer::~UOptimusResourceContainer() {}
	DEFINE_FUNCTION(UOptimusDeformer::execGetComponentBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOptimusComponentSourceBinding*>*)Z_Param__Result=P_THIS->GetComponentBindings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusDeformer::execGetResources)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOptimusResourceDescription*>*)Z_Param__Result=P_THIS->GetResources();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOptimusDeformer::execGetVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UOptimusVariableDescription*>*)Z_Param__Result=P_THIS->GetVariables();
		P_NATIVE_END;
	}
	void UOptimusDeformer::StaticRegisterNativesUOptimusDeformer()
	{
		UClass* Class = UOptimusDeformer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetComponentBindings", &UOptimusDeformer::execGetComponentBindings },
			{ "GetResources", &UOptimusDeformer::execGetResources },
			{ "GetVariables", &UOptimusDeformer::execGetVariables },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics
	{
		struct OptimusDeformer_eventGetComponentBindings_Parms
		{
			TArray<UOptimusComponentSourceBinding*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformer_eventGetComponentBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformer, nullptr, "GetComponentBindings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::OptimusDeformer_eventGetComponentBindings_Parms), Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics
	{
		struct OptimusDeformer_eventGetResources_Parms
		{
			TArray<UOptimusResourceDescription*> ReturnValue;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusResourceDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformer_eventGetResources_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformer, nullptr, "GetResources", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::OptimusDeformer_eventGetResources_Parms), Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformer_GetResources()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformer_GetResources_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics
	{
		struct OptimusDeformer_eventGetVariables_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusVariableDescription_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OptimusDeformer_eventGetVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOptimusDeformer, nullptr, "GetVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::OptimusDeformer_eventGetVariables_Parms), Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOptimusDeformer_GetVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOptimusDeformer_GetVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDeformer);
	UClass* Z_Construct_UClass_UOptimusDeformer_NoRegister()
	{
		return UOptimusDeformer::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusDeformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComputeGraphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComputeGraphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComputeGraphs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionStack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionStack;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Graphs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graphs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Graphs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Bindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Variables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resources_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Resources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusDeformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshDeformer,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOptimusDeformer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOptimusDeformer_GetComponentBindings, "GetComponentBindings" }, // 3294272110
		{ &Z_Construct_UFunction_UOptimusDeformer_GetResources, "GetResources" }, // 31769438
		{ &Z_Construct_UFunction_UOptimusDeformer_GetVariables, "GetVariables" }, // 919076640
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * A Deformer Graph is an asset that is used to create and control custom deformations on \n  * skeletal meshes.\n  */" },
		{ "IncludePath", "OptimusDeformer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
		{ "ToolTip", "A Deformer Graph is an asset that is used to create and control custom deformations on\nskeletal meshes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformer, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs_Inner = { "ComputeGraphs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusComputeGraphInfo, METADATA_PARAMS(nullptr, 0) }; // 4248044165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs_MetaData[] = {
		{ "Comment", "// The compute graphs to execute.\n" },
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
		{ "ToolTip", "The compute graphs to execute." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs = { "ComputeGraphs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformer, ComputeGraphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs_MetaData)) }; // 4248044165
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ActionStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ActionStack = { "ActionStack", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformer, ActionStack), Z_Construct_UClass_UOptimusActionStack_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ActionStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ActionStack_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs_Inner = { "Graphs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOptimusNodeGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs = { "Graphs", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformer, Graphs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformer, Bindings), Z_Construct_UClass_UOptimusComponentSourceBindingContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Bindings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformer, Variables), Z_Construct_UClass_UOptimusVariableContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Variables_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Resources_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusDeformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Resources = { "Resources", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDeformer, Resources), Z_Construct_UClass_UOptimusResourceContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Resources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Resources_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDeformer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ComputeGraphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_ActionStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Graphs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Variables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDeformer_Statics::NewProp_Resources,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusDeformer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_PreviewMeshProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusDeformer, IInterface_PreviewMeshProvider), false },  // 3026411520
			{ Z_Construct_UClass_UOptimusPathResolver_NoRegister, (int32)VTABLE_OFFSET(UOptimusDeformer, IOptimusPathResolver), false },  // 447281154
			{ Z_Construct_UClass_UOptimusNodeGraphCollectionOwner_NoRegister, (int32)VTABLE_OFFSET(UOptimusDeformer, IOptimusNodeGraphCollectionOwner), false },  // 471769287
			{ Z_Construct_UClass_UOptimusNodeFunctionLibraryOwner_NoRegister, (int32)VTABLE_OFFSET(UOptimusDeformer, IOptimusNodeFunctionLibraryOwner), false },  // 347496708
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusDeformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDeformer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDeformer_Statics::ClassParams = {
		&UOptimusDeformer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOptimusDeformer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusDeformer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDeformer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusDeformer()
	{
		if (!Z_Registration_Info_UClass_UOptimusDeformer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDeformer.OuterSingleton, Z_Construct_UClass_UOptimusDeformer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusDeformer.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDeformer>()
	{
		return UOptimusDeformer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDeformer);
	UOptimusDeformer::~UOptimusDeformer() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusDeformer)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::ScriptStructInfo[] = {
		{ FOptimusComputeGraphInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusComputeGraphInfo_Statics::NewStructOps, TEXT("OptimusComputeGraphInfo"), &Z_Registration_Info_UScriptStruct_OptimusComputeGraphInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusComputeGraphInfo), 4248044165U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusComponentSourceBindingContainer, UOptimusComponentSourceBindingContainer::StaticClass, TEXT("UOptimusComponentSourceBindingContainer"), &Z_Registration_Info_UClass_UOptimusComponentSourceBindingContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusComponentSourceBindingContainer), 682985478U) },
		{ Z_Construct_UClass_UOptimusVariableContainer, UOptimusVariableContainer::StaticClass, TEXT("UOptimusVariableContainer"), &Z_Registration_Info_UClass_UOptimusVariableContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusVariableContainer), 2044937585U) },
		{ Z_Construct_UClass_UOptimusResourceContainer, UOptimusResourceContainer::StaticClass, TEXT("UOptimusResourceContainer"), &Z_Registration_Info_UClass_UOptimusResourceContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusResourceContainer), 4015335606U) },
		{ Z_Construct_UClass_UOptimusDeformer, UOptimusDeformer::StaticClass, TEXT("UOptimusDeformer"), &Z_Registration_Info_UClass_UOptimusDeformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDeformer), 3808220423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_3223885212(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusDeformer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
