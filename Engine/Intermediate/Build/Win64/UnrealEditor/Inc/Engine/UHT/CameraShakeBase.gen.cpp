// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakePattern_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakeDurationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeDuration();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeScrubParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeStartParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeStopParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateParams();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakeStartParams;
class UScriptStruct* FCameraShakeStartParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeStartParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakeStartParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeStartParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeStartParams"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeStartParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeStartParams>()
{
	return FCameraShakeStartParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRestarting_MetaData[];
#endif
		static void NewProp_bIsRestarting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRestarting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for starting a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for starting a camera shake." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeStartParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting_SetBit(void* Obj)
	{
		((FCameraShakeStartParams*)Obj)->bIsRestarting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting = { "bIsRestarting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCameraShakeStartParams), &Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewProp_bIsRestarting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeStartParams",
		sizeof(FCameraShakeStartParams),
		alignof(FCameraShakeStartParams),
		Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeStartParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraShakeStartParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakeStartParams.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraShakeStartParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakeUpdateParams;
class UScriptStruct* FCameraShakeUpdateParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeUpdateParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakeUpdateParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeUpdateParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeUpdateParams"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeUpdateParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeUpdateParams>()
{
	return FCameraShakeUpdateParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendingWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendingWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_POV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for updating a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for updating a camera shake." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeUpdateParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The time elapsed since last update */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The time elapsed since last update" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeUpdateParams, DeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The base scale for this shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The base scale for this shake" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeUpdateParams, ShakeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_ShakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_ShakeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DynamicScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The dynamic scale being passed down from the camera manger for the next update */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The dynamic scale being passed down from the camera manger for the next update" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DynamicScale = { "DynamicScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeUpdateParams, DynamicScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DynamicScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DynamicScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_BlendingWeight_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The auto-computed blend in/out scale, when blending is handled by externally (see UCameraShakeBase::GetShakeInfo) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The auto-computed blend in/out scale, when blending is handled by externally (see UCameraShakeBase::GetShakeInfo)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_BlendingWeight = { "BlendingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeUpdateParams, BlendingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_BlendingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_BlendingWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_POV_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The current view that this camera shake should modify */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The current view that this camera shake should modify" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeUpdateParams, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_POV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_POV_MetaData)) }; // 1056960465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_ShakeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_DynamicScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_BlendingWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewProp_POV,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeUpdateParams",
		sizeof(FCameraShakeUpdateParams),
		alignof(FCameraShakeUpdateParams),
		Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraShakeUpdateParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakeUpdateParams.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraShakeUpdateParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakeScrubParams;
class UScriptStruct* FCameraShakeScrubParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeScrubParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakeScrubParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeScrubParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeScrubParams"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeScrubParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeScrubParams>()
{
	return FCameraShakeScrubParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsoluteTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendingWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendingWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_POV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_POV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for scrubbing a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for scrubbing a camera shake." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeScrubParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_AbsoluteTime_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The time to scrub to */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The time to scrub to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_AbsoluteTime = { "AbsoluteTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeScrubParams, AbsoluteTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_AbsoluteTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_AbsoluteTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The base scale for this shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The base scale for this shake" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeScrubParams, ShakeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_ShakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_ShakeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_DynamicScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The dynamic scale being passed down from the camera manger for the next update */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The dynamic scale being passed down from the camera manger for the next update" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_DynamicScale = { "DynamicScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeScrubParams, DynamicScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_DynamicScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_DynamicScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_BlendingWeight_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The auto-computed blend in/out scale, when blending is handled by externally (see UCameraShakeBase::GetShakeInfo) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The auto-computed blend in/out scale, when blending is handled by externally (see UCameraShakeBase::GetShakeInfo)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_BlendingWeight = { "BlendingWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeScrubParams, BlendingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_BlendingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_BlendingWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_POV_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The current view that this camera shake should modify */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The current view that this camera shake should modify" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_POV = { "POV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeScrubParams, POV), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_POV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_POV_MetaData)) }; // 1056960465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_AbsoluteTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_ShakeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_DynamicScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_BlendingWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewProp_POV,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeScrubParams",
		sizeof(FCameraShakeScrubParams),
		alignof(FCameraShakeScrubParams),
		Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeScrubParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraShakeScrubParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakeScrubParams.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraShakeScrubParams.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraShakeUpdateResultFlags;
	static UEnum* ECameraShakeUpdateResultFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraShakeUpdateResultFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraShakeUpdateResultFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakeUpdateResultFlags"));
		}
		return Z_Registration_Info_UEnum_ECameraShakeUpdateResultFlags.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraShakeUpdateResultFlags>()
	{
		return ECameraShakeUpdateResultFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Statics::Enumerators[] = {
		{ "ECameraShakeUpdateResultFlags::ApplyAsAbsolute", (int64)ECameraShakeUpdateResultFlags::ApplyAsAbsolute },
		{ "ECameraShakeUpdateResultFlags::SkipAutoScale", (int64)ECameraShakeUpdateResultFlags::SkipAutoScale },
		{ "ECameraShakeUpdateResultFlags::SkipAutoPlaySpace", (int64)ECameraShakeUpdateResultFlags::SkipAutoPlaySpace },
		{ "ECameraShakeUpdateResultFlags::Default", (int64)ECameraShakeUpdateResultFlags::Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Statics::Enum_MetaDataParams[] = {
		{ "ApplyAsAbsolute.Comment", "/** Apply the result location, rotation, and field of view as absolute values, instead of additive values. */" },
		{ "ApplyAsAbsolute.Name", "ECameraShakeUpdateResultFlags::ApplyAsAbsolute" },
		{ "ApplyAsAbsolute.ToolTip", "Apply the result location, rotation, and field of view as absolute values, instead of additive values." },
		{ "Comment", "/**\n * Flags that camera shakes can return to change base-class behaviour.\n */" },
		{ "Default.Comment", "/** Default flags: the sub-class is returning local, additive offsets, and lets the base class take care of the rest. */" },
		{ "Default.Name", "ECameraShakeUpdateResultFlags::Default" },
		{ "Default.ToolTip", "Default flags: the sub-class is returning local, additive offsets, and lets the base class take care of the rest." },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "SkipAutoPlaySpace.Comment", "/** Do not re-orient the result based on the play-space. Implied when ApplyAsAbsolute is set. */" },
		{ "SkipAutoPlaySpace.Name", "ECameraShakeUpdateResultFlags::SkipAutoPlaySpace" },
		{ "SkipAutoPlaySpace.ToolTip", "Do not re-orient the result based on the play-space. Implied when ApplyAsAbsolute is set." },
		{ "SkipAutoScale.Comment", "/** Do not apply scaling (dynamic scale, blending weight, shake scale), meaning that this will be done in the sub-class. Implied when ApplyAsAbsolute is set. */" },
		{ "SkipAutoScale.Name", "ECameraShakeUpdateResultFlags::SkipAutoScale" },
		{ "SkipAutoScale.ToolTip", "Do not apply scaling (dynamic scale, blending weight, shake scale), meaning that this will be done in the sub-class. Implied when ApplyAsAbsolute is set." },
		{ "ToolTip", "Flags that camera shakes can return to change base-class behaviour." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECameraShakeUpdateResultFlags",
		"ECameraShakeUpdateResultFlags",
		Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags()
	{
		if (!Z_Registration_Info_UEnum_ECameraShakeUpdateResultFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraShakeUpdateResultFlags.InnerSingleton, Z_Construct_UEnum_Engine_ECameraShakeUpdateResultFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraShakeUpdateResultFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakeUpdateResult;
class UScriptStruct* FCameraShakeUpdateResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeUpdateResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakeUpdateResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeUpdateResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeUpdateResult"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeUpdateResult.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeUpdateResult>()
{
	return FCameraShakeUpdateResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The result of a camera shake update.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The result of a camera shake update." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeUpdateResult>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeUpdateResult",
		sizeof(FCameraShakeUpdateResult),
		alignof(FCameraShakeUpdateResult),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeUpdateResult()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraShakeUpdateResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakeUpdateResult.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraShakeUpdateResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakeStopParams;
class UScriptStruct* FCameraShakeStopParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeStopParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakeStopParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeStopParams, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeStopParams"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeStopParams.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeStopParams>()
{
	return FCameraShakeStopParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImmediately_MetaData[];
#endif
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Parameters for stopping a camera shake.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Parameters for stopping a camera shake." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeStopParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((FCameraShakeStopParams*)Obj)->bImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCameraShakeStopParams), &Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewProp_bImmediately,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeStopParams",
		sizeof(FCameraShakeStopParams),
		alignof(FCameraShakeStopParams),
		Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeStopParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraShakeStopParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakeStopParams.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraShakeStopParams.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraShakeDurationType;
	static UEnum* ECameraShakeDurationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraShakeDurationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraShakeDurationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakeDurationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakeDurationType"));
		}
		return Z_Registration_Info_UEnum_ECameraShakeDurationType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraShakeDurationType>()
	{
		return ECameraShakeDurationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::Enumerators[] = {
		{ "ECameraShakeDurationType::Fixed", (int64)ECameraShakeDurationType::Fixed },
		{ "ECameraShakeDurationType::Infinite", (int64)ECameraShakeDurationType::Infinite },
		{ "ECameraShakeDurationType::Custom", (int64)ECameraShakeDurationType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Camera shake duration type.\n */" },
		{ "Custom.Comment", "/** Camera shake has custom/dynamic duration */" },
		{ "Custom.Name", "ECameraShakeDurationType::Custom" },
		{ "Custom.ToolTip", "Camera shake has custom/dynamic duration" },
		{ "Fixed.Comment", "/** Camera shake has a fixed duration */" },
		{ "Fixed.Name", "ECameraShakeDurationType::Fixed" },
		{ "Fixed.ToolTip", "Camera shake has a fixed duration" },
		{ "Infinite.Comment", "/** Camera shake is playing indefinitely, until explicitly stopped */" },
		{ "Infinite.Name", "ECameraShakeDurationType::Infinite" },
		{ "Infinite.ToolTip", "Camera shake is playing indefinitely, until explicitly stopped" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Camera shake duration type." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECameraShakeDurationType",
		"ECameraShakeDurationType",
		Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECameraShakeDurationType()
	{
		if (!Z_Registration_Info_UEnum_ECameraShakeDurationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraShakeDurationType.InnerSingleton, Z_Construct_UEnum_Engine_ECameraShakeDurationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraShakeDurationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakeDuration;
class UScriptStruct* FCameraShakeDuration::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeDuration.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakeDuration.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeDuration, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeDuration"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeDuration.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeDuration>()
{
	return FCameraShakeDuration::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraShakeDuration_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Camera shake duration.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Camera shake duration." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeDuration>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeDuration, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeDuration, Type), Z_Construct_UEnum_Engine_ECameraShakeDurationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_MetaData)) }; // 722507516
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeDuration",
		sizeof(FCameraShakeDuration),
		alignof(FCameraShakeDuration),
		Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeDuration()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraShakeDuration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakeDuration.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraShakeDuration.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraShakeInfo;
class UScriptStruct* FCameraShakeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraShakeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraShakeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraShakeInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraShakeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CameraShakeInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraShakeInfo>()
{
	return FCameraShakeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraShakeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Information about a camera shake class.\n */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Information about a camera shake class." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraShakeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Comment", "/** The duration of the camera shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The duration of the camera shake" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeInfo, Duration), Z_Construct_UScriptStruct_FCameraShakeDuration, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration_MetaData)) }; // 2207978528
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn_MetaData[] = {
		{ "Comment", "/** How much blending-in the camera shake should have */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "How much blending-in the camera shake should have" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeInfo, BlendIn), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut_MetaData[] = {
		{ "Comment", "/** How much blending-out the camera shake should have */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "How much blending-out the camera shake should have" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraShakeInfo, BlendOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewProp_BlendOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraShakeInfo",
		sizeof(FCameraShakeInfo),
		alignof(FCameraShakeInfo),
		Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraShakeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraShakeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraShakeInfo.InnerSingleton, Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraShakeInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UCameraShakeBase::execSetRootShakePattern)
	{
		P_GET_OBJECT(UCameraShakePattern,Z_Param_InPattern);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRootShakePattern(Z_Param_InPattern);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraShakeBase::execGetRootShakePattern)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraShakePattern**)Z_Param__Result=P_THIS->GetRootShakePattern();
		P_NATIVE_END;
	}
	void UCameraShakeBase::StaticRegisterNativesUCameraShakeBase()
	{
		UClass* Class = UCameraShakeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRootShakePattern", &UCameraShakeBase::execGetRootShakePattern },
			{ "SetRootShakePattern", &UCameraShakeBase::execSetRootShakePattern },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics
	{
		struct CameraShakeBase_eventGetRootShakePattern_Parms
		{
			UCameraShakePattern* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraShakeBase_eventGetRootShakePattern_Parms, ReturnValue), Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Gets the root pattern of this camera shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Gets the root pattern of this camera shake" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeBase, nullptr, "GetRootShakePattern", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::CameraShakeBase_eventGetRootShakePattern_Parms), Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics
	{
		struct CameraShakeBase_eventSetRootShakePattern_Parms
		{
			UCameraShakePattern* InPattern;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPattern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::NewProp_InPattern = { "InPattern", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraShakeBase_eventSetRootShakePattern_Parms, InPattern), Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::NewProp_InPattern,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** Sets the root pattern of this camera shake */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "Sets the root pattern of this camera shake" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraShakeBase, nullptr, "SetRootShakePattern", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::CameraShakeBase_eventSetRootShakePattern_Parms), Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraShakeBase);
	UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister()
	{
		return UCameraShakeBase::StaticClass();
	}
	struct Z_Construct_UClass_UCameraShakeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSingleInstance_MetaData[];
#endif
		static void NewProp_bSingleInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootShakePattern_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootShakePattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraShakeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraShakeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraShakeBase_GetRootShakePattern, "GetRootShakePattern" }, // 2534490022
		{ &Z_Construct_UFunction_UCameraShakeBase_SetRootShakePattern, "SetRootShakePattern" }, // 3046709208
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for a camera shake. A camera shake contains a root shake \"pattern\" which is\n * the object that contains the actual logic driving how the camera is shaken. Keeping the two\n * separate makes it possible to completely change how a shake works without having to create\n * a completely different asset.\n */" },
		{ "IncludePath", "Camera/CameraShakeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for a camera shake. A camera shake contains a root shake \"pattern\" which is\nthe object that contains the actual logic driving how the camera is shaken. Keeping the two\nseparate makes it possible to completely change how a shake works without having to create\na completely different asset." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** \n\x09 *  If true to only allow a single instance of this shake class to play at any given time.\n\x09 *  Subsequent attempts to play this shake will simply restart the timer.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "If true to only allow a single instance of this shake class to play at any given time.\nSubsequent attempts to play this shake will simply restart the timer." },
	};
#endif
	void Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_SetBit(void* Obj)
	{
		((UCameraShakeBase*)Obj)->bSingleInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance = { "bSingleInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraShakeBase), &Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "Comment", "/** The overall scale to apply to the shake. Only valid when the shake is active. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The overall scale to apply to the shake. Only valid when the shake is active." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale = { "ShakeScale", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraShakeBase, ShakeScale), METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern_MetaData[] = {
		{ "Category", "CameraShakePattern" },
		{ "Comment", "/** The root pattern for this camera shake */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The root pattern for this camera shake" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern = { "RootShakePattern", nullptr, (EPropertyFlags)0x0046000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraShakeBase, RootShakePattern), Z_Construct_UClass_UCameraShakePattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager_MetaData[] = {
		{ "Comment", "/** The camera manager owning this camera shake. Only valid when the shake is active. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ToolTip", "The camera manager owning this camera shake. Only valid when the shake is active." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager = { "CameraManager", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraShakeBase, CameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_bSingleInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_ShakeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_RootShakePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraShakeBase_Statics::NewProp_CameraManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraShakeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakeBase_Statics::ClassParams = {
		&UCameraShakeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraShakeBase()
	{
		if (!Z_Registration_Info_UClass_UCameraShakeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraShakeBase.OuterSingleton, Z_Construct_UClass_UCameraShakeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraShakeBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCameraShakeBase>()
	{
		return UCameraShakeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakeBase);
	UCameraShakeBase::~UCameraShakeBase() {}
	void UCameraShakePattern::StaticRegisterNativesUCameraShakePattern()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraShakePattern);
	UClass* Z_Construct_UClass_UCameraShakePattern_NoRegister()
	{
		return UCameraShakePattern::StaticClass();
	}
	struct Z_Construct_UClass_UCameraShakePattern_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraShakePattern_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraShakePattern_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A shake \"pattern\" defines how a camera should be effectively shaken. Examples of shake patterns\n * are sinewave oscillation, perlin noise, or FBX animation.\n *\n */" },
		{ "IncludePath", "Camera/CameraShakeBase.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A shake \"pattern\" defines how a camera should be effectively shaken. Examples of shake patterns\nare sinewave oscillation, perlin noise, or FBX animation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraShakePattern_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraShakePattern>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraShakePattern_Statics::ClassParams = {
		&UCameraShakePattern::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraShakePattern_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraShakePattern_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraShakePattern()
	{
		if (!Z_Registration_Info_UClass_UCameraShakePattern.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraShakePattern.OuterSingleton, Z_Construct_UClass_UCameraShakePattern_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraShakePattern.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCameraShakePattern>()
	{
		return UCameraShakePattern::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraShakePattern);
	UCameraShakePattern::~UCameraShakePattern() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::EnumInfo[] = {
		{ ECameraShakeUpdateResultFlags_StaticEnum, TEXT("ECameraShakeUpdateResultFlags"), &Z_Registration_Info_UEnum_ECameraShakeUpdateResultFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 709795230U) },
		{ ECameraShakeDurationType_StaticEnum, TEXT("ECameraShakeDurationType"), &Z_Registration_Info_UEnum_ECameraShakeDurationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 722507516U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::ScriptStructInfo[] = {
		{ FCameraShakeStartParams::StaticStruct, Z_Construct_UScriptStruct_FCameraShakeStartParams_Statics::NewStructOps, TEXT("CameraShakeStartParams"), &Z_Registration_Info_UScriptStruct_CameraShakeStartParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakeStartParams), 2071514962U) },
		{ FCameraShakeUpdateParams::StaticStruct, Z_Construct_UScriptStruct_FCameraShakeUpdateParams_Statics::NewStructOps, TEXT("CameraShakeUpdateParams"), &Z_Registration_Info_UScriptStruct_CameraShakeUpdateParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakeUpdateParams), 3161691204U) },
		{ FCameraShakeScrubParams::StaticStruct, Z_Construct_UScriptStruct_FCameraShakeScrubParams_Statics::NewStructOps, TEXT("CameraShakeScrubParams"), &Z_Registration_Info_UScriptStruct_CameraShakeScrubParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakeScrubParams), 1899806093U) },
		{ FCameraShakeUpdateResult::StaticStruct, Z_Construct_UScriptStruct_FCameraShakeUpdateResult_Statics::NewStructOps, TEXT("CameraShakeUpdateResult"), &Z_Registration_Info_UScriptStruct_CameraShakeUpdateResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakeUpdateResult), 2814721293U) },
		{ FCameraShakeStopParams::StaticStruct, Z_Construct_UScriptStruct_FCameraShakeStopParams_Statics::NewStructOps, TEXT("CameraShakeStopParams"), &Z_Registration_Info_UScriptStruct_CameraShakeStopParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakeStopParams), 2259063169U) },
		{ FCameraShakeDuration::StaticStruct, Z_Construct_UScriptStruct_FCameraShakeDuration_Statics::NewStructOps, TEXT("CameraShakeDuration"), &Z_Registration_Info_UScriptStruct_CameraShakeDuration, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakeDuration), 2207978528U) },
		{ FCameraShakeInfo::StaticStruct, Z_Construct_UScriptStruct_FCameraShakeInfo_Statics::NewStructOps, TEXT("CameraShakeInfo"), &Z_Registration_Info_UScriptStruct_CameraShakeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraShakeInfo), 1697022188U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraShakeBase, UCameraShakeBase::StaticClass, TEXT("UCameraShakeBase"), &Z_Registration_Info_UClass_UCameraShakeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraShakeBase), 3506435433U) },
		{ Z_Construct_UClass_UCameraShakePattern, UCameraShakePattern::StaticClass, TEXT("UCameraShakePattern"), &Z_Registration_Info_UClass_UCameraShakePattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraShakePattern), 3113008272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_3440681032(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
