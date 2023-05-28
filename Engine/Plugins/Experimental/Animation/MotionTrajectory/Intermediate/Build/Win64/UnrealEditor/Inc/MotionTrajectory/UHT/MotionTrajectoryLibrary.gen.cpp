// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionTrajectoryLibrary.h"
#include "../../Source/Runtime/Engine/Public/Animation/MotionTrajectoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionTrajectoryLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleRange();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_NoRegister();
	MOTIONTRAJECTORY_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectoryDirectionClamp();
	UPackage* Z_Construct_UPackage__Script_MotionTrajectory();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrajectoryDirectionClamp;
class UScriptStruct* FTrajectoryDirectionClamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrajectoryDirectionClamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrajectoryDirectionClamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrajectoryDirectionClamp, (UObject*)Z_Construct_UPackage__Script_MotionTrajectory(), TEXT("TrajectoryDirectionClamp"));
	}
	return Z_Registration_Info_UScriptStruct_TrajectoryDirectionClamp.OuterSingleton;
}
template<> MOTIONTRAJECTORY_API UScriptStruct* StaticStruct<FTrajectoryDirectionClamp>()
{
	return FTrajectoryDirectionClamp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleTresholdDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleTresholdDegrees;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrajectoryDirectionClamp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Target clamped direction for an incoming source direction\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
		{ "ToolTip", "Target clamped direction for an incoming source direction" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrajectoryDirectionClamp, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewProp_AngleTresholdDegrees_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "// Target clamped directions will be applied to any source direction within this angle boundary\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
		{ "ToolTip", "Target clamped directions will be applied to any source direction within this angle boundary" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewProp_AngleTresholdDegrees = { "AngleTresholdDegrees", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrajectoryDirectionClamp, AngleTresholdDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewProp_AngleTresholdDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewProp_AngleTresholdDegrees_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewProp_AngleTresholdDegrees,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionTrajectory,
		nullptr,
		&NewStructOps,
		"TrajectoryDirectionClamp",
		sizeof(FTrajectoryDirectionClamp),
		alignof(FTrajectoryDirectionClamp),
		Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrajectoryDirectionClamp()
	{
		if (!Z_Registration_Info_UScriptStruct_TrajectoryDirectionClamp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrajectoryDirectionClamp.InnerSingleton, Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrajectoryDirectionClamp.InnerSingleton;
	}
	DEFINE_FUNCTION(UMotionTrajectoryBlueprintLibrary::execIsConstantSpeedTrajectory)
	{
		P_GET_STRUCT_REF(FTrajectorySampleRange,Z_Param_Out_Trajectory);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrajectoryBlueprintLibrary::IsConstantSpeedTrajectory(Z_Param_Out_Trajectory,Z_Param_Speed,Z_Param_Tolerance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrajectoryBlueprintLibrary::execIsStartingTrajectory)
	{
		P_GET_STRUCT_REF(FTrajectorySampleRange,Z_Param_Out_Trajectory);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MoveMinSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IdleMaxSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrajectoryBlueprintLibrary::IsStartingTrajectory(Z_Param_Out_Trajectory,Z_Param_MoveMinSpeed,Z_Param_IdleMaxSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrajectoryBlueprintLibrary::execIsStoppingTrajectory)
	{
		P_GET_STRUCT_REF(FTrajectorySampleRange,Z_Param_Out_Trajectory);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MoveMinSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_IdleMaxSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMotionTrajectoryBlueprintLibrary::IsStoppingTrajectory(Z_Param_Out_Trajectory,Z_Param_MoveMinSpeed,Z_Param_IdleMaxSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrajectoryBlueprintLibrary::execDebugDrawTrajectory)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WorldTransform);
		P_GET_STRUCT_REF(FTrajectorySampleRange,Z_Param_Out_Trajectory);
		P_GET_STRUCT(FLinearColor,Z_Param_PredictionColor);
		P_GET_STRUCT(FLinearColor,Z_Param_HistoryColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TransformScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TransformThickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ArrowScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ArrowSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ArrowThickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionTrajectoryBlueprintLibrary::DebugDrawTrajectory(Z_Param_Actor,Z_Param_Out_WorldTransform,Z_Param_Out_Trajectory,Z_Param_PredictionColor,Z_Param_HistoryColor,Z_Param_TransformScale,Z_Param_TransformThickness,Z_Param_ArrowScale,Z_Param_ArrowSize,Z_Param_ArrowThickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrajectoryBlueprintLibrary::execMakeTrajectoryRelativeToComponent)
	{
		P_GET_STRUCT(FTrajectorySampleRange,Z_Param_ActorTrajectory);
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTrajectorySampleRange*)Z_Param__Result=UMotionTrajectoryBlueprintLibrary::MakeTrajectoryRelativeToComponent(Z_Param_ActorTrajectory,Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrajectoryBlueprintLibrary::execRotateTrajectory)
	{
		P_GET_STRUCT(FTrajectorySampleRange,Z_Param_Trajectory);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTrajectorySampleRange*)Z_Param__Result=UMotionTrajectoryBlueprintLibrary::RotateTrajectory(Z_Param_Trajectory,Z_Param_Out_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrajectoryBlueprintLibrary::execFlattenTrajectory2D)
	{
		P_GET_STRUCT(FTrajectorySampleRange,Z_Param_Trajectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTrajectorySampleRange*)Z_Param__Result=UMotionTrajectoryBlueprintLibrary::FlattenTrajectory2D(Z_Param_Trajectory);
		P_NATIVE_END;
	}
	void UMotionTrajectoryBlueprintLibrary::StaticRegisterNativesUMotionTrajectoryBlueprintLibrary()
	{
		UClass* Class = UMotionTrajectoryBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugDrawTrajectory", &UMotionTrajectoryBlueprintLibrary::execDebugDrawTrajectory },
			{ "FlattenTrajectory2D", &UMotionTrajectoryBlueprintLibrary::execFlattenTrajectory2D },
			{ "IsConstantSpeedTrajectory", &UMotionTrajectoryBlueprintLibrary::execIsConstantSpeedTrajectory },
			{ "IsStartingTrajectory", &UMotionTrajectoryBlueprintLibrary::execIsStartingTrajectory },
			{ "IsStoppingTrajectory", &UMotionTrajectoryBlueprintLibrary::execIsStoppingTrajectory },
			{ "MakeTrajectoryRelativeToComponent", &UMotionTrajectoryBlueprintLibrary::execMakeTrajectoryRelativeToComponent },
			{ "RotateTrajectory", &UMotionTrajectoryBlueprintLibrary::execRotateTrajectory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics
	{
		struct MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms
		{
			const AActor* Actor;
			FTransform WorldTransform;
			FTrajectorySampleRange Trajectory;
			FLinearColor PredictionColor;
			FLinearColor HistoryColor;
			float TransformScale;
			float TransformThickness;
			float ArrowScale;
			float ArrowSize;
			float ArrowThickness;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trajectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistoryColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HistoryColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransformScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransformThickness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_WorldTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_WorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_WorldTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_Trajectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms, Trajectory), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_Trajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_Trajectory_MetaData)) }; // 4181307663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_PredictionColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_PredictionColor = { "PredictionColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms, PredictionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_PredictionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_PredictionColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_HistoryColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_HistoryColor = { "HistoryColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms, HistoryColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_HistoryColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_HistoryColor_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms, TransformScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_TransformThickness = { "TransformThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms, TransformThickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_ArrowScale = { "ArrowScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms, ArrowScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms, ArrowSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_ArrowThickness = { "ArrowThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms, ArrowThickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_WorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_Trajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_PredictionColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_HistoryColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_TransformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_TransformThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_ArrowScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_ArrowSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::NewProp_ArrowThickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "WorldTransform" },
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "/**\n\x09* Projects trajectory samples onto a defined set of allowed directions\n\x09*\n\x09* @param WorldTransform\x09\x09Input world transform to establish a world-space basis for drawing the trajectory\n\x09* @param Trajectory\x09\x09\x09Input trajectory range\n\x09* @param PredictionColor\x09Input prediction color to interpolate sample drawing towards\n\x09* @param HistoryColor\x09\x09Input historical color to interpolate sample drawing towards\n\x09* @param ArrowScale\x09\x09\x09Input sample velocity draw scale\n\x09* @param ArrowSize\x09\x09\x09Input sample arrow draw size\n\x09* @param ArrowThickness\x09\x09Input sample arrow draw thickness\n\x09* @param bDrawText\x09\x09\x09Input include drawing of per-sample trajectory information\n\x09*/" },
		{ "CPP_Default_ArrowScale", "0.025000" },
		{ "CPP_Default_ArrowSize", "40.000000" },
		{ "CPP_Default_ArrowThickness", "2.000000" },
		{ "CPP_Default_HistoryColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_PredictionColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_TransformScale", "10.000000" },
		{ "CPP_Default_TransformThickness", "2.000000" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
		{ "ToolTip", "Projects trajectory samples onto a defined set of allowed directions\n\n@param WorldTransform         Input world transform to establish a world-space basis for drawing the trajectory\n@param Trajectory                     Input trajectory range\n@param PredictionColor        Input prediction color to interpolate sample drawing towards\n@param HistoryColor           Input historical color to interpolate sample drawing towards\n@param ArrowScale                     Input sample velocity draw scale\n@param ArrowSize                      Input sample arrow draw size\n@param ArrowThickness         Input sample arrow draw thickness\n@param bDrawText                      Input include drawing of per-sample trajectory information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary, nullptr, "DebugDrawTrajectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::MotionTrajectoryBlueprintLibrary_eventDebugDrawTrajectory_Parms), Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics
	{
		struct MotionTrajectoryBlueprintLibrary_eventFlattenTrajectory2D_Parms
		{
			FTrajectorySampleRange Trajectory;
			FTrajectorySampleRange ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventFlattenTrajectory2D_Parms, Trajectory), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(nullptr, 0) }; // 4181307663
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventFlattenTrajectory2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(nullptr, 0) }; // 4181307663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::NewProp_Trajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "/**\n\x09* Removes the Z axis motion contribution from a trajectory range\n\x09*\n\x09* @param Trajectory\x09\x09\x09Input trajectory range\n\x09* @param PreserveSpeed\x09\x09Input bool determining if velocity magnitude is preserved (true) or projected (false)\n\x09*\n\x09* @return\x09\x09\x09\x09\x09Z axis flattened, modified trajectory range\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
		{ "ToolTip", "Removes the Z axis motion contribution from a trajectory range\n\n@param Trajectory                     Input trajectory range\n@param PreserveSpeed          Input bool determining if velocity magnitude is preserved (true) or projected (false)\n\n@return                                       Z axis flattened, modified trajectory range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary, nullptr, "FlattenTrajectory2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::MotionTrajectoryBlueprintLibrary_eventFlattenTrajectory2D_Parms), Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics
	{
		struct MotionTrajectoryBlueprintLibrary_eventIsConstantSpeedTrajectory_Parms
		{
			FTrajectorySampleRange Trajectory;
			float Speed;
			float Tolerance;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trajectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_Trajectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventIsConstantSpeedTrajectory_Parms, Trajectory), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_Trajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_Trajectory_MetaData)) }; // 4181307663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventIsConstantSpeedTrajectory_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventIsConstantSpeedTrajectory_Parms, Tolerance), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrajectoryBlueprintLibrary_eventIsConstantSpeedTrajectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrajectoryBlueprintLibrary_eventIsConstantSpeedTrajectory_Parms), &Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_Trajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "/** \n\x09 * Returns true if the furthest future sample, at the end of the trajectory, and the present sample, have a velocity\n\x09 * magnitude that is within Tolerance of Speed.\n\x09 * \n\x09 * @param Trajectory\x09Trajectory being evaluated.\n\x09 * @param Speed\x09\x09\x09Speed that must be matched at present and future for this function to return true\n\x09 * @param Tolerance\x09\x09How much the trajectory speed can deviate from Speed\n\x09 * \n\x09 * @return True if the trajectory is at the desired speed.\n\x09 */" },
		{ "CPP_Default_Speed", "0.000000" },
		{ "CPP_Default_Tolerance", "0.001000" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
		{ "ToolTip", "Returns true if the furthest future sample, at the end of the trajectory, and the present sample, have a velocity\nmagnitude that is within Tolerance of Speed.\n\n@param Trajectory    Trajectory being evaluated.\n@param Speed                 Speed that must be matched at present and future for this function to return true\n@param Tolerance             How much the trajectory speed can deviate from Speed\n\n@return True if the trajectory is at the desired speed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary, nullptr, "IsConstantSpeedTrajectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::MotionTrajectoryBlueprintLibrary_eventIsConstantSpeedTrajectory_Parms), Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics
	{
		struct MotionTrajectoryBlueprintLibrary_eventIsStartingTrajectory_Parms
		{
			FTrajectorySampleRange Trajectory;
			float MoveMinSpeed;
			float IdleMaxSpeed;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trajectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveMinSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleMaxSpeed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_Trajectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventIsStartingTrajectory_Parms, Trajectory), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_Trajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_Trajectory_MetaData)) }; // 4181307663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_MoveMinSpeed = { "MoveMinSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventIsStartingTrajectory_Parms, MoveMinSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_IdleMaxSpeed = { "IdleMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventIsStartingTrajectory_Parms, IdleMaxSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrajectoryBlueprintLibrary_eventIsStartingTrajectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrajectoryBlueprintLibrary_eventIsStartingTrajectory_Parms), &Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_Trajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_MoveMinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_IdleMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "/**\n\x09 * Returns true if the furthest past sample, at the beginning of the trajectory, has velocity magnitude below \n\x09 * IdleMaxSpeed and present speed above MoveMinSpeed.\n\x09 * \n\x09 * @param Trajectory\x09Trajectory being evaluated.\n\x09 * @param MoveMinSpeed\x09Minimum current speed required for this function to return true.\n\x09 * @param IdleMaxSpeed\x09Maximum speed at the furthest past sample for this function to return true.\n\x09 * \n\x09 * @return True if a start is detected; false otherwise.\n\x09 */" },
		{ "CPP_Default_IdleMaxSpeed", "0.000000" },
		{ "CPP_Default_MoveMinSpeed", "1.000000" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
		{ "ToolTip", "Returns true if the furthest past sample, at the beginning of the trajectory, has velocity magnitude below\nIdleMaxSpeed and present speed above MoveMinSpeed.\n\n@param Trajectory    Trajectory being evaluated.\n@param MoveMinSpeed  Minimum current speed required for this function to return true.\n@param IdleMaxSpeed  Maximum speed at the furthest past sample for this function to return true.\n\n@return True if a start is detected; false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary, nullptr, "IsStartingTrajectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::MotionTrajectoryBlueprintLibrary_eventIsStartingTrajectory_Parms), Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics
	{
		struct MotionTrajectoryBlueprintLibrary_eventIsStoppingTrajectory_Parms
		{
			FTrajectorySampleRange Trajectory;
			float MoveMinSpeed;
			float IdleMaxSpeed;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trajectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveMinSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdleMaxSpeed;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_Trajectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventIsStoppingTrajectory_Parms, Trajectory), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_Trajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_Trajectory_MetaData)) }; // 4181307663
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_MoveMinSpeed = { "MoveMinSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventIsStoppingTrajectory_Parms, MoveMinSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_IdleMaxSpeed = { "IdleMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventIsStoppingTrajectory_Parms, IdleMaxSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MotionTrajectoryBlueprintLibrary_eventIsStoppingTrajectory_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrajectoryBlueprintLibrary_eventIsStoppingTrajectory_Parms), &Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_Trajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_MoveMinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_IdleMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Returns true if the furthest future sample, at the end of the trajectory, has velocity magnitude below \n// IdleMaxSpeed and present speed above MoveMinSpeed.\n" },
		{ "CPP_Default_IdleMaxSpeed", "0.000000" },
		{ "CPP_Default_MoveMinSpeed", "1.000000" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
		{ "ToolTip", "Returns true if the furthest future sample, at the end of the trajectory, has velocity magnitude below\nIdleMaxSpeed and present speed above MoveMinSpeed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary, nullptr, "IsStoppingTrajectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::MotionTrajectoryBlueprintLibrary_eventIsStoppingTrajectory_Parms), Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics
	{
		struct MotionTrajectoryBlueprintLibrary_eventMakeTrajectoryRelativeToComponent_Parms
		{
			FTrajectorySampleRange ActorTrajectory;
			const USceneComponent* Component;
			FTrajectorySampleRange ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTrajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::NewProp_ActorTrajectory = { "ActorTrajectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventMakeTrajectoryRelativeToComponent_Parms, ActorTrajectory), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(nullptr, 0) }; // 4181307663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventMakeTrajectoryRelativeToComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventMakeTrajectoryRelativeToComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(nullptr, 0) }; // 4181307663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::NewProp_ActorTrajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "/**\n\x09* Rotates the trajectory to make it relative to the component specified as a parameter\n\x09*\n\x09* @param Trajectory\x09\x09\x09Input trajectory range\n\x09* @param Component\x09\x09\x09""Component whose transform will be the new trajectory reference frame\n\x09*\n\x09* @return\x09\x09\x09\x09\x09Trajectory relative to Component\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
		{ "ToolTip", "Rotates the trajectory to make it relative to the component specified as a parameter\n\n@param Trajectory                     Input trajectory range\n@param Component                      Component whose transform will be the new trajectory reference frame\n\n@return                                       Trajectory relative to Component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary, nullptr, "MakeTrajectoryRelativeToComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::MotionTrajectoryBlueprintLibrary_eventMakeTrajectoryRelativeToComponent_Parms), Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics
	{
		struct MotionTrajectoryBlueprintLibrary_eventRotateTrajectory_Parms
		{
			FTrajectorySampleRange Trajectory;
			FQuat Rotation;
			FTrajectorySampleRange ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Trajectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::NewProp_Trajectory = { "Trajectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventRotateTrajectory_Parms, Trajectory), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(nullptr, 0) }; // 4181307663
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventRotateTrajectory_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryBlueprintLibrary_eventRotateTrajectory_Parms, ReturnValue), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(nullptr, 0) }; // 4181307663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::NewProp_Trajectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "/**\n\x09* Rotates the trajectory\n\x09*\n\x09* @param Trajectory\x09\x09\x09Input trajectory range\n\x09* @param Rotation\x09\x09\x09Rotation to be applied to all trajectory samples\n\x09*\n\x09* @return\x09\x09\x09\x09\x09Rotated trajectory\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
		{ "ToolTip", "Rotates the trajectory\n\n@param Trajectory                     Input trajectory range\n@param Rotation                       Rotation to be applied to all trajectory samples\n\n@return                                       Rotated trajectory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary, nullptr, "RotateTrajectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::MotionTrajectoryBlueprintLibrary_eventRotateTrajectory_Parms), Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionTrajectoryBlueprintLibrary);
	UClass* Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_NoRegister()
	{
		return UMotionTrajectoryBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionTrajectory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_DebugDrawTrajectory, "DebugDrawTrajectory" }, // 1283568881
		{ &Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_FlattenTrajectory2D, "FlattenTrajectory2D" }, // 238526708
		{ &Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsConstantSpeedTrajectory, "IsConstantSpeedTrajectory" }, // 750346956
		{ &Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStartingTrajectory, "IsStartingTrajectory" }, // 4288829720
		{ &Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_IsStoppingTrajectory, "IsStoppingTrajectory" }, // 2917966516
		{ &Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_MakeTrajectoryRelativeToComponent, "MakeTrajectoryRelativeToComponent" }, // 2163540144
		{ &Z_Construct_UFunction_UMotionTrajectoryBlueprintLibrary_RotateTrajectory, "RotateTrajectory" }, // 2421704978
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Category", "Motion Trajectory" },
		{ "IncludePath", "MotionTrajectoryLibrary.h" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionTrajectoryBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics::ClassParams = {
		&UMotionTrajectoryBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UMotionTrajectoryBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionTrajectoryBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionTrajectoryBlueprintLibrary.OuterSingleton;
	}
	template<> MOTIONTRAJECTORY_API UClass* StaticClass<UMotionTrajectoryBlueprintLibrary>()
	{
		return UMotionTrajectoryBlueprintLibrary::StaticClass();
	}
	UMotionTrajectoryBlueprintLibrary::UMotionTrajectoryBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionTrajectoryBlueprintLibrary);
	UMotionTrajectoryBlueprintLibrary::~UMotionTrajectoryBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_Statics::ScriptStructInfo[] = {
		{ FTrajectoryDirectionClamp::StaticStruct, Z_Construct_UScriptStruct_FTrajectoryDirectionClamp_Statics::NewStructOps, TEXT("TrajectoryDirectionClamp"), &Z_Registration_Info_UScriptStruct_TrajectoryDirectionClamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrajectoryDirectionClamp), 1782650171U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionTrajectoryBlueprintLibrary, UMotionTrajectoryBlueprintLibrary::StaticClass, TEXT("UMotionTrajectoryBlueprintLibrary"), &Z_Registration_Info_UClass_UMotionTrajectoryBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionTrajectoryBlueprintLibrary), 2750842022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_1018260598(TEXT("/Script/MotionTrajectory"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
