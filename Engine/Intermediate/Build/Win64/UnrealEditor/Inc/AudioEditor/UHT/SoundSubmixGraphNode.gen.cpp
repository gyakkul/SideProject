// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundSubmixGraph/SoundSubmixGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixGraphNode() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraphNode();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References
	void USoundSubmixGraphNode::StaticRegisterNativesUSoundSubmixGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSubmixGraphNode);
	UClass* Z_Construct_UClass_USoundSubmixGraphNode_NoRegister()
	{
		return USoundSubmixGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundSubmix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundSubmix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubmixNodeUserWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubmixNodeUserWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundSubmixGraph/SoundSubmixGraphNode.h" },
		{ "ModuleRelativePath", "Classes/SoundSubmixGraph/SoundSubmixGraphNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SoundSubmix_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** The SoundSubmix this represents */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SoundSubmixGraph/SoundSubmixGraphNode.h" },
		{ "ToolTip", "The SoundSubmix this represents" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmixGraphNode, SoundSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SoundSubmix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SoundSubmix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SubmixNodeUserWidget_MetaData[] = {
		{ "Comment", "/** A user widget to use to represent the graph node */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/SoundSubmixGraph/SoundSubmixGraphNode.h" },
		{ "ToolTip", "A user widget to use to represent the graph node" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SubmixNodeUserWidget = { "SubmixNodeUserWidget", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundSubmixGraphNode, SubmixNodeUserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SubmixNodeUserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SubmixNodeUserWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundSubmixGraphNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SoundSubmix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundSubmixGraphNode_Statics::NewProp_SubmixNodeUserWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixGraphNode_Statics::ClassParams = {
		&USoundSubmixGraphNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundSubmixGraphNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixGraphNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixGraphNode()
	{
		if (!Z_Registration_Info_UClass_USoundSubmixGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSubmixGraphNode.OuterSingleton, Z_Construct_UClass_USoundSubmixGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSubmixGraphNode.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSubmixGraphNode>()
	{
		return USoundSubmixGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixGraphNode);
	USoundSubmixGraphNode::~USoundSubmixGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSubmixGraphNode, USoundSubmixGraphNode::StaticClass, TEXT("USoundSubmixGraphNode"), &Z_Registration_Info_UClass_USoundSubmixGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSubmixGraphNode), 1555695606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_2701610115(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
