// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNode();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNode::StaticRegisterNativesUNiagaraNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNode);
	UClass* Z_Construct_UClass_UNiagaraNode_NoRegister()
	{
		return UNiagaraNode::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNode.h" },
		{ "ModuleRelativePath", "Public/NiagaraNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNode_Statics::NewProp_ChangeId_MetaData[] = {
		{ "Comment", "/** The current change identifier for this node. Used to sync status with UNiagaraScripts.*/" },
		{ "ModuleRelativePath", "Public/NiagaraNode.h" },
		{ "ToolTip", "The current change identifier for this node. Used to sync status with UNiagaraScripts." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNode_Statics::NewProp_ChangeId = { "ChangeId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNode, ChangeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNode_Statics::NewProp_ChangeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNode_Statics::NewProp_ChangeId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNode_Statics::NewProp_ChangeId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNode_Statics::ClassParams = {
		&UNiagaraNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNode()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNode.OuterSingleton, Z_Construct_UClass_UNiagaraNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNode.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNode>()
	{
		return UNiagaraNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNode);
	UNiagaraNode::~UNiagaraNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNode, UNiagaraNode::StaticClass, TEXT("UNiagaraNode"), &Z_Registration_Info_UClass_UNiagaraNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNode), 2922320567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNode_h_2327024445(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
