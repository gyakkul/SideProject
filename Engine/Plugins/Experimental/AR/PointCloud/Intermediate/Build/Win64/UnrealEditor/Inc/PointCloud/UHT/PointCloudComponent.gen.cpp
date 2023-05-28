// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointCloudComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointCloudComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudComponent();
	POINTCLOUD_API UClass* Z_Construct_UClass_UPointCloudComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PointCloud();
// End Cross Module References
	DEFINE_FUNCTION(UPointCloudComponent::execGetPointsOutsideBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_WorldSpaceBox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPointsOutsideBox(Z_Param_Out_WorldSpaceBox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudComponent::execGetPointsInBox)
	{
		P_GET_STRUCT_REF(FBox,Z_Param_Out_WorldSpaceBox);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPointsInBox(Z_Param_Out_WorldSpaceBox);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudComponent::execSetPointSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointSize(Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudComponent::execSetPointColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointColor(Z_Param_Out_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudComponent::execClearPointCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPointCloud();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudComponent::execSetPointCloudWithColors)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointCloudWithColors(Z_Param_Out_Points,Z_Param_Out_Colors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudComponent::execSetPointCloud)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointCloud(Z_Param_Out_Points);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointCloudComponent::execSetIsVisible)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsVisible(Z_Param_bNewVisibility);
		P_NATIVE_END;
	}
	void UPointCloudComponent::StaticRegisterNativesUPointCloudComponent()
	{
		UClass* Class = UPointCloudComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearPointCloud", &UPointCloudComponent::execClearPointCloud },
			{ "GetPointsInBox", &UPointCloudComponent::execGetPointsInBox },
			{ "GetPointsOutsideBox", &UPointCloudComponent::execGetPointsOutsideBox },
			{ "SetIsVisible", &UPointCloudComponent::execSetIsVisible },
			{ "SetPointCloud", &UPointCloudComponent::execSetPointCloud },
			{ "SetPointCloudWithColors", &UPointCloudComponent::execSetPointCloudWithColors },
			{ "SetPointColor", &UPointCloudComponent::execSetPointColor },
			{ "SetPointSize", &UPointCloudComponent::execSetPointSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointCloudComponent_ClearPointCloud_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_ClearPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/**\n\x09 * Empties the point cloud\n\x09 */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Empties the point cloud" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudComponent_ClearPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudComponent, nullptr, "ClearPointCloud", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_ClearPointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_ClearPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudComponent_ClearPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudComponent_ClearPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics
	{
		struct PointCloudComponent_eventGetPointsInBox_Parms
		{
			FBox WorldSpaceBox;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceBox;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::NewProp_WorldSpaceBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::NewProp_WorldSpaceBox = { "WorldSpaceBox", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointCloudComponent_eventGetPointsInBox_Parms, WorldSpaceBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::NewProp_WorldSpaceBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::NewProp_WorldSpaceBox_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointCloudComponent_eventGetPointsInBox_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::NewProp_WorldSpaceBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/** Determines which points are within the box and returns those to the caller */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Determines which points are within the box and returns those to the caller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudComponent, nullptr, "GetPointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::PointCloudComponent_eventGetPointsInBox_Parms), Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics
	{
		struct PointCloudComponent_eventGetPointsOutsideBox_Parms
		{
			FBox WorldSpaceBox;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpaceBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceBox;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::NewProp_WorldSpaceBox_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::NewProp_WorldSpaceBox = { "WorldSpaceBox", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointCloudComponent_eventGetPointsOutsideBox_Parms, WorldSpaceBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::NewProp_WorldSpaceBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::NewProp_WorldSpaceBox_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointCloudComponent_eventGetPointsOutsideBox_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::NewProp_WorldSpaceBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/** Determines which points are outside the box and returns those to the caller */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Determines which points are outside the box and returns those to the caller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudComponent, nullptr, "GetPointsOutsideBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::PointCloudComponent_eventGetPointsOutsideBox_Parms), Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics
	{
		struct PointCloudComponent_eventSetIsVisible_Parms
		{
			bool bNewVisibility;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((PointCloudComponent_eventSetIsVisible_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PointCloudComponent_eventSetIsVisible_Parms), &Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/** Changes the visibility setting */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Changes the visibility setting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudComponent, nullptr, "SetIsVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::PointCloudComponent_eventSetIsVisible_Parms), Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudComponent_SetIsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudComponent_SetIsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics
	{
		struct PointCloudComponent_eventSetPointCloud_Parms
		{
			TArray<FVector> Points;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointCloudComponent_eventSetPointCloud_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::NewProp_Points,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/**\n\x09 * Updates the point cloud data with the new set of points\n\x09 *\n\x09 * @param Points the new set of points to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Updates the point cloud data with the new set of points\n\n@param Points the new set of points to use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudComponent, nullptr, "SetPointCloud", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::PointCloudComponent_eventSetPointCloud_Parms), Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudComponent_SetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudComponent_SetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics
	{
		struct PointCloudComponent_eventSetPointCloudWithColors_Parms
		{
			TArray<FVector> Points;
			TArray<FColor> Colors;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Colors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Colors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Colors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointCloudComponent_eventSetPointCloudWithColors_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Colors_Inner = { "Colors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Colors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Colors = { "Colors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointCloudComponent_eventSetPointCloudWithColors_Parms, Colors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Colors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Colors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Colors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::NewProp_Colors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/**\n\x09 * Updates the point cloud data with the new set of points and colors\n\x09 *\n\x09 * @param Points the new set of points to use\n\x09 * @param Colors the new set of colors to use, must match points size\n\x09 */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Updates the point cloud data with the new set of points and colors\n\n@param Points the new set of points to use\n@param Colors the new set of colors to use, must match points size" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudComponent, nullptr, "SetPointCloudWithColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::PointCloudComponent_eventSetPointCloudWithColors_Parms), Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics
	{
		struct PointCloudComponent_eventSetPointColor_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointCloudComponent_eventSetPointColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/** Allows you to change the color of the points being rendered */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Allows you to change the color of the points being rendered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudComponent, nullptr, "SetPointColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::PointCloudComponent_eventSetPointColor_Parms), Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudComponent_SetPointColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudComponent_SetPointColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics
	{
		struct PointCloudComponent_eventSetPointSize_Parms
		{
			float Size;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PointCloudComponent_eventSetPointSize_Parms, Size), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/** Allows you to change the size of the points being rendered */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Allows you to change the size of the points being rendered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointCloudComponent, nullptr, "SetPointSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::PointCloudComponent_eventSetPointSize_Parms), Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointCloudComponent_SetPointSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPointCloudComponent_SetPointSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPointCloudComponent);
	UClass* Z_Construct_UClass_UPointCloudComponent_NoRegister()
	{
		return UPointCloudComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPointCloudComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointCloudUpdateInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointCloudUpdateInterval;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointCloud_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointCloud_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointCloud;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointCloudMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointCloudMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointCloudComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PointCloud,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointCloudComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointCloudComponent_ClearPointCloud, "ClearPointCloud" }, // 711502001
		{ &Z_Construct_UFunction_UPointCloudComponent_GetPointsInBox, "GetPointsInBox" }, // 364162451
		{ &Z_Construct_UFunction_UPointCloudComponent_GetPointsOutsideBox, "GetPointsOutsideBox" }, // 2525699800
		{ &Z_Construct_UFunction_UPointCloudComponent_SetIsVisible, "SetIsVisible" }, // 96612838
		{ &Z_Construct_UFunction_UPointCloudComponent_SetPointCloud, "SetPointCloud" }, // 1875126394
		{ &Z_Construct_UFunction_UPointCloudComponent_SetPointCloudWithColors, "SetPointCloudWithColors" }, // 936567578
		{ &Z_Construct_UFunction_UPointCloudComponent_SetPointColor, "SetPointColor" }, // 1313266581
		{ &Z_Construct_UFunction_UPointCloudComponent_SetPointSize, "SetPointSize" }, // 3372620854
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "PointCloud" },
		{ "Comment", "/**\n * Component for rendering a point cloud\n */" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "PointCloudComponent.h" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Component for rendering a point cloud" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/**\x09If true, each tick the component will render its point cloud */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "If true, each tick the component will render its point cloud" },
	};
#endif
	void Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UPointCloudComponent*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPointCloudComponent), &Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloudUpdateInterval_MetaData[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/**\x09If > 0, will automatically update the point cloud data from AR system based on this interval (sec) */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "If > 0, will automatically update the point cloud data from AR system based on this interval (sec)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloudUpdateInterval = { "PointCloudUpdateInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointCloudComponent, PointCloudUpdateInterval), METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloudUpdateInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloudUpdateInterval_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud_Inner = { "PointCloud", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud_MetaData[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/** Point cloud data that will be used for rendering, assumes each point is in world space */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Point cloud data that will be used for rendering, assumes each point is in world space" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud = { "PointCloud", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointCloudComponent, PointCloud), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColors_Inner = { "PointColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColors_MetaData[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/** Point cloud color data that will be used for rendering */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "Point cloud color data that will be used for rendering" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColors = { "PointColors", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointCloudComponent, PointColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColor_MetaData[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/** The color to render the points with */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "The color to render the points with" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColor = { "PointColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointCloudComponent, PointColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointSize_MetaData[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/** The size of the point when rendering */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "The size of the point when rendering" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointSize = { "PointSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointCloudComponent, PointSize), METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloudMaterial_MetaData[] = {
		{ "Comment", "/** The material to render with */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "The material to render with" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloudMaterial = { "PointCloudMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointCloudComponent, PointCloudMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloudMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloudMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_SpriteTexture_MetaData[] = {
		{ "Category", "Point Cloud" },
		{ "Comment", "/** An optional sprite texture to render the point with */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "An optional sprite texture to render the point with" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_SpriteTexture = { "SpriteTexture", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointCloudComponent, SpriteTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_SpriteTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_SpriteTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_WorldBounds_MetaData[] = {
		{ "Comment", "/** World space bounds of the point cloud */" },
		{ "ModuleRelativePath", "Public/PointCloudComponent.h" },
		{ "ToolTip", "World space bounds of the point cloud" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_WorldBounds = { "WorldBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPointCloudComponent, WorldBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_WorldBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_WorldBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointCloudComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloudUpdateInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_PointCloudMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_SpriteTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointCloudComponent_Statics::NewProp_WorldBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointCloudComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointCloudComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPointCloudComponent_Statics::ClassParams = {
		&UPointCloudComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPointCloudComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPointCloudComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointCloudComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointCloudComponent()
	{
		if (!Z_Registration_Info_UClass_UPointCloudComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPointCloudComponent.OuterSingleton, Z_Construct_UClass_UPointCloudComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPointCloudComponent.OuterSingleton;
	}
	template<> POINTCLOUD_API UClass* StaticClass<UPointCloudComponent>()
	{
		return UPointCloudComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointCloudComponent);
	UPointCloudComponent::~UPointCloudComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPointCloudComponent, UPointCloudComponent::StaticClass, TEXT("UPointCloudComponent"), &Z_Registration_Info_UClass_UPointCloudComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPointCloudComponent), 255130176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_4039646013(TEXT("/Script/PointCloud"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AR_PointCloud_Source_PointCloud_Public_PointCloudComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
