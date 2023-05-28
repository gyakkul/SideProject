// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundCueGraph/SoundCueGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueGraphNode() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_Base();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundCueGraphNode::StaticRegisterNativesUSoundCueGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueGraphNode);
	UClass* Z_Construct_UClass_USoundCueGraphNode_NoRegister()
	{
		return USoundCueGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundCueGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundCueGraph/SoundCueGraphNode.h" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGraphNode_Statics::NewProp_SoundNode_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** The SoundNode this represents */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphNode.h" },
		{ "ToolTip", "The SoundNode this represents" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundCueGraphNode_Statics::NewProp_SoundNode = { "SoundNode", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueGraphNode, SoundNode), Z_Construct_UClass_USoundNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundCueGraphNode_Statics::NewProp_SoundNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueGraphNode_Statics::NewProp_SoundNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCueGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueGraphNode_Statics::NewProp_SoundNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueGraphNode_Statics::ClassParams = {
		&USoundCueGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundCueGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueGraphNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueGraphNode()
	{
		if (!Z_Registration_Info_UClass_USoundCueGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueGraphNode.OuterSingleton, Z_Construct_UClass_USoundCueGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueGraphNode.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundCueGraphNode>()
	{
		return USoundCueGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueGraphNode);
	USoundCueGraphNode::~USoundCueGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueGraphNode, USoundCueGraphNode::StaticClass, TEXT("USoundCueGraphNode"), &Z_Registration_Info_UClass_USoundCueGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueGraphNode), 165569631U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_607305616(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
