// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraCalibrationCheckerboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraCalibrationCheckerboard() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ACameraCalibrationCheckerboard();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ACameraCalibrationCheckerboard_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCalibrationPointComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	DEFINE_FUNCTION(ACameraCalibrationCheckerboard::execRebuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rebuild();
		P_NATIVE_END;
	}
	void ACameraCalibrationCheckerboard::StaticRegisterNativesACameraCalibrationCheckerboard()
	{
		UClass* Class = ACameraCalibrationCheckerboard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Rebuild", &ACameraCalibrationCheckerboard::execRebuild },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACameraCalibrationCheckerboard_Rebuild_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraCalibrationCheckerboard_Rebuild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Rebuilds the instanced components that make up this checkerboard */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "Rebuilds the instanced components that make up this checkerboard" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraCalibrationCheckerboard_Rebuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraCalibrationCheckerboard, nullptr, "Rebuild", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraCalibrationCheckerboard_Rebuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraCalibrationCheckerboard_Rebuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraCalibrationCheckerboard_Rebuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraCalibrationCheckerboard_Rebuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraCalibrationCheckerboard);
	UClass* Z_Construct_UClass_ACameraCalibrationCheckerboard_NoRegister()
	{
		return ACameraCalibrationCheckerboard::StaticClass();
	}
	struct Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TopLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TopRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BottomLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BottomRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BottomRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCornerRows_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCornerRows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCornerCols_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCornerCols;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SquareSideLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SquareSideLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CubeMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OddCubeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OddCubeMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvenCubeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EvenCubeMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraCalibrationCheckerboard_Rebuild, "Rebuild" }, // 3577332657
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Dynamic checkerboad actor\n */" },
		{ "IncludePath", "CameraCalibrationCheckerboard.h" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "Dynamic checkerboad actor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Root_MetaData[] = {
		{ "Comment", "/** Root component, gives the Actor a transform */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "Root component, gives the Actor a transform" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_TopLeft_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** TopLeft calibration point */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "TopLeft calibration point" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_TopLeft = { "TopLeft", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, TopLeft), Z_Construct_UClass_UCalibrationPointComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_TopLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_TopLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_TopRight_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** TopRight calibration point */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "TopRight calibration point" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_TopRight = { "TopRight", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, TopRight), Z_Construct_UClass_UCalibrationPointComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_TopRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_TopRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_BottomLeft_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** BottomLeft calibration point */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "BottomLeft calibration point" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_BottomLeft = { "BottomLeft", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, BottomLeft), Z_Construct_UClass_UCalibrationPointComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_BottomLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_BottomLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_BottomRight_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** BottomRight calibration point */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "BottomRight calibration point" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_BottomRight = { "BottomRight", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, BottomRight), Z_Construct_UClass_UCalibrationPointComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_BottomRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_BottomRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Center calibration point */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "Center calibration point" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, Center), Z_Construct_UClass_UCalibrationPointComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_NumCornerRows_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Number of rows. It is one of the parameters cv::findChessboardCorners needs */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "Number of rows. It is one of the parameters cv::findChessboardCorners needs" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_NumCornerRows = { "NumCornerRows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, NumCornerRows), METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_NumCornerRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_NumCornerRows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_NumCornerCols_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Number of columns. It is one of the parameters cv::findChessboardCorners needs */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "Number of columns. It is one of the parameters cv::findChessboardCorners needs" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_NumCornerCols = { "NumCornerCols", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, NumCornerCols), METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_NumCornerCols_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_NumCornerCols_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_SquareSideLength_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Length of the side of each square. It is used when building the object points that cv::calibrateCamera needs */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "Length of the side of each square. It is used when building the object points that cv::calibrateCamera needs" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_SquareSideLength = { "SquareSideLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, SquareSideLength), METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_SquareSideLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_SquareSideLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Thickness of checkerboard. Not used for calibration purposes. */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "Thickness of checkerboard. Not used for calibration purposes." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, Thickness), METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** The static mesh that we are going to use for all the cubes */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "The static mesh that we are going to use for all the cubes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, CubeMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_CubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_CubeMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_OddCubeMaterial_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** The material that we are going to use for all the odd cubes */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "The material that we are going to use for all the odd cubes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_OddCubeMaterial = { "OddCubeMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, OddCubeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_OddCubeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_OddCubeMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_EvenCubeMaterial_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** The material that we are going to use for all the even cubes */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationCheckerboard.h" },
		{ "ToolTip", "The material that we are going to use for all the even cubes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_EvenCubeMaterial = { "EvenCubeMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraCalibrationCheckerboard, EvenCubeMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_EvenCubeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_EvenCubeMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_TopLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_TopRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_BottomLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_BottomRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_NumCornerRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_NumCornerCols,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_SquareSideLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_CubeMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_OddCubeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::NewProp_EvenCubeMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraCalibrationCheckerboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::ClassParams = {
		&ACameraCalibrationCheckerboard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraCalibrationCheckerboard()
	{
		if (!Z_Registration_Info_UClass_ACameraCalibrationCheckerboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraCalibrationCheckerboard.OuterSingleton, Z_Construct_UClass_ACameraCalibrationCheckerboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraCalibrationCheckerboard.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<ACameraCalibrationCheckerboard>()
	{
		return ACameraCalibrationCheckerboard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraCalibrationCheckerboard);
	ACameraCalibrationCheckerboard::~ACameraCalibrationCheckerboard() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationCheckerboard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationCheckerboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraCalibrationCheckerboard, ACameraCalibrationCheckerboard::StaticClass, TEXT("ACameraCalibrationCheckerboard"), &Z_Registration_Info_UClass_ACameraCalibrationCheckerboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraCalibrationCheckerboard), 4209957358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationCheckerboard_h_3975671850(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationCheckerboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationCheckerboard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
