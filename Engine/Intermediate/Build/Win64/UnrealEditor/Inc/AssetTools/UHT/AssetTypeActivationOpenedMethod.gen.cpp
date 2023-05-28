// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetTypeActivationOpenedMethod.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetTypeActivationOpenedMethod() {}
// Cross Module References
	ASSETTOOLS_API UEnum* Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod();
	UPackage* Z_Construct_UPackage__Script_AssetTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetTypeActivationOpenedMethod;
	static UEnum* EAssetTypeActivationOpenedMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetTypeActivationOpenedMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetTypeActivationOpenedMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod, (UObject*)Z_Construct_UPackage__Script_AssetTools(), TEXT("EAssetTypeActivationOpenedMethod"));
		}
		return Z_Registration_Info_UEnum_EAssetTypeActivationOpenedMethod.OuterSingleton;
	}
	template<> ASSETTOOLS_API UEnum* StaticEnum<EAssetTypeActivationOpenedMethod>()
	{
		return EAssetTypeActivationOpenedMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod_Statics::Enumerators[] = {
		{ "EAssetTypeActivationOpenedMethod::Edit", (int64)EAssetTypeActivationOpenedMethod::Edit },
		{ "EAssetTypeActivationOpenedMethod::View", (int64)EAssetTypeActivationOpenedMethod::View },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09(jcotton) This enum has been extracted into a separate header as it would ideally live in IAssetTypeActions.h or AssetTypeActions_Base.h, \n *  however these files are included without module linking (IncludePathModuleNames) in several other modules which makes adding a UENUM() not \n *  possible without refactoring.\n */// Types of permissions allowed when attempting to open an asset in editor via activation (EAssetTypeActivationMethod)\n" },
		{ "Edit.Name", "EAssetTypeActivationOpenedMethod::Edit" },
		{ "ModuleRelativePath", "Public/AssetTypeActivationOpenedMethod.h" },
		{ "ToolTip", "(jcotton) This enum has been extracted into a separate header as it would ideally live in IAssetTypeActions.h or AssetTypeActions_Base.h,\nhowever these files are included without module linking (IncludePathModuleNames) in several other modules which makes adding a UENUM() not\npossible without refactoring.\n// Types of permissions allowed when attempting to open an asset in editor via activation (EAssetTypeActivationMethod)" },
		{ "View.Name", "EAssetTypeActivationOpenedMethod::View" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetTools,
		nullptr,
		"EAssetTypeActivationOpenedMethod",
		"EAssetTypeActivationOpenedMethod",
		Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod()
	{
		if (!Z_Registration_Info_UEnum_EAssetTypeActivationOpenedMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetTypeActivationOpenedMethod.InnerSingleton, Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetTypeActivationOpenedMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetTypeActivationOpenedMethod_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetTypeActivationOpenedMethod_h_Statics::EnumInfo[] = {
		{ EAssetTypeActivationOpenedMethod_StaticEnum, TEXT("EAssetTypeActivationOpenedMethod"), &Z_Registration_Info_UEnum_EAssetTypeActivationOpenedMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 651740635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetTypeActivationOpenedMethod_h_1255217241(TEXT("/Script/AssetTools"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetTypeActivationOpenedMethod_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AssetTypeActivationOpenedMethod_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
