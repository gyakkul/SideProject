// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassMovement/Public/MassMovementFragments.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassMovement/Public/MassMovementTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassMovementFragments() {}
// Cross Module References
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassForceFragment();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovementParameters();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyleParameters();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassVelocityFragment();
	UPackage* Z_Construct_UPackage__Script_MassMovement();
// End Cross Module References

static_assert(std::is_polymorphic<FMassVelocityFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassVelocityFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassVelocityFragment;
class UScriptStruct* FMassVelocityFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassVelocityFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassVelocityFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassVelocityFragment, (UObject*)Z_Construct_UPackage__Script_MassMovement(), TEXT("MassVelocityFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassVelocityFragment.OuterSingleton;
}
template<> MASSMOVEMENT_API UScriptStruct* StaticStruct<FMassVelocityFragment>()
{
	return FMassVelocityFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassVelocityFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVelocityFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassMovementFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassVelocityFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassVelocityFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassVelocityFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassVelocityFragment",
		sizeof(FMassVelocityFragment),
		alignof(FMassVelocityFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVelocityFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVelocityFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassVelocityFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassVelocityFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassVelocityFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassVelocityFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassVelocityFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassForceFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassForceFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassForceFragment;
class UScriptStruct* FMassForceFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassForceFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassForceFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassForceFragment, (UObject*)Z_Construct_UPackage__Script_MassMovement(), TEXT("MassForceFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassForceFragment.OuterSingleton;
}
template<> MASSMOVEMENT_API UScriptStruct* StaticStruct<FMassForceFragment>()
{
	return FMassForceFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassForceFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassForceFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassMovementFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassForceFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassForceFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassForceFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassForceFragment",
		sizeof(FMassForceFragment),
		alignof(FMassForceFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassForceFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassForceFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassForceFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassForceFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassForceFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassForceFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassForceFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassMovementParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassMovementParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassMovementParameters;
class UScriptStruct* FMassMovementParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassMovementParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassMovementParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassMovementParameters, (UObject*)Z_Construct_UPackage__Script_MassMovement(), TEXT("MassMovementParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassMovementParameters.OuterSingleton;
}
template<> MASSMOVEMENT_API UScriptStruct* StaticStruct<FMassMovementParameters>()
{
	return FMassMovementParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassMovementParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDesiredSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDesiredSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDesiredSpeedVariance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDesiredSpeedVariance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightSmoothingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightSmoothingTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementStyles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementStyles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MovementStyles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassMovementFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassMovementParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum speed (cm/s). */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/MassMovementFragments.h" },
		{ "ToolTip", "Maximum speed (cm/s)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementParameters, MaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MaxAcceleration_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** 200..600 Smaller steering maximum acceleration makes the steering more \\\"calm\\\" but less opportunistic, may not find solution, or gets stuck. */" },
		{ "ForceUnits", "cm/s^2" },
		{ "ModuleRelativePath", "Public/MassMovementFragments.h" },
		{ "ToolTip", "200..600 Smaller steering maximum acceleration makes the steering more \\\"calm\\\" but less opportunistic, may not find solution, or gets stuck." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementParameters, MaxAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_DefaultDesiredSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Default desired speed (cm/s). */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/MassMovementFragments.h" },
		{ "ToolTip", "Default desired speed (cm/s)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_DefaultDesiredSpeed = { "DefaultDesiredSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementParameters, DefaultDesiredSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_DefaultDesiredSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_DefaultDesiredSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_DefaultDesiredSpeedVariance_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much default desired speed is varied randomly. */" },
		{ "ModuleRelativePath", "Public/MassMovementFragments.h" },
		{ "ToolTip", "How much default desired speed is varied randomly." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_DefaultDesiredSpeedVariance = { "DefaultDesiredSpeedVariance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementParameters, DefaultDesiredSpeedVariance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_DefaultDesiredSpeedVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_DefaultDesiredSpeedVariance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_HeightSmoothingTime_MetaData[] = {
		{ "Category", "Movement" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The time it takes the entity position to catchup to the requested height. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/MassMovementFragments.h" },
		{ "ToolTip", "The time it takes the entity position to catchup to the requested height." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_HeightSmoothingTime = { "HeightSmoothingTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementParameters, HeightSmoothingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_HeightSmoothingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_HeightSmoothingTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MovementStyles_Inner = { "MovementStyles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassMovementStyleParameters, METADATA_PARAMS(nullptr, 0) }; // 2860462455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MovementStyles_MetaData[] = {
		{ "Category", "Movement" },
		{ "Comment", "/** List of supported movement styles for this configuration. */" },
		{ "ModuleRelativePath", "Public/MassMovementFragments.h" },
		{ "ToolTip", "List of supported movement styles for this configuration." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MovementStyles = { "MovementStyles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementParameters, MovementStyles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MovementStyles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MovementStyles_MetaData)) }; // 2860462455
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassMovementParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MaxAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_DefaultDesiredSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_DefaultDesiredSpeedVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_HeightSmoothingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MovementStyles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewProp_MovementStyles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassMovementParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassMovementParameters",
		sizeof(FMassMovementParameters),
		alignof(FMassMovementParameters),
		Z_Construct_UScriptStruct_FMassMovementParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassMovementParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassMovementParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassMovementParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassMovementParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassMovementParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassVelocityFragment::StaticStruct, Z_Construct_UScriptStruct_FMassVelocityFragment_Statics::NewStructOps, TEXT("MassVelocityFragment"), &Z_Registration_Info_UScriptStruct_MassVelocityFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassVelocityFragment), 3772930063U) },
		{ FMassForceFragment::StaticStruct, Z_Construct_UScriptStruct_FMassForceFragment_Statics::NewStructOps, TEXT("MassForceFragment"), &Z_Registration_Info_UScriptStruct_MassForceFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassForceFragment), 3461867068U) },
		{ FMassMovementParameters::StaticStruct, Z_Construct_UScriptStruct_FMassMovementParameters_Statics::NewStructOps, TEXT("MassMovementParameters"), &Z_Registration_Info_UScriptStruct_MassMovementParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassMovementParameters), 2037809120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementFragments_h_2534864023(TEXT("/Script/MassMovement"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
