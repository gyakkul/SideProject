// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/IContentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIContentSource() {}
// Cross Module References
	ADDCONTENTDIALOG_API UEnum* Z_Construct_UEnum_AddContentDialog_EContentSourceCategory();
	UPackage* Z_Construct_UPackage__Script_AddContentDialog();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContentSourceCategory;
	static UEnum* EContentSourceCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContentSourceCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContentSourceCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AddContentDialog_EContentSourceCategory, (UObject*)Z_Construct_UPackage__Script_AddContentDialog(), TEXT("EContentSourceCategory"));
		}
		return Z_Registration_Info_UEnum_EContentSourceCategory.OuterSingleton;
	}
	template<> ADDCONTENTDIALOG_API UEnum* StaticEnum<EContentSourceCategory>()
	{
		return EContentSourceCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Statics::Enumerators[] = {
		{ "EContentSourceCategory::BlueprintFeature", (int64)EContentSourceCategory::BlueprintFeature },
		{ "EContentSourceCategory::CodeFeature", (int64)EContentSourceCategory::CodeFeature },
		{ "EContentSourceCategory::EnterpriseFeature", (int64)EContentSourceCategory::EnterpriseFeature },
		{ "EContentSourceCategory::Content", (int64)EContentSourceCategory::Content },
		{ "EContentSourceCategory::EnterpriseContent", (int64)EContentSourceCategory::EnterpriseContent },
		{ "EContentSourceCategory::SharedPack", (int64)EContentSourceCategory::SharedPack },
		{ "EContentSourceCategory::Unknown", (int64)EContentSourceCategory::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintFeature.Name", "EContentSourceCategory::BlueprintFeature" },
		{ "CodeFeature.Name", "EContentSourceCategory::CodeFeature" },
		{ "Comment", "/** Defines categories for content sources. */" },
		{ "Content.Name", "EContentSourceCategory::Content" },
		{ "EnterpriseContent.Name", "EContentSourceCategory::EnterpriseContent" },
		{ "EnterpriseFeature.Name", "EContentSourceCategory::EnterpriseFeature" },
		{ "ModuleRelativePath", "Private/IContentSource.h" },
		{ "SharedPack.Name", "EContentSourceCategory::SharedPack" },
		{ "ToolTip", "Defines categories for content sources." },
		{ "Unknown.Name", "EContentSourceCategory::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AddContentDialog,
		nullptr,
		"EContentSourceCategory",
		"EContentSourceCategory",
		Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AddContentDialog_EContentSourceCategory()
	{
		if (!Z_Registration_Info_UEnum_EContentSourceCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContentSourceCategory.InnerSingleton, Z_Construct_UEnum_AddContentDialog_EContentSourceCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContentSourceCategory.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Private_IContentSource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Private_IContentSource_h_Statics::EnumInfo[] = {
		{ EContentSourceCategory_StaticEnum, TEXT("EContentSourceCategory"), &Z_Registration_Info_UEnum_EContentSourceCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 206600232U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Private_IContentSource_h_3987708311(TEXT("/Script/AddContentDialog"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Private_IContentSource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AddContentDialog_Private_IContentSource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
