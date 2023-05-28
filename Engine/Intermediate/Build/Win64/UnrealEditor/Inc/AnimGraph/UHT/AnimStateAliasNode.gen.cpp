// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimStateAliasNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateAliasNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateAliasNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateAliasNode_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimStateAliasNode::StaticRegisterNativesUAnimStateAliasNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimStateAliasNode);
	UClass* Z_Construct_UClass_UAnimStateAliasNode_NoRegister()
	{
		return UAnimStateAliasNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateAliasNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGlobalAlias_MetaData[];
#endif
		static void NewProp_bGlobalAlias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalAlias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateAliasName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateAliasName;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_AliasedStateNodes_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AliasedStateNodes_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AliasedStateNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateAliasNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimStateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateAliasNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimStateAliasNode.h" },
		{ "ModuleRelativePath", "Public/AnimStateAliasNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_bGlobalAlias_MetaData[] = {
		{ "Category", "State Alias" },
		{ "ModuleRelativePath", "Public/AnimStateAliasNode.h" },
	};
#endif
	void Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_bGlobalAlias_SetBit(void* Obj)
	{
		((UAnimStateAliasNode*)Obj)->bGlobalAlias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_bGlobalAlias = { "bGlobalAlias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimStateAliasNode), &Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_bGlobalAlias_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_bGlobalAlias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_bGlobalAlias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_StateAliasName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimStateAliasNode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_StateAliasName = { "StateAliasName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateAliasNode, StateAliasName), METADATA_PARAMS(Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_StateAliasName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_StateAliasName_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_AliasedStateNodes_ElementProp = { "AliasedStateNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimStateNodeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_AliasedStateNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimStateAliasNode.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_AliasedStateNodes = { "AliasedStateNodes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateAliasNode, AliasedStateNodes), METADATA_PARAMS(Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_AliasedStateNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_AliasedStateNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimStateAliasNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_bGlobalAlias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_StateAliasName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_AliasedStateNodes_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateAliasNode_Statics::NewProp_AliasedStateNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateAliasNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateAliasNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateAliasNode_Statics::ClassParams = {
		&UAnimStateAliasNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimStateAliasNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateAliasNode_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateAliasNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateAliasNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateAliasNode()
	{
		if (!Z_Registration_Info_UClass_UAnimStateAliasNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimStateAliasNode.OuterSingleton, Z_Construct_UClass_UAnimStateAliasNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimStateAliasNode.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimStateAliasNode>()
	{
		return UAnimStateAliasNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateAliasNode);
	UAnimStateAliasNode::~UAnimStateAliasNode() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateAliasNode)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimStateAliasNode, UAnimStateAliasNode::StaticClass, TEXT("UAnimStateAliasNode"), &Z_Registration_Info_UClass_UAnimStateAliasNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimStateAliasNode), 802119293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_1823517316(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateAliasNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
