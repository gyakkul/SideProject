// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigEditor/IKRigDefinitionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigDefinitionFactory() {}
// Cross Module References
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigDefinitionFactory();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigDefinitionFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References
	void UIKRigDefinitionFactory::StaticRegisterNativesUIKRigDefinitionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigDefinitionFactory);
	UClass* Z_Construct_UClass_UIKRigDefinitionFactory_NoRegister()
	{
		return UIKRigDefinitionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigDefinitionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigDefinitionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigDefinitionFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RigEditor/IKRigDefinitionFactory.h" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigDefinitionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigDefinitionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigDefinitionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigDefinitionFactory_Statics::ClassParams = {
		&UIKRigDefinitionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIKRigDefinitionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigDefinitionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRigDefinitionFactory()
	{
		if (!Z_Registration_Info_UClass_UIKRigDefinitionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigDefinitionFactory.OuterSingleton, Z_Construct_UClass_UIKRigDefinitionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigDefinitionFactory.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UClass* StaticClass<UIKRigDefinitionFactory>()
	{
		return UIKRigDefinitionFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigDefinitionFactory);
	UIKRigDefinitionFactory::~UIKRigDefinitionFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigDefinitionFactory, UIKRigDefinitionFactory::StaticClass, TEXT("UIKRigDefinitionFactory"), &Z_Registration_Info_UClass_UIKRigDefinitionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigDefinitionFactory), 2524029303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_1843049634(TEXT("/Script/IKRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigDefinitionFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
