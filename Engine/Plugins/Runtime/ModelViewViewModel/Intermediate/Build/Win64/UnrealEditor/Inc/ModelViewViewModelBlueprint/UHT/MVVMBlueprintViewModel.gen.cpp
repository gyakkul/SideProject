// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMBlueprintViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBlueprintViewModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintViewModel();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintViewModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	void UMVVMBlueprintViewModel::StaticRegisterNativesUMVVMBlueprintViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMBlueprintViewModel);
	UClass* Z_Construct_UClass_UMVVMBlueprintViewModel_NoRegister()
	{
		return UMVVMBlueprintViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMBlueprintViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMBlueprintViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintViewModel_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "ViewModel Blueprint" },
		{ "IncludePath", "MVVMBlueprintViewModel.h" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintViewModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMBlueprintViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMBlueprintViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMBlueprintViewModel_Statics::ClassParams = {
		&UMVVMBlueprintViewModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMVVMBlueprintViewModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintViewModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMBlueprintViewModel()
	{
		if (!Z_Registration_Info_UClass_UMVVMBlueprintViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMBlueprintViewModel.OuterSingleton, Z_Construct_UClass_UMVVMBlueprintViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMBlueprintViewModel.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<UMVVMBlueprintViewModel>()
	{
		return UMVVMBlueprintViewModel::StaticClass();
	}
	UMVVMBlueprintViewModel::UMVVMBlueprintViewModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMBlueprintViewModel);
	UMVVMBlueprintViewModel::~UMVVMBlueprintViewModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMBlueprintViewModel, UMVVMBlueprintViewModel::StaticClass, TEXT("UMVVMBlueprintViewModel"), &Z_Registration_Info_UClass_UMVVMBlueprintViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMBlueprintViewModel), 513677198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModel_h_3676909402(TEXT("/Script/ModelViewViewModelBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
