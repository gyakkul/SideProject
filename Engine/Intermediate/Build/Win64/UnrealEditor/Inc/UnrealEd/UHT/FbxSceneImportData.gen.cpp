// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/FbxSceneImportData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFbxSceneImportData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportData();
	UNREALED_API UClass* Z_Construct_UClass_UFbxSceneImportData_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFbxSceneReimportStatusFlags;
	static UEnum* EFbxSceneReimportStatusFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFbxSceneReimportStatusFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFbxSceneReimportStatusFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EFbxSceneReimportStatusFlags"));
		}
		return Z_Registration_Info_UEnum_EFbxSceneReimportStatusFlags.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EFbxSceneReimportStatusFlags>()
	{
		return EFbxSceneReimportStatusFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Statics::Enumerators[] = {
		{ "EFbxSceneReimportStatusFlags::None", (int64)EFbxSceneReimportStatusFlags::None },
		{ "EFbxSceneReimportStatusFlags::Added", (int64)EFbxSceneReimportStatusFlags::Added },
		{ "EFbxSceneReimportStatusFlags::Removed", (int64)EFbxSceneReimportStatusFlags::Removed },
		{ "EFbxSceneReimportStatusFlags::Same", (int64)EFbxSceneReimportStatusFlags::Same },
		{ "EFbxSceneReimportStatusFlags::FoundContentBrowserAsset", (int64)EFbxSceneReimportStatusFlags::FoundContentBrowserAsset },
		{ "EFbxSceneReimportStatusFlags::ReimportAsset", (int64)EFbxSceneReimportStatusFlags::ReimportAsset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Statics::Enum_MetaDataParams[] = {
		{ "Added.Name", "EFbxSceneReimportStatusFlags::Added" },
		{ "FoundContentBrowserAsset.Name", "EFbxSceneReimportStatusFlags::FoundContentBrowserAsset" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportData.h" },
		{ "None.Name", "EFbxSceneReimportStatusFlags::None" },
		{ "ReimportAsset.Name", "EFbxSceneReimportStatusFlags::ReimportAsset" },
		{ "Removed.Name", "EFbxSceneReimportStatusFlags::Removed" },
		{ "Same.Name", "EFbxSceneReimportStatusFlags::Same" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EFbxSceneReimportStatusFlags",
		"EFbxSceneReimportStatusFlags",
		Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags()
	{
		if (!Z_Registration_Info_UEnum_EFbxSceneReimportStatusFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFbxSceneReimportStatusFlags.InnerSingleton, Z_Construct_UEnum_UnrealEd_EFbxSceneReimportStatusFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFbxSceneReimportStatusFlags.InnerSingleton;
	}
	void UFbxSceneImportData::StaticRegisterNativesUFbxSceneImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFbxSceneImportData);
	UClass* Z_Construct_UClass_UFbxSceneImportData_NoRegister()
	{
		return UFbxSceneImportData::StaticClass();
	}
	struct Z_Construct_UClass_UFbxSceneImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFbxFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFbxFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFbxSceneImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/FbxSceneImportData.h" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportData.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFbxSceneImportData_Statics::NewProp_SourceFbxFile_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/* The path of the fbx file use for the last import */" },
		{ "ModuleRelativePath", "Classes/Factories/FbxSceneImportData.h" },
		{ "ToolTip", "The path of the fbx file use for the last import" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFbxSceneImportData_Statics::NewProp_SourceFbxFile = { "SourceFbxFile", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFbxSceneImportData, SourceFbxFile), METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportData_Statics::NewProp_SourceFbxFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportData_Statics::NewProp_SourceFbxFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFbxSceneImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFbxSceneImportData_Statics::NewProp_SourceFbxFile,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFbxSceneImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFbxSceneImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFbxSceneImportData_Statics::ClassParams = {
		&UFbxSceneImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UFbxSceneImportData_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportData_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFbxSceneImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFbxSceneImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFbxSceneImportData()
	{
		if (!Z_Registration_Info_UClass_UFbxSceneImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFbxSceneImportData.OuterSingleton, Z_Construct_UClass_UFbxSceneImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFbxSceneImportData.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFbxSceneImportData>()
	{
		return UFbxSceneImportData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFbxSceneImportData);
	UFbxSceneImportData::~UFbxSceneImportData() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFbxSceneImportData)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_Statics::EnumInfo[] = {
		{ EFbxSceneReimportStatusFlags_StaticEnum, TEXT("EFbxSceneReimportStatusFlags"), &Z_Registration_Info_UEnum_EFbxSceneReimportStatusFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1402241310U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFbxSceneImportData, UFbxSceneImportData::StaticClass, TEXT("UFbxSceneImportData"), &Z_Registration_Info_UClass_UFbxSceneImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFbxSceneImportData), 315700574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_3883475960(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_FbxSceneImportData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
