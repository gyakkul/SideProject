// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/TrueTypeFontFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrueTypeFontFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UFontImportOptions_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTrueTypeFontFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTrueTypeFontFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTrueTypeFontFactory::StaticRegisterNativesUTrueTypeFontFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrueTypeFontFactory);
	UClass* Z_Construct_UClass_UTrueTypeFontFactory_NoRegister()
	{
		return UTrueTypeFontFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTrueTypeFontFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropertiesConfigured_MetaData[];
#endif
		static void NewProp_bPropertiesConfigured_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropertiesConfigured;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFontSelected_MetaData[];
#endif
		static void NewProp_bFontSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFontSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrueTypeFontFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrueTypeFontFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/TrueTypeFontFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/TrueTypeFontFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "Category", "TrueTypeFontFactory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Factories/TrueTypeFontFactory.h" },
		{ "ToolTip", "Import options for the font" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTrueTypeFontFactory, ImportOptions), Z_Construct_UClass_UFontImportOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_ImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_ImportOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured_MetaData[] = {
		{ "Comment", "/** True when the font dialog was shown for this factory during the non-legacy creation process */" },
		{ "ModuleRelativePath", "Classes/Factories/TrueTypeFontFactory.h" },
		{ "ToolTip", "True when the font dialog was shown for this factory during the non-legacy creation process" },
	};
#endif
	void Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured_SetBit(void* Obj)
	{
		((UTrueTypeFontFactory*)Obj)->bPropertiesConfigured = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured = { "bPropertiesConfigured", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTrueTypeFontFactory), &Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected_MetaData[] = {
		{ "Comment", "/** True if a font was selected during the non-legacy creation process */" },
		{ "ModuleRelativePath", "Classes/Factories/TrueTypeFontFactory.h" },
		{ "ToolTip", "True if a font was selected during the non-legacy creation process" },
	};
#endif
	void Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected_SetBit(void* Obj)
	{
		((UTrueTypeFontFactory*)Obj)->bFontSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected = { "bFontSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTrueTypeFontFactory), &Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrueTypeFontFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_ImportOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bPropertiesConfigured,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrueTypeFontFactory_Statics::NewProp_bFontSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrueTypeFontFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrueTypeFontFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrueTypeFontFactory_Statics::ClassParams = {
		&UTrueTypeFontFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTrueTypeFontFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrueTypeFontFactory_Statics::PropPointers),
		0,
		0x009020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTrueTypeFontFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrueTypeFontFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrueTypeFontFactory()
	{
		if (!Z_Registration_Info_UClass_UTrueTypeFontFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrueTypeFontFactory.OuterSingleton, Z_Construct_UClass_UTrueTypeFontFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrueTypeFontFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTrueTypeFontFactory>()
	{
		return UTrueTypeFontFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrueTypeFontFactory);
	UTrueTypeFontFactory::~UTrueTypeFontFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrueTypeFontFactory, UTrueTypeFontFactory::StaticClass, TEXT("UTrueTypeFontFactory"), &Z_Registration_Info_UClass_UTrueTypeFontFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrueTypeFontFactory), 3563749655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_2385438793(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TrueTypeFontFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
