// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraScriptSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptSource() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScriptSourceBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraGraph_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptSource();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraScriptSource::StaticRegisterNativesUNiagaraScriptSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScriptSource);
	UClass* Z_Construct_UClass_UNiagaraScriptSource_NoRegister()
	{
		return UNiagaraScriptSource::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScriptSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeGraph;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScriptSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraScriptSourceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraScriptSource.h" },
		{ "ModuleRelativePath", "Public/NiagaraScriptSource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptSource_Statics::NewProp_NodeGraph_MetaData[] = {
		{ "Comment", "/** Graph for particle update expression */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptSource.h" },
		{ "ToolTip", "Graph for particle update expression" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraScriptSource_Statics::NewProp_NodeGraph = { "NodeGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScriptSource, NodeGraph), Z_Construct_UClass_UNiagaraGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptSource_Statics::NewProp_NodeGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptSource_Statics::NewProp_NodeGraph_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraScriptSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptSource_Statics::NewProp_NodeGraph,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScriptSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScriptSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScriptSource_Statics::ClassParams = {
		&UNiagaraScriptSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraScriptSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptSource_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScriptSource()
	{
		if (!Z_Registration_Info_UClass_UNiagaraScriptSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScriptSource.OuterSingleton, Z_Construct_UClass_UNiagaraScriptSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraScriptSource.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraScriptSource>()
	{
		return UNiagaraScriptSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScriptSource);
	UNiagaraScriptSource::~UNiagaraScriptSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScriptSource, UNiagaraScriptSource::StaticClass, TEXT("UNiagaraScriptSource"), &Z_Registration_Info_UClass_UNiagaraScriptSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScriptSource), 3963248083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_2843228590(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
