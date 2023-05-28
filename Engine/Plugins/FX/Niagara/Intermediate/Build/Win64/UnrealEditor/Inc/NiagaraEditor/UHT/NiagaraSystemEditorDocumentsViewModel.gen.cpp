// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/NiagaraSystemEditorDocumentsViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSystemEditorDocumentsViewModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraSystemEditorDocumentsViewModel::StaticRegisterNativesUNiagaraSystemEditorDocumentsViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSystemEditorDocumentsViewModel);
	UClass* Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel_NoRegister()
	{
		return UNiagaraSystemEditorDocumentsViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/NiagaraSystemEditorDocumentsViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/NiagaraSystemEditorDocumentsViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystemEditorDocumentsViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel_Statics::ClassParams = {
		&UNiagaraSystemEditorDocumentsViewModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSystemEditorDocumentsViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSystemEditorDocumentsViewModel.OuterSingleton, Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSystemEditorDocumentsViewModel.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraSystemEditorDocumentsViewModel>()
	{
		return UNiagaraSystemEditorDocumentsViewModel::StaticClass();
	}
	UNiagaraSystemEditorDocumentsViewModel::UNiagaraSystemEditorDocumentsViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSystemEditorDocumentsViewModel);
	UNiagaraSystemEditorDocumentsViewModel::~UNiagaraSystemEditorDocumentsViewModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemEditorDocumentsViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemEditorDocumentsViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSystemEditorDocumentsViewModel, UNiagaraSystemEditorDocumentsViewModel::StaticClass, TEXT("UNiagaraSystemEditorDocumentsViewModel"), &Z_Registration_Info_UClass_UNiagaraSystemEditorDocumentsViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSystemEditorDocumentsViewModel), 3857068803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemEditorDocumentsViewModel_h_1587196399(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemEditorDocumentsViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemEditorDocumentsViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
