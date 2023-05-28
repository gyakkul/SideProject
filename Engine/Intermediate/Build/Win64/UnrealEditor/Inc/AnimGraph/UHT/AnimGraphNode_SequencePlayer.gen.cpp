// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_SequencePlayer.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_SequencePlayer() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SequencePlayer();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SequencePlayer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SequencePlayer();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_SequencePlayer::StaticRegisterNativesUAnimGraphNode_SequencePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_SequencePlayer);
	UClass* Z_Construct_UClass_UAnimGraphNode_SequencePlayer_NoRegister()
	{
		return UAnimGraphNode_SequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_AssetPlayerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_SequencePlayer.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SequencePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_SequencePlayer, Node), Z_Construct_UScriptStruct_FAnimNode_SequencePlayer, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::NewProp_Node_MetaData)) }; // 393494414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_SequencePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::ClassParams = {
		&UAnimGraphNode_SequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_SequencePlayer()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_SequencePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_SequencePlayer.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_SequencePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_SequencePlayer.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_SequencePlayer>()
	{
		return UAnimGraphNode_SequencePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_SequencePlayer);
	UAnimGraphNode_SequencePlayer::~UAnimGraphNode_SequencePlayer() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_SequencePlayer)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_SequencePlayer, UAnimGraphNode_SequencePlayer::StaticClass, TEXT("UAnimGraphNode_SequencePlayer"), &Z_Registration_Info_UClass_UAnimGraphNode_SequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_SequencePlayer), 4132533688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_1455898700(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_SequencePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
