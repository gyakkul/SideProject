// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/CurveLinearColorAtlasFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColorAtlasFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UCurveLinearColorAtlasFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCurveLinearColorAtlasFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCurveLinearColorAtlasFactory::StaticRegisterNativesUCurveLinearColorAtlasFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveLinearColorAtlasFactory);
	UClass* Z_Construct_UClass_UCurveLinearColorAtlasFactory_NoRegister()
	{
		return UCurveLinearColorAtlasFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Texture" },
		{ "IncludePath", "Factories/CurveLinearColorAtlasFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveLinearColorAtlasFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CurveLinearColorAtlasFactory.h" },
		{ "ToolTip", "Width of the texture render target" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColorAtlasFactory, Width), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CurveLinearColorAtlasFactory.h" },
		{ "ToolTip", "Height of the texture render target" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColorAtlasFactory, Height), METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Format_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/CurveLinearColorAtlasFactory.h" },
		{ "ToolTip", "Pixel format of the texture render target" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveLinearColorAtlasFactory, Format), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Format_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::NewProp_Format,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColorAtlasFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::ClassParams = {
		&UCurveLinearColorAtlasFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveLinearColorAtlasFactory()
	{
		if (!Z_Registration_Info_UClass_UCurveLinearColorAtlasFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveLinearColorAtlasFactory.OuterSingleton, Z_Construct_UClass_UCurveLinearColorAtlasFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveLinearColorAtlasFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCurveLinearColorAtlasFactory>()
	{
		return UCurveLinearColorAtlasFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColorAtlasFactory);
	UCurveLinearColorAtlasFactory::~UCurveLinearColorAtlasFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveLinearColorAtlasFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveLinearColorAtlasFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveLinearColorAtlasFactory, UCurveLinearColorAtlasFactory::StaticClass, TEXT("UCurveLinearColorAtlasFactory"), &Z_Registration_Info_UClass_UCurveLinearColorAtlasFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveLinearColorAtlasFactory), 3261948803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveLinearColorAtlasFactory_h_470070424(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveLinearColorAtlasFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveLinearColorAtlasFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
