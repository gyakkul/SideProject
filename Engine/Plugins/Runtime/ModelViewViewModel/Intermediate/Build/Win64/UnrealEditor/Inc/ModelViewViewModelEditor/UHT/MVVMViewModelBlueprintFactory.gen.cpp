// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ViewModel/MVVMViewModelBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewModelBlueprintFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBase_NoRegister();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMViewModelBlueprintFactory();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMViewModelBlueprintFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelEditor();
// End Cross Module References
	void UMVVMViewModelBlueprintFactory::StaticRegisterNativesUMVVMViewModelBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelBlueprintFactory);
	UClass* Z_Construct_UClass_UMVVMViewModelBlueprintFactory_NoRegister()
	{
		return UMVVMViewModelBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ViewModel/MVVMViewModelBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/ViewModel/MVVMViewModelBlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "true" },
		{ "Category", "Viewmodel" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Private/ViewModel/MVVMViewModelBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewModelBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMVVMViewModelBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::ClassParams = {
		&UMVVMViewModelBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMViewModelBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelBlueprintFactory.OuterSingleton, Z_Construct_UClass_UMVVMViewModelBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelBlueprintFactory.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<UMVVMViewModelBlueprintFactory>()
	{
		return UMVVMViewModelBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelBlueprintFactory);
	UMVVMViewModelBlueprintFactory::~UMVVMViewModelBlueprintFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_ViewModel_MVVMViewModelBlueprintFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_ViewModel_MVVMViewModelBlueprintFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewModelBlueprintFactory, UMVVMViewModelBlueprintFactory::StaticClass, TEXT("UMVVMViewModelBlueprintFactory"), &Z_Registration_Info_UClass_UMVVMViewModelBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelBlueprintFactory), 2866834671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_ViewModel_MVVMViewModelBlueprintFactory_h_3043150295(TEXT("/Script/ModelViewViewModelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_ViewModel_MVVMViewModelBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_ViewModel_MVVMViewModelBlueprintFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
