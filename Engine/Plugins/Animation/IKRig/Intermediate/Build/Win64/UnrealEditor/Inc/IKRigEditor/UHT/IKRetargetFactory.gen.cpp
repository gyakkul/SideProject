// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetargetEditor/IKRetargetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargetFactory() {}
// Cross Module References
	IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetFactory();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRetargetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References
	void UIKRetargetFactory::StaticRegisterNativesUIKRetargetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargetFactory);
	UClass* Z_Construct_UClass_UIKRetargetFactory_NoRegister()
	{
		return UIKRetargetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UIKRetargetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceIKRig_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceIKRig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRetargetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "RetargetEditor/IKRetargetFactory.h" },
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetFactory_Statics::NewProp_SourceIKRig_MetaData[] = {
		{ "ModuleRelativePath", "Public/RetargetEditor/IKRetargetFactory.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UIKRetargetFactory_Statics::NewProp_SourceIKRig = { "SourceIKRig", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargetFactory, SourceIKRig), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargetFactory_Statics::NewProp_SourceIKRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetFactory_Statics::NewProp_SourceIKRig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRetargetFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetFactory_Statics::NewProp_SourceIKRig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRetargetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargetFactory_Statics::ClassParams = {
		&UIKRetargetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRetargetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRetargetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRetargetFactory()
	{
		if (!Z_Registration_Info_UClass_UIKRetargetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargetFactory.OuterSingleton, Z_Construct_UClass_UIKRetargetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRetargetFactory.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UClass* StaticClass<UIKRetargetFactory>()
	{
		return UIKRetargetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargetFactory);
	UIKRetargetFactory::~UIKRetargetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRetargetFactory, UIKRetargetFactory::StaticClass, TEXT("UIKRetargetFactory"), &Z_Registration_Info_UClass_UIKRetargetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargetFactory), 3895084663U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_577139553(TEXT("/Script/IKRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RetargetEditor_IKRetargetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
