// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMWidgetBlueprintExtension_View.h"
#include "../Public/WidgetBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMWidgetBlueprintExtension_View() {}
// Cross Module References
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintView_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprintExtension();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	void UMVVMWidgetBlueprintExtension_View::StaticRegisterNativesUMVVMWidgetBlueprintExtension_View()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMWidgetBlueprintExtension_View);
	UClass* Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_NoRegister()
	{
		return UMVVMWidgetBlueprintExtension_View::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintView_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueprintView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetBlueprintExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MVVMWidgetBlueprintExtension_View.h" },
		{ "ModuleRelativePath", "Public/MVVMWidgetBlueprintExtension_View.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::NewProp_BlueprintView_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MVVMWidgetBlueprintExtension_View.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::NewProp_BlueprintView = { "BlueprintView", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMWidgetBlueprintExtension_View, BlueprintView), Z_Construct_UClass_UMVVMBlueprintView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::NewProp_BlueprintView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::NewProp_BlueprintView_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::NewProp_BlueprintView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMWidgetBlueprintExtension_View>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::ClassParams = {
		&UMVVMWidgetBlueprintExtension_View::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View()
	{
		if (!Z_Registration_Info_UClass_UMVVMWidgetBlueprintExtension_View.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMWidgetBlueprintExtension_View.OuterSingleton, Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMWidgetBlueprintExtension_View.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<UMVVMWidgetBlueprintExtension_View>()
	{
		return UMVVMWidgetBlueprintExtension_View::StaticClass();
	}
	UMVVMWidgetBlueprintExtension_View::UMVVMWidgetBlueprintExtension_View(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMWidgetBlueprintExtension_View);
	UMVVMWidgetBlueprintExtension_View::~UMVVMWidgetBlueprintExtension_View() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMWidgetBlueprintExtension_View_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMWidgetBlueprintExtension_View_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMWidgetBlueprintExtension_View, UMVVMWidgetBlueprintExtension_View::StaticClass, TEXT("UMVVMWidgetBlueprintExtension_View"), &Z_Registration_Info_UClass_UMVVMWidgetBlueprintExtension_View, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMWidgetBlueprintExtension_View), 706480347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMWidgetBlueprintExtension_View_h_1917430823(TEXT("/Script/ModelViewViewModelBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMWidgetBlueprintExtension_View_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMWidgetBlueprintExtension_View_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
