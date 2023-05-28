// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/NiagaraScratchPadViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScratchPadViewModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScratchPadViewModel();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScratchPadViewModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraScratchPadViewModel::StaticRegisterNativesUNiagaraScratchPadViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScratchPadViewModel);
	UClass* Z_Construct_UClass_UNiagaraScratchPadViewModel_NoRegister()
	{
		return UNiagaraScratchPadViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScratchPadViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScratchPadViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScratchPadViewModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/NiagaraScratchPadViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/NiagaraScratchPadViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScratchPadViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScratchPadViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScratchPadViewModel_Statics::ClassParams = {
		&UNiagaraScratchPadViewModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScratchPadViewModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScratchPadViewModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScratchPadViewModel()
	{
		if (!Z_Registration_Info_UClass_UNiagaraScratchPadViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScratchPadViewModel.OuterSingleton, Z_Construct_UClass_UNiagaraScratchPadViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraScratchPadViewModel.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraScratchPadViewModel>()
	{
		return UNiagaraScratchPadViewModel::StaticClass();
	}
	UNiagaraScratchPadViewModel::UNiagaraScratchPadViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScratchPadViewModel);
	UNiagaraScratchPadViewModel::~UNiagaraScratchPadViewModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraScratchPadViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraScratchPadViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScratchPadViewModel, UNiagaraScratchPadViewModel::StaticClass, TEXT("UNiagaraScratchPadViewModel"), &Z_Registration_Info_UClass_UNiagaraScratchPadViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScratchPadViewModel), 4035407733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraScratchPadViewModel_h_1934464101(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraScratchPadViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraScratchPadViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
