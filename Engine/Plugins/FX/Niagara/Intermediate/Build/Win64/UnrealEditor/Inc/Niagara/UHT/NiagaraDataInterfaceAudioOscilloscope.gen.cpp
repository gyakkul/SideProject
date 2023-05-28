// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceAudioOscilloscope.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAudioOscilloscope() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceAudioOscilloscope::StaticRegisterNativesUNiagaraDataInterfaceAudioOscilloscope()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceAudioOscilloscope);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_NoRegister()
	{
		return UNiagaraDataInterfaceAudioOscilloscope::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Submix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScopeInMilliseconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScopeInMilliseconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Data Interface allowing sampling of recent audio data. */" },
		{ "DisplayName", "Audio Oscilloscope" },
		{ "IncludePath", "NiagaraDataInterfaceAudioOscilloscope.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioOscilloscope.h" },
		{ "ToolTip", "Data Interface allowing sampling of recent audio data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Submix_MetaData[] = {
		{ "Category", "Oscilloscope" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioOscilloscope.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioOscilloscope, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Submix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Submix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Oscilloscope" },
		{ "ClampMax", "8192" },
		{ "ClampMin", "64" },
		{ "Comment", "// The number of samples of audio to pass to the GPU. Audio will be resampled to fit this resolution.\n// Increasing this number will increase the resolution of the waveform, but will also increase usage of the GPU memory bus,\n// potentially causing issues across the application.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioOscilloscope.h" },
		{ "ToolTip", "The number of samples of audio to pass to the GPU. Audio will be resampled to fit this resolution.\nIncreasing this number will increase the resolution of the waveform, but will also increase usage of the GPU memory bus,\npotentially causing issues across the application." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioOscilloscope, Resolution), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_ScopeInMilliseconds_MetaData[] = {
		{ "Category", "Oscilloscope" },
		{ "ClampMax", "400.0" },
		{ "ClampMin", "5.0" },
		{ "Comment", "// The number of milliseconds of audio to show.\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudioOscilloscope.h" },
		{ "ToolTip", "The number of milliseconds of audio to show." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_ScopeInMilliseconds = { "ScopeInMilliseconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioOscilloscope, ScopeInMilliseconds), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_ScopeInMilliseconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_ScopeInMilliseconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Submix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::NewProp_ScopeInMilliseconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAudioOscilloscope>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::ClassParams = {
		&UNiagaraDataInterfaceAudioOscilloscope::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioOscilloscope.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioOscilloscope.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioOscilloscope.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAudioOscilloscope>()
	{
		return UNiagaraDataInterfaceAudioOscilloscope::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAudioOscilloscope);
	UNiagaraDataInterfaceAudioOscilloscope::~UNiagaraDataInterfaceAudioOscilloscope() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioOscilloscope_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioOscilloscope_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceAudioOscilloscope, UNiagaraDataInterfaceAudioOscilloscope::StaticClass, TEXT("UNiagaraDataInterfaceAudioOscilloscope"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioOscilloscope, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceAudioOscilloscope), 322423660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioOscilloscope_h_1936282979(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioOscilloscope_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudioOscilloscope_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
