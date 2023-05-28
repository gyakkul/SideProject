// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TileMapBlueprintLibrary.h"
#include "PaperTileLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileMapBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UTileMapBlueprintLibrary();
	PAPER2D_API UClass* Z_Construct_UClass_UTileMapBlueprintLibrary_NoRegister();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperTileInfo();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	DEFINE_FUNCTION(UTileMapBlueprintLibrary::execMakeTile)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TileIndex);
		P_GET_OBJECT(UPaperTileSet,Z_Param_TileSet);
		P_GET_UBOOL(Z_Param_bFlipH);
		P_GET_UBOOL(Z_Param_bFlipV);
		P_GET_UBOOL(Z_Param_bFlipD);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPaperTileInfo*)Z_Param__Result=UTileMapBlueprintLibrary::MakeTile(Z_Param_TileIndex,Z_Param_TileSet,Z_Param_bFlipH,Z_Param_bFlipV,Z_Param_bFlipD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileMapBlueprintLibrary::execBreakTile)
	{
		P_GET_STRUCT(FPaperTileInfo,Z_Param_Tile);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TileIndex);
		P_GET_OBJECT_REF(UPaperTileSet,Z_Param_Out_TileSet);
		P_GET_UBOOL_REF(Z_Param_Out_bFlipH);
		P_GET_UBOOL_REF(Z_Param_Out_bFlipV);
		P_GET_UBOOL_REF(Z_Param_Out_bFlipD);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTileMapBlueprintLibrary::BreakTile(Z_Param_Tile,Z_Param_Out_TileIndex,Z_Param_Out_TileSet,Z_Param_Out_bFlipH,Z_Param_Out_bFlipV,Z_Param_Out_bFlipD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileMapBlueprintLibrary::execGetTileTransform)
	{
		P_GET_STRUCT(FPaperTileInfo,Z_Param_Tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UTileMapBlueprintLibrary::GetTileTransform(Z_Param_Tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileMapBlueprintLibrary::execGetTileUserData)
	{
		P_GET_STRUCT(FPaperTileInfo,Z_Param_Tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UTileMapBlueprintLibrary::GetTileUserData(Z_Param_Tile);
		P_NATIVE_END;
	}
	void UTileMapBlueprintLibrary::StaticRegisterNativesUTileMapBlueprintLibrary()
	{
		UClass* Class = UTileMapBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakTile", &UTileMapBlueprintLibrary::execBreakTile },
			{ "GetTileTransform", &UTileMapBlueprintLibrary::execGetTileTransform },
			{ "GetTileUserData", &UTileMapBlueprintLibrary::execGetTileUserData },
			{ "MakeTile", &UTileMapBlueprintLibrary::execMakeTile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics
	{
		struct TileMapBlueprintLibrary_eventBreakTile_Parms
		{
			FPaperTileInfo Tile;
			int32 TileIndex;
			UPaperTileSet* TileSet;
			bool bFlipH;
			bool bFlipV;
			bool bFlipD;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileSet;
		static void NewProp_bFlipH_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipH;
		static void NewProp_bFlipV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipV;
		static void NewProp_bFlipD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileMapBlueprintLibrary_eventBreakTile_Parms, Tile), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) }; // 3500735014
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileMapBlueprintLibrary_eventBreakTile_Parms, TileIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileMapBlueprintLibrary_eventBreakTile_Parms, TileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipH_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventBreakTile_Parms*)Obj)->bFlipH = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipH = { "bFlipH", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventBreakTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipH_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipV_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventBreakTile_Parms*)Obj)->bFlipV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipV = { "bFlipV", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventBreakTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipV_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipD_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventBreakTile_Parms*)Obj)->bFlipD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipD = { "bFlipD", nullptr, (EPropertyFlags)0x0010040000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventBreakTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipD_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_Tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_TileIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_TileSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::NewProp_bFlipD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Sprite" },
		{ "Comment", "// Breaks out the information for a tile\n" },
		{ "ModuleRelativePath", "Classes/TileMapBlueprintLibrary.h" },
		{ "ToolTip", "Breaks out the information for a tile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileMapBlueprintLibrary, nullptr, "BreakTile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::TileMapBlueprintLibrary_eventBreakTile_Parms), Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics
	{
		struct TileMapBlueprintLibrary_eventGetTileTransform_Parms
		{
			FPaperTileInfo Tile;
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileMapBlueprintLibrary_eventGetTileTransform_Parms, Tile), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) }; // 3500735014
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileMapBlueprintLibrary_eventGetTileTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::NewProp_Tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the transform for a tile\n" },
		{ "ModuleRelativePath", "Classes/TileMapBlueprintLibrary.h" },
		{ "ToolTip", "Returns the transform for a tile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileMapBlueprintLibrary, nullptr, "GetTileTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::TileMapBlueprintLibrary_eventGetTileTransform_Parms), Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics
	{
		struct TileMapBlueprintLibrary_eventGetTileUserData_Parms
		{
			FPaperTileInfo Tile;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileMapBlueprintLibrary_eventGetTileUserData_Parms, Tile), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) }; // 3500735014
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileMapBlueprintLibrary_eventGetTileUserData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::NewProp_Tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the user data name for the specified tile, or NAME_None if there is no user-specified data\n" },
		{ "ModuleRelativePath", "Classes/TileMapBlueprintLibrary.h" },
		{ "ToolTip", "Returns the user data name for the specified tile, or NAME_None if there is no user-specified data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileMapBlueprintLibrary, nullptr, "GetTileUserData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::TileMapBlueprintLibrary_eventGetTileUserData_Parms), Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics
	{
		struct TileMapBlueprintLibrary_eventMakeTile_Parms
		{
			int32 TileIndex;
			UPaperTileSet* TileSet;
			bool bFlipH;
			bool bFlipV;
			bool bFlipD;
			FPaperTileInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileSet;
		static void NewProp_bFlipH_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipH;
		static void NewProp_bFlipV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipV;
		static void NewProp_bFlipD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipD;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_TileIndex = { "TileIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileMapBlueprintLibrary_eventMakeTile_Parms, TileIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_TileSet = { "TileSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileMapBlueprintLibrary_eventMakeTile_Parms, TileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipH_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventMakeTile_Parms*)Obj)->bFlipH = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipH = { "bFlipH", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventMakeTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipH_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipV_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventMakeTile_Parms*)Obj)->bFlipV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipV = { "bFlipV", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventMakeTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipV_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipD_SetBit(void* Obj)
	{
		((TileMapBlueprintLibrary_eventMakeTile_Parms*)Obj)->bFlipD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipD = { "bFlipD", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TileMapBlueprintLibrary_eventMakeTile_Parms), &Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipD_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileMapBlueprintLibrary_eventMakeTile_Parms, ReturnValue), Z_Construct_UScriptStruct_FPaperTileInfo, METADATA_PARAMS(nullptr, 0) }; // 3500735014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_TileIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_TileSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipH,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_bFlipD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Sprite" },
		{ "Comment", "// Creates a tile from the specified information\n" },
		{ "ModuleRelativePath", "Classes/TileMapBlueprintLibrary.h" },
		{ "ToolTip", "Creates a tile from the specified information" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileMapBlueprintLibrary, nullptr, "MakeTile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::TileMapBlueprintLibrary_eventMakeTile_Parms), Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileMapBlueprintLibrary);
	UClass* Z_Construct_UClass_UTileMapBlueprintLibrary_NoRegister()
	{
		return UTileMapBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTileMapBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTileMapBlueprintLibrary_BreakTile, "BreakTile" }, // 214657315
		{ &Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileTransform, "GetTileTransform" }, // 2919675153
		{ &Z_Construct_UFunction_UTileMapBlueprintLibrary_GetTileUserData, "GetTileUserData" }, // 1754957473
		{ &Z_Construct_UFunction_UTileMapBlueprintLibrary_MakeTile, "MakeTile" }, // 1636129473
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A collection of utility methods for working with tile map components\n *\n * @see UPaperTileMap, UPaperTileMapComponent\n */" },
		{ "IncludePath", "TileMapBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/TileMapBlueprintLibrary.h" },
		{ "ScriptName", "TileMapLibrary" },
		{ "ToolTip", "A collection of utility methods for working with tile map components\n\n@see UPaperTileMap, UPaperTileMapComponent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileMapBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::ClassParams = {
		&UTileMapBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileMapBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UTileMapBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileMapBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UTileMapBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileMapBlueprintLibrary.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<UTileMapBlueprintLibrary>()
	{
		return UTileMapBlueprintLibrary::StaticClass();
	}
	UTileMapBlueprintLibrary::UTileMapBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileMapBlueprintLibrary);
	UTileMapBlueprintLibrary::~UTileMapBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileMapBlueprintLibrary, UTileMapBlueprintLibrary::StaticClass, TEXT("UTileMapBlueprintLibrary"), &Z_Registration_Info_UClass_UTileMapBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileMapBlueprintLibrary), 2442227539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_232154186(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_TileMapBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
