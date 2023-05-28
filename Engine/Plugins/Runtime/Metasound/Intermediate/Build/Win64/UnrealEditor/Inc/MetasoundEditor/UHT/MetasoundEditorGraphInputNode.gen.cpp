// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundEditorGraphInputNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundEditorGraphInputNode() {}
// Cross Module References
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphInput_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphInputNode();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphInputNode_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphMemberNode();
	UPackage* Z_Construct_UPackage__Script_MetasoundEditor();
// End Cross Module References
	void UMetasoundEditorGraphInputNode::StaticRegisterNativesUMetasoundEditorGraphInputNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphInputNode);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphInputNode_NoRegister()
	{
		return UMetasoundEditorGraphInputNode::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetasoundEditorGraphMemberNode,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorGraphInputNode.h" },
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphInputNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundEditorGraphInputNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorGraphInputNode, Input), Z_Construct_UClass_UMetasoundEditorGraphInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::NewProp_Input,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphInputNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::ClassParams = {
		&UMetasoundEditorGraphInputNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphInputNode()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphInputNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphInputNode.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphInputNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphInputNode.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorGraphInputNode>()
	{
		return UMetasoundEditorGraphInputNode::StaticClass();
	}
	UMetasoundEditorGraphInputNode::UMetasoundEditorGraphInputNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphInputNode);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphInputNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphInputNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundEditorGraphInputNode, UMetasoundEditorGraphInputNode::StaticClass, TEXT("UMetasoundEditorGraphInputNode"), &Z_Registration_Info_UClass_UMetasoundEditorGraphInputNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphInputNode), 4032316516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphInputNode_h_3731637705(TEXT("/Script/MetasoundEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphInputNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphInputNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
