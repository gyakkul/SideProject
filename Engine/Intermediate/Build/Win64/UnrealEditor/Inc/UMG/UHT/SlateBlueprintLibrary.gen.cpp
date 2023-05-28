// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "Layout/Geometry.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_USlateBlueprintLibrary();
	UMG_API UClass* Z_Construct_UClass_USlateBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(USlateBlueprintLibrary::execScreenToViewport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlateBlueprintLibrary::ScreenToViewport(Z_Param_WorldContextObject,Z_Param_ScreenPosition,Z_Param_Out_ViewportPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execScreenToWidgetAbsolute)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AbsoluteCoordinate);
		P_GET_UBOOL(Z_Param_bIncludeWindowPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlateBlueprintLibrary::ScreenToWidgetAbsolute(Z_Param_WorldContextObject,Z_Param_ScreenPosition,Z_Param_Out_AbsoluteCoordinate,Z_Param_bIncludeWindowPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execScreenToWidgetLocal)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_ScreenPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_LocalCoordinate);
		P_GET_UBOOL(Z_Param_bIncludeWindowPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlateBlueprintLibrary::ScreenToWidgetLocal(Z_Param_WorldContextObject,Z_Param_Out_Geometry,Z_Param_ScreenPosition,Z_Param_Out_LocalCoordinate,Z_Param_bIncludeWindowPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execAbsoluteToViewport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteDesktopCoordinate);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlateBlueprintLibrary::AbsoluteToViewport(Z_Param_WorldContextObject,Z_Param_AbsoluteDesktopCoordinate,Z_Param_Out_PixelPosition,Z_Param_Out_ViewportPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execLocalToViewport)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_LocalCoordinate);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PixelPosition);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ViewportPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		USlateBlueprintLibrary::LocalToViewport(Z_Param_WorldContextObject,Z_Param_Out_Geometry,Z_Param_LocalCoordinate,Z_Param_Out_PixelPosition,Z_Param_Out_ViewportPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execEqualEqual_SlateBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_A);
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USlateBlueprintLibrary::EqualEqual_SlateBrush(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformVectorLocalToAbsolute)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_LocalVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::TransformVectorLocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformVectorAbsoluteToLocal)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformScalarLocalToAbsolute)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocalScalar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USlateBlueprintLibrary::TransformScalarLocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalScalar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execTransformScalarAbsoluteToLocal)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AbsoluteScalar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteScalar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execGetAbsoluteSize)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetAbsoluteSize(Z_Param_Out_Geometry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execGetLocalSize)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetLocalSize(Z_Param_Out_Geometry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execGetLocalTopLeft)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::GetLocalTopLeft(Z_Param_Out_Geometry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execLocalToAbsolute)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_LocalCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::LocalToAbsolute(Z_Param_Out_Geometry,Z_Param_LocalCoordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execAbsoluteToLocal)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT(FVector2D,Z_Param_AbsoluteCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=USlateBlueprintLibrary::AbsoluteToLocal(Z_Param_Out_Geometry,Z_Param_AbsoluteCoordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USlateBlueprintLibrary::execIsUnderLocation)
	{
		P_GET_STRUCT_REF(FGeometry,Z_Param_Out_Geometry);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_AbsoluteCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USlateBlueprintLibrary::IsUnderLocation(Z_Param_Out_Geometry,Z_Param_Out_AbsoluteCoordinate);
		P_NATIVE_END;
	}
	void USlateBlueprintLibrary::StaticRegisterNativesUSlateBlueprintLibrary()
	{
		UClass* Class = USlateBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbsoluteToLocal", &USlateBlueprintLibrary::execAbsoluteToLocal },
			{ "AbsoluteToViewport", &USlateBlueprintLibrary::execAbsoluteToViewport },
			{ "EqualEqual_SlateBrush", &USlateBlueprintLibrary::execEqualEqual_SlateBrush },
			{ "GetAbsoluteSize", &USlateBlueprintLibrary::execGetAbsoluteSize },
			{ "GetLocalSize", &USlateBlueprintLibrary::execGetLocalSize },
			{ "GetLocalTopLeft", &USlateBlueprintLibrary::execGetLocalTopLeft },
			{ "IsUnderLocation", &USlateBlueprintLibrary::execIsUnderLocation },
			{ "LocalToAbsolute", &USlateBlueprintLibrary::execLocalToAbsolute },
			{ "LocalToViewport", &USlateBlueprintLibrary::execLocalToViewport },
			{ "ScreenToViewport", &USlateBlueprintLibrary::execScreenToViewport },
			{ "ScreenToWidgetAbsolute", &USlateBlueprintLibrary::execScreenToWidgetAbsolute },
			{ "ScreenToWidgetLocal", &USlateBlueprintLibrary::execScreenToWidgetLocal },
			{ "TransformScalarAbsoluteToLocal", &USlateBlueprintLibrary::execTransformScalarAbsoluteToLocal },
			{ "TransformScalarLocalToAbsolute", &USlateBlueprintLibrary::execTransformScalarLocalToAbsolute },
			{ "TransformVectorAbsoluteToLocal", &USlateBlueprintLibrary::execTransformVectorAbsoluteToLocal },
			{ "TransformVectorLocalToAbsolute", &USlateBlueprintLibrary::execTransformVectorLocalToAbsolute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics
	{
		struct SlateBlueprintLibrary_eventAbsoluteToLocal_Parms
		{
			FGeometry Geometry;
			FVector2D AbsoluteCoordinate;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_AbsoluteCoordinate = { "AbsoluteCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_AbsoluteCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\x09 *\n\x09 * @return Transforms AbsoluteCoordinate into the local space of this Geometry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return Transforms AbsoluteCoordinate into the local space of this Geometry." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "AbsoluteToLocal", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::SlateBlueprintLibrary_eventAbsoluteToLocal_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics
	{
		struct SlateBlueprintLibrary_eventAbsoluteToViewport_Parms
		{
			UObject* WorldContextObject;
			FVector2D AbsoluteDesktopCoordinate;
			FVector2D PixelPosition;
			FVector2D ViewportPosition;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteDesktopCoordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PixelPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_AbsoluteDesktopCoordinate = { "AbsoluteDesktopCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, AbsoluteDesktopCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_PixelPosition = { "PixelPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, PixelPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventAbsoluteToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_AbsoluteDesktopCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_PixelPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::NewProp_ViewportPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates absolute coordinate in desktop space of the geometry provided into local viewport coordinates.\n\x09 *\n\x09 * @param PixelPosition The position in the game's viewport, usable for line traces and\n\x09 * other uses where you need a coordinate in the space of viewport resolution units.\n\x09 * @param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\n\x09 * to add another widget to the viewport at the same position in viewport space as this location, this is\n\x09 * what you would use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates absolute coordinate in desktop space of the geometry provided into local viewport coordinates.\n\n@param PixelPosition The position in the game's viewport, usable for line traces and\nother uses where you need a coordinate in the space of viewport resolution units.\n@param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\nto add another widget to the viewport at the same position in viewport space as this location, this is\nwhat you would use." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "AbsoluteToViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::SlateBlueprintLibrary_eventAbsoluteToViewport_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics
	{
		struct SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms
		{
			FSlateBrush A;
			FSlateBrush B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms, A), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms, B), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B_MetaData)) }; // 4256420591
	void Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "SlateBrush" },
		{ "Comment", "/** Returns whether brushes A and B are identical. */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (SlateBrush)" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns whether brushes A and B are identical." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "EqualEqual_SlateBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::SlateBlueprintLibrary_eventEqualEqual_SlateBrush_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics
	{
		struct SlateBlueprintLibrary_eventGetAbsoluteSize_Parms
		{
			FGeometry Geometry;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetAbsoluteSize_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetAbsoluteSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/** Returns the size of the geometry in absolute space. */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns the size of the geometry in absolute space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "GetAbsoluteSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::SlateBlueprintLibrary_eventGetAbsoluteSize_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics
	{
		struct SlateBlueprintLibrary_eventGetLocalSize_Parms
		{
			FGeometry Geometry;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalSize_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/** Returns the size of the geometry in local space. */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns the size of the geometry in local space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "GetLocalSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::SlateBlueprintLibrary_eventGetLocalSize_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics
	{
		struct SlateBlueprintLibrary_eventGetLocalTopLeft_Parms
		{
			FGeometry Geometry;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalTopLeft_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventGetLocalTopLeft_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/** Returns the local top/left of the geometry in local space. */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Returns the local top/left of the geometry in local space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "GetLocalTopLeft", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::SlateBlueprintLibrary_eventGetLocalTopLeft_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics
	{
		struct SlateBlueprintLibrary_eventIsUnderLocation_Parms
		{
			FGeometry Geometry;
			FVector2D AbsoluteCoordinate;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventIsUnderLocation_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate = { "AbsoluteCoordinate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventIsUnderLocation_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate_MetaData)) };
	void Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SlateBlueprintLibrary_eventIsUnderLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SlateBlueprintLibrary_eventIsUnderLocation_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_AbsoluteCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\x09 *\n\x09 * @return true if the provided location in absolute coordinates is within the bounds of this geometry.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return true if the provided location in absolute coordinates is within the bounds of this geometry." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "IsUnderLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::SlateBlueprintLibrary_eventIsUnderLocation_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics
	{
		struct SlateBlueprintLibrary_eventLocalToAbsolute_Parms
		{
			FGeometry Geometry;
			FVector2D LocalCoordinate;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_LocalCoordinate = { "LocalCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToAbsolute_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_LocalCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates local coordinates into absolute coordinates\n\x09 *\n\x09 * Absolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\x09 *\n\x09 * @return  Absolute coordinates\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates local coordinates into absolute coordinates\n\nAbsolute coordinates could be either desktop or window space depending on what space the root of the widget hierarchy is in.\n\n@return  Absolute coordinates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "LocalToAbsolute", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::SlateBlueprintLibrary_eventLocalToAbsolute_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics
	{
		struct SlateBlueprintLibrary_eventLocalToViewport_Parms
		{
			UObject* WorldContextObject;
			FGeometry Geometry;
			FVector2D LocalCoordinate;
			FVector2D PixelPosition;
			FVector2D ViewportPosition;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PixelPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_LocalCoordinate = { "LocalCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_PixelPosition = { "PixelPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, PixelPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventLocalToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_LocalCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_PixelPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::NewProp_ViewportPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates local coordinate of the geometry provided into local viewport coordinates.\n\x09 *\n\x09 * @param PixelPosition The position in the game's viewport, usable for line traces and \n\x09 * other uses where you need a coordinate in the space of viewport resolution units.\n\x09 * @param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\n\x09 * to add another widget to the viewport at the same position in viewport space as this location, this is\n\x09 * what you would use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates local coordinate of the geometry provided into local viewport coordinates.\n\n@param PixelPosition The position in the game's viewport, usable for line traces and\nother uses where you need a coordinate in the space of viewport resolution units.\n@param ViewportPosition The position in the space of other widgets in the viewport.  Like if you wanted\nto add another widget to the viewport at the same position in viewport space as this location, this is\nwhat you would use." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "LocalToViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::SlateBlueprintLibrary_eventLocalToViewport_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics
	{
		struct SlateBlueprintLibrary_eventScreenToViewport_Parms
		{
			UObject* WorldContextObject;
			FVector2D ScreenPosition;
			FVector2D ViewportPosition;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ViewportPosition = { "ViewportPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToViewport_Parms, ViewportPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::NewProp_ViewportPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates a screen position in pixels into the local space of the viewport widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates a screen position in pixels into the local space of the viewport widget." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "ScreenToViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::SlateBlueprintLibrary_eventScreenToViewport_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics
	{
		struct SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms
		{
			UObject* WorldContextObject;
			FVector2D ScreenPosition;
			FVector2D AbsoluteCoordinate;
			bool bIncludeWindowPosition;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteCoordinate;
		static void NewProp_bIncludeWindowPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeWindowPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_AbsoluteCoordinate = { "AbsoluteCoordinate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms, AbsoluteCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition_SetBit(void* Obj)
	{
		((SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms*)Obj)->bIncludeWindowPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition = { "bIncludeWindowPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_AbsoluteCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::NewProp_bIncludeWindowPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates a screen position in pixels into absolute application coordinates.\n\x09 * If bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode).\n\x09 */" },
		{ "CPP_Default_bIncludeWindowPosition", "false" },
		{ "DisplayName", "ScreenToAbsolute" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates a screen position in pixels into absolute application coordinates.\nIf bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "ScreenToWidgetAbsolute", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::SlateBlueprintLibrary_eventScreenToWidgetAbsolute_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics
	{
		struct SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms
		{
			UObject* WorldContextObject;
			FGeometry Geometry;
			FVector2D ScreenPosition;
			FVector2D LocalCoordinate;
			bool bIncludeWindowPosition;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalCoordinate;
		static void NewProp_bIncludeWindowPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeWindowPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_LocalCoordinate = { "LocalCoordinate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms, LocalCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition_SetBit(void* Obj)
	{
		((SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms*)Obj)->bIncludeWindowPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition = { "bIncludeWindowPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms), &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_ScreenPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_LocalCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::NewProp_bIncludeWindowPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**\n\x09 * Translates a screen position in pixels into the local space of a widget with the given geometry. \n\x09 * If bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode).\n\x09 */" },
		{ "CPP_Default_bIncludeWindowPosition", "false" },
		{ "DisplayName", "ScreenToLocal" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ToolTip", "Translates a screen position in pixels into the local space of a widget with the given geometry.\nIf bIncludeWindowPosition is true, then this method will also remove the game window's position (useful when in windowed mode)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "ScreenToWidgetLocal", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::SlateBlueprintLibrary_eventScreenToWidgetLocal_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics
	{
		struct SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms
		{
			FGeometry Geometry;
			float AbsoluteScalar;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsoluteScalar;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_AbsoluteScalar = { "AbsoluteScalar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms, AbsoluteScalar), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_AbsoluteScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformScalarAbsoluteToLocal", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::SlateBlueprintLibrary_eventTransformScalarAbsoluteToLocal_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics
	{
		struct SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms
		{
			FGeometry Geometry;
			float LocalScalar;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalScalar;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_LocalScalar = { "LocalScalar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms, LocalScalar), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_LocalScalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformScalarLocalToAbsolute", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::SlateBlueprintLibrary_eventTransformScalarLocalToAbsolute_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics
	{
		struct SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms
		{
			FGeometry Geometry;
			FVector2D AbsoluteVector;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_AbsoluteVector = { "AbsoluteVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms, AbsoluteVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_AbsoluteVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformVectorAbsoluteToLocal", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::SlateBlueprintLibrary_eventTransformVectorAbsoluteToLocal_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics
	{
		struct SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms
		{
			FGeometry Geometry;
			FVector2D LocalVector;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Geometry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Geometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry = { "Geometry", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms, Geometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry_MetaData)) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_LocalVector = { "LocalVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms, LocalVector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_Geometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_LocalVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Geometry" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USlateBlueprintLibrary, nullptr, "TransformVectorLocalToAbsolute", nullptr, nullptr, sizeof(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::SlateBlueprintLibrary_eventTransformVectorLocalToAbsolute_Parms), Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateBlueprintLibrary);
	UClass* Z_Construct_UClass_USlateBlueprintLibrary_NoRegister()
	{
		return USlateBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USlateBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USlateBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToLocal, "AbsoluteToLocal" }, // 3119211276
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_AbsoluteToViewport, "AbsoluteToViewport" }, // 685095453
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_EqualEqual_SlateBrush, "EqualEqual_SlateBrush" }, // 3610094981
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetAbsoluteSize, "GetAbsoluteSize" }, // 944357713
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalSize, "GetLocalSize" }, // 3751543097
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_GetLocalTopLeft, "GetLocalTopLeft" }, // 1167288809
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_IsUnderLocation, "IsUnderLocation" }, // 1455470781
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_LocalToAbsolute, "LocalToAbsolute" }, // 3351704784
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_LocalToViewport, "LocalToViewport" }, // 2314729662
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToViewport, "ScreenToViewport" }, // 771612998
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetAbsolute, "ScreenToWidgetAbsolute" }, // 206135141
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_ScreenToWidgetLocal, "ScreenToWidgetLocal" }, // 1097092348
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarAbsoluteToLocal, "TransformScalarAbsoluteToLocal" }, // 1464684419
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformScalarLocalToAbsolute, "TransformScalarLocalToAbsolute" }, // 4079401995
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorAbsoluteToLocal, "TransformVectorAbsoluteToLocal" }, // 817389168
		{ &Z_Construct_UFunction_USlateBlueprintLibrary_TransformVectorLocalToAbsolute, "TransformVectorLocalToAbsolute" }, // 511837798
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/SlateBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprint/SlateBlueprintLibrary.h" },
		{ "ScriptName", "SlateLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateBlueprintLibrary_Statics::ClassParams = {
		&USlateBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USlateBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_USlateBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USlateBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateBlueprintLibrary.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<USlateBlueprintLibrary>()
	{
		return USlateBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateBlueprintLibrary);
	USlateBlueprintLibrary::~USlateBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateBlueprintLibrary, USlateBlueprintLibrary::StaticClass, TEXT("USlateBlueprintLibrary"), &Z_Registration_Info_UClass_USlateBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateBlueprintLibrary), 3994969377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_2765161066(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_SlateBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
