// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioMotorSimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioMotorSimTypes() {}
// Cross Module References
	AUDIOMOTORSIM_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMotorSimInputContext();
	AUDIOMOTORSIM_API UScriptStruct* Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext();
	UPackage* Z_Construct_UPackage__Script_AudioMotorSim();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioMotorSimInputContext;
class UScriptStruct* FAudioMotorSimInputContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMotorSimInputContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioMotorSimInputContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioMotorSimInputContext, (UObject*)Z_Construct_UPackage__Script_AudioMotorSim(), TEXT("AudioMotorSimInputContext"));
	}
	return Z_Registration_Info_UScriptStruct_AudioMotorSimInputContext.OuterSingleton;
}
template<> AUDIOMOTORSIM_API UScriptStruct* StaticStruct<FAudioMotorSimInputContext>()
{
	return FAudioMotorSimInputContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SideSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SideSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Throttle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brake_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceFrictionModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SurfaceFrictionModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotorFrictionModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotorFrictionModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Boost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Boost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDriving_MetaData[];
#endif
		static void NewProp_bDriving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDriving;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGrounded_MetaData[];
#endif
		static void NewProp_bGrounded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGrounded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanShift_MetaData[];
#endif
		static void NewProp_bCanShift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClutchEngaged_MetaData[];
#endif
		static void NewProp_bClutchEngaged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClutchEngaged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// collection of properties to be filled out by the vehicle in order to update the motor sim\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "collection of properties to be filled out by the vehicle in order to update the motor sim" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioMotorSimInputContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "Category", "UpdateContext" },
		{ "Comment", "// Time in Seonds\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "Time in Seonds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimInputContext, DeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "// Current speed of the vehicle in any direction\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "Current speed of the vehicle in any direction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimInputContext, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_ForwardSpeed_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "// Current speed of the vehicle relative to its forward direction\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "Current speed of the vehicle relative to its forward direction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_ForwardSpeed = { "ForwardSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimInputContext, ForwardSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_ForwardSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_ForwardSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_SideSpeed_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "// absolute value of the speed of the vehicle relative to its right direction\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "absolute value of the speed of the vehicle relative to its right direction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_SideSpeed = { "SideSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimInputContext, SideSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_SideSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_SideSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_UpSpeed_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "// Current speed of the vehicle along the z-axis\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "Current speed of the vehicle along the z-axis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_UpSpeed = { "UpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimInputContext, UpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_UpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_UpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Throttle_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// normalized input representing the player wanting to accelerate [-1, 1]\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "normalized input representing the player wanting to accelerate [-1, 1]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimInputContext, Throttle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Throttle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Throttle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Brake_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// normalized input representing the player wanting to slow down [0, 1]\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "normalized input representing the player wanting to slow down [0, 1]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimInputContext, Brake), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Brake_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Brake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_SurfaceFrictionModifier_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// scaling to apply to any behaviors that model surface friction\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "scaling to apply to any behaviors that model surface friction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_SurfaceFrictionModifier = { "SurfaceFrictionModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimInputContext, SurfaceFrictionModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_SurfaceFrictionModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_SurfaceFrictionModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_MotorFrictionModifier_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// scaling to apply to any behaviors that model internal motor friction\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "scaling to apply to any behaviors that model internal motor friction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_MotorFrictionModifier = { "MotorFrictionModifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimInputContext, MotorFrictionModifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_MotorFrictionModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_MotorFrictionModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Boost_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// normalized input representing additional thrust beyond normal driving behaviors\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "normalized input representing additional thrust beyond normal driving behaviors" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Boost = { "Boost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimInputContext, Boost), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Boost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Boost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bDriving_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// whether a player can drive the vehicle right now\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "whether a player can drive the vehicle right now" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bDriving_SetBit(void* Obj)
	{
		((FAudioMotorSimInputContext*)Obj)->bDriving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bDriving = { "bDriving", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAudioMotorSimInputContext), &Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bDriving_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bDriving_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bDriving_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bGrounded_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// whether the vehicle is firmly on the ground\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "whether the vehicle is firmly on the ground" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bGrounded_SetBit(void* Obj)
	{
		((FAudioMotorSimInputContext*)Obj)->bGrounded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bGrounded = { "bGrounded", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAudioMotorSimInputContext), &Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bGrounded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bGrounded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bCanShift_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// whether the motor can freely shift gears\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "whether the motor can freely shift gears" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bCanShift_SetBit(void* Obj)
	{
		((FAudioMotorSimInputContext*)Obj)->bCanShift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bCanShift = { "bCanShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAudioMotorSimInputContext), &Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bCanShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bCanShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bCanShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bClutchEngaged_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// when true, signals that the gears are temporarily disconnected from the motor\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "when true, signals that the gears are temporarily disconnected from the motor" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bClutchEngaged_SetBit(void* Obj)
	{
		((FAudioMotorSimInputContext*)Obj)->bClutchEngaged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bClutchEngaged = { "bClutchEngaged", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAudioMotorSimInputContext), &Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bClutchEngaged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bClutchEngaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bClutchEngaged_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_ForwardSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_SideSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_UpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Throttle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Brake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_SurfaceFrictionModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_MotorFrictionModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_Boost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bDriving,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bGrounded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bCanShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewProp_bClutchEngaged,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSim,
		nullptr,
		&NewStructOps,
		"AudioMotorSimInputContext",
		sizeof(FAudioMotorSimInputContext),
		alignof(FAudioMotorSimInputContext),
		Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioMotorSimInputContext()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioMotorSimInputContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioMotorSimInputContext.InnerSingleton, Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioMotorSimInputContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AudioMotorSimRuntimeContext;
class UScriptStruct* FAudioMotorSimRuntimeContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AudioMotorSimRuntimeContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AudioMotorSimRuntimeContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext, (UObject*)Z_Construct_UPackage__Script_AudioMotorSim(), TEXT("AudioMotorSimRuntimeContext"));
	}
	return Z_Registration_Info_UScriptStruct_AudioMotorSimRuntimeContext.OuterSingleton;
}
template<> AUDIOMOTORSIM_API UScriptStruct* StaticStruct<FAudioMotorSimRuntimeContext>()
{
	return FAudioMotorSimRuntimeContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShifting_MetaData[];
#endif
		static void NewProp_bShifting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShifting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gear_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Gear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rpm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rpm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// properties that represent the current state of the motor sim, and persist between updates\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "properties that represent the current state of the motor sim, and persist between updates" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAudioMotorSimRuntimeContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_bShifting_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// true while the motor is performing a gear shift\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "true while the motor is performing a gear shift" },
	};
#endif
	void Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_bShifting_SetBit(void* Obj)
	{
		((FAudioMotorSimRuntimeContext*)Obj)->bShifting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_bShifting = { "bShifting", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAudioMotorSimRuntimeContext), &Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_bShifting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_bShifting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_bShifting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Gear_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// which gear the motor is in, if it uses gears\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "which gear the motor is in, if it uses gears" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Gear = { "Gear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimRuntimeContext, Gear), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Gear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Gear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Rpm_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// normalized RPM [0-1] of the motor\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "normalized RPM [0-1] of the motor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Rpm = { "Rpm", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimRuntimeContext, Rpm), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Rpm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Rpm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Volume_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// volume to set on the output component\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "volume to set on the output component" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimRuntimeContext, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "State" },
		{ "Comment", "// pitch to set on the output component\n" },
		{ "ModuleRelativePath", "Public/AudioMotorSimTypes.h" },
		{ "ToolTip", "pitch to set on the output component" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAudioMotorSimRuntimeContext, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Pitch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_bShifting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Gear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Rpm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewProp_Pitch,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioMotorSim,
		nullptr,
		&NewStructOps,
		"AudioMotorSimRuntimeContext",
		sizeof(FAudioMotorSimRuntimeContext),
		alignof(FAudioMotorSimRuntimeContext),
		Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext()
	{
		if (!Z_Registration_Info_UScriptStruct_AudioMotorSimRuntimeContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AudioMotorSimRuntimeContext.InnerSingleton, Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AudioMotorSimRuntimeContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorSimTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorSimTypes_h_Statics::ScriptStructInfo[] = {
		{ FAudioMotorSimInputContext::StaticStruct, Z_Construct_UScriptStruct_FAudioMotorSimInputContext_Statics::NewStructOps, TEXT("AudioMotorSimInputContext"), &Z_Registration_Info_UScriptStruct_AudioMotorSimInputContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioMotorSimInputContext), 1694601809U) },
		{ FAudioMotorSimRuntimeContext::StaticStruct, Z_Construct_UScriptStruct_FAudioMotorSimRuntimeContext_Statics::NewStructOps, TEXT("AudioMotorSimRuntimeContext"), &Z_Registration_Info_UScriptStruct_AudioMotorSimRuntimeContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAudioMotorSimRuntimeContext), 519738428U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorSimTypes_h_3299540060(TEXT("/Script/AudioMotorSim"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorSimTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorSimTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
