// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/WarpUtilsBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarpUtilsBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_WarpUtils();
	WARPUTILS_API UClass* Z_Construct_UClass_UWarpUtilsBlueprintLibrary();
	WARPUTILS_API UClass* Z_Construct_UClass_UWarpUtilsBlueprintLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWarpUtilsBlueprintLibrary::execGeneratePFMEx)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_StartRotation);
		P_GET_OBJECT(AActor,Z_Param_PFMOrigin);
		P_GET_PROPERTY(FIntProperty,Z_Param_TilesHorizontal);
		P_GET_PROPERTY(FIntProperty,Z_Param_TilesVertical);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ColumnAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TileSizeHorizontal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TileSizeVertical);
		P_GET_PROPERTY(FIntProperty,Z_Param_TilePixelsHorizontal);
		P_GET_PROPERTY(FIntProperty,Z_Param_TilePixelsVertical);
		P_GET_UBOOL(Z_Param_AddMargin);
		P_GET_TARRAY_REF(bool,Z_Param_Out_TilesValidityFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWarpUtilsBlueprintLibrary::GeneratePFMEx(Z_Param_File,Z_Param_Out_StartLocation,Z_Param_Out_StartRotation,Z_Param_PFMOrigin,Z_Param_TilesHorizontal,Z_Param_TilesVertical,Z_Param_ColumnAngle,Z_Param_TileSizeHorizontal,Z_Param_TileSizeVertical,Z_Param_TilePixelsHorizontal,Z_Param_TilePixelsVertical,Z_Param_AddMargin,Z_Param_Out_TilesValidityFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWarpUtilsBlueprintLibrary::execGeneratePFM)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_StartLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_StartRotation);
		P_GET_OBJECT(AActor,Z_Param_PFMOrigin);
		P_GET_PROPERTY(FIntProperty,Z_Param_TilesHorizontal);
		P_GET_PROPERTY(FIntProperty,Z_Param_TilesVertical);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ColumnAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TileSizeHorizontal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TileSizeVertical);
		P_GET_PROPERTY(FIntProperty,Z_Param_TilePixelsHorizontal);
		P_GET_PROPERTY(FIntProperty,Z_Param_TilePixelsVertical);
		P_GET_UBOOL(Z_Param_AddMargin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWarpUtilsBlueprintLibrary::GeneratePFM(Z_Param_File,Z_Param_Out_StartLocation,Z_Param_Out_StartRotation,Z_Param_PFMOrigin,Z_Param_TilesHorizontal,Z_Param_TilesVertical,Z_Param_ColumnAngle,Z_Param_TileSizeHorizontal,Z_Param_TileSizeVertical,Z_Param_TilePixelsHorizontal,Z_Param_TilePixelsVertical,Z_Param_AddMargin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWarpUtilsBlueprintLibrary::execSavePFMEx)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_PROPERTY(FIntProperty,Z_Param_TexWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_TexHeight);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(bool,Z_Param_Out_TilesValidityFlags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWarpUtilsBlueprintLibrary::SavePFMEx(Z_Param_File,Z_Param_TexWidth,Z_Param_TexHeight,Z_Param_Out_Vertices,Z_Param_Out_TilesValidityFlags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWarpUtilsBlueprintLibrary::execSavePFM)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_PROPERTY(FIntProperty,Z_Param_TexWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_TexHeight);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWarpUtilsBlueprintLibrary::SavePFM(Z_Param_File,Z_Param_TexWidth,Z_Param_TexHeight,Z_Param_Out_Vertices);
		P_NATIVE_END;
	}
	void UWarpUtilsBlueprintLibrary::StaticRegisterNativesUWarpUtilsBlueprintLibrary()
	{
		UClass* Class = UWarpUtilsBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GeneratePFM", &UWarpUtilsBlueprintLibrary::execGeneratePFM },
			{ "GeneratePFMEx", &UWarpUtilsBlueprintLibrary::execGeneratePFMEx },
			{ "SavePFM", &UWarpUtilsBlueprintLibrary::execSavePFM },
			{ "SavePFMEx", &UWarpUtilsBlueprintLibrary::execSavePFMEx },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics
	{
		struct WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms
		{
			FString File;
			FVector StartLocation;
			FRotator StartRotation;
			const AActor* PFMOrigin;
			int32 TilesHorizontal;
			int32 TilesVertical;
			float ColumnAngle;
			float TileSizeHorizontal;
			float TileSizeVertical;
			int32 TilePixelsHorizontal;
			int32 TilePixelsVertical;
			bool AddMargin;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PFMOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PFMOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilesHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesVertical_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilesVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColumnAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSizeHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeVertical_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSizeVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilePixelsHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilePixelsHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilePixelsVertical_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilePixelsVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddMargin_MetaData[];
#endif
		static void NewProp_AddMargin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddMargin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_StartRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_StartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_StartRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_PFMOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_PFMOrigin = { "PFMOrigin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, PFMOrigin), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_PFMOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_PFMOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilesHorizontal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilesHorizontal = { "TilesHorizontal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, TilesHorizontal), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilesHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilesHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilesVertical_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilesVertical = { "TilesVertical", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, TilesVertical), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilesVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilesVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_ColumnAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_ColumnAngle = { "ColumnAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, ColumnAngle), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_ColumnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_ColumnAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TileSizeHorizontal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TileSizeHorizontal = { "TileSizeHorizontal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, TileSizeHorizontal), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TileSizeHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TileSizeHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TileSizeVertical_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TileSizeVertical = { "TileSizeVertical", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, TileSizeVertical), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TileSizeVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TileSizeVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilePixelsHorizontal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilePixelsHorizontal = { "TilePixelsHorizontal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, TilePixelsHorizontal), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilePixelsHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilePixelsHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilePixelsVertical_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilePixelsVertical = { "TilePixelsVertical", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms, TilePixelsVertical), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilePixelsVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilePixelsVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_AddMargin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_AddMargin_SetBit(void* Obj)
	{
		((WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms*)Obj)->AddMargin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_AddMargin = { "AddMargin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms), &Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_AddMargin_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_AddMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_AddMargin_MetaData)) };
	void Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms), &Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_StartRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_PFMOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilesHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilesVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_ColumnAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TileSizeHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TileSizeVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilePixelsHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_TilePixelsVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_AddMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous|Warp" },
		{ "Comment", "// Generate and save data to a PFM file\n" },
		{ "DisplayName", "Generate PFM" },
		{ "ModuleRelativePath", "Public/Blueprints/WarpUtilsBlueprintLibrary.h" },
		{ "ToolTip", "Generate and save data to a PFM file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarpUtilsBlueprintLibrary, nullptr, "GeneratePFM", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::WarpUtilsBlueprintLibrary_eventGeneratePFM_Parms), Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics
	{
		struct WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms
		{
			FString File;
			FVector StartLocation;
			FRotator StartRotation;
			const AActor* PFMOrigin;
			int32 TilesHorizontal;
			int32 TilesVertical;
			float ColumnAngle;
			float TileSizeHorizontal;
			float TileSizeVertical;
			int32 TilePixelsHorizontal;
			int32 TilePixelsVertical;
			bool AddMargin;
			TArray<bool> TilesValidityFlags;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PFMOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PFMOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilesHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesVertical_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilesVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColumnAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSizeHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeVertical_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSizeVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilePixelsHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilePixelsHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilePixelsVertical_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilePixelsVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddMargin_MetaData[];
#endif
		static void NewProp_AddMargin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AddMargin;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TilesValidityFlags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesValidityFlags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TilesValidityFlags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_StartLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_StartRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_StartRotation = { "StartRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, StartRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_StartRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_StartRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_PFMOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_PFMOrigin = { "PFMOrigin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, PFMOrigin), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_PFMOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_PFMOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesHorizontal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesHorizontal = { "TilesHorizontal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, TilesHorizontal), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesVertical_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesVertical = { "TilesVertical", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, TilesVertical), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_ColumnAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_ColumnAngle = { "ColumnAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, ColumnAngle), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_ColumnAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_ColumnAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TileSizeHorizontal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TileSizeHorizontal = { "TileSizeHorizontal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, TileSizeHorizontal), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TileSizeHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TileSizeHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TileSizeVertical_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TileSizeVertical = { "TileSizeVertical", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, TileSizeVertical), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TileSizeVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TileSizeVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilePixelsHorizontal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilePixelsHorizontal = { "TilePixelsHorizontal", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, TilePixelsHorizontal), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilePixelsHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilePixelsHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilePixelsVertical_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilePixelsVertical = { "TilePixelsVertical", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, TilePixelsVertical), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilePixelsVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilePixelsVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_AddMargin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_AddMargin_SetBit(void* Obj)
	{
		((WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms*)Obj)->AddMargin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_AddMargin = { "AddMargin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms), &Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_AddMargin_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_AddMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_AddMargin_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesValidityFlags_Inner = { "TilesValidityFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesValidityFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesValidityFlags = { "TilesValidityFlags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms, TilesValidityFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesValidityFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesValidityFlags_MetaData)) };
	void Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms), &Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_StartRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_PFMOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_ColumnAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TileSizeHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TileSizeVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilePixelsHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilePixelsVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_AddMargin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesValidityFlags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_TilesValidityFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous|Warp" },
		{ "Comment", "// Generate and save data to a PFM file. Additionally, we have an array of tiles validiy flags (false == all pixels of a tile are NaN)\n" },
		{ "DisplayName", "Generate PFM Extended" },
		{ "ModuleRelativePath", "Public/Blueprints/WarpUtilsBlueprintLibrary.h" },
		{ "ToolTip", "Generate and save data to a PFM file. Additionally, we have an array of tiles validiy flags (false == all pixels of a tile are NaN)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarpUtilsBlueprintLibrary, nullptr, "GeneratePFMEx", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::WarpUtilsBlueprintLibrary_eventGeneratePFMEx_Parms), Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics
	{
		struct WarpUtilsBlueprintLibrary_eventSavePFM_Parms
		{
			FString File;
			int32 TexWidth;
			int32 TexHeight;
			TArray<FVector> Vertices;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexWidth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TexWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexHeight_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TexHeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventSavePFM_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_TexWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_TexWidth = { "TexWidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventSavePFM_Parms, TexWidth), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_TexWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_TexWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_TexHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_TexHeight = { "TexHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventSavePFM_Parms, TexHeight), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_TexHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_TexHeight_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventSavePFM_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_Vertices_MetaData)) };
	void Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WarpUtilsBlueprintLibrary_eventSavePFM_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WarpUtilsBlueprintLibrary_eventSavePFM_Parms), &Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_TexWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_TexHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous|Warp" },
		{ "Comment", "// Save data to a PFM file\n" },
		{ "DisplayName", "Save PFM" },
		{ "ModuleRelativePath", "Public/Blueprints/WarpUtilsBlueprintLibrary.h" },
		{ "ToolTip", "Save data to a PFM file" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarpUtilsBlueprintLibrary, nullptr, "SavePFM", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::WarpUtilsBlueprintLibrary_eventSavePFM_Parms), Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics
	{
		struct WarpUtilsBlueprintLibrary_eventSavePFMEx_Parms
		{
			FString File;
			int32 TexWidth;
			int32 TexHeight;
			TArray<FVector> Vertices;
			TArray<bool> TilesValidityFlags;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexWidth_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TexWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexHeight_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TexHeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TilesValidityFlags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesValidityFlags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TilesValidityFlags;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventSavePFMEx_Parms, File), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TexWidth_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TexWidth = { "TexWidth", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventSavePFMEx_Parms, TexWidth), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TexWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TexWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TexHeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TexHeight = { "TexHeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventSavePFMEx_Parms, TexHeight), METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TexHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TexHeight_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventSavePFMEx_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TilesValidityFlags_Inner = { "TilesValidityFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TilesValidityFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TilesValidityFlags = { "TilesValidityFlags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WarpUtilsBlueprintLibrary_eventSavePFMEx_Parms, TilesValidityFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TilesValidityFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TilesValidityFlags_MetaData)) };
	void Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WarpUtilsBlueprintLibrary_eventSavePFMEx_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WarpUtilsBlueprintLibrary_eventSavePFMEx_Parms), &Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TexWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TexHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TilesValidityFlags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_TilesValidityFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous|Warp" },
		{ "Comment", "// Save data to a PFM file. Since the float NaN value is not available in blueprints, we provide a flags array (false == NaN)\n" },
		{ "DisplayName", "Save PFM Extended" },
		{ "ModuleRelativePath", "Public/Blueprints/WarpUtilsBlueprintLibrary.h" },
		{ "ToolTip", "Save data to a PFM file. Since the float NaN value is not available in blueprints, we provide a flags array (false == NaN)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWarpUtilsBlueprintLibrary, nullptr, "SavePFMEx", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::WarpUtilsBlueprintLibrary_eventSavePFMEx_Parms), Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarpUtilsBlueprintLibrary);
	UClass* Z_Construct_UClass_UWarpUtilsBlueprintLibrary_NoRegister()
	{
		return UWarpUtilsBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WarpUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFM, "GeneratePFM" }, // 699938565
		{ &Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_GeneratePFMEx, "GeneratePFMEx" }, // 3731048787
		{ &Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFM, "SavePFM" }, // 1236812322
		{ &Z_Construct_UFunction_UWarpUtilsBlueprintLibrary_SavePFMEx, "SavePFMEx" }, // 3014945113
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/WarpUtilsBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/Blueprints/WarpUtilsBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarpUtilsBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics::ClassParams = {
		&UWarpUtilsBlueprintLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWarpUtilsBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UWarpUtilsBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarpUtilsBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UWarpUtilsBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWarpUtilsBlueprintLibrary.OuterSingleton;
	}
	template<> WARPUTILS_API UClass* StaticClass<UWarpUtilsBlueprintLibrary>()
	{
		return UWarpUtilsBlueprintLibrary::StaticClass();
	}
	UWarpUtilsBlueprintLibrary::UWarpUtilsBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWarpUtilsBlueprintLibrary);
	UWarpUtilsBlueprintLibrary::~UWarpUtilsBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWarpUtilsBlueprintLibrary, UWarpUtilsBlueprintLibrary::StaticClass, TEXT("UWarpUtilsBlueprintLibrary"), &Z_Registration_Info_UClass_UWarpUtilsBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarpUtilsBlueprintLibrary), 1551093384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_855801577(TEXT("/Script/WarpUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WarpUtils_Source_WarpUtils_Public_Blueprints_WarpUtilsBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
