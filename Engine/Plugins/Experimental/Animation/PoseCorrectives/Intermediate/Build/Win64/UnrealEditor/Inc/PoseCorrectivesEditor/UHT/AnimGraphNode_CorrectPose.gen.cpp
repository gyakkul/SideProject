// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_CorrectPose.h"
#include "AnimNode_CorrectPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_CorrectPose() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	POSECORRECTIVES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CorrectPose();
	POSECORRECTIVESEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_CorrectPose();
	POSECORRECTIVESEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_CorrectPose_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseCorrectivesEditor();
// End Cross Module References
	void UAnimGraphNode_CorrectPose::StaticRegisterNativesUAnimGraphNode_CorrectPose()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_CorrectPose);
	UClass* Z_Construct_UClass_UAnimGraphNode_CorrectPose_NoRegister()
	{
		return UAnimGraphNode_CorrectPose::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectivesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AnimGraphNode_CorrectPose.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_CorrectPose.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_CorrectPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_CorrectPose, Node), Z_Construct_UScriptStruct_FAnimNode_CorrectPose, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::NewProp_Node_MetaData)) }; // 4062265160
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_CorrectPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::ClassParams = {
		&UAnimGraphNode_CorrectPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_CorrectPose()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_CorrectPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_CorrectPose.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_CorrectPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_CorrectPose.OuterSingleton;
	}
	template<> POSECORRECTIVESEDITOR_API UClass* StaticClass<UAnimGraphNode_CorrectPose>()
	{
		return UAnimGraphNode_CorrectPose::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_CorrectPose);
	UAnimGraphNode_CorrectPose::~UAnimGraphNode_CorrectPose() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_AnimGraphNode_CorrectPose_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_AnimGraphNode_CorrectPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_CorrectPose, UAnimGraphNode_CorrectPose::StaticClass, TEXT("UAnimGraphNode_CorrectPose"), &Z_Registration_Info_UClass_UAnimGraphNode_CorrectPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_CorrectPose), 2176365877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_AnimGraphNode_CorrectPose_h_2960037299(TEXT("/Script/PoseCorrectivesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_AnimGraphNode_CorrectPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_AnimGraphNode_CorrectPose_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
