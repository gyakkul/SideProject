// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/ModifierHierarchyAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifierHierarchyAssetFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VCamExtensionsEditor();
	VCAMEXTENSIONSEDITOR_API UClass* Z_Construct_UClass_UModifierHierarchyAssetFactory();
	VCAMEXTENSIONSEDITOR_API UClass* Z_Construct_UClass_UModifierHierarchyAssetFactory_NoRegister();
// End Cross Module References
	void UModifierHierarchyAssetFactory::StaticRegisterNativesUModifierHierarchyAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModifierHierarchyAssetFactory);
	UClass* Z_Construct_UClass_UModifierHierarchyAssetFactory_NoRegister()
	{
		return UModifierHierarchyAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UModifierHierarchyAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModifierHierarchyAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensionsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModifierHierarchyAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Factories/ModifierHierarchyAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/ModifierHierarchyAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModifierHierarchyAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifierHierarchyAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifierHierarchyAssetFactory_Statics::ClassParams = {
		&UModifierHierarchyAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UModifierHierarchyAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModifierHierarchyAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModifierHierarchyAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UModifierHierarchyAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifierHierarchyAssetFactory.OuterSingleton, Z_Construct_UClass_UModifierHierarchyAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModifierHierarchyAssetFactory.OuterSingleton;
	}
	template<> VCAMEXTENSIONSEDITOR_API UClass* StaticClass<UModifierHierarchyAssetFactory>()
	{
		return UModifierHierarchyAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModifierHierarchyAssetFactory);
	UModifierHierarchyAssetFactory::~UModifierHierarchyAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensionsEditor_Private_Factories_ModifierHierarchyAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensionsEditor_Private_Factories_ModifierHierarchyAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModifierHierarchyAssetFactory, UModifierHierarchyAssetFactory::StaticClass, TEXT("UModifierHierarchyAssetFactory"), &Z_Registration_Info_UClass_UModifierHierarchyAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifierHierarchyAssetFactory), 4249561394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensionsEditor_Private_Factories_ModifierHierarchyAssetFactory_h_3446694011(TEXT("/Script/VCamExtensionsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensionsEditor_Private_Factories_ModifierHierarchyAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensionsEditor_Private_Factories_ModifierHierarchyAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
