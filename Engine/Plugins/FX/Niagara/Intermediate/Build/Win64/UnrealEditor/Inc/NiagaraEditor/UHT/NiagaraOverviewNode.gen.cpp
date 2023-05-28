// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraOverviewNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraOverviewNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraOverviewNode();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraOverviewNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraOverviewNode::StaticRegisterNativesUNiagaraOverviewNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraOverviewNode);
	UClass* Z_Construct_UClass_UNiagaraOverviewNode_NoRegister()
	{
		return UNiagaraOverviewNode::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraOverviewNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterHandleGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterHandleGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraOverviewNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraOverviewNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraOverviewNode.h" },
		{ "ModuleRelativePath", "Public/NiagaraOverviewNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraOverviewNode_Statics::NewProp_OwningSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraOverviewNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraOverviewNode_Statics::NewProp_OwningSystem = { "OwningSystem", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraOverviewNode, OwningSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraOverviewNode_Statics::NewProp_OwningSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraOverviewNode_Statics::NewProp_OwningSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraOverviewNode_Statics::NewProp_EmitterHandleGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraOverviewNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraOverviewNode_Statics::NewProp_EmitterHandleGuid = { "EmitterHandleGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraOverviewNode, EmitterHandleGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraOverviewNode_Statics::NewProp_EmitterHandleGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraOverviewNode_Statics::NewProp_EmitterHandleGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraOverviewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraOverviewNode_Statics::NewProp_OwningSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraOverviewNode_Statics::NewProp_EmitterHandleGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraOverviewNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraOverviewNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraOverviewNode_Statics::ClassParams = {
		&UNiagaraOverviewNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraOverviewNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraOverviewNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraOverviewNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraOverviewNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraOverviewNode()
	{
		if (!Z_Registration_Info_UClass_UNiagaraOverviewNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraOverviewNode.OuterSingleton, Z_Construct_UClass_UNiagaraOverviewNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraOverviewNode.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraOverviewNode>()
	{
		return UNiagaraOverviewNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraOverviewNode);
	UNiagaraOverviewNode::~UNiagaraOverviewNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraOverviewNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraOverviewNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraOverviewNode, UNiagaraOverviewNode::StaticClass, TEXT("UNiagaraOverviewNode"), &Z_Registration_Info_UClass_UNiagaraOverviewNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraOverviewNode), 1020651030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraOverviewNode_h_1790031088(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraOverviewNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraOverviewNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
