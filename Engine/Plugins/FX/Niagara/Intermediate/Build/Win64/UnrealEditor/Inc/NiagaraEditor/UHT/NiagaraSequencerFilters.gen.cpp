// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sequencer/NiagaraSequence/NiagaraSequencerFilters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSequencerFilters() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSequencerTrackFilter();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSequencerTrackFilter_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerTrackFilterExtension();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraSequencerTrackFilter::StaticRegisterNativesUNiagaraSequencerTrackFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSequencerTrackFilter);
	UClass* Z_Construct_UClass_UNiagaraSequencerTrackFilter_NoRegister()
	{
		return UNiagaraSequencerTrackFilter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSequencerTrackFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSequencerTrackFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USequencerTrackFilterExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSequencerTrackFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sequencer/NiagaraSequence/NiagaraSequencerFilters.h" },
		{ "ModuleRelativePath", "Private/Sequencer/NiagaraSequence/NiagaraSequencerFilters.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSequencerTrackFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSequencerTrackFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSequencerTrackFilter_Statics::ClassParams = {
		&UNiagaraSequencerTrackFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSequencerTrackFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSequencerTrackFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSequencerTrackFilter()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSequencerTrackFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSequencerTrackFilter.OuterSingleton, Z_Construct_UClass_UNiagaraSequencerTrackFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSequencerTrackFilter.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraSequencerTrackFilter>()
	{
		return UNiagaraSequencerTrackFilter::StaticClass();
	}
	UNiagaraSequencerTrackFilter::UNiagaraSequencerTrackFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSequencerTrackFilter);
	UNiagaraSequencerTrackFilter::~UNiagaraSequencerTrackFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSequencerTrackFilter, UNiagaraSequencerTrackFilter::StaticClass, TEXT("UNiagaraSequencerTrackFilter"), &Z_Registration_Info_UClass_UNiagaraSequencerTrackFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSequencerTrackFilter), 1974483027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_382472142(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Sequencer_NiagaraSequence_NiagaraSequencerFilters_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
