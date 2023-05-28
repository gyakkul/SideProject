// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectGridFilter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFilter();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFilter_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFilterConfig();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFilterConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void UNetObjectGridFilterConfig::StaticRegisterNativesUNetObjectGridFilterConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectGridFilterConfig);
	UClass* Z_Construct_UClass_UNetObjectGridFilterConfig_NoRegister()
	{
		return UNetObjectGridFilterConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectGridFilterConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewPosRelevancyFrameCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ViewPosRelevancyFrameCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultCullDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxPos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetObjectFilterConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_ViewPosRelevancyFrameCount_MetaData[] = {
		{ "Comment", "/** How many frames a view position should be considered relevant. To avoid culling issues when player borders cells. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "How many frames a view position should be considered relevant. To avoid culling issues when player borders cells." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_ViewPosRelevancyFrameCount = { "ViewPosRelevancyFrameCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectGridFilterConfig, ViewPosRelevancyFrameCount), METADATA_PARAMS(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_ViewPosRelevancyFrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_ViewPosRelevancyFrameCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeX_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeX = { "CellSizeX", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectGridFilterConfig, CellSizeX), METADATA_PARAMS(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeY = { "CellSizeY", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectGridFilterConfig, CellSizeY), METADATA_PARAMS(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxCullDistance_MetaData[] = {
		{ "Comment", "/** Objects with larger sqrt(NetCullDistanceSqr) will be rejected. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Objects with larger sqrt(NetCullDistanceSqr) will be rejected." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxCullDistance = { "MaxCullDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectGridFilterConfig, MaxCullDistance), METADATA_PARAMS(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_DefaultCullDistance_MetaData[] = {
		{ "Comment", "/** Objects without a NetCullDistanceSquared property will assume to have this value but squared unless there's a cull distance override. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Objects without a NetCullDistanceSquared property will assume to have this value but squared unless there's a cull distance override." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_DefaultCullDistance = { "DefaultCullDistance", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectGridFilterConfig, DefaultCullDistance), METADATA_PARAMS(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_DefaultCullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_DefaultCullDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MinPos_MetaData[] = {
		{ "Comment", "/** Coordinates will be clamped to MinPos and MaxPos. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Coordinates will be clamped to MinPos and MaxPos." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MinPos = { "MinPos", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectGridFilterConfig, MinPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MinPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MinPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxPos_MetaData[] = {
		{ "Comment", "/** Coordinates will be clamped to MinPos and MaxPos. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ToolTip", "Coordinates will be clamped to MinPos and MaxPos." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxPos = { "MaxPos", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectGridFilterConfig, MaxPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxPos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_ViewPosRelevancyFrameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_CellSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_DefaultCullDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MinPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::NewProp_MaxPos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectGridFilterConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::ClassParams = {
		&UNetObjectGridFilterConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::PropPointers),
		0,
		0x000800ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectGridFilterConfig()
	{
		if (!Z_Registration_Info_UClass_UNetObjectGridFilterConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectGridFilterConfig.OuterSingleton, Z_Construct_UClass_UNetObjectGridFilterConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectGridFilterConfig.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectGridFilterConfig>()
	{
		return UNetObjectGridFilterConfig::StaticClass();
	}
	UNetObjectGridFilterConfig::UNetObjectGridFilterConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectGridFilterConfig);
	UNetObjectGridFilterConfig::~UNetObjectGridFilterConfig() {}
	void UNetObjectGridFilter::StaticRegisterNativesUNetObjectGridFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectGridFilter);
	UClass* Z_Construct_UClass_UNetObjectGridFilter_NoRegister()
	{
		return UNetObjectGridFilter::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectGridFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectGridFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetObjectFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectGridFilter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectGridFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectGridFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectGridFilter_Statics::ClassParams = {
		&UNetObjectGridFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectGridFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectGridFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectGridFilter()
	{
		if (!Z_Registration_Info_UClass_UNetObjectGridFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectGridFilter.OuterSingleton, Z_Construct_UClass_UNetObjectGridFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectGridFilter.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectGridFilter>()
	{
		return UNetObjectGridFilter::StaticClass();
	}
	UNetObjectGridFilter::UNetObjectGridFilter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectGridFilter);
	UNetObjectGridFilter::~UNetObjectGridFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectGridFilterConfig, UNetObjectGridFilterConfig::StaticClass, TEXT("UNetObjectGridFilterConfig"), &Z_Registration_Info_UClass_UNetObjectGridFilterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectGridFilterConfig), 1445253268U) },
		{ Z_Construct_UClass_UNetObjectGridFilter, UNetObjectGridFilter::StaticClass, TEXT("UNetObjectGridFilter"), &Z_Registration_Info_UClass_UNetObjectGridFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectGridFilter), 3516055678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_468866643(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
