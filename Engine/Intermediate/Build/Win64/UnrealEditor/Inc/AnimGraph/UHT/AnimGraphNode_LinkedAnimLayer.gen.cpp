// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_LinkedAnimLayer.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_LinkedAnimLayer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_LinkedAnimLayer() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_LinkedAnimLayer::StaticRegisterNativesUAnimGraphNode_LinkedAnimLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_LinkedAnimLayer);
	UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_NoRegister()
	{
		return UAnimGraphNode_LinkedAnimLayer::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterfaceGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_LinkedAnimLayer.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedAnimLayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedAnimLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_LinkedAnimLayer, Node), Z_Construct_UScriptStruct_FAnimNode_LinkedAnimLayer, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::NewProp_Node_MetaData)) }; // 469864276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::NewProp_InterfaceGuid_MetaData[] = {
		{ "Comment", "/** Guid of the named layer graph we refer to */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedAnimLayer.h" },
		{ "ToolTip", "Guid of the named layer graph we refer to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::NewProp_InterfaceGuid = { "InterfaceGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_LinkedAnimLayer, InterfaceGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::NewProp_InterfaceGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::NewProp_InterfaceGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::NewProp_InterfaceGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_LinkedAnimLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::ClassParams = {
		&UAnimGraphNode_LinkedAnimLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimLayer.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimLayer.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_LinkedAnimLayer>()
	{
		return UAnimGraphNode_LinkedAnimLayer::StaticClass();
	}
	UAnimGraphNode_LinkedAnimLayer::UAnimGraphNode_LinkedAnimLayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_LinkedAnimLayer);
	UAnimGraphNode_LinkedAnimLayer::~UAnimGraphNode_LinkedAnimLayer() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_LinkedAnimLayer)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_LinkedAnimLayer, UAnimGraphNode_LinkedAnimLayer::StaticClass, TEXT("UAnimGraphNode_LinkedAnimLayer"), &Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_LinkedAnimLayer), 3378028960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_100938289(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
