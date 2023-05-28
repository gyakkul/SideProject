// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/NiagaraCurveSelectionViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCurveSelectionViewModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraCurveSelectionViewModel();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraCurveSelectionViewModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraCurveSelectionViewModel::StaticRegisterNativesUNiagaraCurveSelectionViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraCurveSelectionViewModel);
	UClass* Z_Construct_UClass_UNiagaraCurveSelectionViewModel_NoRegister()
	{
		return UNiagaraCurveSelectionViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraCurveSelectionViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraCurveSelectionViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraCurveSelectionViewModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/NiagaraCurveSelectionViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/NiagaraCurveSelectionViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraCurveSelectionViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraCurveSelectionViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraCurveSelectionViewModel_Statics::ClassParams = {
		&UNiagaraCurveSelectionViewModel::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraCurveSelectionViewModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraCurveSelectionViewModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraCurveSelectionViewModel()
	{
		if (!Z_Registration_Info_UClass_UNiagaraCurveSelectionViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraCurveSelectionViewModel.OuterSingleton, Z_Construct_UClass_UNiagaraCurveSelectionViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraCurveSelectionViewModel.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraCurveSelectionViewModel>()
	{
		return UNiagaraCurveSelectionViewModel::StaticClass();
	}
	UNiagaraCurveSelectionViewModel::UNiagaraCurveSelectionViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraCurveSelectionViewModel);
	UNiagaraCurveSelectionViewModel::~UNiagaraCurveSelectionViewModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraCurveSelectionViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraCurveSelectionViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraCurveSelectionViewModel, UNiagaraCurveSelectionViewModel::StaticClass, TEXT("UNiagaraCurveSelectionViewModel"), &Z_Registration_Info_UClass_UNiagaraCurveSelectionViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraCurveSelectionViewModel), 422790690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraCurveSelectionViewModel_h_459311104(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraCurveSelectionViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraCurveSelectionViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
