// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundClassGraph/SoundClassGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundClassGraphNode() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassGraphNode();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundClassGraphNode::StaticRegisterNativesUSoundClassGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundClassGraphNode);
	UClass* Z_Construct_UClass_USoundClassGraphNode_NoRegister()
	{
		return USoundClassGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_USoundClassGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundClassGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClassGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundClassGraph/SoundClassGraphNode.h" },
		{ "ModuleRelativePath", "Classes/SoundClassGraph/SoundClassGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClassGraphNode_Statics::NewProp_SoundClass_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** The SoundNode this represents */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SoundClassGraph/SoundClassGraphNode.h" },
		{ "ToolTip", "The SoundNode this represents" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundClassGraphNode_Statics::NewProp_SoundClass = { "SoundClass", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundClassGraphNode, SoundClass), Z_Construct_UClass_USoundClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundClassGraphNode_Statics::NewProp_SoundClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClassGraphNode_Statics::NewProp_SoundClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundClassGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundClassGraphNode_Statics::NewProp_SoundClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundClassGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundClassGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundClassGraphNode_Statics::ClassParams = {
		&USoundClassGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundClassGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundClassGraphNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundClassGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClassGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundClassGraphNode()
	{
		if (!Z_Registration_Info_UClass_USoundClassGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundClassGraphNode.OuterSingleton, Z_Construct_UClass_USoundClassGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundClassGraphNode.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundClassGraphNode>()
	{
		return USoundClassGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundClassGraphNode);
	USoundClassGraphNode::~USoundClassGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundClassGraphNode, USoundClassGraphNode::StaticClass, TEXT("USoundClassGraphNode"), &Z_Registration_Info_UClass_USoundClassGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundClassGraphNode), 10100509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_1035391837(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
