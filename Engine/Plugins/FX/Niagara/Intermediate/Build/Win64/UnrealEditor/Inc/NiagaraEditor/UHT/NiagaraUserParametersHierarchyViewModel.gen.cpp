// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/HierarchyEditor/NiagaraUserParametersHierarchyViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraUserParametersHierarchyViewModel() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyItem();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyUserParameter();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyUserParameter_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyViewModelBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptVariable_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraHierarchyUserParameter::StaticRegisterNativesUNiagaraHierarchyUserParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraHierarchyUserParameter);
	UClass* Z_Construct_UClass_UNiagaraHierarchyUserParameter_NoRegister()
	{
		return UNiagaraHierarchyUserParameter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserParameterScriptVariable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserParameterScriptVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_System;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyItem,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraUserParametersHierarchyViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraUserParametersHierarchyViewModel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::NewProp_UserParameterScriptVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraUserParametersHierarchyViewModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::NewProp_UserParameterScriptVariable = { "UserParameterScriptVariable", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraHierarchyUserParameter, UserParameterScriptVariable), Z_Construct_UClass_UNiagaraScriptVariable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::NewProp_UserParameterScriptVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::NewProp_UserParameterScriptVariable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::NewProp_System_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraUserParametersHierarchyViewModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraHierarchyUserParameter, System), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::NewProp_System_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::NewProp_UserParameterScriptVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::NewProp_System,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraHierarchyUserParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::ClassParams = {
		&UNiagaraHierarchyUserParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraHierarchyUserParameter()
	{
		if (!Z_Registration_Info_UClass_UNiagaraHierarchyUserParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraHierarchyUserParameter.OuterSingleton, Z_Construct_UClass_UNiagaraHierarchyUserParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraHierarchyUserParameter.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraHierarchyUserParameter>()
	{
		return UNiagaraHierarchyUserParameter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraHierarchyUserParameter);
	void UNiagaraUserParametersHierarchyViewModel::StaticRegisterNativesUNiagaraUserParametersHierarchyViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraUserParametersHierarchyViewModel);
	UClass* Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel_NoRegister()
	{
		return UNiagaraUserParametersHierarchyViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraHierarchyViewModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/HierarchyEditor/NiagaraUserParametersHierarchyViewModel.h" },
		{ "ModuleRelativePath", "Public/ViewModels/HierarchyEditor/NiagaraUserParametersHierarchyViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraUserParametersHierarchyViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel_Statics::ClassParams = {
		&UNiagaraUserParametersHierarchyViewModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel()
	{
		if (!Z_Registration_Info_UClass_UNiagaraUserParametersHierarchyViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraUserParametersHierarchyViewModel.OuterSingleton, Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraUserParametersHierarchyViewModel.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraUserParametersHierarchyViewModel>()
	{
		return UNiagaraUserParametersHierarchyViewModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraUserParametersHierarchyViewModel);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraUserParametersHierarchyViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraUserParametersHierarchyViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraHierarchyUserParameter, UNiagaraHierarchyUserParameter::StaticClass, TEXT("UNiagaraHierarchyUserParameter"), &Z_Registration_Info_UClass_UNiagaraHierarchyUserParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraHierarchyUserParameter), 4078874597U) },
		{ Z_Construct_UClass_UNiagaraUserParametersHierarchyViewModel, UNiagaraUserParametersHierarchyViewModel::StaticClass, TEXT("UNiagaraUserParametersHierarchyViewModel"), &Z_Registration_Info_UClass_UNiagaraUserParametersHierarchyViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraUserParametersHierarchyViewModel), 2481935323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraUserParametersHierarchyViewModel_h_3720431111(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraUserParametersHierarchyViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_HierarchyEditor_NiagaraUserParametersHierarchyViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
