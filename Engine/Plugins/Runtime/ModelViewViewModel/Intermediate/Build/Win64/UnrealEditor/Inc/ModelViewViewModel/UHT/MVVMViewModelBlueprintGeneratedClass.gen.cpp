// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModel/MVVMViewModelBlueprintGeneratedClass.h"
#include "FieldNotification/FieldId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewModelBlueprintGeneratedClass() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	void UMVVMViewModelBlueprintGeneratedClass::StaticRegisterNativesUMVVMViewModelBlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelBlueprintGeneratedClass);
	UClass* Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_NoRegister()
	{
		return UMVVMViewModelBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldNotifyNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldNotifyNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldNotifyNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//namespace\n" },
		{ "IncludePath", "ViewModel/MVVMViewModelBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/ViewModel/MVVMViewModelBlueprintGeneratedClass.h" },
		{ "ToolTip", "namespace" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames_Inner = { "FieldNotifyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(nullptr, 0) }; // 2908908415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames_MetaData[] = {
		{ "Comment", "/** List Field Notifies. No index here on purpose to prevent saving them. */" },
		{ "ModuleRelativePath", "Public/ViewModel/MVVMViewModelBlueprintGeneratedClass.h" },
		{ "ToolTip", "List Field Notifies. No index here on purpose to prevent saving them." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames = { "FieldNotifyNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewModelBlueprintGeneratedClass, FieldNotifyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames_MetaData)) }; // 2908908415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::ClassParams = {
		&UMVVMViewModelBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::PropPointers),
		0,
		0x009200A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelBlueprintGeneratedClass.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMViewModelBlueprintGeneratedClass>()
	{
		return UMVVMViewModelBlueprintGeneratedClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelBlueprintGeneratedClass);
	UMVVMViewModelBlueprintGeneratedClass::~UMVVMViewModelBlueprintGeneratedClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewModelBlueprintGeneratedClass, UMVVMViewModelBlueprintGeneratedClass::StaticClass, TEXT("UMVVMViewModelBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UMVVMViewModelBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelBlueprintGeneratedClass), 1543138077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h_3628260925(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_ViewModel_MVVMViewModelBlueprintGeneratedClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
