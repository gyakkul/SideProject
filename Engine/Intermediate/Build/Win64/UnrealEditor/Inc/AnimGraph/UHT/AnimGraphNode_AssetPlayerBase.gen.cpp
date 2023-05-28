// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_AssetPlayerBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_AssetPlayerBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationGroupReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_AssetPlayerBase::StaticRegisterNativesUAnimGraphNode_AssetPlayerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_AssetPlayerBase);
	UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_NoRegister()
	{
		return UAnimGraphNode_AssetPlayerBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyncGroup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SyncGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Helper / intermediate for asset player graphical nodes */" },
		{ "IncludePath", "AnimGraphNode_AssetPlayerBase.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AssetPlayerBase.h" },
		{ "ToolTip", "Helper / intermediate for asset player graphical nodes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::NewProp_SyncGroup_MetaData[] = {
		{ "Comment", "// Deprecated - sync group data is held on the contained FAnimNode_Base\n" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_AssetPlayerBase.h" },
		{ "ToolTip", "Deprecated - sync group data is held on the contained FAnimNode_Base" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::NewProp_SyncGroup = { "SyncGroup", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_AssetPlayerBase, SyncGroup_DEPRECATED), Z_Construct_UScriptStruct_FAnimationGroupReference, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::NewProp_SyncGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::NewProp_SyncGroup_MetaData)) }; // 1803352179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::NewProp_SyncGroup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_AssetPlayerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::ClassParams = {
		&UAnimGraphNode_AssetPlayerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_AssetPlayerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_AssetPlayerBase.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_AssetPlayerBase.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_AssetPlayerBase>()
	{
		return UAnimGraphNode_AssetPlayerBase::StaticClass();
	}
	UAnimGraphNode_AssetPlayerBase::UAnimGraphNode_AssetPlayerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_AssetPlayerBase);
	UAnimGraphNode_AssetPlayerBase::~UAnimGraphNode_AssetPlayerBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_AssetPlayerBase)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase, UAnimGraphNode_AssetPlayerBase::StaticClass, TEXT("UAnimGraphNode_AssetPlayerBase"), &Z_Registration_Info_UClass_UAnimGraphNode_AssetPlayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_AssetPlayerBase), 2985706525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_1556014587(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_AssetPlayerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
