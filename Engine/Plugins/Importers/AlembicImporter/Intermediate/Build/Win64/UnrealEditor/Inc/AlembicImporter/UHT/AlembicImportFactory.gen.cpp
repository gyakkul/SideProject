// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AlembicImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlembicImportFactory() {}
// Cross Module References
	ALEMBICIMPORTER_API UClass* Z_Construct_UClass_UAlembicImportFactory();
	ALEMBICIMPORTER_API UClass* Z_Construct_UClass_UAlembicImportFactory_NoRegister();
	ALEMBICLIBRARY_API UClass* Z_Construct_UClass_UAbcImportSettings_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AlembicImporter();
// End Cross Module References
	void UAlembicImportFactory::StaticRegisterNativesUAlembicImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlembicImportFactory);
	UClass* Z_Construct_UClass_UAlembicImportFactory_NoRegister()
	{
		return UAlembicImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAlembicImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOption_MetaData[];
#endif
		static void NewProp_bShowOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlembicImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AlembicImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlembicImportFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AlembicImportFactory.h" },
		{ "ModuleRelativePath", "Classes/AlembicImportFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_ImportSettings_MetaData[] = {
		{ "Comment", "/** Object used to show import options for Alembic */" },
		{ "ModuleRelativePath", "Classes/AlembicImportFactory.h" },
		{ "ToolTip", "Object used to show import options for Alembic" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_ImportSettings = { "ImportSettings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAlembicImportFactory, ImportSettings), Z_Construct_UClass_UAbcImportSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_ImportSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_ImportSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_bShowOption_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AlembicImportFactory.h" },
	};
#endif
	void Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_bShowOption_SetBit(void* Obj)
	{
		((UAlembicImportFactory*)Obj)->bShowOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_bShowOption = { "bShowOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAlembicImportFactory), &Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_bShowOption_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_bShowOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_bShowOption_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlembicImportFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_ImportSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlembicImportFactory_Statics::NewProp_bShowOption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlembicImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlembicImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlembicImportFactory_Statics::ClassParams = {
		&UAlembicImportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlembicImportFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlembicImportFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAlembicImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAlembicImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlembicImportFactory()
	{
		if (!Z_Registration_Info_UClass_UAlembicImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlembicImportFactory.OuterSingleton, Z_Construct_UClass_UAlembicImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlembicImportFactory.OuterSingleton;
	}
	template<> ALEMBICIMPORTER_API UClass* StaticClass<UAlembicImportFactory>()
	{
		return UAlembicImportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlembicImportFactory);
	UAlembicImportFactory::~UAlembicImportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAlembicImportFactory, UAlembicImportFactory::StaticClass, TEXT("UAlembicImportFactory"), &Z_Registration_Info_UClass_UAlembicImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlembicImportFactory), 3388157409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_3303484522(TEXT("/Script/AlembicImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_AlembicImporter_Source_AlembicImporter_Classes_AlembicImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
