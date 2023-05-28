// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Commandlets/ImportAssetsCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportAssetsCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UImportAssetsCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UImportAssetsCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UImportAssetsCommandlet::StaticRegisterNativesUImportAssetsCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImportAssetsCommandlet);
	UClass* Z_Construct_UClass_UImportAssetsCommandlet_NoRegister()
	{
		return UImportAssetsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UImportAssetsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GlobalImportData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportDataList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportDataList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportDataList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportAssetsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportAssetsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ImportAssetsCommandlet.h" },
		{ "ModuleRelativePath", "Public/Commandlets/ImportAssetsCommandlet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_GlobalImportData_MetaData[] = {
		{ "Comment", "/**\n\x09 * Settings used when an import settings file is not used \n\x09 * or as a base to fallback on if settings are not overridden by the file \n\x09 */" },
		{ "ModuleRelativePath", "Public/Commandlets/ImportAssetsCommandlet.h" },
		{ "ToolTip", "Settings used when an import settings file is not used\nor as a base to fallback on if settings are not overridden by the file" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_GlobalImportData = { "GlobalImportData", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImportAssetsCommandlet, GlobalImportData), Z_Construct_UClass_UAutomatedAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_GlobalImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_GlobalImportData_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList_Inner = { "ImportDataList", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAutomatedAssetImportData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList_MetaData[] = {
		{ "Comment", "/** List of import data to import.  Each element in the list represents a list of assets using the same import settings */" },
		{ "ModuleRelativePath", "Public/Commandlets/ImportAssetsCommandlet.h" },
		{ "ToolTip", "List of import data to import.  Each element in the list represents a list of assets using the same import settings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList = { "ImportDataList", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImportAssetsCommandlet, ImportDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImportAssetsCommandlet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_GlobalImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportAssetsCommandlet_Statics::NewProp_ImportDataList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportAssetsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportAssetsCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImportAssetsCommandlet_Statics::ClassParams = {
		&UImportAssetsCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImportAssetsCommandlet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImportAssetsCommandlet_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UImportAssetsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImportAssetsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportAssetsCommandlet()
	{
		if (!Z_Registration_Info_UClass_UImportAssetsCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImportAssetsCommandlet.OuterSingleton, Z_Construct_UClass_UImportAssetsCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImportAssetsCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UImportAssetsCommandlet>()
	{
		return UImportAssetsCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportAssetsCommandlet);
	UImportAssetsCommandlet::~UImportAssetsCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImportAssetsCommandlet, UImportAssetsCommandlet::StaticClass, TEXT("UImportAssetsCommandlet"), &Z_Registration_Info_UClass_UImportAssetsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImportAssetsCommandlet), 3507475899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_1976802973(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Commandlets_ImportAssetsCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
