// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCacheComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackRenderData();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrackRenderData;
class UScriptStruct* FTrackRenderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrackRenderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrackRenderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackRenderData, (UObject*)Z_Construct_UPackage__Script_GeometryCache(), TEXT("TrackRenderData"));
	}
	return Z_Registration_Info_UScriptStruct_TrackRenderData.OuterSingleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FTrackRenderData>()
{
	return FTrackRenderData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrackRenderData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackRenderData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores the RenderData for each individual track */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Stores the RenderData for each individual track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackRenderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackRenderData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackRenderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
		nullptr,
		&NewStructOps,
		"TrackRenderData",
		sizeof(FTrackRenderData),
		alignof(FTrackRenderData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackRenderData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackRenderData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackRenderData()
	{
		if (!Z_Registration_Info_UScriptStruct_TrackRenderData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrackRenderData.InnerSingleton, Z_Construct_UScriptStruct_FTrackRenderData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrackRenderData.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execTickAtThisTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_GET_UBOOL(Z_Param_bInIsRunning);
		P_GET_UBOOL(Z_Param_bInBackwards);
		P_GET_UBOOL(Z_Param_bInIsLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickAtThisTime(Z_Param_Time,Z_Param_bInIsRunning,Z_Param_bInBackwards,Z_Param_bInIsLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetWireframeOverrideColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetWireframeOverrideColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetWireframeOverrideColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWireframeOverrideColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetOverrideWireframeColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetOverrideWireframeColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetOverrideWireframeColor)
	{
		P_GET_UBOOL(Z_Param_bOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverrideWireframeColor(Z_Param_bOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetNumberOfFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetPlaybackDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetAnimationTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimationTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetStartTimeOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewStartTimeOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartTimeOffset(Z_Param_NewStartTimeOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetStartTimeOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStartTimeOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetGeometryCache)
	{
		P_GET_OBJECT(UGeometryCache,Z_Param_NewGeomCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGeometryCache(Z_Param_NewGeomCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetMotionVectorScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewMotionVectorScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMotionVectorScale(Z_Param_NewMotionVectorScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetMotionVectorScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMotionVectorScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetPlaybackSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPlaybackSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackSpeed(Z_Param_NewPlaybackSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execGetPlaybackSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPlaybackSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetExtrapolateFrames)
	{
		P_GET_UBOOL(Z_Param_bNewExtrapolating);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExtrapolateFrames(Z_Param_bNewExtrapolating);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execIsExtrapolatingFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsExtrapolatingFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execSetLooping)
	{
		P_GET_UBOOL(Z_Param_bNewLooping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLooping(Z_Param_bNewLooping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execIsLooping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLooping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execIsPlayingReversed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingReversed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execIsPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execPlayReversedFromEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReversedFromEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execPlayReversed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayReversed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execPlayFromStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayFromStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryCacheComponent::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	void UGeometryCacheComponent::StaticRegisterNativesUGeometryCacheComponent()
	{
		UClass* Class = UGeometryCacheComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationTime", &UGeometryCacheComponent::execGetAnimationTime },
			{ "GetDuration", &UGeometryCacheComponent::execGetDuration },
			{ "GetMotionVectorScale", &UGeometryCacheComponent::execGetMotionVectorScale },
			{ "GetNumberOfFrames", &UGeometryCacheComponent::execGetNumberOfFrames },
			{ "GetOverrideWireframeColor", &UGeometryCacheComponent::execGetOverrideWireframeColor },
			{ "GetPlaybackDirection", &UGeometryCacheComponent::execGetPlaybackDirection },
			{ "GetPlaybackSpeed", &UGeometryCacheComponent::execGetPlaybackSpeed },
			{ "GetStartTimeOffset", &UGeometryCacheComponent::execGetStartTimeOffset },
			{ "GetWireframeOverrideColor", &UGeometryCacheComponent::execGetWireframeOverrideColor },
			{ "IsExtrapolatingFrames", &UGeometryCacheComponent::execIsExtrapolatingFrames },
			{ "IsLooping", &UGeometryCacheComponent::execIsLooping },
			{ "IsPlaying", &UGeometryCacheComponent::execIsPlaying },
			{ "IsPlayingReversed", &UGeometryCacheComponent::execIsPlayingReversed },
			{ "Pause", &UGeometryCacheComponent::execPause },
			{ "Play", &UGeometryCacheComponent::execPlay },
			{ "PlayFromStart", &UGeometryCacheComponent::execPlayFromStart },
			{ "PlayReversed", &UGeometryCacheComponent::execPlayReversed },
			{ "PlayReversedFromEnd", &UGeometryCacheComponent::execPlayReversedFromEnd },
			{ "SetExtrapolateFrames", &UGeometryCacheComponent::execSetExtrapolateFrames },
			{ "SetGeometryCache", &UGeometryCacheComponent::execSetGeometryCache },
			{ "SetLooping", &UGeometryCacheComponent::execSetLooping },
			{ "SetMotionVectorScale", &UGeometryCacheComponent::execSetMotionVectorScale },
			{ "SetOverrideWireframeColor", &UGeometryCacheComponent::execSetOverrideWireframeColor },
			{ "SetPlaybackSpeed", &UGeometryCacheComponent::execSetPlaybackSpeed },
			{ "SetStartTimeOffset", &UGeometryCacheComponent::execSetStartTimeOffset },
			{ "SetWireframeOverrideColor", &UGeometryCacheComponent::execSetWireframeOverrideColor },
			{ "Stop", &UGeometryCacheComponent::execStop },
			{ "TickAtThisTime", &UGeometryCacheComponent::execTickAtThisTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics
	{
		struct GeometryCacheComponent_eventGetAnimationTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventGetAnimationTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set the current animation time for GeometryCache. Includes the influence of elapsed time and SetStartTimeOffset */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set the current animation time for GeometryCache. Includes the influence of elapsed time and SetStartTimeOffset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetAnimationTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::GeometryCacheComponent_eventGetAnimationTime_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics
	{
		struct GeometryCacheComponent_eventGetDuration_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get the duration of the playback */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get the duration of the playback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::GeometryCacheComponent_eventGetDuration_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics
	{
		struct GeometryCacheComponent_eventGetMotionVectorScale_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventGetMotionVectorScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get the motion vector scale. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get the motion vector scale." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetMotionVectorScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::GeometryCacheComponent_eventGetMotionVectorScale_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics
	{
		struct GeometryCacheComponent_eventGetNumberOfFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventGetNumberOfFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get the number of frames */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get the number of frames" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetNumberOfFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::GeometryCacheComponent_eventGetNumberOfFrames_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics
	{
		struct GeometryCacheComponent_eventGetOverrideWireframeColor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventGetOverrideWireframeColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventGetOverrideWireframeColor_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Check whether we are overriding the wireframe color or not. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Check whether we are overriding the wireframe color or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetOverrideWireframeColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::GeometryCacheComponent_eventGetOverrideWireframeColor_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics
	{
		struct GeometryCacheComponent_eventGetPlaybackDirection_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventGetPlaybackDirection_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set the current animation time for GeometryCache. Includes the influence of elapsed time and SetStartTimeOffset */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set the current animation time for GeometryCache. Includes the influence of elapsed time and SetStartTimeOffset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetPlaybackDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::GeometryCacheComponent_eventGetPlaybackDirection_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics
	{
		struct GeometryCacheComponent_eventGetPlaybackSpeed_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventGetPlaybackSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get current playback speed for GeometryCache. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get current playback speed for GeometryCache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetPlaybackSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::GeometryCacheComponent_eventGetPlaybackSpeed_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics
	{
		struct GeometryCacheComponent_eventGetStartTimeOffset_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventGetStartTimeOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get current start time offset for GeometryCache. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get current start time offset for GeometryCache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetStartTimeOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::GeometryCacheComponent_eventGetStartTimeOffset_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics
	{
		struct GeometryCacheComponent_eventGetWireframeOverrideColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventGetWireframeOverrideColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get the wireframe override color, used when overriding the wireframe color is enabled. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get the wireframe override color, used when overriding the wireframe color is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "GetWireframeOverrideColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::GeometryCacheComponent_eventGetWireframeOverrideColor_Parms), Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics
	{
		struct GeometryCacheComponent_eventIsExtrapolatingFrames_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventIsExtrapolatingFrames_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventIsExtrapolatingFrames_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get whether this GeometryCache is extrapolating frames. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get whether this GeometryCache is extrapolating frames." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "IsExtrapolatingFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::GeometryCacheComponent_eventIsExtrapolatingFrames_Parms), Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics
	{
		struct GeometryCacheComponent_eventIsLooping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventIsLooping_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get whether this GeometryCache is looping or not. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get whether this GeometryCache is looping or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "IsLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::GeometryCacheComponent_eventIsLooping_Parms), Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_IsLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics
	{
		struct GeometryCacheComponent_eventIsPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get whether this GeometryCache is playing or not. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get whether this GeometryCache is playing or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "IsPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::GeometryCacheComponent_eventIsPlaying_Parms), Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics
	{
		struct GeometryCacheComponent_eventIsPlayingReversed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventIsPlayingReversed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventIsPlayingReversed_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Get whether this GeometryCache is playing in reverse or not. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Get whether this GeometryCache is playing in reverse or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "IsPlayingReversed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::GeometryCacheComponent_eventIsPlayingReversed_Parms), Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Pause playback of GeometryCache */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Pause playback of GeometryCache" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Start playback of GeometryCache */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Start playback of GeometryCache" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Start playback of GeometryCache from the start */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Start playback of GeometryCache from the start" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "PlayFromStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Start playback of GeometryCache in reverse*/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Start playback of GeometryCache in reverse" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "PlayReversed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Start playback of GeometryCache from the end and play in reverse */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Start playback of GeometryCache from the end and play in reverse" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "PlayReversedFromEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics
	{
		struct GeometryCacheComponent_eventSetExtrapolateFrames_Parms
		{
			bool bNewExtrapolating;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewExtrapolating_MetaData[];
#endif
		static void NewProp_bNewExtrapolating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewExtrapolating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::NewProp_bNewExtrapolating_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::NewProp_bNewExtrapolating_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventSetExtrapolateFrames_Parms*)Obj)->bNewExtrapolating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::NewProp_bNewExtrapolating = { "bNewExtrapolating", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventSetExtrapolateFrames_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::NewProp_bNewExtrapolating_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::NewProp_bNewExtrapolating_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::NewProp_bNewExtrapolating_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::NewProp_bNewExtrapolating,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set whether this GeometryCache is extrapolating frames. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set whether this GeometryCache is extrapolating frames." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetExtrapolateFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::GeometryCacheComponent_eventSetExtrapolateFrames_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics
	{
		struct GeometryCacheComponent_eventSetGeometryCache_Parms
		{
			UGeometryCache* NewGeomCache;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGeomCache;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_NewGeomCache = { "NewGeomCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventSetGeometryCache_Parms, NewGeomCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventSetGeometryCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventSetGeometryCache_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_NewGeomCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Change the Geometry Cache used by this instance. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Change the Geometry Cache used by this instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetGeometryCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::GeometryCacheComponent_eventSetGeometryCache_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics
	{
		struct GeometryCacheComponent_eventSetLooping_Parms
		{
			bool bNewLooping;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewLooping_MetaData[];
#endif
		static void NewProp_bNewLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventSetLooping_Parms*)Obj)->bNewLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping = { "bNewLooping", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventSetLooping_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::NewProp_bNewLooping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set whether this GeometryCache is looping or not. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set whether this GeometryCache is looping or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetLooping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::GeometryCacheComponent_eventSetLooping_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetLooping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetLooping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics
	{
		struct GeometryCacheComponent_eventSetMotionVectorScale_Parms
		{
			float NewMotionVectorScale;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMotionVectorScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMotionVectorScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::NewProp_NewMotionVectorScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::NewProp_NewMotionVectorScale = { "NewMotionVectorScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventSetMotionVectorScale_Parms, NewMotionVectorScale), METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::NewProp_NewMotionVectorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::NewProp_NewMotionVectorScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::NewProp_NewMotionVectorScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set new motion vector scale. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set new motion vector scale." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetMotionVectorScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::GeometryCacheComponent_eventSetMotionVectorScale_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics
	{
		struct GeometryCacheComponent_eventSetOverrideWireframeColor_Parms
		{
			bool bOverride;
		};
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventSetOverrideWireframeColor_Parms*)Obj)->bOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventSetOverrideWireframeColor_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::NewProp_bOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Override wireframe color? */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Override wireframe color?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetOverrideWireframeColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::GeometryCacheComponent_eventSetOverrideWireframeColor_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics
	{
		struct GeometryCacheComponent_eventSetPlaybackSpeed_Parms
		{
			float NewPlaybackSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPlaybackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPlaybackSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed = { "NewPlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventSetPlaybackSpeed_Parms, NewPlaybackSpeed), METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::NewProp_NewPlaybackSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set new playback speed for GeometryCache. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set new playback speed for GeometryCache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetPlaybackSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::GeometryCacheComponent_eventSetPlaybackSpeed_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics
	{
		struct GeometryCacheComponent_eventSetStartTimeOffset_Parms
		{
			float NewStartTimeOffset;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewStartTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStartTimeOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::NewProp_NewStartTimeOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::NewProp_NewStartTimeOffset = { "NewStartTimeOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventSetStartTimeOffset_Parms, NewStartTimeOffset), METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::NewProp_NewStartTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::NewProp_NewStartTimeOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::NewProp_NewStartTimeOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set current start time offset for GeometryCache. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set current start time offset for GeometryCache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetStartTimeOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::GeometryCacheComponent_eventSetStartTimeOffset_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics
	{
		struct GeometryCacheComponent_eventSetWireframeOverrideColor_Parms
		{
			FLinearColor Color;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventSetWireframeOverrideColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Set the color, used when overriding the wireframe color is enabled. */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Set the color, used when overriding the wireframe color is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "SetWireframeOverrideColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::GeometryCacheComponent_eventSetWireframeOverrideColor_Parms), Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Stop playback of GeometryCache */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Stop playback of GeometryCache" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics
	{
		struct GeometryCacheComponent_eventTickAtThisTime_Parms
		{
			float Time;
			bool bInIsRunning;
			bool bInBackwards;
			bool bInIsLooping;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
		static void NewProp_bInIsRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsRunning;
		static void NewProp_bInBackwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInBackwards;
		static void NewProp_bInIsLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryCacheComponent_eventTickAtThisTime_Parms, Time), METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_Time_MetaData)) };
	void Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsRunning_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventTickAtThisTime_Parms*)Obj)->bInIsRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsRunning = { "bInIsRunning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventTickAtThisTime_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsRunning_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInBackwards_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventTickAtThisTime_Parms*)Obj)->bInBackwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInBackwards = { "bInBackwards", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventTickAtThisTime_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInBackwards_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsLooping_SetBit(void* Obj)
	{
		((GeometryCacheComponent_eventTickAtThisTime_Parms*)Obj)->bInIsLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsLooping = { "bInIsLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryCacheComponent_eventTickAtThisTime_Parms), &Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInBackwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::NewProp_bInIsLooping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryCacheComponent, nullptr, "TickAtThisTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::GeometryCacheComponent_eventTickAtThisTime_Parms), Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCacheComponent);
	UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister()
	{
		return UGeometryCacheComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCacheComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRunning_MetaData[];
#endif
		static void NewProp_bRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExtrapolateFrames_MetaData[];
#endif
		static void NewProp_bExtrapolateFrames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtrapolateFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionVectorScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MotionVectorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTracks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManualTick_MetaData[];
#endif
		static void NewProp_bManualTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManualTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideWireframeColor_MetaData[];
#endif
		static void NewProp_bOverrideWireframeColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideWireframeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeOverrideColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeOverrideColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCacheComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryCacheComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetAnimationTime, "GetAnimationTime" }, // 115522261
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetDuration, "GetDuration" }, // 903278452
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetMotionVectorScale, "GetMotionVectorScale" }, // 695019406
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetNumberOfFrames, "GetNumberOfFrames" }, // 2198813948
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetOverrideWireframeColor, "GetOverrideWireframeColor" }, // 617295511
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackDirection, "GetPlaybackDirection" }, // 2710512327
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetPlaybackSpeed, "GetPlaybackSpeed" }, // 524973417
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetStartTimeOffset, "GetStartTimeOffset" }, // 2161253715
		{ &Z_Construct_UFunction_UGeometryCacheComponent_GetWireframeOverrideColor, "GetWireframeOverrideColor" }, // 4290514998
		{ &Z_Construct_UFunction_UGeometryCacheComponent_IsExtrapolatingFrames, "IsExtrapolatingFrames" }, // 159673010
		{ &Z_Construct_UFunction_UGeometryCacheComponent_IsLooping, "IsLooping" }, // 3015694830
		{ &Z_Construct_UFunction_UGeometryCacheComponent_IsPlaying, "IsPlaying" }, // 3534600558
		{ &Z_Construct_UFunction_UGeometryCacheComponent_IsPlayingReversed, "IsPlayingReversed" }, // 926691444
		{ &Z_Construct_UFunction_UGeometryCacheComponent_Pause, "Pause" }, // 891596400
		{ &Z_Construct_UFunction_UGeometryCacheComponent_Play, "Play" }, // 3843732693
		{ &Z_Construct_UFunction_UGeometryCacheComponent_PlayFromStart, "PlayFromStart" }, // 852834826
		{ &Z_Construct_UFunction_UGeometryCacheComponent_PlayReversed, "PlayReversed" }, // 3463547356
		{ &Z_Construct_UFunction_UGeometryCacheComponent_PlayReversedFromEnd, "PlayReversedFromEnd" }, // 3055503316
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetExtrapolateFrames, "SetExtrapolateFrames" }, // 615816732
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetGeometryCache, "SetGeometryCache" }, // 1134437214
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetLooping, "SetLooping" }, // 1498118534
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetMotionVectorScale, "SetMotionVectorScale" }, // 560029186
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetOverrideWireframeColor, "SetOverrideWireframeColor" }, // 1168198656
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 3875335517
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetStartTimeOffset, "SetStartTimeOffset" }, // 343135712
		{ &Z_Construct_UFunction_UGeometryCacheComponent_SetWireframeOverrideColor, "SetWireframeOverrideColor" }, // 4265212737
		{ &Z_Construct_UFunction_UGeometryCacheComponent_Stop, "Stop" }, // 4250189914
		{ &Z_Construct_UFunction_UGeometryCacheComponent_TickAtThisTime, "TickAtThisTime" }, // 280084014
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** GeometryCacheComponent, encapsulates a GeometryCache asset instance and implements functionality for rendering/and playback of GeometryCaches */" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "GeometryCacheComponent.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "GeometryCacheComponent, encapsulates a GeometryCache asset instance and implements functionality for rendering/and playback of GeometryCaches" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_GeometryCache_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Geometry Cache instance referenced by the component */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Geometry Cache instance referenced by the component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, GeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_GeometryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_GeometryCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_SetBit(void* Obj)
	{
		((UGeometryCacheComponent*)Obj)->bRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning = { "bRunning", nullptr, (EPropertyFlags)0x0020080200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCacheComponent), &Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((UGeometryCacheComponent*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0020080200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCacheComponent), &Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bExtrapolateFrames_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Enable frame extrapolation for sub-frame sampling of non-constant topologies with imported motion vectors */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Enable frame extrapolation for sub-frame sampling of non-constant topologies with imported motion vectors" },
	};
#endif
	void Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bExtrapolateFrames_SetBit(void* Obj)
	{
		((UGeometryCacheComponent*)Obj)->bExtrapolateFrames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bExtrapolateFrames = { "bExtrapolateFrames", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCacheComponent), &Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bExtrapolateFrames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bExtrapolateFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bExtrapolateFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_StartTimeOffset_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ClampMax", "14400.0" },
		{ "ClampMin", "-14400.0" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "UIMax", "14400.0" },
		{ "UIMin", "-14400.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_StartTimeOffset = { "StartTimeOffset", nullptr, (EPropertyFlags)0x0020080200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, StartTimeOffset), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_StartTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_StartTimeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_PlaybackSpeed_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ClampMax", "512.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0020080200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, PlaybackSpeed), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_PlaybackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_PlaybackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_MotionVectorScale_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scale factor to apply to the imported motion vectors */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Scale factor to apply to the imported motion vectors" },
		{ "UIMax", "100" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_MotionVectorScale = { "MotionVectorScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, MotionVectorScale), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_MotionVectorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_MotionVectorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_NumTracks_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_NumTracks = { "NumTracks", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, NumTracks), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_NumTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_NumTracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, ElapsedTime), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Duration of the animation (maximum time) */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Duration of the animation (maximum time)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, Duration), METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_SetBit(void* Obj)
	{
		((UGeometryCacheComponent*)Obj)->bManualTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick = { "bManualTick", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCacheComponent), &Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bOverrideWireframeColor_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Do we override the wireframe rendering color? */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "Do we override the wireframe rendering color?" },
	};
#endif
	void Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bOverrideWireframeColor_SetBit(void* Obj)
	{
		((UGeometryCacheComponent*)Obj)->bOverrideWireframeColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bOverrideWireframeColor = { "bOverrideWireframeColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGeometryCacheComponent), &Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bOverrideWireframeColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bOverrideWireframeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bOverrideWireframeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_WireframeOverrideColor_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The wireframe override color. */" },
		{ "EditCondition", "bOVerrideWireframeColor" },
		{ "ModuleRelativePath", "Classes/GeometryCacheComponent.h" },
		{ "ToolTip", "The wireframe override color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_WireframeOverrideColor = { "WireframeOverrideColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeometryCacheComponent, WireframeOverrideColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_WireframeOverrideColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_WireframeOverrideColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeometryCacheComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_GeometryCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bRunning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bExtrapolateFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_StartTimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_PlaybackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_MotionVectorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_NumTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_ElapsedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bManualTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_bOverrideWireframeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeometryCacheComponent_Statics::NewProp_WireframeOverrideColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCacheComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCacheComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCacheComponent_Statics::ClassParams = {
		&UGeometryCacheComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGeometryCacheComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCacheComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCacheComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCacheComponent()
	{
		if (!Z_Registration_Info_UClass_UGeometryCacheComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCacheComponent.OuterSingleton, Z_Construct_UClass_UGeometryCacheComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCacheComponent.OuterSingleton;
	}
	template<> GEOMETRYCACHE_API UClass* StaticClass<UGeometryCacheComponent>()
	{
		return UGeometryCacheComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCacheComponent);
	UGeometryCacheComponent::~UGeometryCacheComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_Statics::ScriptStructInfo[] = {
		{ FTrackRenderData::StaticStruct, Z_Construct_UScriptStruct_FTrackRenderData_Statics::NewStructOps, TEXT("TrackRenderData"), &Z_Registration_Info_UScriptStruct_TrackRenderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrackRenderData), 1472706832U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCacheComponent, UGeometryCacheComponent::StaticClass, TEXT("UGeometryCacheComponent"), &Z_Registration_Info_UClass_UGeometryCacheComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCacheComponent), 501494736U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_84301409(TEXT("/Script/GeometryCache"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_GeometryCacheComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
