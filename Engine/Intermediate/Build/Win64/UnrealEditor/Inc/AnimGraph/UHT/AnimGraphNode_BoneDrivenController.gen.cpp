// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_BoneDrivenController.h"
#include "BoneControllers/AnimNode_BoneDrivenController.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_BoneDrivenController() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BoneDrivenController();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_BoneDrivenController::StaticRegisterNativesUAnimGraphNode_BoneDrivenController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_BoneDrivenController);
	UClass* Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_NoRegister()
	{
		return UAnimGraphNode_BoneDrivenController::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the 'source version' of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)\n */" },
		{ "IncludePath", "AnimGraphNode_BoneDrivenController.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BoneDrivenController.h" },
		{ "ToolTip", "This is the 'source version' of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_BoneDrivenController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_BoneDrivenController, Node), Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::NewProp_Node_MetaData)) }; // 4237913366
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_BoneDrivenController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::ClassParams = {
		&UAnimGraphNode_BoneDrivenController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_BoneDrivenController()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_BoneDrivenController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_BoneDrivenController.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_BoneDrivenController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_BoneDrivenController.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_BoneDrivenController>()
	{
		return UAnimGraphNode_BoneDrivenController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_BoneDrivenController);
	UAnimGraphNode_BoneDrivenController::~UAnimGraphNode_BoneDrivenController() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_BoneDrivenController)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_BoneDrivenController, UAnimGraphNode_BoneDrivenController::StaticClass, TEXT("UAnimGraphNode_BoneDrivenController"), &Z_Registration_Info_UClass_UAnimGraphNode_BoneDrivenController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_BoneDrivenController), 2988007616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_2254744845(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_BoneDrivenController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
