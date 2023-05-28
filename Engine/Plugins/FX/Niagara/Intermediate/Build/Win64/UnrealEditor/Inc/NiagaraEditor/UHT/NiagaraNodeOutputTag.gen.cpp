// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeOutputTag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeOutputTag() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeOutputTag();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeOutputTag_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeOutputTag::StaticRegisterNativesUNiagaraNodeOutputTag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeOutputTag);
	UClass* Z_Construct_UClass_UNiagaraNodeOutputTag_NoRegister()
	{
		return UNiagaraNodeOutputTag::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeOutputTag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEmitMessageOnFailure_MetaData[];
#endif
		static void NewProp_bEmitMessageOnFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEmitMessageOnFailure;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FailureSeverity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureSeverity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FailureSeverity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeWithDynamicPins,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeOutputTag.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeOutputTag.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_bEmitMessageOnFailure_MetaData[] = {
		{ "Category", "Tag" },
		{ "ModuleRelativePath", "Private/NiagaraNodeOutputTag.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_bEmitMessageOnFailure_SetBit(void* Obj)
	{
		((UNiagaraNodeOutputTag*)Obj)->bEmitMessageOnFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_bEmitMessageOnFailure = { "bEmitMessageOnFailure", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraNodeOutputTag), &Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_bEmitMessageOnFailure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_bEmitMessageOnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_bEmitMessageOnFailure_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_FailureSeverity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_FailureSeverity_MetaData[] = {
		{ "Category", "Tag" },
		{ "ModuleRelativePath", "Private/NiagaraNodeOutputTag.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_FailureSeverity = { "FailureSeverity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeOutputTag, FailureSeverity), Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_FailureSeverity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_FailureSeverity_MetaData)) }; // 3240911395
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_bEmitMessageOnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_FailureSeverity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::NewProp_FailureSeverity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeOutputTag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::ClassParams = {
		&UNiagaraNodeOutputTag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeOutputTag()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeOutputTag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeOutputTag.OuterSingleton, Z_Construct_UClass_UNiagaraNodeOutputTag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeOutputTag.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeOutputTag>()
	{
		return UNiagaraNodeOutputTag::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeOutputTag);
	UNiagaraNodeOutputTag::~UNiagaraNodeOutputTag() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeOutputTag, UNiagaraNodeOutputTag::StaticClass, TEXT("UNiagaraNodeOutputTag"), &Z_Registration_Info_UClass_UNiagaraNodeOutputTag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeOutputTag), 3344546086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_4201246283(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeOutputTag_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
