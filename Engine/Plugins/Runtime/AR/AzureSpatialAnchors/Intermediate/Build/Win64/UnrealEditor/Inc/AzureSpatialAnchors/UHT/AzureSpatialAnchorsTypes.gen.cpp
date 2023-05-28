// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureSpatialAnchorsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureSpatialAnchorsTypes() {}
// Cross Module References
	AZURESPATIALANCHORS_API UClass* Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister();
	AZURESPATIALANCHORS_API UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory();
	AZURESPATIALANCHORS_API UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus();
	AZURESPATIALANCHORS_API UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy();
	AZURESPATIALANCHORS_API UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity();
	AZURESPATIALANCHORS_API UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult();
	AZURESPATIALANCHORS_API UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback();
	AZURESPATIALANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig();
	AZURESPATIALANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria();
	AZURESPATIALANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration();
	AZURESPATIALANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus();
	AZURESPATIALANCHORS_API UScriptStruct* Z_Construct_UScriptStruct_FCoarseLocalizationSettings();
	UPackage* Z_Construct_UPackage__Script_AzureSpatialAnchors();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzureSpatialAnchorsLogVerbosity;
	static UEnum* EAzureSpatialAnchorsLogVerbosity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorsLogVerbosity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzureSpatialAnchorsLogVerbosity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("EAzureSpatialAnchorsLogVerbosity"));
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorsLogVerbosity.OuterSingleton;
	}
	template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorsLogVerbosity>()
	{
		return EAzureSpatialAnchorsLogVerbosity_StaticEnum();
	}
	struct Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity_Statics::Enumerators[] = {
		{ "EAzureSpatialAnchorsLogVerbosity::None", (int64)EAzureSpatialAnchorsLogVerbosity::None },
		{ "EAzureSpatialAnchorsLogVerbosity::Error", (int64)EAzureSpatialAnchorsLogVerbosity::Error },
		{ "EAzureSpatialAnchorsLogVerbosity::Warning", (int64)EAzureSpatialAnchorsLogVerbosity::Warning },
		{ "EAzureSpatialAnchorsLogVerbosity::Information", (int64)EAzureSpatialAnchorsLogVerbosity::Information },
		{ "EAzureSpatialAnchorsLogVerbosity::Debug", (int64)EAzureSpatialAnchorsLogVerbosity::Debug },
		{ "EAzureSpatialAnchorsLogVerbosity::All", (int64)EAzureSpatialAnchorsLogVerbosity::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EAzureSpatialAnchorsLogVerbosity::All" },
		{ "BlueprintType", "true" },
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "// Note: this must match winrt::Microsoft::Azure::SpatialAnchors::SessionLogLevel\n" },
		{ "Debug.Name", "EAzureSpatialAnchorsLogVerbosity::Debug" },
		{ "Error.Name", "EAzureSpatialAnchorsLogVerbosity::Error" },
		{ "Information.Name", "EAzureSpatialAnchorsLogVerbosity::Information" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "None.Name", "EAzureSpatialAnchorsLogVerbosity::None" },
		{ "ToolTip", "Note: this must match winrt::Microsoft::Azure::SpatialAnchors::SessionLogLevel" },
		{ "Warning.Name", "EAzureSpatialAnchorsLogVerbosity::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		"EAzureSpatialAnchorsLogVerbosity",
		"EAzureSpatialAnchorsLogVerbosity",
		Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorsLogVerbosity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzureSpatialAnchorsLogVerbosity.InnerSingleton, Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorsLogVerbosity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzureSpatialAnchorsResult;
	static UEnum* EAzureSpatialAnchorsResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorsResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzureSpatialAnchorsResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("EAzureSpatialAnchorsResult"));
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorsResult.OuterSingleton;
	}
	template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorsResult>()
	{
		return EAzureSpatialAnchorsResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult_Statics::Enumerators[] = {
		{ "EAzureSpatialAnchorsResult::Success", (int64)EAzureSpatialAnchorsResult::Success },
		{ "EAzureSpatialAnchorsResult::NotStarted", (int64)EAzureSpatialAnchorsResult::NotStarted },
		{ "EAzureSpatialAnchorsResult::Started", (int64)EAzureSpatialAnchorsResult::Started },
		{ "EAzureSpatialAnchorsResult::FailAlreadyStarted", (int64)EAzureSpatialAnchorsResult::FailAlreadyStarted },
		{ "EAzureSpatialAnchorsResult::FailNoARPin", (int64)EAzureSpatialAnchorsResult::FailNoARPin },
		{ "EAzureSpatialAnchorsResult::FailBadLocalAnchorID", (int64)EAzureSpatialAnchorsResult::FailBadLocalAnchorID },
		{ "EAzureSpatialAnchorsResult::FailBadCloudAnchorIdentifier", (int64)EAzureSpatialAnchorsResult::FailBadCloudAnchorIdentifier },
		{ "EAzureSpatialAnchorsResult::FailAnchorIdAlreadyUsed", (int64)EAzureSpatialAnchorsResult::FailAnchorIdAlreadyUsed },
		{ "EAzureSpatialAnchorsResult::FailAnchorDoesNotExist", (int64)EAzureSpatialAnchorsResult::FailAnchorDoesNotExist },
		{ "EAzureSpatialAnchorsResult::FailAnchorAlreadyTracked", (int64)EAzureSpatialAnchorsResult::FailAnchorAlreadyTracked },
		{ "EAzureSpatialAnchorsResult::FailNoAnchor", (int64)EAzureSpatialAnchorsResult::FailNoAnchor },
		{ "EAzureSpatialAnchorsResult::FailNoCloudAnchor", (int64)EAzureSpatialAnchorsResult::FailNoCloudAnchor },
		{ "EAzureSpatialAnchorsResult::FailNoLocalAnchor", (int64)EAzureSpatialAnchorsResult::FailNoLocalAnchor },
		{ "EAzureSpatialAnchorsResult::FailNoSession", (int64)EAzureSpatialAnchorsResult::FailNoSession },
		{ "EAzureSpatialAnchorsResult::FailNoWatcher", (int64)EAzureSpatialAnchorsResult::FailNoWatcher },
		{ "EAzureSpatialAnchorsResult::FailNotEnoughData", (int64)EAzureSpatialAnchorsResult::FailNotEnoughData },
		{ "EAzureSpatialAnchorsResult::FailBadLifetime", (int64)EAzureSpatialAnchorsResult::FailBadLifetime },
		{ "EAzureSpatialAnchorsResult::FailSeeErrorString", (int64)EAzureSpatialAnchorsResult::FailSeeErrorString },
		{ "EAzureSpatialAnchorsResult::NotLocated", (int64)EAzureSpatialAnchorsResult::NotLocated },
		{ "EAzureSpatialAnchorsResult::Canceled", (int64)EAzureSpatialAnchorsResult::Canceled },
		{ "EAzureSpatialAnchorsResult::FailUnknown", (int64)EAzureSpatialAnchorsResult::FailUnknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Canceled.Name", "EAzureSpatialAnchorsResult::Canceled" },
		{ "Category", "AR|AzureSpatialAnchors" },
		{ "Comment", "// Note: this Result enum must match AzureSpatialAnchorsInterop::AsyncResult in MixedRealityInterop.h\n" },
		{ "FailAlreadyStarted.Name", "EAzureSpatialAnchorsResult::FailAlreadyStarted" },
		{ "FailAnchorAlreadyTracked.Name", "EAzureSpatialAnchorsResult::FailAnchorAlreadyTracked" },
		{ "FailAnchorDoesNotExist.Name", "EAzureSpatialAnchorsResult::FailAnchorDoesNotExist" },
		{ "FailAnchorIdAlreadyUsed.Name", "EAzureSpatialAnchorsResult::FailAnchorIdAlreadyUsed" },
		{ "FailBadCloudAnchorIdentifier.Name", "EAzureSpatialAnchorsResult::FailBadCloudAnchorIdentifier" },
		{ "FailBadLifetime.Name", "EAzureSpatialAnchorsResult::FailBadLifetime" },
		{ "FailBadLocalAnchorID.Name", "EAzureSpatialAnchorsResult::FailBadLocalAnchorID" },
		{ "FailNoAnchor.Name", "EAzureSpatialAnchorsResult::FailNoAnchor" },
		{ "FailNoARPin.Name", "EAzureSpatialAnchorsResult::FailNoARPin" },
		{ "FailNoCloudAnchor.Name", "EAzureSpatialAnchorsResult::FailNoCloudAnchor" },
		{ "FailNoLocalAnchor.Name", "EAzureSpatialAnchorsResult::FailNoLocalAnchor" },
		{ "FailNoSession.Name", "EAzureSpatialAnchorsResult::FailNoSession" },
		{ "FailNotEnoughData.Name", "EAzureSpatialAnchorsResult::FailNotEnoughData" },
		{ "FailNoWatcher.Name", "EAzureSpatialAnchorsResult::FailNoWatcher" },
		{ "FailSeeErrorString.Name", "EAzureSpatialAnchorsResult::FailSeeErrorString" },
		{ "FailUnknown.Name", "EAzureSpatialAnchorsResult::FailUnknown" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "NotLocated.Name", "EAzureSpatialAnchorsResult::NotLocated" },
		{ "NotStarted.Name", "EAzureSpatialAnchorsResult::NotStarted" },
		{ "Started.Name", "EAzureSpatialAnchorsResult::Started" },
		{ "Success.Name", "EAzureSpatialAnchorsResult::Success" },
		{ "ToolTip", "Note: this Result enum must match AzureSpatialAnchorsInterop::AsyncResult in MixedRealityInterop.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		"EAzureSpatialAnchorsResult",
		"EAzureSpatialAnchorsResult",
		Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorsResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzureSpatialAnchorsResult.InnerSingleton, Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorsResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzureSpatialAnchorDataCategory;
	static UEnum* EAzureSpatialAnchorDataCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorDataCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzureSpatialAnchorDataCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("EAzureSpatialAnchorDataCategory"));
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorDataCategory.OuterSingleton;
	}
	template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorDataCategory>()
	{
		return EAzureSpatialAnchorDataCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory_Statics::Enumerators[] = {
		{ "EAzureSpatialAnchorDataCategory::None", (int64)EAzureSpatialAnchorDataCategory::None },
		{ "EAzureSpatialAnchorDataCategory::Properties", (int64)EAzureSpatialAnchorDataCategory::Properties },
		{ "EAzureSpatialAnchorDataCategory::Spatial", (int64)EAzureSpatialAnchorDataCategory::Spatial },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "// Note: this must match winrt::Microsoft::Azure::SpatialAnchors::AnchorDataCategory\n" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "None.Name", "EAzureSpatialAnchorDataCategory::None" },
		{ "Properties.Comment", "// No data is returned.\n" },
		{ "Properties.Name", "EAzureSpatialAnchorDataCategory::Properties" },
		{ "Properties.ToolTip", "No data is returned." },
		{ "Spatial.Comment", "// Get only Anchor metadata properties including AppProperties.\n" },
		{ "Spatial.Name", "EAzureSpatialAnchorDataCategory::Spatial" },
		{ "Spatial.ToolTip", "Get only Anchor metadata properties including AppProperties." },
		{ "ToolTip", "Note: this must match winrt::Microsoft::Azure::SpatialAnchors::AnchorDataCategory" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		"EAzureSpatialAnchorDataCategory",
		"EAzureSpatialAnchorDataCategory",
		Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorDataCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzureSpatialAnchorDataCategory.InnerSingleton, Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorDataCategory.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateStrategy;
	static UEnum* EAzureSpatialAnchorsLocateStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("EAzureSpatialAnchorsLocateStrategy"));
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateStrategy.OuterSingleton;
	}
	template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorsLocateStrategy>()
	{
		return EAzureSpatialAnchorsLocateStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy_Statics::Enumerators[] = {
		{ "EAzureSpatialAnchorsLocateStrategy::AnyStrategy", (int64)EAzureSpatialAnchorsLocateStrategy::AnyStrategy },
		{ "EAzureSpatialAnchorsLocateStrategy::VisualInformation", (int64)EAzureSpatialAnchorsLocateStrategy::VisualInformation },
		{ "EAzureSpatialAnchorsLocateStrategy::Relationship", (int64)EAzureSpatialAnchorsLocateStrategy::Relationship },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy_Statics::Enum_MetaDataParams[] = {
		{ "AnyStrategy.Name", "EAzureSpatialAnchorsLocateStrategy::AnyStrategy" },
		{ "BlueprintType", "true" },
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "// Note: this must match winrt::Microsoft::Azure::SpatialAnchors::LocateStrategy\n" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "Relationship.Comment", "// Indicates that anchors will be located primarily by visual information.\n" },
		{ "Relationship.Name", "EAzureSpatialAnchorsLocateStrategy::Relationship" },
		{ "Relationship.ToolTip", "Indicates that anchors will be located primarily by visual information." },
		{ "ToolTip", "Note: this must match winrt::Microsoft::Azure::SpatialAnchors::LocateStrategy" },
		{ "VisualInformation.Comment", "// Indicates that any method is acceptable.\n" },
		{ "VisualInformation.Name", "EAzureSpatialAnchorsLocateStrategy::VisualInformation" },
		{ "VisualInformation.ToolTip", "Indicates that any method is acceptable." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		"EAzureSpatialAnchorsLocateStrategy",
		"EAzureSpatialAnchorsLocateStrategy",
		Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateStrategy.InnerSingleton, Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateStrategy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateAnchorStatus;
	static UEnum* EAzureSpatialAnchorsLocateAnchorStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateAnchorStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateAnchorStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("EAzureSpatialAnchorsLocateAnchorStatus"));
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateAnchorStatus.OuterSingleton;
	}
	template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorsLocateAnchorStatus>()
	{
		return EAzureSpatialAnchorsLocateAnchorStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus_Statics::Enumerators[] = {
		{ "EAzureSpatialAnchorsLocateAnchorStatus::AlreadyTracked", (int64)EAzureSpatialAnchorsLocateAnchorStatus::AlreadyTracked },
		{ "EAzureSpatialAnchorsLocateAnchorStatus::Located", (int64)EAzureSpatialAnchorsLocateAnchorStatus::Located },
		{ "EAzureSpatialAnchorsLocateAnchorStatus::NotLocated", (int64)EAzureSpatialAnchorsLocateAnchorStatus::NotLocated },
		{ "EAzureSpatialAnchorsLocateAnchorStatus::NotLocatedAnchorDoesNotExist", (int64)EAzureSpatialAnchorsLocateAnchorStatus::NotLocatedAnchorDoesNotExist },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus_Statics::Enum_MetaDataParams[] = {
		{ "AlreadyTracked.Name", "EAzureSpatialAnchorsLocateAnchorStatus::AlreadyTracked" },
		{ "BlueprintType", "true" },
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "// Note: this must match winrt::Microsoft::Azure::SpatialAnchors::LocateAnchorStatus\n" },
		{ "Located.Comment", "// The anchor was already being tracked.\n" },
		{ "Located.Name", "EAzureSpatialAnchorsLocateAnchorStatus::Located" },
		{ "Located.ToolTip", "The anchor was already being tracked." },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "NotLocated.Comment", "// The anchor was found.\n" },
		{ "NotLocated.Name", "EAzureSpatialAnchorsLocateAnchorStatus::NotLocated" },
		{ "NotLocated.ToolTip", "The anchor was found." },
		{ "NotLocatedAnchorDoesNotExist.Comment", "// The anchor was not found.\n" },
		{ "NotLocatedAnchorDoesNotExist.Name", "EAzureSpatialAnchorsLocateAnchorStatus::NotLocatedAnchorDoesNotExist" },
		{ "NotLocatedAnchorDoesNotExist.ToolTip", "The anchor was not found." },
		{ "ToolTip", "Note: this must match winrt::Microsoft::Azure::SpatialAnchors::LocateAnchorStatus" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		"EAzureSpatialAnchorsLocateAnchorStatus",
		"EAzureSpatialAnchorsLocateAnchorStatus",
		Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateAnchorStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateAnchorStatus.InnerSingleton, Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateAnchorStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAzureSpatialAnchorsSessionUserFeedback;
	static UEnum* EAzureSpatialAnchorsSessionUserFeedback_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorsSessionUserFeedback.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAzureSpatialAnchorsSessionUserFeedback.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("EAzureSpatialAnchorsSessionUserFeedback"));
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorsSessionUserFeedback.OuterSingleton;
	}
	template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorsSessionUserFeedback>()
	{
		return EAzureSpatialAnchorsSessionUserFeedback_StaticEnum();
	}
	struct Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback_Statics::Enumerators[] = {
		{ "EAzureSpatialAnchorsSessionUserFeedback::None", (int64)EAzureSpatialAnchorsSessionUserFeedback::None },
		{ "EAzureSpatialAnchorsSessionUserFeedback::NotEnoughMotion", (int64)EAzureSpatialAnchorsSessionUserFeedback::NotEnoughMotion },
		{ "EAzureSpatialAnchorsSessionUserFeedback::MotionTooQuick", (int64)EAzureSpatialAnchorsSessionUserFeedback::MotionTooQuick },
		{ "EAzureSpatialAnchorsSessionUserFeedback::NotEnoughFeatures", (int64)EAzureSpatialAnchorsSessionUserFeedback::NotEnoughFeatures },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "// Note: this must match winrt::Microsoft::Azure::SpatialAnchors::SessionUserFeedback\n" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "MotionTooQuick.Comment", "// Device is not moving enough to create a neighborhood of key-frames.\n" },
		{ "MotionTooQuick.Name", "EAzureSpatialAnchorsSessionUserFeedback::MotionTooQuick" },
		{ "MotionTooQuick.ToolTip", "Device is not moving enough to create a neighborhood of key-frames." },
		{ "None.Name", "EAzureSpatialAnchorsSessionUserFeedback::None" },
		{ "NotEnoughFeatures.Comment", "// Device is moving too quickly for stable tracking.\n// Note: skipped 3  - presumably these values are used as bit flags somewhere?\n" },
		{ "NotEnoughFeatures.Name", "EAzureSpatialAnchorsSessionUserFeedback::NotEnoughFeatures" },
		{ "NotEnoughFeatures.ToolTip", "Device is moving too quickly for stable tracking.\nNote: skipped 3  - presumably these values are used as bit flags somewhere?" },
		{ "NotEnoughMotion.Comment", "// No specific feedback is available.\n" },
		{ "NotEnoughMotion.Name", "EAzureSpatialAnchorsSessionUserFeedback::NotEnoughMotion" },
		{ "NotEnoughMotion.ToolTip", "No specific feedback is available." },
		{ "ToolTip", "Note: this must match winrt::Microsoft::Azure::SpatialAnchors::SessionUserFeedback" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		"EAzureSpatialAnchorsSessionUserFeedback",
		"EAzureSpatialAnchorsSessionUserFeedback",
		Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback()
	{
		if (!Z_Registration_Info_UEnum_EAzureSpatialAnchorsSessionUserFeedback.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAzureSpatialAnchorsSessionUserFeedback.InnerSingleton, Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAzureSpatialAnchorsSessionUserFeedback.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionConfiguration;
class UScriptStruct* FAzureSpatialAnchorsSessionConfiguration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionConfiguration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionConfiguration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("AzureSpatialAnchorsSessionConfiguration"));
	}
	return Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionConfiguration.OuterSingleton;
}
template<> AZURESPATIALANCHORS_API UScriptStruct* StaticStruct<FAzureSpatialAnchorsSessionConfiguration>()
{
	return FAzureSpatialAnchorsSessionConfiguration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccessToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccessToken;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccountId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccountKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccountDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AccountDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthenticationToken_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AuthenticationToken;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzureSpatialAnchorsSessionConfiguration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccessToken_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccessToken = { "AccessToken", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsSessionConfiguration, AccessToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccessToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccessToken_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountId_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountId = { "AccountId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsSessionConfiguration, AccountId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountKey_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountKey = { "AccountKey", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsSessionConfiguration, AccountKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountDomain_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountDomain = { "AccountDomain", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsSessionConfiguration, AccountDomain), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountDomain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AuthenticationToken_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AuthenticationToken = { "AuthenticationToken", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsSessionConfiguration, AuthenticationToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AuthenticationToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AuthenticationToken_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccessToken,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AccountDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewProp_AuthenticationToken,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		&NewStructOps,
		"AzureSpatialAnchorsSessionConfiguration",
		sizeof(FAzureSpatialAnchorsSessionConfiguration),
		alignof(FAzureSpatialAnchorsSessionConfiguration),
		Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration()
	{
		if (!Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionConfiguration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionConfiguration.InnerSingleton, Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionConfiguration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoarseLocalizationSettings;
class UScriptStruct* FCoarseLocalizationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoarseLocalizationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoarseLocalizationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoarseLocalizationSettings, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("CoarseLocalizationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CoarseLocalizationSettings.OuterSingleton;
}
template<> AZURESPATIALANCHORS_API UScriptStruct* StaticStruct<FCoarseLocalizationSettings>()
{
	return FCoarseLocalizationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGPS_MetaData[];
#endif
		static void NewProp_bEnableGPS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWifi_MetaData[];
#endif
		static void NewProp_bEnableWifi_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWifi;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BLEBeaconUUIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BLEBeaconUUIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BLEBeaconUUIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoarseLocalizationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09* If true coarse localization will be active\n\x09*/" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "If true coarse localization will be active" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FCoarseLocalizationSettings*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoarseLocalizationSettings), &Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableGPS_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09* If true GPS can be used for localization (\"location\" must also be enabled in Project Settings->Platforms->Hololens->Capabilities)\n\x09*/" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "If true GPS can be used for localization (\"location\" must also be enabled in Project Settings->Platforms->Hololens->Capabilities)" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableGPS_SetBit(void* Obj)
	{
		((FCoarseLocalizationSettings*)Obj)->bEnableGPS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableGPS = { "bEnableGPS", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoarseLocalizationSettings), &Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableGPS_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableGPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableGPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableWifi_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09* If true WiFi  can be used for localization (\"wiFiControl\" must also be enabled in Project Settings->Platforms->Hololens->Capabilities)\n\x09*/" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "If true WiFi  can be used for localization (\"wiFiControl\" must also be enabled in Project Settings->Platforms->Hololens->Capabilities)" },
	};
#endif
	void Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableWifi_SetBit(void* Obj)
	{
		((FCoarseLocalizationSettings*)Obj)->bEnableWifi = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableWifi = { "bEnableWifi", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCoarseLocalizationSettings), &Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableWifi_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableWifi_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableWifi_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_BLEBeaconUUIDs_Inner = { "BLEBeaconUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_BLEBeaconUUIDs_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * List of bluetooth beacon uuids that can be used for localization (\"bluetooth\" must also be enabled in Project Settings->Platforms->Hololens->Capabilities)\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "List of bluetooth beacon uuids that can be used for localization (\"bluetooth\" must also be enabled in Project Settings->Platforms->Hololens->Capabilities)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_BLEBeaconUUIDs = { "BLEBeaconUUIDs", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoarseLocalizationSettings, BLEBeaconUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_BLEBeaconUUIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_BLEBeaconUUIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableGPS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_bEnableWifi,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_BLEBeaconUUIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewProp_BLEBeaconUUIDs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		&NewStructOps,
		"CoarseLocalizationSettings",
		sizeof(FCoarseLocalizationSettings),
		alignof(FCoarseLocalizationSettings),
		Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoarseLocalizationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CoarseLocalizationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoarseLocalizationSettings.InnerSingleton, Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoarseLocalizationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsLocateCriteria;
class UScriptStruct* FAzureSpatialAnchorsLocateCriteria::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsLocateCriteria.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsLocateCriteria.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("AzureSpatialAnchorsLocateCriteria"));
	}
	return Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsLocateCriteria.OuterSingleton;
}
template<> AZURESPATIALANCHORS_API UScriptStruct* StaticStruct<FAzureSpatialAnchorsLocateCriteria>()
{
	return FAzureSpatialAnchorsLocateCriteria::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypassCache_MetaData[];
#endif
		static void NewProp_bBypassCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypassCache;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Identifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearAnchor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NearAnchor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearAnchorDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearAnchorDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearAnchorMaxResultCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NearAnchorMaxResultCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSearchNearDevice_MetaData[];
#endif
		static void NewProp_bSearchNearDevice_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchNearDevice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearDeviceDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearDeviceDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearDeviceMaxResultCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NearDeviceMaxResultCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestedCategories_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedCategories_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RequestedCategories;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Strategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Strategy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzureSpatialAnchorsLocateCriteria>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bBypassCache_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * If true the device local cache of anchors is ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "If true the device local cache of anchors is ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bBypassCache_SetBit(void* Obj)
	{
		((FAzureSpatialAnchorsLocateCriteria*)Obj)->bBypassCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bBypassCache = { "bBypassCache", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAzureSpatialAnchorsLocateCriteria), &Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bBypassCache_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bBypassCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bBypassCache_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Identifiers_Inner = { "Identifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Identifiers_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * List of specific anchor identifiers to locate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "List of specific anchor identifiers to locate." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Identifiers = { "Identifiers", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsLocateCriteria, Identifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Identifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Identifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchor_MetaData[] = {
		{ "Category", "AzureSpatialAnchors | NearAnchor" },
		{ "Comment", "/**\n\x09 * Specify (optionally) an anchor around which to locate anchors.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "Specify (optionally) an anchor around which to locate anchors." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchor = { "NearAnchor", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsLocateCriteria, NearAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchorDistance_MetaData[] = {
		{ "Category", "AzureSpatialAnchors | NearAnchor" },
		{ "Comment", "/**\n\x09 * Specify the distance at which to locate anchors near the NearAnchor, in cm.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "Specify the distance at which to locate anchors near the NearAnchor, in cm." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchorDistance = { "NearAnchorDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsLocateCriteria, NearAnchorDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchorDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchorDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchorMaxResultCount_MetaData[] = {
		{ "Category", "AzureSpatialAnchors | NearAnchor" },
		{ "Comment", "/**\n\x09 * Specify the maximum number of anchors around the NearAnchor to locate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "Specify the maximum number of anchors around the NearAnchor to locate." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchorMaxResultCount = { "NearAnchorMaxResultCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsLocateCriteria, NearAnchorMaxResultCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchorMaxResultCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchorMaxResultCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bSearchNearDevice_MetaData[] = {
		{ "Category", "AzureSpatialAnchors | NearDevice" },
		{ "Comment", "/**\n\x09 * Specify whether to search near the device location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "Specify whether to search near the device location." },
	};
#endif
	void Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bSearchNearDevice_SetBit(void* Obj)
	{
		((FAzureSpatialAnchorsLocateCriteria*)Obj)->bSearchNearDevice = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bSearchNearDevice = { "bSearchNearDevice", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAzureSpatialAnchorsLocateCriteria), &Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bSearchNearDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bSearchNearDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bSearchNearDevice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearDeviceDistance_MetaData[] = {
		{ "Category", "AzureSpatialAnchors | NearDevice" },
		{ "Comment", "/**\n\x09 * Specify the distance at which to locate anchors near the device, in cm.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "Specify the distance at which to locate anchors near the device, in cm." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearDeviceDistance = { "NearDeviceDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsLocateCriteria, NearDeviceDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearDeviceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearDeviceDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearDeviceMaxResultCount_MetaData[] = {
		{ "Category", "AzureSpatialAnchors | NearDevice" },
		{ "Comment", "/**\n\x09 * Specify the maximum number of anchors around the device to locate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "Specify the maximum number of anchors around the device to locate." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearDeviceMaxResultCount = { "NearDeviceMaxResultCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsLocateCriteria, NearDeviceMaxResultCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearDeviceMaxResultCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearDeviceMaxResultCount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_RequestedCategories_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_RequestedCategories_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * Specify what data to retrieve.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "Specify what data to retrieve." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_RequestedCategories = { "RequestedCategories", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsLocateCriteria, RequestedCategories), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorDataCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_RequestedCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_RequestedCategories_MetaData)) }; // 2969458634
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Strategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Strategy_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * Specify the method by which anchors will be located.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
		{ "ToolTip", "Specify the method by which anchors will be located." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Strategy = { "Strategy", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsLocateCriteria, Strategy), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateStrategy, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Strategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Strategy_MetaData)) }; // 733450705
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bBypassCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Identifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Identifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchorDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearAnchorMaxResultCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_bSearchNearDevice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearDeviceDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_NearDeviceMaxResultCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_RequestedCategories_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_RequestedCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Strategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewProp_Strategy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		&NewStructOps,
		"AzureSpatialAnchorsLocateCriteria",
		sizeof(FAzureSpatialAnchorsLocateCriteria),
		alignof(FAzureSpatialAnchorsLocateCriteria),
		Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria()
	{
		if (!Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsLocateCriteria.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsLocateCriteria.InnerSingleton, Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsLocateCriteria.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionStatus;
class UScriptStruct* FAzureSpatialAnchorsSessionStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("AzureSpatialAnchorsSessionStatus"));
	}
	return Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionStatus.OuterSingleton;
}
template<> AZURESPATIALANCHORS_API UScriptStruct* StaticStruct<FAzureSpatialAnchorsSessionStatus>()
{
	return FAzureSpatialAnchorsSessionStatus::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReadyForCreateProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReadyForCreateProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecommendedForCreateProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecommendedForCreateProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionCreateHash_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SessionCreateHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SessionLocateHash_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SessionLocateHash;
		static const UECodeGen_Private::FBytePropertyParams NewProp_feedback_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_feedback_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_feedback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzureSpatialAnchorsSessionStatus>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_ReadyForCreateProgress_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_ReadyForCreateProgress = { "ReadyForCreateProgress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsSessionStatus, ReadyForCreateProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_ReadyForCreateProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_ReadyForCreateProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_RecommendedForCreateProgress_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_RecommendedForCreateProgress = { "RecommendedForCreateProgress", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsSessionStatus, RecommendedForCreateProgress), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_RecommendedForCreateProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_RecommendedForCreateProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_SessionCreateHash_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_SessionCreateHash = { "SessionCreateHash", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsSessionStatus, SessionCreateHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_SessionCreateHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_SessionCreateHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_SessionLocateHash_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_SessionLocateHash = { "SessionLocateHash", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsSessionStatus, SessionLocateHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_SessionLocateHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_SessionLocateHash_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_feedback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_feedback_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_feedback = { "feedback", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsSessionStatus, feedback), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_feedback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_feedback_MetaData)) }; // 3406225022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_ReadyForCreateProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_RecommendedForCreateProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_SessionCreateHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_SessionLocateHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_feedback_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewProp_feedback,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		&NewStructOps,
		"AzureSpatialAnchorsSessionStatus",
		sizeof(FAzureSpatialAnchorsSessionStatus),
		alignof(FAzureSpatialAnchorsSessionStatus),
		Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus()
	{
		if (!Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionStatus.InnerSingleton, Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsDiagnosticsConfig;
class UScriptStruct* FAzureSpatialAnchorsDiagnosticsConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsDiagnosticsConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsDiagnosticsConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig, (UObject*)Z_Construct_UPackage__Script_AzureSpatialAnchors(), TEXT("AzureSpatialAnchorsDiagnosticsConfig"));
	}
	return Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsDiagnosticsConfig.OuterSingleton;
}
template<> AZURESPATIALANCHORS_API UScriptStruct* StaticStruct<FAzureSpatialAnchorsDiagnosticsConfig>()
{
	return FAzureSpatialAnchorsDiagnosticsConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImagesEnabled_MetaData[];
#endif
		static void NewProp_bImagesEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImagesEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LogDirectory;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogLevel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LogLevel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LogLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDiskSizeInMB_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxDiskSizeInMB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAzureSpatialAnchorsDiagnosticsConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_bImagesEnabled_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_bImagesEnabled_SetBit(void* Obj)
	{
		((FAzureSpatialAnchorsDiagnosticsConfig*)Obj)->bImagesEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_bImagesEnabled = { "bImagesEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAzureSpatialAnchorsDiagnosticsConfig), &Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_bImagesEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_bImagesEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_bImagesEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogDirectory_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogDirectory = { "LogDirectory", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsDiagnosticsConfig, LogDirectory), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogDirectory_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogLevel_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogLevel = { "LogLevel", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsDiagnosticsConfig, LogLevel), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLogVerbosity, METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogLevel_MetaData)) }; // 3052599607
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_MaxDiskSizeInMB_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsTypes.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_MaxDiskSizeInMB = { "MaxDiskSizeInMB", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAzureSpatialAnchorsDiagnosticsConfig, MaxDiskSizeInMB), METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_MaxDiskSizeInMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_MaxDiskSizeInMB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_bImagesEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogLevel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_LogLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewProp_MaxDiskSizeInMB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
		nullptr,
		&NewStructOps,
		"AzureSpatialAnchorsDiagnosticsConfig",
		sizeof(FAzureSpatialAnchorsDiagnosticsConfig),
		alignof(FAzureSpatialAnchorsDiagnosticsConfig),
		Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsDiagnosticsConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsDiagnosticsConfig.InnerSingleton, Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsDiagnosticsConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_Statics::EnumInfo[] = {
		{ EAzureSpatialAnchorsLogVerbosity_StaticEnum, TEXT("EAzureSpatialAnchorsLogVerbosity"), &Z_Registration_Info_UEnum_EAzureSpatialAnchorsLogVerbosity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3052599607U) },
		{ EAzureSpatialAnchorsResult_StaticEnum, TEXT("EAzureSpatialAnchorsResult"), &Z_Registration_Info_UEnum_EAzureSpatialAnchorsResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 534733115U) },
		{ EAzureSpatialAnchorDataCategory_StaticEnum, TEXT("EAzureSpatialAnchorDataCategory"), &Z_Registration_Info_UEnum_EAzureSpatialAnchorDataCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2969458634U) },
		{ EAzureSpatialAnchorsLocateStrategy_StaticEnum, TEXT("EAzureSpatialAnchorsLocateStrategy"), &Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 733450705U) },
		{ EAzureSpatialAnchorsLocateAnchorStatus_StaticEnum, TEXT("EAzureSpatialAnchorsLocateAnchorStatus"), &Z_Registration_Info_UEnum_EAzureSpatialAnchorsLocateAnchorStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3868347709U) },
		{ EAzureSpatialAnchorsSessionUserFeedback_StaticEnum, TEXT("EAzureSpatialAnchorsSessionUserFeedback"), &Z_Registration_Info_UEnum_EAzureSpatialAnchorsSessionUserFeedback, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3406225022U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_Statics::ScriptStructInfo[] = {
		{ FAzureSpatialAnchorsSessionConfiguration::StaticStruct, Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics::NewStructOps, TEXT("AzureSpatialAnchorsSessionConfiguration"), &Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzureSpatialAnchorsSessionConfiguration), 925907547U) },
		{ FCoarseLocalizationSettings::StaticStruct, Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics::NewStructOps, TEXT("CoarseLocalizationSettings"), &Z_Registration_Info_UScriptStruct_CoarseLocalizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoarseLocalizationSettings), 1773773959U) },
		{ FAzureSpatialAnchorsLocateCriteria::StaticStruct, Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics::NewStructOps, TEXT("AzureSpatialAnchorsLocateCriteria"), &Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsLocateCriteria, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzureSpatialAnchorsLocateCriteria), 1926292508U) },
		{ FAzureSpatialAnchorsSessionStatus::StaticStruct, Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics::NewStructOps, TEXT("AzureSpatialAnchorsSessionStatus"), &Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsSessionStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzureSpatialAnchorsSessionStatus), 3038336799U) },
		{ FAzureSpatialAnchorsDiagnosticsConfig::StaticStruct, Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics::NewStructOps, TEXT("AzureSpatialAnchorsDiagnosticsConfig"), &Z_Registration_Info_UScriptStruct_AzureSpatialAnchorsDiagnosticsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAzureSpatialAnchorsDiagnosticsConfig), 2316566541U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_3442009234(TEXT("/Script/AzureSpatialAnchors"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
