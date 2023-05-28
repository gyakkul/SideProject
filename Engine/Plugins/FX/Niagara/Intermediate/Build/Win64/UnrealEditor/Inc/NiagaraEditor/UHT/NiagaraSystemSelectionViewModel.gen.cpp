// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/NiagaraSystemSelectionViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSystemSelectionViewModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSelection_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackViewModel_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemSelectionViewModel();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemSelectionViewModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraSystemSelectionViewModel::StaticRegisterNativesUNiagaraSystemSelectionViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSystemSelectionViewModel);
	UClass* Z_Construct_UClass_UNiagaraSystemSelectionViewModel_NoRegister()
	{
		return UNiagaraSystemSelectionViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackSelection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StackSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionStackViewModel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionStackViewModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/NiagaraSystemSelectionViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/NiagaraSystemSelectionViewModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::NewProp_StackSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/NiagaraSystemSelectionViewModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::NewProp_StackSelection = { "StackSelection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemSelectionViewModel, StackSelection), Z_Construct_UClass_UNiagaraStackSelection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::NewProp_StackSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::NewProp_StackSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::NewProp_SelectionStackViewModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/NiagaraSystemSelectionViewModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::NewProp_SelectionStackViewModel = { "SelectionStackViewModel", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemSelectionViewModel, SelectionStackViewModel), Z_Construct_UClass_UNiagaraStackViewModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::NewProp_SelectionStackViewModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::NewProp_SelectionStackViewModel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::NewProp_StackSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::NewProp_SelectionStackViewModel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystemSelectionViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::ClassParams = {
		&UNiagaraSystemSelectionViewModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSystemSelectionViewModel()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSystemSelectionViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSystemSelectionViewModel.OuterSingleton, Z_Construct_UClass_UNiagaraSystemSelectionViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSystemSelectionViewModel.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraSystemSelectionViewModel>()
	{
		return UNiagaraSystemSelectionViewModel::StaticClass();
	}
	UNiagaraSystemSelectionViewModel::UNiagaraSystemSelectionViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSystemSelectionViewModel);
	UNiagaraSystemSelectionViewModel::~UNiagaraSystemSelectionViewModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemSelectionViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemSelectionViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSystemSelectionViewModel, UNiagaraSystemSelectionViewModel::StaticClass, TEXT("UNiagaraSystemSelectionViewModel"), &Z_Registration_Info_UClass_UNiagaraSystemSelectionViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSystemSelectionViewModel), 1725213192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemSelectionViewModel_h_1585808318(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemSelectionViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_NiagaraSystemSelectionViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
