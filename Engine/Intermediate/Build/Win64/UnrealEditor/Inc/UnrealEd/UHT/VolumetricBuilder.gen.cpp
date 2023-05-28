// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Builders/VolumetricBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumetricBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UVolumetricBuilder();
	UNREALED_API UClass* Z_Construct_UClass_UVolumetricBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UVolumetricBuilder::StaticRegisterNativesUVolumetricBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVolumetricBuilder);
	UClass* Z_Construct_UClass_UVolumetricBuilder_NoRegister()
	{
		return UVolumetricBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UVolumetricBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSheets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSheets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVolumetricBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Volumetric" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/VolumetricBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/VolumetricBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/Builders/VolumetricBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumetricBuilder, Z), METADATA_PARAMS(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Classes/Builders/VolumetricBuilder.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumetricBuilder, Radius), METADATA_PARAMS(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_NumSheets_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "2" },
		{ "ModuleRelativePath", "Classes/Builders/VolumetricBuilder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_NumSheets = { "NumSheets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumetricBuilder, NumSheets), METADATA_PARAMS(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_NumSheets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_NumSheets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/VolumetricBuilder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVolumetricBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVolumetricBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_NumSheets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVolumetricBuilder_Statics::NewProp_GroupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVolumetricBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVolumetricBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVolumetricBuilder_Statics::ClassParams = {
		&UVolumetricBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVolumetricBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVolumetricBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVolumetricBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVolumetricBuilder()
	{
		if (!Z_Registration_Info_UClass_UVolumetricBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVolumetricBuilder.OuterSingleton, Z_Construct_UClass_UVolumetricBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVolumetricBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UVolumetricBuilder>()
	{
		return UVolumetricBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVolumetricBuilder);
	UVolumetricBuilder::~UVolumetricBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVolumetricBuilder, UVolumetricBuilder::StaticClass, TEXT("UVolumetricBuilder"), &Z_Registration_Info_UClass_UVolumetricBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVolumetricBuilder), 465611312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_1324848780(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_VolumetricBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
