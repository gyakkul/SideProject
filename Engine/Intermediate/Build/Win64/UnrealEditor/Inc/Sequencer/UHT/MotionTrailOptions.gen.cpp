// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/MotionTrailOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionTrailOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SEQUENCER_API UClass* Z_Construct_UClass_UMotionTrailToolOptions();
	SEQUENCER_API UClass* Z_Construct_UClass_UMotionTrailToolOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	void UMotionTrailToolOptions::StaticRegisterNativesUMotionTrailToolOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionTrailToolOptions);
	UClass* Z_Construct_UClass_UMotionTrailToolOptions_NoRegister()
	{
		return UMotionTrailToolOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMotionTrailToolOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTrails_MetaData[];
#endif
		static void NewProp_bShowTrails_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTrails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrailColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFullTrail_MetaData[];
#endif
		static void NewProp_bShowFullTrail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFullTrail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TrailThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesBefore_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FramesBefore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesAfter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FramesAfter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvalsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EvalsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowKeys_MetaData[];
#endif
		static void NewProp_bShowKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFrameNumber_MetaData[];
#endif
		static void NewProp_bShowFrameNumber_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeySize_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_KeySize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowMarks_MetaData[];
#endif
		static void NewProp_bShowMarks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMarks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MarkColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkSize_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MarkSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockMarksToFrames_MetaData[];
#endif
		static void NewProp_bLockMarksToFrames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockMarksToFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsPerMark_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SecondsPerMark;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionTrailToolOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// TODO: option to make tick size proportional to distance from camera to get a sense of perspective and scale\n" },
		{ "IncludePath", "Tools/MotionTrailOptions.h" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
		{ "ToolTip", "TODO: option to make tick size proportional to distance from camera to get a sense of perspective and scale" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowTrails_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	void Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowTrails_SetBit(void* Obj)
	{
		((UMotionTrailToolOptions*)Obj)->bShowTrails = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowTrails = { "bShowTrails", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionTrailToolOptions), &Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowTrails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowTrails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowTrails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_TrailColor_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_TrailColor = { "TrailColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailToolOptions, TrailColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_TrailColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_TrailColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFullTrail_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	void Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFullTrail_SetBit(void* Obj)
	{
		((UMotionTrailToolOptions*)Obj)->bShowFullTrail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFullTrail = { "bShowFullTrail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionTrailToolOptions), &Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFullTrail_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFullTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFullTrail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_TrailThickness_MetaData[] = {
		{ "Category", "Trail" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_TrailThickness = { "TrailThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailToolOptions, TrailThickness), METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_TrailThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_TrailThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_FramesBefore_MetaData[] = {
		{ "Category", "Trail" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bShowFullTrail" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_FramesBefore = { "FramesBefore", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailToolOptions, FramesBefore), METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_FramesBefore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_FramesBefore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_FramesAfter_MetaData[] = {
		{ "Category", "Trail" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bShowFullTrail" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_FramesAfter = { "FramesAfter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailToolOptions, FramesAfter), METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_FramesAfter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_FramesAfter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_EvalsPerFrame_MetaData[] = {
		{ "Category", "Trail" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_EvalsPerFrame = { "EvalsPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailToolOptions, EvalsPerFrame), METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_EvalsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_EvalsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowKeys_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	void Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowKeys_SetBit(void* Obj)
	{
		((UMotionTrailToolOptions*)Obj)->bShowKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowKeys = { "bShowKeys", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionTrailToolOptions), &Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFrameNumber_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	void Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFrameNumber_SetBit(void* Obj)
	{
		((UMotionTrailToolOptions*)Obj)->bShowFrameNumber = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFrameNumber = { "bShowFrameNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionTrailToolOptions), &Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFrameNumber_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFrameNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_KeyColor_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_KeyColor = { "KeyColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailToolOptions, KeyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_KeyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_KeyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_KeySize_MetaData[] = {
		{ "Category", "Keys" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_KeySize = { "KeySize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailToolOptions, KeySize), METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_KeySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_KeySize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowMarks_MetaData[] = {
		{ "Category", "Marks" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	void Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowMarks_SetBit(void* Obj)
	{
		((UMotionTrailToolOptions*)Obj)->bShowMarks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowMarks = { "bShowMarks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionTrailToolOptions), &Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowMarks_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowMarks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowMarks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_MarkColor_MetaData[] = {
		{ "Category", "Marks" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_MarkColor = { "MarkColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailToolOptions, MarkColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_MarkColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_MarkColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_MarkSize_MetaData[] = {
		{ "Category", "Marks" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_MarkSize = { "MarkSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailToolOptions, MarkSize), METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_MarkSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_MarkSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bLockMarksToFrames_MetaData[] = {
		{ "Category", "Marks" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	void Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bLockMarksToFrames_SetBit(void* Obj)
	{
		((UMotionTrailToolOptions*)Obj)->bLockMarksToFrames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bLockMarksToFrames = { "bLockMarksToFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionTrailToolOptions), &Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bLockMarksToFrames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bLockMarksToFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bLockMarksToFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_SecondsPerMark_MetaData[] = {
		{ "Category", "Marks" },
		{ "ClampMin", "0.01" },
		{ "EditCondition", "!bLockMarksToFrames" },
		{ "ModuleRelativePath", "Public/Tools/MotionTrailOptions.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_SecondsPerMark = { "SecondsPerMark", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrailToolOptions, SecondsPerMark), METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_SecondsPerMark_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_SecondsPerMark_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionTrailToolOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowTrails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_TrailColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFullTrail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_TrailThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_FramesBefore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_FramesAfter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_EvalsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_KeyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_KeySize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bShowMarks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_MarkColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_MarkSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_bLockMarksToFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrailToolOptions_Statics::NewProp_SecondsPerMark,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionTrailToolOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionTrailToolOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionTrailToolOptions_Statics::ClassParams = {
		&UMotionTrailToolOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMotionTrailToolOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionTrailToolOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrailToolOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionTrailToolOptions()
	{
		if (!Z_Registration_Info_UClass_UMotionTrailToolOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionTrailToolOptions.OuterSingleton, Z_Construct_UClass_UMotionTrailToolOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionTrailToolOptions.OuterSingleton;
	}
	template<> SEQUENCER_API UClass* StaticClass<UMotionTrailToolOptions>()
	{
		return UMotionTrailToolOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionTrailToolOptions);
	UMotionTrailToolOptions::~UMotionTrailToolOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionTrailToolOptions, UMotionTrailToolOptions::StaticClass, TEXT("UMotionTrailToolOptions"), &Z_Registration_Info_UClass_UMotionTrailToolOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionTrailToolOptions), 58615496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_3055902747(TEXT("/Script/Sequencer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_Tools_MotionTrailOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
