// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmoothOrientation/MassSmoothOrientationFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmoothOrientationFragments() {}
// Cross Module References
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmoothOrientationParameters();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmoothOrientationWeights();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References

static_assert(std::is_polymorphic<FMassSmoothOrientationWeights>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassSmoothOrientationWeights cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSmoothOrientationWeights;
class UScriptStruct* FMassSmoothOrientationWeights::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSmoothOrientationWeights.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSmoothOrientationWeights.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSmoothOrientationWeights, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassSmoothOrientationWeights"));
	}
	return Z_Registration_Info_UScriptStruct_MassSmoothOrientationWeights.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassSmoothOrientationWeights>()
{
	return FMassSmoothOrientationWeights::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveTargetWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveTargetWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSmoothOrientationWeights>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewProp_MoveTargetWeight_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewProp_MoveTargetWeight = { "MoveTargetWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmoothOrientationWeights, MoveTargetWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewProp_MoveTargetWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewProp_MoveTargetWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewProp_VelocityWeight_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewProp_VelocityWeight = { "VelocityWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmoothOrientationWeights, VelocityWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewProp_VelocityWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewProp_VelocityWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewProp_MoveTargetWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewProp_VelocityWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassSmoothOrientationWeights",
		sizeof(FMassSmoothOrientationWeights),
		alignof(FMassSmoothOrientationWeights),
		Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSmoothOrientationWeights()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSmoothOrientationWeights.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSmoothOrientationWeights.InnerSingleton, Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSmoothOrientationWeights.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassSmoothOrientationParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassSmoothOrientationParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSmoothOrientationParameters;
class UScriptStruct* FMassSmoothOrientationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSmoothOrientationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSmoothOrientationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters, (UObject*)Z_Construct_UPackage__Script_MassNavigation(), TEXT("MassSmoothOrientationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassSmoothOrientationParameters.OuterSingleton;
}
template<> MASSNAVIGATION_API UScriptStruct* StaticStruct<FMassSmoothOrientationParameters>()
{
	return FMassSmoothOrientationParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOfPathDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOfPathDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationSmoothingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientationSmoothingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Moving_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Moving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Standing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Standing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSmoothOrientationParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_EndOfPathDuration_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The time it takes the orientation to catchup to the requested orientation. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationFragments.h" },
		{ "ToolTip", "The time it takes the orientation to catchup to the requested orientation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_EndOfPathDuration = { "EndOfPathDuration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmoothOrientationParameters, EndOfPathDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_EndOfPathDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_EndOfPathDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_OrientationSmoothingTime_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The time it takes the orientation to catchup to the requested orientation. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationFragments.h" },
		{ "ToolTip", "The time it takes the orientation to catchup to the requested orientation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_OrientationSmoothingTime = { "OrientationSmoothingTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmoothOrientationParameters, OrientationSmoothingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_OrientationSmoothingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_OrientationSmoothingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_Moving_MetaData[] = {
		{ "Category", "Orientation" },
		{ "Comment", "/* Orientation blending weights while moving. */" },
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationFragments.h" },
		{ "ToolTip", "Orientation blending weights while moving." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_Moving = { "Moving", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmoothOrientationParameters, Moving), Z_Construct_UScriptStruct_FMassSmoothOrientationWeights, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_Moving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_Moving_MetaData)) }; // 4265130064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_Standing_MetaData[] = {
		{ "Category", "Orientation" },
		{ "Comment", "/* Orientation blending weights while standing. */" },
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationFragments.h" },
		{ "ToolTip", "Orientation blending weights while standing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_Standing = { "Standing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassSmoothOrientationParameters, Standing), Z_Construct_UScriptStruct_FMassSmoothOrientationWeights, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_Standing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_Standing_MetaData)) }; // 4265130064
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_EndOfPathDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_OrientationSmoothingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_Moving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewProp_Standing,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassSmoothOrientationParameters",
		sizeof(FMassSmoothOrientationParameters),
		alignof(FMassSmoothOrientationParameters),
		Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSmoothOrientationParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSmoothOrientationParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSmoothOrientationParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSmoothOrientationParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassSmoothOrientationWeights::StaticStruct, Z_Construct_UScriptStruct_FMassSmoothOrientationWeights_Statics::NewStructOps, TEXT("MassSmoothOrientationWeights"), &Z_Registration_Info_UScriptStruct_MassSmoothOrientationWeights, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSmoothOrientationWeights), 4265130064U) },
		{ FMassSmoothOrientationParameters::StaticStruct, Z_Construct_UScriptStruct_FMassSmoothOrientationParameters_Statics::NewStructOps, TEXT("MassSmoothOrientationParameters"), &Z_Registration_Info_UScriptStruct_MassSmoothOrientationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSmoothOrientationParameters), 3769550743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationFragments_h_3760902795(TEXT("/Script/MassNavigation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
