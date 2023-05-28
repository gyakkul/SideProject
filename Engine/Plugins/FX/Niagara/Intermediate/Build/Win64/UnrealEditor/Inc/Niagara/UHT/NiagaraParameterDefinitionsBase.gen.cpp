// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraParameterDefinitionsBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraParameterDefinitionsBase::StaticRegisterNativesUNiagaraParameterDefinitionsBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraParameterDefinitionsBase);
	UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister()
	{
		return UNiagaraParameterDefinitionsBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Stub class. Collection of UNiagaraScriptVariables to synchronize between UNiagaraScripts. */" },
		{ "IncludePath", "NiagaraParameterDefinitionsBase.h" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsBase.h" },
		{ "ToolTip", "Stub class. Collection of UNiagaraScriptVariables to synchronize between UNiagaraScripts." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraParameterDefinitionsBase, UniqueId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::NewProp_UniqueId,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraParameterDefinitionsBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::ClassParams = {
		&UNiagaraParameterDefinitionsBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::PropPointers), 0),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.OuterSingleton, Z_Construct_UClass_UNiagaraParameterDefinitionsBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraParameterDefinitionsBase>()
	{
		return UNiagaraParameterDefinitionsBase::StaticClass();
	}
	UNiagaraParameterDefinitionsBase::UNiagaraParameterDefinitionsBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParameterDefinitionsBase);
	UNiagaraParameterDefinitionsBase::~UNiagaraParameterDefinitionsBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraParameterDefinitionsBase, UNiagaraParameterDefinitionsBase::StaticClass, TEXT("UNiagaraParameterDefinitionsBase"), &Z_Registration_Info_UClass_UNiagaraParameterDefinitionsBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraParameterDefinitionsBase), 3586575675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h_1749831367(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
