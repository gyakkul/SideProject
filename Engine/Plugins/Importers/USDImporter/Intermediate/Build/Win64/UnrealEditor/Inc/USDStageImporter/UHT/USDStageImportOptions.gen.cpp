// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDStageImportOptions.h"
#include "GroomAssetInterpolation.h"
#include "USDStageOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDStageImportOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHairGroupsInterpolation();
	UNREALUSDWRAPPER_API UEnum* Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling();
	UPackage* Z_Construct_UPackage__Script_USDStageImporter();
	USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdStageOptions();
	USDSTAGEIMPORTER_API UClass* Z_Construct_UClass_UUsdStageImportOptions();
	USDSTAGEIMPORTER_API UClass* Z_Construct_UClass_UUsdStageImportOptions_NoRegister();
	USDSTAGEIMPORTER_API UEnum* Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy();
	USDSTAGEIMPORTER_API UEnum* Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReplaceActorPolicy;
	static UEnum* EReplaceActorPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReplaceActorPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReplaceActorPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy, (UObject*)Z_Construct_UPackage__Script_USDStageImporter(), TEXT("EReplaceActorPolicy"));
		}
		return Z_Registration_Info_UEnum_EReplaceActorPolicy.OuterSingleton;
	}
	template<> USDSTAGEIMPORTER_API UEnum* StaticEnum<EReplaceActorPolicy>()
	{
		return EReplaceActorPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy_Statics::Enumerators[] = {
		{ "EReplaceActorPolicy::Append", (int64)EReplaceActorPolicy::Append },
		{ "EReplaceActorPolicy::Replace", (int64)EReplaceActorPolicy::Replace },
		{ "EReplaceActorPolicy::UpdateTransform", (int64)EReplaceActorPolicy::UpdateTransform },
		{ "EReplaceActorPolicy::Ignore", (int64)EReplaceActorPolicy::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Append.Comment", "/** Spawn new actors and components alongside the existing ones */" },
		{ "Append.Name", "EReplaceActorPolicy::Append" },
		{ "Append.ToolTip", "Spawn new actors and components alongside the existing ones" },
		{ "BlueprintType", "true" },
		{ "Ignore.Comment", "/** Ignore any conflicting new assets and components, keeping the old ones */" },
		{ "Ignore.Name", "EReplaceActorPolicy::Ignore" },
		{ "Ignore.ToolTip", "Ignore any conflicting new assets and components, keeping the old ones" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "Replace.Comment", "/** Replaces existing actors and components with new ones */" },
		{ "Replace.Name", "EReplaceActorPolicy::Replace" },
		{ "Replace.ToolTip", "Replaces existing actors and components with new ones" },
		{ "UpdateTransform.Comment", "/** Update transforms on existing actors but do not replace actors or components */" },
		{ "UpdateTransform.Name", "EReplaceActorPolicy::UpdateTransform" },
		{ "UpdateTransform.ToolTip", "Update transforms on existing actors but do not replace actors or components" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_USDStageImporter,
		nullptr,
		"EReplaceActorPolicy",
		"EReplaceActorPolicy",
		Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy()
	{
		if (!Z_Registration_Info_UEnum_EReplaceActorPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReplaceActorPolicy.InnerSingleton, Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReplaceActorPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReplaceAssetPolicy;
	static UEnum* EReplaceAssetPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReplaceAssetPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReplaceAssetPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy, (UObject*)Z_Construct_UPackage__Script_USDStageImporter(), TEXT("EReplaceAssetPolicy"));
		}
		return Z_Registration_Info_UEnum_EReplaceAssetPolicy.OuterSingleton;
	}
	template<> USDSTAGEIMPORTER_API UEnum* StaticEnum<EReplaceAssetPolicy>()
	{
		return EReplaceAssetPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy_Statics::Enumerators[] = {
		{ "EReplaceAssetPolicy::Append", (int64)EReplaceAssetPolicy::Append },
		{ "EReplaceAssetPolicy::Replace", (int64)EReplaceAssetPolicy::Replace },
		{ "EReplaceAssetPolicy::Ignore", (int64)EReplaceAssetPolicy::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Append.Comment", "/** Create new assets with numbered suffixes */" },
		{ "Append.Name", "EReplaceAssetPolicy::Append" },
		{ "Append.ToolTip", "Create new assets with numbered suffixes" },
		{ "BlueprintType", "true" },
		{ "Ignore.Comment", "/** Ignores the new asset and keeps the existing asset */" },
		{ "Ignore.Name", "EReplaceAssetPolicy::Ignore" },
		{ "Ignore.ToolTip", "Ignores the new asset and keeps the existing asset" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "Replace.Comment", "/** Replaces existing asset with new asset */" },
		{ "Replace.Name", "EReplaceAssetPolicy::Replace" },
		{ "Replace.ToolTip", "Replaces existing asset with new asset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_USDStageImporter,
		nullptr,
		"EReplaceAssetPolicy",
		"EReplaceAssetPolicy",
		Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy()
	{
		if (!Z_Registration_Info_UEnum_EReplaceAssetPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReplaceAssetPolicy.InnerSingleton, Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReplaceAssetPolicy.InnerSingleton;
	}
	void UUsdStageImportOptions::StaticRegisterNativesUUsdStageImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdStageImportOptions);
	UClass* Z_Construct_UClass_UUsdStageImportOptions_NoRegister()
	{
		return UUsdStageImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UUsdStageImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportActors_MetaData[];
#endif
		static void NewProp_bImportActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportGeometry_MetaData[];
#endif
		static void NewProp_bImportGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportSkeletalAnimations_MetaData[];
#endif
		static void NewProp_bImportSkeletalAnimations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportSkeletalAnimations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportLevelSequences_MetaData[];
#endif
		static void NewProp_bImportLevelSequences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportLevelSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMaterials_MetaData[];
#endif
		static void NewProp_bImportMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportOnlyUsedMaterials_MetaData[];
#endif
		static void NewProp_bImportOnlyUsedMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportOnlyUsedMaterials;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimsToImport_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimsToImport_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrimsToImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PurposesToImport_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PurposesToImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteTriangleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NaniteTriangleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderContextToImport_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RenderContextToImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPurpose_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialPurpose;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RootMotionHandling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionHandling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RootMotionHandling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideStageOptions_MetaData[];
#endif
		static void NewProp_bOverrideStageOptions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideStageOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StageOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAtSpecificTimeCode_MetaData[];
#endif
		static void NewProp_bImportAtSpecificTimeCode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAtSpecificTimeCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportTimeCode_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportTimeCode;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroomInterpolationSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomInterpolationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroomInterpolationSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExistingActorPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExistingActorPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExistingActorPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExistingAssetPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExistingAssetPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExistingAssetPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrimPathFolderStructure_MetaData[];
#endif
		static void NewProp_bPrimPathFolderStructure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrimPathFolderStructure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KindsToCollapse_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KindsToCollapse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeIdenticalMaterialSlots_MetaData[];
#endif
		static void NewProp_bMergeIdenticalMaterialSlots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeIdenticalMaterialSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollapseTopLevelPointInstancers_MetaData[];
#endif
		static void NewProp_bCollapseTopLevelPointInstancers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapseTopLevelPointInstancers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpretLODs_MetaData[];
#endif
		static void NewProp_bInterpretLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpretLODs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdStageImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDStageImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "USDStageImportOptions.h" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportActors_MetaData[] = {
		{ "Category", "DataToImport" },
		{ "DisplayName", "Actors" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportActors_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bImportActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportActors = { "bImportActors", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportGeometry_MetaData[] = {
		{ "Category", "DataToImport" },
		{ "DisplayName", "Geometry" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportGeometry_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bImportGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportGeometry = { "bImportGeometry", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportSkeletalAnimations_MetaData[] = {
		{ "Category", "DataToImport" },
		{ "Comment", "/** Whether to try importing UAnimSequence skeletal animation assets for each encountered UsdSkelAnimQuery */" },
		{ "DisplayName", "Skeletal Animations" },
		{ "EditCondition", "bImportGeometry" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "Whether to try importing UAnimSequence skeletal animation assets for each encountered UsdSkelAnimQuery" },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportSkeletalAnimations_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bImportSkeletalAnimations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportSkeletalAnimations = { "bImportSkeletalAnimations", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportSkeletalAnimations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportSkeletalAnimations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportSkeletalAnimations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportLevelSequences_MetaData[] = {
		{ "Category", "DataToImport" },
		{ "DisplayName", "LevelSequences" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportLevelSequences_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bImportLevelSequences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportLevelSequences = { "bImportLevelSequences", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportLevelSequences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportLevelSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportLevelSequences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportMaterials_MetaData[] = {
		{ "Category", "DataToImport" },
		{ "DisplayName", "Materials & Textures" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportMaterials_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bImportMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportMaterials = { "bImportMaterials", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportOnlyUsedMaterials_MetaData[] = {
		{ "Category", "DataToImport" },
		{ "Comment", "/**\n\x09 * If this is checked, only materials actively used by the stage and import settings will be parsed.\n\x09 * If this is unchecked, all materials present on the stage will be parsed.\n\x09 */" },
		{ "EditCondition", "bImportMaterials" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "If this is checked, only materials actively used by the stage and import settings will be parsed.\nIf this is unchecked, all materials present on the stage will be parsed." },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportOnlyUsedMaterials_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bImportOnlyUsedMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportOnlyUsedMaterials = { "bImportOnlyUsedMaterials", nullptr, (EPropertyFlags)0x0010040000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportOnlyUsedMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportOnlyUsedMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportOnlyUsedMaterials_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PrimsToImport_Inner = { "PrimsToImport", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PrimsToImport_MetaData[] = {
		{ "Category", "Prims to Import" },
		{ "Comment", "/**\n\x09 * List of paths of prims to import (e.g. [\"/Root/MyBox\", \"/Root/OtherPrim\"]).\n\x09 * Importing a prim will import its entire subtree.\n\x09 * If this list contains the root prim path the entire stage will be imported (default value).\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "List of paths of prims to import (e.g. [\"/Root/MyBox\", \"/Root/OtherPrim\"]).\nImporting a prim will import its entire subtree.\nIf this list contains the root prim path the entire stage will be imported (default value)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PrimsToImport = { "PrimsToImport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, PrimsToImport), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PrimsToImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PrimsToImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PurposesToImport_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/UnrealUSDWrapper.EUsdPurpose" },
		{ "Category", "USD options" },
		{ "Comment", "/** Only import prims with these specific purposes from the USD file */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "Only import prims with these specific purposes from the USD file" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PurposesToImport = { "PurposesToImport", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, PurposesToImport), METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PurposesToImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PurposesToImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_NaniteTriangleThreshold_MetaData[] = {
		{ "Category", "USD options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Try enabling Nanite for static meshes that are generated with at least this many triangles */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "NoSpinbox", "true" },
		{ "ToolTip", "Try enabling Nanite for static meshes that are generated with at least this many triangles" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_NaniteTriangleThreshold = { "NaniteTriangleThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, NaniteTriangleThreshold), METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_NaniteTriangleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_NaniteTriangleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RenderContextToImport_MetaData[] = {
		{ "Category", "USD options" },
		{ "Comment", "/** Specifies which set of shaders to use when parsing USD materials, in addition to the universal render context. */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "Specifies which set of shaders to use when parsing USD materials, in addition to the universal render context." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RenderContextToImport = { "RenderContextToImport", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, RenderContextToImport), METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RenderContextToImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RenderContextToImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_MaterialPurpose_MetaData[] = {
		{ "Category", "USD options" },
		{ "Comment", "/** Specifies which material purpose to use when parsing USD material bindings, in addition to the \"allPurpose\" fallback */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "Specifies which material purpose to use when parsing USD material bindings, in addition to the \"allPurpose\" fallback" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_MaterialPurpose = { "MaterialPurpose", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, MaterialPurpose), METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_MaterialPurpose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_MaterialPurpose_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RootMotionHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RootMotionHandling_MetaData[] = {
		{ "Category", "USD options" },
		{ "Comment", "// Describes what to add to the root bone animation within generated AnimSequences, if anything\n" },
		{ "EditCondition", "bImportSkeletalAnimations" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "Describes what to add to the root bone animation within generated AnimSequences, if anything" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RootMotionHandling = { "RootMotionHandling", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, RootMotionHandling), Z_Construct_UEnum_UnrealUSDWrapper_EUsdRootMotionHandling, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RootMotionHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RootMotionHandling_MetaData)) }; // 2259965650
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bOverrideStageOptions_MetaData[] = {
		{ "Category", "USD options" },
		{ "Comment", "/** Whether to use the specified StageOptions instead of the stage's own settings */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "Whether to use the specified StageOptions instead of the stage's own settings" },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bOverrideStageOptions_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bOverrideStageOptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bOverrideStageOptions = { "bOverrideStageOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bOverrideStageOptions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bOverrideStageOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bOverrideStageOptions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_StageOptions_MetaData[] = {
		{ "Category", "USD options" },
		{ "Comment", "/** Custom StageOptions to use for the stage */" },
		{ "EditCondition", "bOverrideStageOptions" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "Custom StageOptions to use for the stage" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_StageOptions = { "StageOptions", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, StageOptions), Z_Construct_UScriptStruct_FUsdStageOptions, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_StageOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_StageOptions_MetaData)) }; // 3802012082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportAtSpecificTimeCode_MetaData[] = {
		{ "Category", "USD options" },
		{ "Comment", "/**\n\x09 * When true the stage will be evaluated at ImportTimeCode for the import.\n\x09 * When false, the stage will be evaluated at the default (non-animated) timecode\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "When true the stage will be evaluated at ImportTimeCode for the import.\nWhen false, the stage will be evaluated at the default (non-animated) timecode" },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportAtSpecificTimeCode_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bImportAtSpecificTimeCode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportAtSpecificTimeCode = { "bImportAtSpecificTimeCode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportAtSpecificTimeCode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportAtSpecificTimeCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportAtSpecificTimeCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ImportTimeCode_MetaData[] = {
		{ "Category", "USD options" },
		{ "Comment", "/** TimeCode to evaluate the stage for import, in case bImportAtSpecificTimeCode is enabled */" },
		{ "EditCondition", "bImportAtSpecificTimeCode" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "TimeCode to evaluate the stage for import, in case bImportAtSpecificTimeCode is enabled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ImportTimeCode = { "ImportTimeCode", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, ImportTimeCode), METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ImportTimeCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ImportTimeCode_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_GroomInterpolationSettings_Inner = { "GroomInterpolationSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHairGroupsInterpolation, METADATA_PARAMS(nullptr, 0) }; // 3358068899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_GroomInterpolationSettings_MetaData[] = {
		{ "Category", "Groom" },
		{ "Comment", "/** Groom group interpolation settings */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "Groom group interpolation settings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_GroomInterpolationSettings = { "GroomInterpolationSettings", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, GroomInterpolationSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_GroomInterpolationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_GroomInterpolationSettings_MetaData)) }; // 3358068899
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingActorPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingActorPolicy_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** What should happen when imported actors and components try to overwrite existing actors and components */" },
		{ "EditCondition", "bImportActors" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "What should happen when imported actors and components try to overwrite existing actors and components" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingActorPolicy = { "ExistingActorPolicy", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, ExistingActorPolicy), Z_Construct_UEnum_USDStageImporter_EReplaceActorPolicy, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingActorPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingActorPolicy_MetaData)) }; // 2316072623
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingAssetPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingAssetPolicy_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** What should happen when imported assets try to overwrite existing assets */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "What should happen when imported assets try to overwrite existing assets" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingAssetPolicy = { "ExistingAssetPolicy", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, ExistingAssetPolicy), Z_Construct_UEnum_USDStageImporter_EReplaceAssetPolicy, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingAssetPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingAssetPolicy_MetaData)) }; // 573224526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bPrimPathFolderStructure_MetaData[] = {
		{ "Category", "Processing" },
		{ "Comment", "/**\n\x09 * When enabled, assets will be imported into a content folder structure according to their prim path. When disabled,\n\x09 * assets are imported into content folders according to asset type (e.g. 'Materials', 'StaticMeshes', etc).\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "When enabled, assets will be imported into a content folder structure according to their prim path. When disabled,\nassets are imported into content folders according to asset type (e.g. 'Materials', 'StaticMeshes', etc)." },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bPrimPathFolderStructure_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bPrimPathFolderStructure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bPrimPathFolderStructure = { "bPrimPathFolderStructure", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bPrimPathFolderStructure_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bPrimPathFolderStructure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bPrimPathFolderStructure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_KindsToCollapse_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/UnrealUSDWrapper.EUsdDefaultKind" },
		{ "Category", "Processing" },
		{ "Comment", "/**\n\x09 * Whether to try to combine individual assets and components of the same type on a kind-per-kind basis,\n\x09 * like multiple Mesh prims into a single Static Mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "Whether to try to combine individual assets and components of the same type on a kind-per-kind basis,\nlike multiple Mesh prims into a single Static Mesh" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_KindsToCollapse = { "KindsToCollapse", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUsdStageImportOptions, KindsToCollapse), METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_KindsToCollapse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_KindsToCollapse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bMergeIdenticalMaterialSlots_MetaData[] = {
		{ "Category", "Processing" },
		{ "Comment", "/**\n\x09 * If enabled, when multiple mesh prims are collapsed into a single static mesh, identical material slots are merged into one slot.\n\x09 * Otherwise, material slots are simply appended to the list.\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "If enabled, when multiple mesh prims are collapsed into a single static mesh, identical material slots are merged into one slot.\nOtherwise, material slots are simply appended to the list." },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bMergeIdenticalMaterialSlots_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bMergeIdenticalMaterialSlots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bMergeIdenticalMaterialSlots = { "bMergeIdenticalMaterialSlots", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bMergeIdenticalMaterialSlots_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bMergeIdenticalMaterialSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bMergeIdenticalMaterialSlots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bCollapseTopLevelPointInstancers_MetaData[] = {
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bCollapseTopLevelPointInstancers_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bCollapseTopLevelPointInstancers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bCollapseTopLevelPointInstancers = { "bCollapseTopLevelPointInstancers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bCollapseTopLevelPointInstancers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bCollapseTopLevelPointInstancers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bCollapseTopLevelPointInstancers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bInterpretLODs_MetaData[] = {
		{ "Category", "Processing" },
		{ "Comment", "/** When true, if a prim has a \"LOD\" variant set with variants named \"LOD0\", \"LOD1\", etc. where each contains a UsdGeomMesh, the importer will attempt to parse the meshes as separate LODs of a single UStaticMesh. When false, only the selected variant will be parsed as LOD0 of the UStaticMesh.  */" },
		{ "DisplayName", "Interpret LOD variant sets" },
		{ "EditCondition", "bImportGeometry" },
		{ "ModuleRelativePath", "Public/USDStageImportOptions.h" },
		{ "ToolTip", "When true, if a prim has a \"LOD\" variant set with variants named \"LOD0\", \"LOD1\", etc. where each contains a UsdGeomMesh, the importer will attempt to parse the meshes as separate LODs of a single UStaticMesh. When false, only the selected variant will be parsed as LOD0 of the UStaticMesh." },
	};
#endif
	void Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bInterpretLODs_SetBit(void* Obj)
	{
		((UUsdStageImportOptions*)Obj)->bInterpretLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bInterpretLODs = { "bInterpretLODs", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUsdStageImportOptions), &Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bInterpretLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bInterpretLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bInterpretLODs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUsdStageImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportSkeletalAnimations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportLevelSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportOnlyUsedMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PrimsToImport_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PrimsToImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_PurposesToImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_NaniteTriangleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RenderContextToImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_MaterialPurpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RootMotionHandling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_RootMotionHandling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bOverrideStageOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_StageOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bImportAtSpecificTimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ImportTimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_GroomInterpolationSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_GroomInterpolationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingActorPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingActorPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingAssetPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_ExistingAssetPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bPrimPathFolderStructure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_KindsToCollapse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bMergeIdenticalMaterialSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bCollapseTopLevelPointInstancers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUsdStageImportOptions_Statics::NewProp_bInterpretLODs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdStageImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdStageImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdStageImportOptions_Statics::ClassParams = {
		&UUsdStageImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUsdStageImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdStageImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdStageImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdStageImportOptions()
	{
		if (!Z_Registration_Info_UClass_UUsdStageImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdStageImportOptions.OuterSingleton, Z_Construct_UClass_UUsdStageImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdStageImportOptions.OuterSingleton;
	}
	template<> USDSTAGEIMPORTER_API UClass* StaticClass<UUsdStageImportOptions>()
	{
		return UUsdStageImportOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdStageImportOptions);
	UUsdStageImportOptions::~UUsdStageImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_Statics::EnumInfo[] = {
		{ EReplaceActorPolicy_StaticEnum, TEXT("EReplaceActorPolicy"), &Z_Registration_Info_UEnum_EReplaceActorPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2316072623U) },
		{ EReplaceAssetPolicy_StaticEnum, TEXT("EReplaceAssetPolicy"), &Z_Registration_Info_UEnum_EReplaceAssetPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 573224526U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdStageImportOptions, UUsdStageImportOptions::StaticClass, TEXT("UUsdStageImportOptions"), &Z_Registration_Info_UClass_UUsdStageImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdStageImportOptions), 944536697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_481626011(TEXT("/Script/USDStageImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDStageImporter_Public_USDStageImportOptions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
