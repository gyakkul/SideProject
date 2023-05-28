// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceAudio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceAudio() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceAudioSubmix::StaticRegisterNativesUNiagaraDataInterfaceAudioSubmix()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceAudioSubmix);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_NoRegister()
	{
		return UNiagaraDataInterfaceAudioSubmix::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Submix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Data Interface allowing sampling of recent audio data. */" },
		{ "DisplayName", "Audio Submix" },
		{ "IncludePath", "NiagaraDataInterfaceAudio.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudio.h" },
		{ "ToolTip", "Data Interface allowing sampling of recent audio data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::NewProp_Submix_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** The audio submix where analyzed. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceAudio.h" },
		{ "ToolTip", "The audio submix where analyzed." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceAudioSubmix, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::NewProp_Submix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::NewProp_Submix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::NewProp_Submix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceAudioSubmix>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::ClassParams = {
		&UNiagaraDataInterfaceAudioSubmix::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSubmix.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSubmix.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSubmix.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceAudioSubmix>()
	{
		return UNiagaraDataInterfaceAudioSubmix::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceAudioSubmix);
	UNiagaraDataInterfaceAudioSubmix::~UNiagaraDataInterfaceAudioSubmix() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudio_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudio_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceAudioSubmix, UNiagaraDataInterfaceAudioSubmix::StaticClass, TEXT("UNiagaraDataInterfaceAudioSubmix"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSubmix, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceAudioSubmix), 2919448254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudio_h_2280188930(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceAudio_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
