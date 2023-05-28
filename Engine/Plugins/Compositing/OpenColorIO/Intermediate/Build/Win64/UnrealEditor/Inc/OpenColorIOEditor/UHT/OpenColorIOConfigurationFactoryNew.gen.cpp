// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/OpenColorIOConfigurationFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenColorIOConfigurationFactoryNew() {}
// Cross Module References
	OPENCOLORIOEDITOR_API UClass* Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew();
	OPENCOLORIOEDITOR_API UClass* Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_OpenColorIOEditor();
// End Cross Module References
	void UOpenColorIOConfigurationFactoryNew::StaticRegisterNativesUOpenColorIOConfigurationFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenColorIOConfigurationFactoryNew);
	UClass* Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_NoRegister()
	{
		return UOpenColorIOConfigurationFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenColorIOEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UOpenColorIOConfiguration objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/OpenColorIOConfigurationFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/OpenColorIOConfigurationFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UOpenColorIOConfiguration objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenColorIOConfigurationFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_Statics::ClassParams = {
		&UOpenColorIOConfigurationFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UOpenColorIOConfigurationFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenColorIOConfigurationFactoryNew.OuterSingleton, Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenColorIOConfigurationFactoryNew.OuterSingleton;
	}
	template<> OPENCOLORIOEDITOR_API UClass* StaticClass<UOpenColorIOConfigurationFactoryNew>()
	{
		return UOpenColorIOConfigurationFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenColorIOConfigurationFactoryNew);
	UOpenColorIOConfigurationFactoryNew::~UOpenColorIOConfigurationFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenColorIOConfigurationFactoryNew, UOpenColorIOConfigurationFactoryNew::StaticClass, TEXT("UOpenColorIOConfigurationFactoryNew"), &Z_Registration_Info_UClass_UOpenColorIOConfigurationFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenColorIOConfigurationFactoryNew), 3074329175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_415420291(TEXT("/Script/OpenColorIOEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenColorIO_Source_OpenColorIOEditor_Private_Factories_OpenColorIOConfigurationFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
