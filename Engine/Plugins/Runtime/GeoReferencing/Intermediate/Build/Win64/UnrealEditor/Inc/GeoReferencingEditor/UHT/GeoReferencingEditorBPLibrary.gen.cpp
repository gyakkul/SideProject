// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeoReferencingEditorBPLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeoReferencingEditorBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GEOREFERENCINGEDITOR_API UClass* Z_Construct_UClass_UGeoReferencingEditorBPLibrary();
	GEOREFERENCINGEDITOR_API UClass* Z_Construct_UClass_UGeoReferencingEditorBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeoReferencingEditor();
// End Cross Module References
	DEFINE_FUNCTION(UGeoReferencingEditorBPLibrary::execLineTrace)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_GET_STRUCT(FVector,Z_Param_WorldDirection);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_UBOOL(Z_Param_TraceComplex);
		P_GET_UBOOL(Z_Param_ShowTrace);
		P_GET_UBOOL_REF(Z_Param_Out_Success);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeoReferencingEditorBPLibrary::LineTrace(Z_Param_WorldLocation,Z_Param_WorldDirection,Z_Param_Out_ActorsToIgnore,Z_Param_TraceComplex,Z_Param_ShowTrace,Z_Param_Out_Success,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeoReferencingEditorBPLibrary::execLineTraceViewport)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenLocation);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_UBOOL(Z_Param_bShowTrace);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeoReferencingEditorBPLibrary::LineTraceViewport(Z_Param_Out_ScreenLocation,Z_Param_Out_ActorsToIgnore,Z_Param_bTraceComplex,Z_Param_bShowTrace,Z_Param_Out_bSuccess,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeoReferencingEditorBPLibrary::execGetViewportCursorInformation)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Focused);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeoReferencingEditorBPLibrary::GetViewportCursorInformation(Z_Param_Out_Focused,Z_Param_Out_ScreenLocation,Z_Param_Out_WorldLocation,Z_Param_Out_WorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeoReferencingEditorBPLibrary::execGetViewportCursorLocation)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Focused);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeoReferencingEditorBPLibrary::GetViewportCursorLocation(Z_Param_Out_Focused,Z_Param_Out_ScreenLocation);
		P_NATIVE_END;
	}
	void UGeoReferencingEditorBPLibrary::StaticRegisterNativesUGeoReferencingEditorBPLibrary()
	{
		UClass* Class = UGeoReferencingEditorBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetViewportCursorInformation", &UGeoReferencingEditorBPLibrary::execGetViewportCursorInformation },
			{ "GetViewportCursorLocation", &UGeoReferencingEditorBPLibrary::execGetViewportCursorLocation },
			{ "LineTrace", &UGeoReferencingEditorBPLibrary::execLineTrace },
			{ "LineTraceViewport", &UGeoReferencingEditorBPLibrary::execLineTraceViewport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics
	{
		struct GeoReferencingEditorBPLibrary_eventGetViewportCursorInformation_Parms
		{
			bool Focused;
			FVector2D ScreenLocation;
			FVector WorldLocation;
			FVector WorldDirection;
		};
		static void NewProp_Focused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Focused;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::NewProp_Focused_SetBit(void* Obj)
	{
		((GeoReferencingEditorBPLibrary_eventGetViewportCursorInformation_Parms*)Obj)->Focused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::NewProp_Focused = { "Focused", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeoReferencingEditorBPLibrary_eventGetViewportCursorInformation_Parms), &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::NewProp_Focused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::NewProp_ScreenLocation = { "ScreenLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventGetViewportCursorInformation_Parms, ScreenLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventGetViewportCursorInformation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventGetViewportCursorInformation_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::NewProp_Focused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::NewProp_ScreenLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::NewProp_WorldDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Utilities" },
		{ "Comment", "/**\n\x09 * Retrieve information about the viewport under the mouse cursor.\n\x09 * \n\x09 * @param\x09""Focused\x09\x09\x09If the Level editor not are in focus it will return false.\n\x09 * @param\x09ScreenLocation\x09Viewport-Space position of cursor.\n\x09 * @param\x09WorldLocation\x09Location of viewport origin (camera) in world space.\n\x09 * @param\x09WorldDirection\x09""Direction of viewport (camera) in world space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeoReferencingEditorBPLibrary.h" },
		{ "ToolTip", "Retrieve information about the viewport under the mouse cursor.\n\n@param       Focused                 If the Level editor not are in focus it will return false.\n@param       ScreenLocation  Viewport-Space position of cursor.\n@param       WorldLocation   Location of viewport origin (camera) in world space.\n@param       WorldDirection  Direction of viewport (camera) in world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoReferencingEditorBPLibrary, nullptr, "GetViewportCursorInformation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::GeoReferencingEditorBPLibrary_eventGetViewportCursorInformation_Parms), Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics
	{
		struct GeoReferencingEditorBPLibrary_eventGetViewportCursorLocation_Parms
		{
			bool Focused;
			FVector2D ScreenLocation;
		};
		static void NewProp_Focused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Focused;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::NewProp_Focused_SetBit(void* Obj)
	{
		((GeoReferencingEditorBPLibrary_eventGetViewportCursorLocation_Parms*)Obj)->Focused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::NewProp_Focused = { "Focused", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeoReferencingEditorBPLibrary_eventGetViewportCursorLocation_Parms), &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::NewProp_Focused_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::NewProp_ScreenLocation = { "ScreenLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventGetViewportCursorLocation_Parms, ScreenLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::NewProp_Focused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::NewProp_ScreenLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeoReferencing|Utilities" },
		{ "Comment", "/**\n\x09 * Retrieve the Viewport-Space position of the mouse in the Level Editor Viewport. If the Level editor not are in focus it will return false.\n\x09 * \n\x09 * @param\x09""Focused\x09\x09\x09If the Level editor not are in focus it will return false.\n\x09 * @param\x09ScreenLocation\x09The screen location result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeoReferencingEditorBPLibrary.h" },
		{ "ToolTip", "Retrieve the Viewport-Space position of the mouse in the Level Editor Viewport. If the Level editor not are in focus it will return false.\n\n@param       Focused                 If the Level editor not are in focus it will return false.\n@param       ScreenLocation  The screen location result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoReferencingEditorBPLibrary, nullptr, "GetViewportCursorLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::GeoReferencingEditorBPLibrary_eventGetViewportCursorLocation_Parms), Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics
	{
		struct GeoReferencingEditorBPLibrary_eventLineTrace_Parms
		{
			FVector WorldLocation;
			FVector WorldDirection;
			TArray<AActor*> ActorsToIgnore;
			bool TraceComplex;
			bool ShowTrace;
			bool Success;
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceComplex_MetaData[];
#endif
		static void NewProp_TraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowTrace_MetaData[];
#endif
		static void NewProp_ShowTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowTrace;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventLineTrace_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_WorldLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_WorldDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventLineTrace_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_WorldDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_WorldDirection_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventLineTrace_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_TraceComplex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_TraceComplex_SetBit(void* Obj)
	{
		((GeoReferencingEditorBPLibrary_eventLineTrace_Parms*)Obj)->TraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeoReferencingEditorBPLibrary_eventLineTrace_Parms), &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_TraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_TraceComplex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ShowTrace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ShowTrace_SetBit(void* Obj)
	{
		((GeoReferencingEditorBPLibrary_eventLineTrace_Parms*)Obj)->ShowTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ShowTrace = { "ShowTrace", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeoReferencingEditorBPLibrary_eventLineTrace_Parms), &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ShowTrace_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ShowTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ShowTrace_MetaData)) };
	void Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((GeoReferencingEditorBPLibrary_eventLineTrace_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeoReferencingEditorBPLibrary_eventLineTrace_Parms), &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventLineTrace_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_WorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_TraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_ShowTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceComplex, ShowTrace, ActorsToIgnore" },
		{ "Category", "GeoReferencing|Utilities" },
		{ "Comment", "/**\n\x09 * LineTrace at specific location/direction\n\x09 * \n\x09 * @param\x09WorldLocation\x09Location of viewport origin (camera) in world space\n\x09 * @param\x09WorldDirection\x09""Direction of viewport (camera) in world space\n\x09 * @param\x09TraceComplex\x09Whether we should trace against complex collision\n\x09 * @param\x09ShowTrace\x09\x09Whether we should debug draw the trace\n\x09 * @param\x09Success\x09\x09\x09If the Level editor not are in focus it will return false, and same if nothing is hit.\n\x09 * @param\x09HitResult\x09\x09The trace hits result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeoReferencingEditorBPLibrary.h" },
		{ "ToolTip", "LineTrace at specific location/direction\n\n@param       WorldLocation   Location of viewport origin (camera) in world space\n@param       WorldDirection  Direction of viewport (camera) in world space\n@param       TraceComplex    Whether we should trace against complex collision\n@param       ShowTrace               Whether we should debug draw the trace\n@param       Success                 If the Level editor not are in focus it will return false, and same if nothing is hit.\n@param       HitResult               The trace hits result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoReferencingEditorBPLibrary, nullptr, "LineTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::GeoReferencingEditorBPLibrary_eventLineTrace_Parms), Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics
	{
		struct GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms
		{
			FVector2D ScreenLocation;
			TArray<AActor*> ActorsToIgnore;
			bool bTraceComplex;
			bool bShowTrace;
			bool bSuccess;
			FHitResult HitResult;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[];
#endif
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTrace_MetaData[];
#endif
		static void NewProp_bShowTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTrace;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_ScreenLocation = { "ScreenLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms, ScreenLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_ActorsToIgnore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bTraceComplex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms), &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bTraceComplex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bShowTrace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bShowTrace_SetBit(void* Obj)
	{
		((GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms*)Obj)->bShowTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bShowTrace = { "bShowTrace", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms), &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bShowTrace_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bShowTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bShowTrace_MetaData)) };
	void Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms), &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_ScreenLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bShowTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceComplex, ShowTrace, ActorsToIgnore" },
		{ "Category", "GeoReferencing|Utilities" },
		{ "Comment", "/**\n\x09 * LineTrace under mouse cursor and return various information\n\x09 * \n\x09 * @param\x09ScreenLocation\x09Viewport-Space position of cursor.\n\x09 * @param\x09""ActorsToIgnore\x09""Collection of actors for this trace to ignore.\n\x09 * @param\x09TraceComplex\x09Whether we should trace against complex collision.\n\x09 * @param\x09ShowTrace\x09\x09Whether we should debug draw the trace.\n\x09 * @param\x09Success\x09\x09\x09If the Level editor not are in focus it will return false, and same if nothing is hit.\n\x09 * @param\x09HitResult\x09\x09The trace hits result.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeoReferencingEditorBPLibrary.h" },
		{ "ToolTip", "LineTrace under mouse cursor and return various information\n\n@param       ScreenLocation  Viewport-Space position of cursor.\n@param       ActorsToIgnore  Collection of actors for this trace to ignore.\n@param       TraceComplex    Whether we should trace against complex collision.\n@param       ShowTrace               Whether we should debug draw the trace.\n@param       Success                 If the Level editor not are in focus it will return false, and same if nothing is hit.\n@param       HitResult               The trace hits result." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeoReferencingEditorBPLibrary, nullptr, "LineTraceViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::GeoReferencingEditorBPLibrary_eventLineTraceViewport_Parms), Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C42401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeoReferencingEditorBPLibrary);
	UClass* Z_Construct_UClass_UGeoReferencingEditorBPLibrary_NoRegister()
	{
		return UGeoReferencingEditorBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeoReferencingEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorInformation, "GetViewportCursorInformation" }, // 2548044316
		{ &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_GetViewportCursorLocation, "GetViewportCursorLocation" }, // 1994417614
		{ &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTrace, "LineTrace" }, // 2389079577
		{ &Z_Construct_UFunction_UGeoReferencingEditorBPLibrary_LineTraceViewport, "LineTraceViewport" }, // 343697980
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeoReferencingEditorBPLibrary.h" },
		{ "ModuleRelativePath", "Public/GeoReferencingEditorBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeoReferencingEditorBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics::ClassParams = {
		&UGeoReferencingEditorBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeoReferencingEditorBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UGeoReferencingEditorBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeoReferencingEditorBPLibrary.OuterSingleton, Z_Construct_UClass_UGeoReferencingEditorBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeoReferencingEditorBPLibrary.OuterSingleton;
	}
	template<> GEOREFERENCINGEDITOR_API UClass* StaticClass<UGeoReferencingEditorBPLibrary>()
	{
		return UGeoReferencingEditorBPLibrary::StaticClass();
	}
	UGeoReferencingEditorBPLibrary::UGeoReferencingEditorBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeoReferencingEditorBPLibrary);
	UGeoReferencingEditorBPLibrary::~UGeoReferencingEditorBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeoReferencingEditorBPLibrary, UGeoReferencingEditorBPLibrary::StaticClass, TEXT("UGeoReferencingEditorBPLibrary"), &Z_Registration_Info_UClass_UGeoReferencingEditorBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeoReferencingEditorBPLibrary), 3658308767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_3347945515(TEXT("/Script/GeoReferencingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencingEditor_Public_GeoReferencingEditorBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
