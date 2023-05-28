// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IO/LidarPointCloudFileIO_ASCII.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloudFileIO_ASCII() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloud_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudFileIO_ASCII();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode();
	LIDARPOINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LidarPointCloudImportSettings_ASCII_Columns;
class UScriptStruct* FLidarPointCloudImportSettings_ASCII_Columns::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LidarPointCloudImportSettings_ASCII_Columns.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LidarPointCloudImportSettings_ASCII_Columns.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("LidarPointCloudImportSettings_ASCII_Columns"));
	}
	return Z_Registration_Info_UScriptStruct_LidarPointCloudImportSettings_ASCII_Columns.OuterSingleton;
}
template<> LIDARPOINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<FLidarPointCloudImportSettings_ASCII_Columns>()
{
	return FLidarPointCloudImportSettings_ASCII_Columns::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocationX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocationY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LocationZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Red_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Red;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Green_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Green;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Blue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NormalX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NormalY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NormalZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Used to help expose the import settings to Blueprints */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Used to help expose the import settings to Blueprints" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLidarPointCloudImportSettings_ASCII_Columns>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationX_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** Index of a column containing Location X data */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Index of a column containing Location X data" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudImportSettings_ASCII_Columns, LocationX), METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationY_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** Index of a column containing Location Y data */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Index of a column containing Location Y data" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudImportSettings_ASCII_Columns, LocationY), METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationZ_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** Index of a column containing Location Z data */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Index of a column containing Location Z data" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationZ = { "LocationZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudImportSettings_ASCII_Columns, LocationZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Red_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** Index of a column containing Red channel. Set to -1 if not available */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Index of a column containing Red channel. Set to -1 if not available" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Red = { "Red", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudImportSettings_ASCII_Columns, Red), METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Red_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Red_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Green_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** Index of a column containing Green channel. Set to -1 if not available */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Index of a column containing Green channel. Set to -1 if not available" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Green = { "Green", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudImportSettings_ASCII_Columns, Green), METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Green_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Green_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Blue_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** Index of a column containing Blue channel. Set to -1 if not available */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Index of a column containing Blue channel. Set to -1 if not available" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Blue = { "Blue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudImportSettings_ASCII_Columns, Blue), METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Blue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Blue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** Index of a column containing Intensity channel. Set to -1 if not available */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Index of a column containing Intensity channel. Set to -1 if not available" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudImportSettings_ASCII_Columns, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalX_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** Index of a column containing Normal X data. Set to -1 if not available */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Index of a column containing Normal X data. Set to -1 if not available" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalX = { "NormalX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudImportSettings_ASCII_Columns, NormalX), METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalY_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** Index of a column containing Normal Y data. Set to -1 if not available */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Index of a column containing Normal Y data. Set to -1 if not available" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalY = { "NormalY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudImportSettings_ASCII_Columns, NormalY), METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalZ_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** Index of a column containing Normal Z data. Set to -1 if not available */" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Index of a column containing Normal Z data. Set to -1 if not available" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalZ = { "NormalZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudImportSettings_ASCII_Columns, NormalZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_LocationZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Red,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Green,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Blue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewProp_NormalZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		&NewStructOps,
		"LidarPointCloudImportSettings_ASCII_Columns",
		sizeof(FLidarPointCloudImportSettings_ASCII_Columns),
		alignof(FLidarPointCloudImportSettings_ASCII_Columns),
		Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns()
	{
		if (!Z_Registration_Info_UScriptStruct_LidarPointCloudImportSettings_ASCII_Columns.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LidarPointCloudImportSettings_ASCII_Columns.InnerSingleton, Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LidarPointCloudImportSettings_ASCII_Columns.InnerSingleton;
	}
	DEFINE_FUNCTION(ULidarPointCloudFileIO_ASCII::execCreatePointCloudFromFile)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_UBOOL(Z_Param_bUseAsync);
		P_GET_STRUCT(FVector2D,Z_Param_RGBRange);
		P_GET_STRUCT(FLidarPointCloudImportSettings_ASCII_Columns,Z_Param_Columns);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_ENUM_REF(ELidarPointCloudAsyncMode,Z_Param_Out_AsyncMode);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Progress);
		P_GET_OBJECT_REF(ULidarPointCloud,Z_Param_Out_PointCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULidarPointCloudFileIO_ASCII::CreatePointCloudFromFile(Z_Param_WorldContextObject,Z_Param_Filename,Z_Param_bUseAsync,Z_Param_RGBRange,Z_Param_Columns,Z_Param_LatentInfo,(ELidarPointCloudAsyncMode&)(Z_Param_Out_AsyncMode),Z_Param_Out_Progress,Z_Param_Out_PointCloud);
		P_NATIVE_END;
	}
	void ULidarPointCloudFileIO_ASCII::StaticRegisterNativesULidarPointCloudFileIO_ASCII()
	{
		UClass* Class = ULidarPointCloudFileIO_ASCII::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreatePointCloudFromFile", &ULidarPointCloudFileIO_ASCII::execCreatePointCloudFromFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics
	{
		struct LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms
		{
			UObject* WorldContextObject;
			FString Filename;
			bool bUseAsync;
			FVector2D RGBRange;
			FLidarPointCloudImportSettings_ASCII_Columns Columns;
			FLatentActionInfo LatentInfo;
			ELidarPointCloudAsyncMode AsyncMode;
			float Progress;
			ULidarPointCloud* PointCloud;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_bUseAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsync;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RGBRange;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Columns;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AsyncMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AsyncMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointCloud;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_bUseAsync_SetBit(void* Obj)
	{
		((LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms*)Obj)->bUseAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_bUseAsync = { "bUseAsync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms), &Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_bUseAsync_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_RGBRange = { "RGBRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms, RGBRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_Columns = { "Columns", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms, Columns), Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns, METADATA_PARAMS(nullptr, 0) }; // 2045309446
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_AsyncMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_AsyncMode = { "AsyncMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms, AsyncMode), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode, METADATA_PARAMS(nullptr, 0) }; // 2848692903
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_PointCloud = { "PointCloud", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms, PointCloud), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_bUseAsync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_RGBRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_Columns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_AsyncMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_AsyncMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::NewProp_PointCloud,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "DisplayName", "Create Lidar Point Cloud From File (ASCII)" },
		{ "ExpandEnumAsExecs", "AsyncMode" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudFileIO_ASCII, nullptr, "CreatePointCloudFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::LidarPointCloudFileIO_ASCII_eventCreatePointCloudFromFile_Parms), Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULidarPointCloudFileIO_ASCII);
	UClass* Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_NoRegister()
	{
		return ULidarPointCloudFileIO_ASCII::StaticClass();
	}
	struct Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULidarPointCloudFileIO_ASCII_CreatePointCloudFromFile, "CreatePointCloudFromFile" }, // 3658018918
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Inherits from UBlueprintFunctionLibrary to allow exposure to Blueprint Library in the same class.\n */" },
		{ "IncludePath", "IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ModuleRelativePath", "Public/IO/LidarPointCloudFileIO_ASCII.h" },
		{ "ToolTip", "Inherits from UBlueprintFunctionLibrary to allow exposure to Blueprint Library in the same class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULidarPointCloudFileIO_ASCII>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics::ClassParams = {
		&ULidarPointCloudFileIO_ASCII::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULidarPointCloudFileIO_ASCII()
	{
		if (!Z_Registration_Info_UClass_ULidarPointCloudFileIO_ASCII.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULidarPointCloudFileIO_ASCII.OuterSingleton, Z_Construct_UClass_ULidarPointCloudFileIO_ASCII_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULidarPointCloudFileIO_ASCII.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<ULidarPointCloudFileIO_ASCII>()
	{
		return ULidarPointCloudFileIO_ASCII::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULidarPointCloudFileIO_ASCII);
	ULidarPointCloudFileIO_ASCII::~ULidarPointCloudFileIO_ASCII() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_Statics::ScriptStructInfo[] = {
		{ FLidarPointCloudImportSettings_ASCII_Columns::StaticStruct, Z_Construct_UScriptStruct_FLidarPointCloudImportSettings_ASCII_Columns_Statics::NewStructOps, TEXT("LidarPointCloudImportSettings_ASCII_Columns"), &Z_Registration_Info_UScriptStruct_LidarPointCloudImportSettings_ASCII_Columns, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLidarPointCloudImportSettings_ASCII_Columns), 2045309446U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULidarPointCloudFileIO_ASCII, ULidarPointCloudFileIO_ASCII::StaticClass, TEXT("ULidarPointCloudFileIO_ASCII"), &Z_Registration_Info_UClass_ULidarPointCloudFileIO_ASCII, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULidarPointCloudFileIO_ASCII), 475154292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_3125231145(TEXT("/Script/LidarPointCloudRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_IO_LidarPointCloudFileIO_ASCII_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
