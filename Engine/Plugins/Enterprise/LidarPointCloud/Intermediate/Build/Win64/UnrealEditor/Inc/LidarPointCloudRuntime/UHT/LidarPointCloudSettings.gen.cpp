// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LidarPointCloudSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloudSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudSettings();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudSettings_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELidarPointCloudDuplicateHandling;
	static UEnum* ELidarPointCloudDuplicateHandling_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudDuplicateHandling.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELidarPointCloudDuplicateHandling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("ELidarPointCloudDuplicateHandling"));
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudDuplicateHandling.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudDuplicateHandling>()
	{
		return ELidarPointCloudDuplicateHandling_StaticEnum();
	}
	struct Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling_Statics::Enumerators[] = {
		{ "ELidarPointCloudDuplicateHandling::Ignore", (int64)ELidarPointCloudDuplicateHandling::Ignore },
		{ "ELidarPointCloudDuplicateHandling::SelectFirst", (int64)ELidarPointCloudDuplicateHandling::SelectFirst },
		{ "ELidarPointCloudDuplicateHandling::SelectBrighter", (int64)ELidarPointCloudDuplicateHandling::SelectBrighter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Ignore.Comment", "/** Keeps any duplicates found */" },
		{ "Ignore.Name", "ELidarPointCloudDuplicateHandling::Ignore" },
		{ "Ignore.ToolTip", "Keeps any duplicates found" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "SelectBrighter.Comment", "/** Selects the brightest of the duplicates */" },
		{ "SelectBrighter.Name", "ELidarPointCloudDuplicateHandling::SelectBrighter" },
		{ "SelectBrighter.ToolTip", "Selects the brightest of the duplicates" },
		{ "SelectFirst.Comment", "/** Keeps the first point and skips any further duplicates */" },
		{ "SelectFirst.Name", "ELidarPointCloudDuplicateHandling::SelectFirst" },
		{ "SelectFirst.ToolTip", "Keeps the first point and skips any further duplicates" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		"ELidarPointCloudDuplicateHandling",
		"ELidarPointCloudDuplicateHandling",
		Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudDuplicateHandling.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELidarPointCloudDuplicateHandling.InnerSingleton, Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudDuplicateHandling.InnerSingleton;
	}
	void ULidarPointCloudSettings::StaticRegisterNativesULidarPointCloudSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULidarPointCloudSettings);
	UClass* Z_Construct_UClass_ULidarPointCloudSettings_NoRegister()
	{
		return ULidarPointCloudSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULidarPointCloudSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DuplicateHandling_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DuplicateHandling_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DuplicateHandling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceForDuplicate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceForDuplicate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBucketSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBucketSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGridResolution_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodeGridResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultithreadingInsertionBatchSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MultithreadingInsertionBatchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncImport_MetaData[];
#endif
		static void NewProp_bUseAsyncImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrioritizeActiveViewport_MetaData[];
#endif
		static void NewProp_bPrioritizeActiveViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrioritizeActiveViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedNodeLifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedNodeLifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReleaseAssetAfterSaving_MetaData[];
#endif
		static void NewProp_bReleaseAssetAfterSaving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReleaseAssetAfterSaving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReleaseAssetAfterCooking_MetaData[];
#endif
		static void NewProp_bReleaseAssetAfterCooking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReleaseAssetAfterCooking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRenderDataSmoothing_MetaData[];
#endif
		static void NewProp_bUseRenderDataSmoothing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRenderDataSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderDataSmoothingMaxFrametime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderDataSmoothingMaxFrametime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFastRendering_MetaData[];
#endif
		static void NewProp_bUseFastRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFastRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLidarRayTracing_MetaData[];
#endif
		static void NewProp_bEnableLidarRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLidarRayTracing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshingBatchSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshingBatchSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCenterOnImport_MetaData[];
#endif
		static void NewProp_bAutoCenterOnImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCenterOnImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateNormalsOnImport_MetaData[];
#endif
		static void NewProp_bAutoCalculateNormalsOnImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateNormalsOnImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBuildCollisionOnImport_MetaData[];
#endif
		static void NewProp_bAutoBuildCollisionOnImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBuildCollisionOnImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExportScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULidarPointCloudSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LidarPointCloudSettings.h" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_DuplicateHandling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_DuplicateHandling_MetaData[] = {
		{ "Category", "Octree" },
		{ "Comment", "/** Determines how to handle duplicate points (distance < 0.0001). */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Determines how to handle duplicate points (distance < 0.0001)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_DuplicateHandling = { "DuplicateHandling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudSettings, DuplicateHandling), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudDuplicateHandling, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_DuplicateHandling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_DuplicateHandling_MetaData)) }; // 2977996688
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MaxDistanceForDuplicate_MetaData[] = {
		{ "Category", "Octree" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum distance between points, within which they are considered to be duplicates */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Maximum distance between points, within which they are considered to be duplicates" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MaxDistanceForDuplicate = { "MaxDistanceForDuplicate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudSettings, MaxDistanceForDuplicate), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MaxDistanceForDuplicate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MaxDistanceForDuplicate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MaxBucketSize_MetaData[] = {
		{ "Category", "Octree" },
		{ "Comment", "/**\n\x09 * Maximum number of unallocated points to keep inside the node before they need to be converted in to a full child node.\n\x09 * Lower values will provide finer LOD control at the expense of system RAM and CPU time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Maximum number of unallocated points to keep inside the node before they need to be converted in to a full child node.\nLower values will provide finer LOD control at the expense of system RAM and CPU time." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MaxBucketSize = { "MaxBucketSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudSettings, MaxBucketSize), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MaxBucketSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MaxBucketSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_NodeGridResolution_MetaData[] = {
		{ "Category", "Octree" },
		{ "Comment", "/**\n\x09 * Virtual grid resolution to divide the node into.\n\x09 * Lower values will provide finer LOD control at the expense of system RAM and CPU time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Virtual grid resolution to divide the node into.\nLower values will provide finer LOD control at the expense of system RAM and CPU time." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_NodeGridResolution = { "NodeGridResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudSettings, NodeGridResolution), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_NodeGridResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_NodeGridResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MultithreadingInsertionBatchSize_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Determines the maximum amount of points to process in a single batch when using multi-threading. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Determines the maximum amount of points to process in a single batch when using multi-threading." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MultithreadingInsertionBatchSize = { "MultithreadingInsertionBatchSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudSettings, MultithreadingInsertionBatchSize), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MultithreadingInsertionBatchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MultithreadingInsertionBatchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseAsyncImport_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Enabling this will allow editor to import the point clouds in the background, without blocking the main thread. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Enabling this will allow editor to import the point clouds in the background, without blocking the main thread." },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseAsyncImport_SetBit(void* Obj)
	{
		((ULidarPointCloudSettings*)Obj)->bUseAsyncImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseAsyncImport = { "bUseAsyncImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudSettings), &Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseAsyncImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseAsyncImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseAsyncImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bPrioritizeActiveViewport_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09 * Enabling this will allocate larger portion of the available point budget to the viewport with focus.\n\x09 * May improve asset editing experience, if the scenes are busy.\n\x09 * Disable, if you are experiencing visual glitches.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Enabling this will allocate larger portion of the available point budget to the viewport with focus.\nMay improve asset editing experience, if the scenes are busy.\nDisable, if you are experiencing visual glitches." },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bPrioritizeActiveViewport_SetBit(void* Obj)
	{
		((ULidarPointCloudSettings*)Obj)->bPrioritizeActiveViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bPrioritizeActiveViewport = { "bPrioritizeActiveViewport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudSettings), &Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bPrioritizeActiveViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bPrioritizeActiveViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bPrioritizeActiveViewport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_CachedNodeLifetime_MetaData[] = {
		{ "Category", "Performance" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Sets how long the nodes wil be kept in RAM after they are no longer visible.\n\x09 * Larger values are more likely to avoid re-loads from storage, at the cost of increased RAM usage. \n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Sets how long the nodes wil be kept in RAM after they are no longer visible.\nLarger values are more likely to avoid re-loads from storage, at the cost of increased RAM usage." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_CachedNodeLifetime = { "CachedNodeLifetime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudSettings, CachedNodeLifetime), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_CachedNodeLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_CachedNodeLifetime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterSaving_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/**\n     * Enabling this will automatically release memory used by the asset once it's saved\n     * Helpful when dealing with very large data sets to avoid memory blocking\n     */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Enabling this will automatically release memory used by the asset once it's saved\nHelpful when dealing with very large data sets to avoid memory blocking" },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterSaving_SetBit(void* Obj)
	{
		((ULidarPointCloudSettings*)Obj)->bReleaseAssetAfterSaving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterSaving = { "bReleaseAssetAfterSaving", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudSettings), &Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterSaving_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterSaving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterSaving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterCooking_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/**\n     * Enabling this will automatically release memory used by the asset once it's cooked\n     * Helpful when dealing with very large data sets to avoid memory blocking\n     */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Enabling this will automatically release memory used by the asset once it's cooked\nHelpful when dealing with very large data sets to avoid memory blocking" },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterCooking_SetBit(void* Obj)
	{
		((ULidarPointCloudSettings*)Obj)->bReleaseAssetAfterCooking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterCooking = { "bReleaseAssetAfterCooking", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudSettings), &Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterCooking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterCooking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseRenderDataSmoothing_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If enabled, the render data generation will be spread across multiple frames to avoid freezes */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "If enabled, the render data generation will be spread across multiple frames to avoid freezes" },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseRenderDataSmoothing_SetBit(void* Obj)
	{
		((ULidarPointCloudSettings*)Obj)->bUseRenderDataSmoothing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseRenderDataSmoothing = { "bUseRenderDataSmoothing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudSettings), &Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseRenderDataSmoothing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseRenderDataSmoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseRenderDataSmoothing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_RenderDataSmoothingMaxFrametime_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If UseRenderDataSmoothing is enabled, this will determine how much of the frame time can be spent on render data generation. */" },
		{ "EditCondition", "bUseAsyncImport" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "If UseRenderDataSmoothing is enabled, this will determine how much of the frame time can be spent on render data generation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_RenderDataSmoothingMaxFrametime = { "RenderDataSmoothingMaxFrametime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudSettings, RenderDataSmoothingMaxFrametime), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_RenderDataSmoothingMaxFrametime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_RenderDataSmoothingMaxFrametime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseFastRendering_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** Enabling this will greatly improve runtime performance at a cost of quadrupling VRAM use */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Enabling this will greatly improve runtime performance at a cost of quadrupling VRAM use" },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseFastRendering_SetBit(void* Obj)
	{
		((ULidarPointCloudSettings*)Obj)->bUseFastRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseFastRendering = { "bUseFastRendering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudSettings), &Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseFastRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseFastRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseFastRendering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bEnableLidarRayTracing_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/**\n\x09 * If enabled, Lidar assets will become visible to Ray Tracing.\n\x09 * Warning, this will significantly increase VRAM usage!\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "If enabled, Lidar assets will become visible to Ray Tracing.\nWarning, this will significantly increase VRAM usage!" },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bEnableLidarRayTracing_SetBit(void* Obj)
	{
		((ULidarPointCloudSettings*)Obj)->bEnableLidarRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bEnableLidarRayTracing = { "bEnableLidarRayTracing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudSettings), &Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bEnableLidarRayTracing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bEnableLidarRayTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bEnableLidarRayTracing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MeshingBatchSize_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Affects the size of per-thread data for the meshing algorithm. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Affects the size of per-thread data for the meshing algorithm." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MeshingBatchSize = { "MeshingBatchSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudSettings, MeshingBatchSize), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MeshingBatchSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MeshingBatchSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCenterOnImport_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Automatically centers the cloud on import.\n\x09 * Caution: Preserving original coordinates may cause noticeable precision loss, if the values are too large.\n\x09 * Should you experience point 'banding' effect, please re-import your cloud with centering enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Automatically centers the cloud on import.\nCaution: Preserving original coordinates may cause noticeable precision loss, if the values are too large.\nShould you experience point 'banding' effect, please re-import your cloud with centering enabled." },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCenterOnImport_SetBit(void* Obj)
	{
		((ULidarPointCloudSettings*)Obj)->bAutoCenterOnImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCenterOnImport = { "bAutoCenterOnImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudSettings), &Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCenterOnImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCenterOnImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCenterOnImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCalculateNormalsOnImport_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** If enabled, the assets will automatically calculate normals upon their successful import. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "If enabled, the assets will automatically calculate normals upon their successful import." },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCalculateNormalsOnImport_SetBit(void* Obj)
	{
		((ULidarPointCloudSettings*)Obj)->bAutoCalculateNormalsOnImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCalculateNormalsOnImport = { "bAutoCalculateNormalsOnImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudSettings), &Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCalculateNormalsOnImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCalculateNormalsOnImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCalculateNormalsOnImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoBuildCollisionOnImport_MetaData[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** If enabled, the assets will automatically build collision upon their successful import. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "If enabled, the assets will automatically build collision upon their successful import." },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoBuildCollisionOnImport_SetBit(void* Obj)
	{
		((ULidarPointCloudSettings*)Obj)->bAutoBuildCollisionOnImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoBuildCollisionOnImport = { "bAutoBuildCollisionOnImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudSettings), &Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoBuildCollisionOnImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoBuildCollisionOnImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoBuildCollisionOnImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_ImportScale_MetaData[] = {
		{ "Category", "Import / Export" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale to apply during import */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Scale to apply during import" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_ImportScale = { "ImportScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudSettings, ImportScale), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_ImportScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_ImportScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_ExportScale_MetaData[] = {
		{ "Category", "Import / Export" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale to apply during export. In most cases, this should be equal to an inverted ImportScale */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudSettings.h" },
		{ "ToolTip", "Scale to apply during export. In most cases, this should be equal to an inverted ImportScale" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_ExportScale = { "ExportScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudSettings, ExportScale), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_ExportScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_ExportScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULidarPointCloudSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_DuplicateHandling_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_DuplicateHandling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MaxDistanceForDuplicate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MaxBucketSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_NodeGridResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MultithreadingInsertionBatchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseAsyncImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bPrioritizeActiveViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_CachedNodeLifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterSaving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bReleaseAssetAfterCooking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseRenderDataSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_RenderDataSmoothingMaxFrametime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bUseFastRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bEnableLidarRayTracing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_MeshingBatchSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCenterOnImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoCalculateNormalsOnImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_bAutoBuildCollisionOnImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_ImportScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudSettings_Statics::NewProp_ExportScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULidarPointCloudSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULidarPointCloudSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULidarPointCloudSettings_Statics::ClassParams = {
		&ULidarPointCloudSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULidarPointCloudSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULidarPointCloudSettings()
	{
		if (!Z_Registration_Info_UClass_ULidarPointCloudSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULidarPointCloudSettings.OuterSingleton, Z_Construct_UClass_ULidarPointCloudSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULidarPointCloudSettings.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<ULidarPointCloudSettings>()
	{
		return ULidarPointCloudSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULidarPointCloudSettings);
	ULidarPointCloudSettings::~ULidarPointCloudSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudSettings_h_Statics::EnumInfo[] = {
		{ ELidarPointCloudDuplicateHandling_StaticEnum, TEXT("ELidarPointCloudDuplicateHandling"), &Z_Registration_Info_UEnum_ELidarPointCloudDuplicateHandling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2977996688U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULidarPointCloudSettings, ULidarPointCloudSettings::StaticClass, TEXT("ULidarPointCloudSettings"), &Z_Registration_Info_UClass_ULidarPointCloudSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULidarPointCloudSettings), 1158368216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudSettings_h_1743958807(TEXT("/Script/LidarPointCloudRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
