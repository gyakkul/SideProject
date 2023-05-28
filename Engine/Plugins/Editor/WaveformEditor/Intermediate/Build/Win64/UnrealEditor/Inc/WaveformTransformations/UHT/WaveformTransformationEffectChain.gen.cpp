// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveformTransformationEffectChain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveformTransformationEffectChain() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WaveformTransformations();
	WAVEFORMTRANSFORMATIONS_API UClass* Z_Construct_UClass_UWaveformTransformationEffectChain();
	WAVEFORMTRANSFORMATIONS_API UClass* Z_Construct_UClass_UWaveformTransformationEffectChain_NoRegister();
// End Cross Module References
	void UWaveformTransformationEffectChain::StaticRegisterNativesUWaveformTransformationEffectChain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveformTransformationEffectChain);
	UClass* Z_Construct_UClass_UWaveformTransformationEffectChain_NoRegister()
	{
		return UWaveformTransformationEffectChain::StaticClass();
	}
	struct Z_Construct_UClass_UWaveformTransformationEffectChain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectChain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EffectChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InlineEffects_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InlineEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InlineEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InlineEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaveformTransformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WaveformTransformations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaveformTransformationEffectChain.h" },
		{ "ModuleRelativePath", "Public/WaveformTransformationEffectChain.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_EffectChain_MetaData[] = {
		{ "Category", "Trim" },
		{ "ModuleRelativePath", "Public/WaveformTransformationEffectChain.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_EffectChain = { "EffectChain", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationEffectChain, EffectChain), Z_Construct_UClass_USoundEffectSourcePresetChain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_EffectChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_EffectChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_InlineEffects_Inner_MetaData[] = {
		{ "Category", "Trim" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaveformTransformationEffectChain.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_InlineEffects_Inner = { "InlineEffects", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundEffectSourcePreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_InlineEffects_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_InlineEffects_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_InlineEffects_MetaData[] = {
		{ "Category", "Trim" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaveformTransformationEffectChain.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_InlineEffects = { "InlineEffects", nullptr, (EPropertyFlags)0x0044008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationEffectChain, InlineEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_InlineEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_InlineEffects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_EffectChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_InlineEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::NewProp_InlineEffects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveformTransformationEffectChain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::ClassParams = {
		&UWaveformTransformationEffectChain::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::PropPointers),
		0,
		0x019010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveformTransformationEffectChain()
	{
		if (!Z_Registration_Info_UClass_UWaveformTransformationEffectChain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveformTransformationEffectChain.OuterSingleton, Z_Construct_UClass_UWaveformTransformationEffectChain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveformTransformationEffectChain.OuterSingleton;
	}
	template<> WAVEFORMTRANSFORMATIONS_API UClass* StaticClass<UWaveformTransformationEffectChain>()
	{
		return UWaveformTransformationEffectChain::StaticClass();
	}
	UWaveformTransformationEffectChain::UWaveformTransformationEffectChain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveformTransformationEffectChain);
	UWaveformTransformationEffectChain::~UWaveformTransformationEffectChain() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveformTransformationEffectChain, UWaveformTransformationEffectChain::StaticClass, TEXT("UWaveformTransformationEffectChain"), &Z_Registration_Info_UClass_UWaveformTransformationEffectChain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveformTransformationEffectChain), 851277950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_3326278006(TEXT("/Script/WaveformTransformations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WaveformEditor_Source_WaveformTransformations_Public_WaveformTransformationEffectChain_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
