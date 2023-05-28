// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_SubGraphReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_SubGraphReference() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_SubGraphReference();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_SubGraphReference_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePinRouter_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeSubGraph_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNode_SubGraphReference::StaticRegisterNativesUOptimusNode_SubGraphReference()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_SubGraphReference);
	UClass* Z_Construct_UClass_UOptimusNode_SubGraphReference_NoRegister()
	{
		return UOptimusNode_SubGraphReference::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_SubGraphReference.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_SubGraphReference.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::NewProp_SubGraph_MetaData[] = {
		{ "Comment", "/** The graph that owns us. This contains all the necessary pin information to add on\n\x09 * the terminal node.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_SubGraphReference.h" },
		{ "ToolTip", "The graph that owns us. This contains all the necessary pin information to add on\nthe terminal node." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::NewProp_SubGraph = { "SubGraph", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_SubGraphReference, SubGraph), Z_Construct_UClass_UOptimusNodeSubGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::NewProp_SubGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::NewProp_SubGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::NewProp_SubGraph,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusNodePinRouter_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_SubGraphReference, IOptimusNodePinRouter), false },  // 162175867
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_SubGraphReference>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::ClassParams = {
		&UOptimusNode_SubGraphReference::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x010000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_SubGraphReference()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.OuterSingleton, Z_Construct_UClass_UOptimusNode_SubGraphReference_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_SubGraphReference.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_SubGraphReference>()
	{
		return UOptimusNode_SubGraphReference::StaticClass();
	}
	UOptimusNode_SubGraphReference::UOptimusNode_SubGraphReference() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_SubGraphReference);
	UOptimusNode_SubGraphReference::~UOptimusNode_SubGraphReference() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SubGraphReference_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SubGraphReference_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_SubGraphReference, UOptimusNode_SubGraphReference::StaticClass, TEXT("UOptimusNode_SubGraphReference"), &Z_Registration_Info_UClass_UOptimusNode_SubGraphReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_SubGraphReference), 268080745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SubGraphReference_h_3038757965(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SubGraphReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_SubGraphReference_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
