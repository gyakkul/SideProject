// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdServerRepresentationLODProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdServerRepresentationLODProcessor() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdServerRepresentationLODProcessor::StaticRegisterNativesUMassCrowdServerRepresentationLODProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdServerRepresentationLODProcessor);
	UClass* Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_NoRegister()
	{
		return UMassCrowdServerRepresentationLODProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferHysteresisOnDistancePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferHysteresisOnDistancePercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODMaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODMaxCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Crowd Simulation LOD" },
		{ "IncludePath", "MassCrowdServerRepresentationLODProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdServerRepresentationLODProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_LODDistance_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "Comment", "/** Distance where each LOD becomes relevant */" },
		{ "ModuleRelativePath", "Public/MassCrowdServerRepresentationLODProcessor.h" },
		{ "ToolTip", "Distance where each LOD becomes relevant" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_LODDistance = { "LODDistance", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LODDistance, UMassCrowdServerRepresentationLODProcessor), nullptr, nullptr, STRUCT_OFFSET(UMassCrowdServerRepresentationLODProcessor, LODDistance), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_LODDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_LODDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData[] = {
		{ "Category", "Mass|LOD" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Hysteresis percentage on delta between the LOD distances */" },
		{ "ModuleRelativePath", "Public/MassCrowdServerRepresentationLODProcessor.h" },
		{ "ToolTip", "Hysteresis percentage on delta between the LOD distances" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_BufferHysteresisOnDistancePercentage = { "BufferHysteresisOnDistancePercentage", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdServerRepresentationLODProcessor, BufferHysteresisOnDistancePercentage), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_LODMaxCount_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "Comment", "/** Maximum limit of entity per LOD */" },
		{ "ModuleRelativePath", "Public/MassCrowdServerRepresentationLODProcessor.h" },
		{ "ToolTip", "Maximum limit of entity per LOD" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_LODMaxCount = { "LODMaxCount", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LODMaxCount, UMassCrowdServerRepresentationLODProcessor), nullptr, nullptr, STRUCT_OFFSET(UMassCrowdServerRepresentationLODProcessor, LODMaxCount), METADATA_PARAMS(Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_LODMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_LODMaxCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_LODDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_BufferHysteresisOnDistancePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::NewProp_LODMaxCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdServerRepresentationLODProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::ClassParams = {
		&UMassCrowdServerRepresentationLODProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdServerRepresentationLODProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdServerRepresentationLODProcessor.OuterSingleton, Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdServerRepresentationLODProcessor.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdServerRepresentationLODProcessor>()
	{
		return UMassCrowdServerRepresentationLODProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdServerRepresentationLODProcessor);
	UMassCrowdServerRepresentationLODProcessor::~UMassCrowdServerRepresentationLODProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationLODProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationLODProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdServerRepresentationLODProcessor, UMassCrowdServerRepresentationLODProcessor::StaticClass, TEXT("UMassCrowdServerRepresentationLODProcessor"), &Z_Registration_Info_UClass_UMassCrowdServerRepresentationLODProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdServerRepresentationLODProcessor), 3239748266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationLODProcessor_h_1401933192(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationLODProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationLODProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
