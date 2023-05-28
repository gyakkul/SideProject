// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeParameterMapGet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeParameterMapGet() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapGet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapGet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeParameterMapGet::StaticRegisterNativesUNiagaraNodeParameterMapGet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeParameterMapGet);
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapGet_NoRegister()
	{
		return UNiagaraNodeParameterMapGet::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinOutputToPinDefaultPersistentId_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinOutputToPinDefaultPersistentId_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinOutputToPinDefaultPersistentId_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinOutputToPinDefaultPersistentId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeParameterMapBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node that allows a user to get multiple values from a parameter map. */" },
		{ "IncludePath", "NiagaraNodeParameterMapGet.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeParameterMapGet.h" },
		{ "ToolTip", "A node that allows a user to get multiple values from a parameter map." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::NewProp_PinOutputToPinDefaultPersistentId_ValueProp = { "PinOutputToPinDefaultPersistentId", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::NewProp_PinOutputToPinDefaultPersistentId_Key_KeyProp = { "PinOutputToPinDefaultPersistentId_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::NewProp_PinOutputToPinDefaultPersistentId_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeParameterMapGet.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::NewProp_PinOutputToPinDefaultPersistentId = { "PinOutputToPinDefaultPersistentId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeParameterMapGet, PinOutputToPinDefaultPersistentId), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::NewProp_PinOutputToPinDefaultPersistentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::NewProp_PinOutputToPinDefaultPersistentId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::NewProp_PinOutputToPinDefaultPersistentId_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::NewProp_PinOutputToPinDefaultPersistentId_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::NewProp_PinOutputToPinDefaultPersistentId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeParameterMapGet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::ClassParams = {
		&UNiagaraNodeParameterMapGet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapGet()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeParameterMapGet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeParameterMapGet.OuterSingleton, Z_Construct_UClass_UNiagaraNodeParameterMapGet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeParameterMapGet.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeParameterMapGet>()
	{
		return UNiagaraNodeParameterMapGet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeParameterMapGet);
	UNiagaraNodeParameterMapGet::~UNiagaraNodeParameterMapGet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapGet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapGet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeParameterMapGet, UNiagaraNodeParameterMapGet::StaticClass, TEXT("UNiagaraNodeParameterMapGet"), &Z_Registration_Info_UClass_UNiagaraNodeParameterMapGet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeParameterMapGet), 2854688117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapGet_h_415264977(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapGet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapGet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
