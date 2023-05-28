// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/NiagaraSystemScalabilityViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSystemScalabilityViewModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemScalabilityViewModel();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemScalabilityViewModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraSystemScalabilityViewModel::StaticRegisterNativesUNiagaraSystemScalabilityViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSystemScalabilityViewModel);
	UClass* Z_Construct_UClass_UNiagaraSystemScalabilityViewModel_NoRegister()
	{
		return UNiagaraSystemScalabilityViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSystemScalabilityViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSystemScalabilityViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemScalabilityViewModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A view model for viewing and editing a UNiagaraSystem. */" },
		{ "IncludePath", "ViewModels/NiagaraSystemScalabilityViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/NiagaraSystemScalabilityViewModel.h" },
		{ "ToolTip", "A view model for viewing and editing a UNiagaraSystem." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSystemScalabilityViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystemScalabilityViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystemScalabilityViewModel_Statics::ClassParams = {
		&UNiagaraSystemScalabilityViewModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemScalabilityViewModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemScalabilityViewModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSystemScalabilityViewModel()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSystemScalabilityViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSystemScalabilityViewModel.OuterSingleton, Z_Construct_UClass_UNiagaraSystemScalabilityViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSystemScalabilityViewModel.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraSystemScalabilityViewModel>()
	{
		return UNiagaraSystemScalabilityViewModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSystemScalabilityViewModel);
	UNiagaraSystemScalabilityViewModel::~UNiagaraSystemScalabilityViewModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemScalabilityViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemScalabilityViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSystemScalabilityViewModel, UNiagaraSystemScalabilityViewModel::StaticClass, TEXT("UNiagaraSystemScalabilityViewModel"), &Z_Registration_Info_UClass_UNiagaraSystemScalabilityViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSystemScalabilityViewModel), 2035319727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemScalabilityViewModel_h_4264025511(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemScalabilityViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemScalabilityViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
