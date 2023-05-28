// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTexture() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeVirtualTexture::execGetPageTableSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPageTableSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeVirtualTexture::execGetSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeVirtualTexture::execGetTileBorderSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileBorderSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeVirtualTexture::execGetTileSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URuntimeVirtualTexture::execGetTileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTileCount();
		P_NATIVE_END;
	}
	void URuntimeVirtualTexture::StaticRegisterNativesURuntimeVirtualTexture()
	{
		UClass* Class = URuntimeVirtualTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPageTableSize", &URuntimeVirtualTexture::execGetPageTableSize },
			{ "GetSize", &URuntimeVirtualTexture::execGetSize },
			{ "GetTileBorderSize", &URuntimeVirtualTexture::execGetTileBorderSize },
			{ "GetTileCount", &URuntimeVirtualTexture::execGetTileCount },
			{ "GetTileSize", &URuntimeVirtualTexture::execGetTileSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics
	{
		struct RuntimeVirtualTexture_eventGetPageTableSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeVirtualTexture_eventGetPageTableSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Public getter for virtual texture page table size. This is only different from GetTileCount() when using an adaptive page table.  */" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Public getter for virtual texture page table size. This is only different from GetTileCount() when using an adaptive page table." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVirtualTexture, nullptr, "GetPageTableSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::RuntimeVirtualTexture_eventGetPageTableSize_Parms), Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics
	{
		struct RuntimeVirtualTexture_eventGetSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeVirtualTexture_eventGetSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Size" },
		{ "Comment", "/** Public getter for virtual texture size. This is derived from the TileCount and TileSize. */" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Public getter for virtual texture size. This is derived from the TileCount and TileSize." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVirtualTexture, nullptr, "GetSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::RuntimeVirtualTexture_eventGetSize_Parms), Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeVirtualTexture_GetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeVirtualTexture_GetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics
	{
		struct RuntimeVirtualTexture_eventGetTileBorderSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeVirtualTexture_eventGetTileBorderSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Public getter for virtual texture tile border size */" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Public getter for virtual texture tile border size" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVirtualTexture, nullptr, "GetTileBorderSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::RuntimeVirtualTexture_eventGetTileBorderSize_Parms), Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics
	{
		struct RuntimeVirtualTexture_eventGetTileCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeVirtualTexture_eventGetTileCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Public getter for virtual texture tile count */" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Public getter for virtual texture tile count" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVirtualTexture, nullptr, "GetTileCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::RuntimeVirtualTexture_eventGetTileCount_Parms), Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics
	{
		struct RuntimeVirtualTexture_eventGetTileSize_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeVirtualTexture_eventGetTileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Public getter for virtual texture tile size */" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Public getter for virtual texture tile size" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVirtualTexture, nullptr, "GetTileSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::RuntimeVirtualTexture_eventGetTileSize_Parms), Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeVirtualTexture);
	UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister()
	{
		return URuntimeVirtualTexture::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeVirtualTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileBorderSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileBorderSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompressTextures_MetaData[];
#endif
		static void NewProp_bCompressTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompressTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLowQualityCompression_MetaData[];
#endif
		static void NewProp_bUseLowQualityCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLowQualityCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearTextures_MetaData[];
#endif
		static void NewProp_bClearTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSinglePhysicalSpace_MetaData[];
#endif
		static void NewProp_bSinglePhysicalSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSinglePhysicalSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrivateSpace_MetaData[];
#endif
		static void NewProp_bPrivateSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrivateSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdaptive_MetaData[];
#endif
		static void NewProp_bAdaptive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdaptive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContinuousUpdate_MetaData[];
#endif
		static void NewProp_bContinuousUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContinuousUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveLowMips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoveLowMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StreamingTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeVirtualTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeVirtualTexture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeVirtualTexture_GetPageTableSize, "GetPageTableSize" }, // 4026656696
		{ &Z_Construct_UFunction_URuntimeVirtualTexture_GetSize, "GetSize" }, // 3262466476
		{ &Z_Construct_UFunction_URuntimeVirtualTexture_GetTileBorderSize, "GetTileBorderSize" }, // 3752186884
		{ &Z_Construct_UFunction_URuntimeVirtualTexture_GetTileCount, "GetTileCount" }, // 3386066966
		{ &Z_Construct_UFunction_URuntimeVirtualTexture_GetTileSize, "GetTileSize" }, // 3174247220
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Runtime virtual texture UObject */" },
		{ "IncludePath", "VT/RuntimeVirtualTexture.h" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Runtime virtual texture UObject" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileCount_MetaData[] = {
		{ "BlueprintGetter", "GetTileCount" },
		{ "Category", "Size" },
		{ "Comment", "/** \n\x09 * Size of virtual texture in tiles. (Actual values increase in powers of 2).\n\x09 * This is applied to the largest axis in world space and the size for any shorter axis is chosen to maintain aspect ratio.  \n\x09 */" },
		{ "DisplayName", "Size of the virtual texture in tiles" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Size of virtual texture in tiles. (Actual values increase in powers of 2).\nThis is applied to the largest axis in world space and the size for any shorter axis is chosen to maintain aspect ratio." },
		{ "UIMax", "12" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileCount = { "TileCount", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTexture, TileCount), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileSize_MetaData[] = {
		{ "BlueprintGetter", "GetTileSize" },
		{ "Category", "Size" },
		{ "Comment", "/** Page tile size. (Actual values increase in powers of 2) */" },
		{ "DisplayName", "Size of each virtual texture tile" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Page tile size. (Actual values increase in powers of 2)" },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTexture, TileSize), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileBorderSize_MetaData[] = {
		{ "BlueprintGetter", "GetTileBorderSize" },
		{ "Category", "Size" },
		{ "Comment", "/** Page tile border size divided by 2 (Actual values increase in multiples of 2). Higher values trigger a higher anisotropic sampling level. */" },
		{ "DisplayName", "Border padding for each virtual texture tile" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Page tile border size divided by 2 (Actual values increase in multiples of 2). Higher values trigger a higher anisotropic sampling level." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileBorderSize = { "TileBorderSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTexture, TileBorderSize), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileBorderSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileBorderSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Contents of virtual texture. */" },
		{ "DisplayName", "Virtual texture content" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Contents of virtual texture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0020090000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTexture, MaterialType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMaterialType, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType_MetaData)) }; // 993014544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Enable storing the virtual texture in GPU supported compression formats. Using uncompressed is only recommended for debugging and quality comparisons. */" },
		{ "DisplayName", "Enable texture compression" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Enable storing the virtual texture in GPU supported compression formats. Using uncompressed is only recommended for debugging and quality comparisons." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures_SetBit(void* Obj)
	{
		((URuntimeVirtualTexture*)Obj)->bCompressTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures = { "bCompressTextures", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTexture), &Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bUseLowQualityCompression_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09* Use low quality textures (RGB565/RGB555A1) to replace runtime compression\n\x09*/" },
		{ "DisplayName", "Use Low Quality Compression" },
		{ "editcondition", "MaterialType == ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Roughness && bCompressTextures == true" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Use low quality textures (RGB565/RGB555A1) to replace runtime compression" },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bUseLowQualityCompression_SetBit(void* Obj)
	{
		((URuntimeVirtualTexture*)Obj)->bUseLowQualityCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bUseLowQualityCompression = { "bUseLowQualityCompression", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTexture), &Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bUseLowQualityCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bUseLowQualityCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bUseLowQualityCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bClearTextures_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Enable clear before rendering a page of the virtual texture. Disabling this can be an optimization if you know that the texture will always be fully covered by rendering.  */" },
		{ "DisplayName", "Enable clear before render" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Enable clear before rendering a page of the virtual texture. Disabling this can be an optimization if you know that the texture will always be fully covered by rendering." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bClearTextures_SetBit(void* Obj)
	{
		((URuntimeVirtualTexture*)Obj)->bClearTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bClearTextures = { "bClearTextures", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTexture), &Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bClearTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bClearTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bClearTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bSinglePhysicalSpace_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Enable page table channel packing. This reduces page table memory and update cost but can reduce the ability to share physical memory with other virtual textures.  */" },
		{ "DisplayName", "Enable packed page table" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Enable page table channel packing. This reduces page table memory and update cost but can reduce the ability to share physical memory with other virtual textures." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bSinglePhysicalSpace_SetBit(void* Obj)
	{
		((URuntimeVirtualTexture*)Obj)->bSinglePhysicalSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bSinglePhysicalSpace = { "bSinglePhysicalSpace", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTexture), &Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bSinglePhysicalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bSinglePhysicalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bSinglePhysicalSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bPrivateSpace_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Enable private page table allocation. This can reduce total page table memory allocation but can also reduce the total number of virtual textures supported. */" },
		{ "DisplayName", "Enable private page table" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Enable private page table allocation. This can reduce total page table memory allocation but can also reduce the total number of virtual textures supported." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bPrivateSpace_SetBit(void* Obj)
	{
		((URuntimeVirtualTexture*)Obj)->bPrivateSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bPrivateSpace = { "bPrivateSpace", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTexture), &Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bPrivateSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bPrivateSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bPrivateSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bAdaptive_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Enable sparse adaptive page tables. This supports larger tile counts but adds an indirection cost when sampling the virtual texture. It is recommended only when very large virtual resolutions are necessary. */" },
		{ "DisplayName", "Enable adaptive page table" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Enable sparse adaptive page tables. This supports larger tile counts but adds an indirection cost when sampling the virtual texture. It is recommended only when very large virtual resolutions are necessary." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bAdaptive_SetBit(void* Obj)
	{
		((URuntimeVirtualTexture*)Obj)->bAdaptive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bAdaptive = { "bAdaptive", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTexture), &Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bAdaptive_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bAdaptive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bAdaptive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bContinuousUpdate_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Enable continuous update of the virtual texture pages. This round-robin updates already mapped pages and can help fix pages that are mapped before dependent textures are fully streamed in.  */" },
		{ "DisplayName", "Enable continuous page updates" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Enable continuous update of the virtual texture pages. This round-robin updates already mapped pages and can help fix pages that are mapped before dependent textures are fully streamed in." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bContinuousUpdate_SetBit(void* Obj)
	{
		((URuntimeVirtualTexture*)Obj)->bContinuousUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bContinuousUpdate = { "bContinuousUpdate", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTexture), &Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bContinuousUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bContinuousUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bContinuousUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_RemoveLowMips_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Number of low mips to cut from the virtual texture. This can reduce peak virtual texture update cost but will also increase the probability of mip shimmering. */" },
		{ "DisplayName", "Number of low mips to remove from the virtual texture" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Number of low mips to cut from the virtual texture. This can reduce peak virtual texture update cost but will also increase the probability of mip shimmering." },
		{ "UIMax", "6" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_RemoveLowMips = { "RemoveLowMips", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTexture, RemoveLowMips), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_RemoveLowMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_RemoveLowMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_LODGroup_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Texture group this texture belongs to */" },
		{ "DisplayName", "Texture Group" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Texture group this texture belongs to" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0020090000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTexture, LODGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_LODGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_LODGroup_MetaData)) }; // 3720270347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_Size_MetaData[] = {
		{ "Comment", "/** Deprecated size of virtual texture. */" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Deprecated size of virtual texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTexture, Size_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_StreamingTexture_MetaData[] = {
		{ "Comment", "/** Deprecated texture object containing streamed low mips. */" },
		{ "ModuleRelativePath", "Classes/VT/RuntimeVirtualTexture.h" },
		{ "ToolTip", "Deprecated texture object containing streamed low mips." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_StreamingTexture = { "StreamingTexture", nullptr, (EPropertyFlags)0x0024080020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTexture, StreamingTexture_DEPRECATED), Z_Construct_UClass_URuntimeVirtualTextureStreamingProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_StreamingTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_StreamingTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeVirtualTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_TileBorderSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_MaterialType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bCompressTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bUseLowQualityCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bClearTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bSinglePhysicalSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bPrivateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bAdaptive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_bContinuousUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_RemoveLowMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_LODGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTexture_Statics::NewProp_StreamingTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeVirtualTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTexture_Statics::ClassParams = {
		&URuntimeVirtualTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeVirtualTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeVirtualTexture()
	{
		if (!Z_Registration_Info_UClass_URuntimeVirtualTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeVirtualTexture.OuterSingleton, Z_Construct_UClass_URuntimeVirtualTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeVirtualTexture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URuntimeVirtualTexture>()
	{
		return URuntimeVirtualTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTexture);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeVirtualTexture, URuntimeVirtualTexture::StaticClass, TEXT("URuntimeVirtualTexture"), &Z_Registration_Info_UClass_URuntimeVirtualTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeVirtualTexture), 732135647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_3134769704(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_RuntimeVirtualTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
