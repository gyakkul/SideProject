// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassLookAtProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLookAtProcessors() {}
// Cross Module References
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassLookAtProcessor();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassLookAtProcessor_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	void UMassLookAtProcessor::StaticRegisterNativesUMassLookAtProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassLookAtProcessor);
	UClass* Z_Construct_UClass_UMassLookAtProcessor_NoRegister()
	{
		return UMassLookAtProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassLookAtProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QueryExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationVariation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationVariation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleThresholdInDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThresholdInDegrees;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassLookAtProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLookAtProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Processor to choose and assign LookAt configurations  \n */" },
		{ "IncludePath", "MassLookAtProcessors.h" },
		{ "ModuleRelativePath", "Public/MassLookAtProcessors.h" },
		{ "ToolTip", "Processor to choose and assign LookAt configurations" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_QueryExtent_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Size of the query to find potential targets */" },
		{ "ModuleRelativePath", "Public/MassLookAtProcessors.h" },
		{ "ToolTip", "Size of the query to find potential targets" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_QueryExtent = { "QueryExtent", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassLookAtProcessor, QueryExtent), METADATA_PARAMS(Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_QueryExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_QueryExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Time an entity must use a random look at. */" },
		{ "ModuleRelativePath", "Public/MassLookAtProcessors.h" },
		{ "ToolTip", "Time an entity must use a random look at." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassLookAtProcessor, Duration), METADATA_PARAMS(Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_DurationVariation_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Variation applied to a random look at duration [Duration-Variation : Duration+Variation] */" },
		{ "ModuleRelativePath", "Public/MassLookAtProcessors.h" },
		{ "ToolTip", "Variation applied to a random look at duration [Duration-Variation : Duration+Variation]" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_DurationVariation = { "DurationVariation", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassLookAtProcessor, DurationVariation), METADATA_PARAMS(Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_DurationVariation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_DurationVariation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_DebugZOffset_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Height offset that will be added for debug draw of the look at vector. Useful to bring arrow near character's eyes */" },
		{ "DisplayName", "Debug draw Z offset (cm)" },
		{ "ModuleRelativePath", "Public/MassLookAtProcessors.h" },
		{ "ToolTip", "Height offset that will be added for debug draw of the look at vector. Useful to bring arrow near character's eyes" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_DebugZOffset = { "DebugZOffset", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassLookAtProcessor, DebugZOffset), METADATA_PARAMS(Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_DebugZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_DebugZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_AngleThresholdInDegrees_MetaData[] = {
		{ "Category", "LookAt" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Tolerance in degrees between the forward direction and the look at duration to track an entity */" },
		{ "DisplayName", "Angle Threshold (degrees)" },
		{ "ModuleRelativePath", "Public/MassLookAtProcessors.h" },
		{ "ToolTip", "Tolerance in degrees between the forward direction and the look at duration to track an entity" },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_AngleThresholdInDegrees = { "AngleThresholdInDegrees", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassLookAtProcessor, AngleThresholdInDegrees), METADATA_PARAMS(Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_AngleThresholdInDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_AngleThresholdInDegrees_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassLookAtProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_QueryExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_DurationVariation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_DebugZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLookAtProcessor_Statics::NewProp_AngleThresholdInDegrees,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassLookAtProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassLookAtProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassLookAtProcessor_Statics::ClassParams = {
		&UMassLookAtProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassLookAtProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassLookAtProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassLookAtProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLookAtProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassLookAtProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassLookAtProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassLookAtProcessor.OuterSingleton, Z_Construct_UClass_UMassLookAtProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassLookAtProcessor.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassLookAtProcessor>()
	{
		return UMassLookAtProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassLookAtProcessor);
	UMassLookAtProcessor::~UMassLookAtProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassLookAtProcessor, UMassLookAtProcessor::StaticClass, TEXT("UMassLookAtProcessor"), &Z_Registration_Info_UClass_UMassLookAtProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassLookAtProcessor), 2126206281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_881294625(TEXT("/Script/MassAIBehavior"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassLookAtProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
