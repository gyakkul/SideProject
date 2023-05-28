// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFbxFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFbxFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFbxImportUI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFbxFactory::StaticRegisterNativesUFbxFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxFactory);
	UClass* Z_Construct_UClass_UFbxFactory_NoRegister()
	{
		return UFbxFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFbxFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalImportUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalImportUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FbxFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxFactory_Statics::NewProp_ImportUI_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/FbxFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxFactory_Statics::NewProp_ImportUI = { "ImportUI", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxFactory, ImportUI), Z_Construct_UClass_UFbxImportUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxFactory_Statics::NewProp_ImportUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxFactory_Statics::NewProp_ImportUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxFactory_Statics::NewProp_OriginalImportUI_MetaData[] = {
		{ "Comment", "/** Prevent garbage collection of original when overriding ImportUI property */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxFactory.h" },
		{ "ToolTip", "Prevent garbage collection of original when overriding ImportUI property" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFbxFactory_Statics::NewProp_OriginalImportUI = { "OriginalImportUI", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxFactory, OriginalImportUI), Z_Construct_UClass_UFbxImportUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFbxFactory_Statics::NewProp_OriginalImportUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxFactory_Statics::NewProp_OriginalImportUI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxFactory_Statics::NewProp_ImportUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxFactory_Statics::NewProp_OriginalImportUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxFactory_Statics::ClassParams = {
		&UFbxFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFbxFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFbxFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxFactory()
	{
		if (!Z_Registration_Info_UClass_UFbxFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxFactory.OuterSingleton, Z_Construct_UClass_UFbxFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxFactory>()
	{
		return UFbxFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxFactory);
	UFbxFactory::~UFbxFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxFactory, UFbxFactory::StaticClass, TEXT("UFbxFactory"), &Z_Registration_Info_UClass_UFbxFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxFactory), 3033147787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_2219168306(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
