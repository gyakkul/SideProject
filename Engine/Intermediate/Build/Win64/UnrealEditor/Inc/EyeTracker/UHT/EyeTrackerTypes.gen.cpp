// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EyeTrackerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEyeTrackerTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EYETRACKER_API UEnum* Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus();
	EYETRACKER_API UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerGazeData();
	EYETRACKER_API UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData();
	UPackage* Z_Construct_UPackage__Script_EyeTracker();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EyeTrackerGazeData;
class UScriptStruct* FEyeTrackerGazeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EyeTrackerGazeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EyeTrackerGazeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEyeTrackerGazeData, (UObject*)Z_Construct_UPackage__Script_EyeTracker(), TEXT("EyeTrackerGazeData"));
	}
	return Z_Registration_Info_UScriptStruct_EyeTrackerGazeData.OuterSingleton;
}
template<> EYETRACKER_API UScriptStruct* StaticStruct<FEyeTrackerGazeData>()
{
	return FEyeTrackerGazeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GazeOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GazeOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GazeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GazeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixationPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixationPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfidenceValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfidenceValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftEyeBlink_MetaData[];
#endif
		static void NewProp_bIsLeftEyeBlink_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftEyeBlink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRightEyeBlink_MetaData[];
#endif
		static void NewProp_bIsRightEyeBlink_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightEyeBlink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftPupilDiameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftPupilDiameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightPupilDiameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightPupilDiameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Represents a unified gaze ray that incorporates both eyes.\n */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Represents a unified gaze ray that incorporates both eyes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEyeTrackerGazeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeOrigin_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "Comment", "/** Origin of the unified gaze ray. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Origin of the unified gaze ray." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeOrigin = { "GazeOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerGazeData, GazeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeDirection_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "Comment", "/** Forward direction of the unified gaze ray. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Forward direction of the unified gaze ray." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeDirection = { "GazeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerGazeData, GazeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_FixationPoint_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "Comment", "/** Location that the eyes converge. This is the 3d point where the tracked viewer is looking. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Location that the eyes converge. This is the 3d point where the tracked viewer is looking." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_FixationPoint = { "FixationPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerGazeData, FixationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_FixationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_FixationPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_ConfidenceValue_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "Comment", "/** Value [0..1] that represents confidence in the gaze ray data above. Stable, reliably tracked eyes will be at or near 1. Fast-moving or unreliably tracked eyes will be at or near 0. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Value [0..1] that represents confidence in the gaze ray data above. Stable, reliably tracked eyes will be at or near 1. Fast-moving or unreliably tracked eyes will be at or near 0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_ConfidenceValue = { "ConfidenceValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerGazeData, ConfidenceValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_ConfidenceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_ConfidenceValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsLeftEyeBlink_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "Comment", "/** Left eye blink data. True if the eye is close. False if the eye is open.*/" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Left eye blink data. True if the eye is close. False if the eye is open." },
	};
#endif
	void Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsLeftEyeBlink_SetBit(void* Obj)
	{
		((FEyeTrackerGazeData*)Obj)->bIsLeftEyeBlink = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsLeftEyeBlink = { "bIsLeftEyeBlink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEyeTrackerGazeData), &Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsLeftEyeBlink_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsLeftEyeBlink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsLeftEyeBlink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsRightEyeBlink_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "Comment", "/** Right eye blink data. True if the eye is close. False if the eye is open. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Right eye blink data. True if the eye is close. False if the eye is open." },
	};
#endif
	void Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsRightEyeBlink_SetBit(void* Obj)
	{
		((FEyeTrackerGazeData*)Obj)->bIsRightEyeBlink = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsRightEyeBlink = { "bIsRightEyeBlink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEyeTrackerGazeData), &Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsRightEyeBlink_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsRightEyeBlink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsRightEyeBlink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_LeftPupilDiameter_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "Comment", "/** Diameter of the left pupil. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Diameter of the left pupil." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_LeftPupilDiameter = { "LeftPupilDiameter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerGazeData, LeftPupilDiameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_LeftPupilDiameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_LeftPupilDiameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_RightPupilDiameter_MetaData[] = {
		{ "Category", "Gaze Data" },
		{ "Comment", "/** Diameter of the right pupil */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Diameter of the right pupil" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_RightPupilDiameter = { "RightPupilDiameter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerGazeData, RightPupilDiameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_RightPupilDiameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_RightPupilDiameter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_GazeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_FixationPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_ConfidenceValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsLeftEyeBlink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_bIsRightEyeBlink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_LeftPupilDiameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewProp_RightPupilDiameter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EyeTracker,
		nullptr,
		&NewStructOps,
		"EyeTrackerGazeData",
		sizeof(FEyeTrackerGazeData),
		alignof(FEyeTrackerGazeData),
		Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerGazeData()
	{
		if (!Z_Registration_Info_UScriptStruct_EyeTrackerGazeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EyeTrackerGazeData.InnerSingleton, Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EyeTrackerGazeData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EyeTrackerStereoGazeData;
class UScriptStruct* FEyeTrackerStereoGazeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EyeTrackerStereoGazeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EyeTrackerStereoGazeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData, (UObject*)Z_Construct_UPackage__Script_EyeTracker(), TEXT("EyeTrackerStereoGazeData"));
	}
	return Z_Registration_Info_UScriptStruct_EyeTrackerStereoGazeData.OuterSingleton;
}
template<> EYETRACKER_API UScriptStruct* StaticStruct<FEyeTrackerStereoGazeData>()
{
	return FEyeTrackerStereoGazeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftEyeOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftEyeOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftEyeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftEyeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightEyeOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightEyeOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightEyeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightEyeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixationPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixationPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfidenceValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConfidenceValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Stereo gaze data that contains information for each eye individually.\n * This may not be available with all devices.\n */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Stereo gaze data that contains information for each eye individually.\nThis may not be available with all devices." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEyeTrackerStereoGazeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeOrigin_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "Comment", "/** Origin of the left eye's gaze ray. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Origin of the left eye's gaze ray." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeOrigin = { "LeftEyeOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerStereoGazeData, LeftEyeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeDirection_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "Comment", "/** Forward direction of the left eye's gaze ray. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Forward direction of the left eye's gaze ray." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeDirection = { "LeftEyeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerStereoGazeData, LeftEyeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeOrigin_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "Comment", "/** Origin of the right eye's gaze ray. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Origin of the right eye's gaze ray." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeOrigin = { "RightEyeOrigin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerStereoGazeData, RightEyeOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeDirection_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "Comment", "/** Forward direction of the right eye's gaze ray. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Forward direction of the right eye's gaze ray." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeDirection = { "RightEyeDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerStereoGazeData, RightEyeDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_FixationPoint_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "Comment", "/** Location that the eyes converge. This is the 3d point where the tracked viewer is looking. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Location that the eyes converge. This is the 3d point where the tracked viewer is looking." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_FixationPoint = { "FixationPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerStereoGazeData, FixationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_FixationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_FixationPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_ConfidenceValue_MetaData[] = {
		{ "Category", "Stereo Gaze Data" },
		{ "Comment", "/** Value [0..1] that represents confidence in the gaze ray data above. Stable, reliably tracked eyes will be at or near 1. Fast-moving or unreliably tracked eyes will be at or near 0. */" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "ToolTip", "Value [0..1] that represents confidence in the gaze ray data above. Stable, reliably tracked eyes will be at or near 1. Fast-moving or unreliably tracked eyes will be at or near 0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_ConfidenceValue = { "ConfidenceValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEyeTrackerStereoGazeData, ConfidenceValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_ConfidenceValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_ConfidenceValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_LeftEyeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_RightEyeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_FixationPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewProp_ConfidenceValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EyeTracker,
		nullptr,
		&NewStructOps,
		"EyeTrackerStereoGazeData",
		sizeof(FEyeTrackerStereoGazeData),
		alignof(FEyeTrackerStereoGazeData),
		Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData()
	{
		if (!Z_Registration_Info_UScriptStruct_EyeTrackerStereoGazeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EyeTrackerStereoGazeData.InnerSingleton, Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EyeTrackerStereoGazeData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEyeTrackerStatus;
	static UEnum* EEyeTrackerStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEyeTrackerStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEyeTrackerStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus, (UObject*)Z_Construct_UPackage__Script_EyeTracker(), TEXT("EEyeTrackerStatus"));
		}
		return Z_Registration_Info_UEnum_EEyeTrackerStatus.OuterSingleton;
	}
	template<> EYETRACKER_API UEnum* StaticEnum<EEyeTrackerStatus>()
	{
		return EEyeTrackerStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Statics::Enumerators[] = {
		{ "EEyeTrackerStatus::NotConnected", (int64)EEyeTrackerStatus::NotConnected },
		{ "EEyeTrackerStatus::NotTracking", (int64)EEyeTrackerStatus::NotTracking },
		{ "EEyeTrackerStatus::Tracking", (int64)EEyeTrackerStatus::Tracking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EyeTrackerTypes.h" },
		{ "NotConnected.Comment", "/** Eyetracking feature is not available (device not plugged in, etc) */" },
		{ "NotConnected.Name", "EEyeTrackerStatus::NotConnected" },
		{ "NotConnected.ToolTip", "Eyetracking feature is not available (device not plugged in, etc)" },
		{ "NotTracking.Comment", "/** Eyetracking is operating, but eyes are not being tracked */" },
		{ "NotTracking.Name", "EEyeTrackerStatus::NotTracking" },
		{ "NotTracking.ToolTip", "Eyetracking is operating, but eyes are not being tracked" },
		{ "Tracking.Comment", "/** Eyetracking is operating and eyes are being tracked */" },
		{ "Tracking.Name", "EEyeTrackerStatus::Tracking" },
		{ "Tracking.ToolTip", "Eyetracking is operating and eyes are being tracked" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EyeTracker,
		nullptr,
		"EEyeTrackerStatus",
		"EEyeTrackerStatus",
		Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus()
	{
		if (!Z_Registration_Info_UEnum_EEyeTrackerStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEyeTrackerStatus.InnerSingleton, Z_Construct_UEnum_EyeTracker_EEyeTrackerStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEyeTrackerStatus.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_Statics::EnumInfo[] = {
		{ EEyeTrackerStatus_StaticEnum, TEXT("EEyeTrackerStatus"), &Z_Registration_Info_UEnum_EEyeTrackerStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 790946409U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_Statics::ScriptStructInfo[] = {
		{ FEyeTrackerGazeData::StaticStruct, Z_Construct_UScriptStruct_FEyeTrackerGazeData_Statics::NewStructOps, TEXT("EyeTrackerGazeData"), &Z_Registration_Info_UScriptStruct_EyeTrackerGazeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEyeTrackerGazeData), 803340158U) },
		{ FEyeTrackerStereoGazeData::StaticStruct, Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_Statics::NewStructOps, TEXT("EyeTrackerStereoGazeData"), &Z_Registration_Info_UScriptStruct_EyeTrackerStereoGazeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEyeTrackerStereoGazeData), 411364009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_1782530780(TEXT("/Script/EyeTracker"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
