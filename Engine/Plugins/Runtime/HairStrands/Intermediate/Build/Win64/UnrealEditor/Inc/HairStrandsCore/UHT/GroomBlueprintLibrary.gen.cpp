// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBindingAsset_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBlueprintLibrary();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	DEFINE_FUNCTION(UGroomBlueprintLibrary::execCreateNewGeometryCacheGroomBindingAsset)
	{
		P_GET_OBJECT(UGroomAsset,Z_Param_GroomAsset);
		P_GET_OBJECT(UGeometryCache,Z_Param_GeometryCache);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumInterpolationPoints);
		P_GET_OBJECT(UGeometryCache,Z_Param_SourceGeometryCacheForTransfer);
		P_GET_PROPERTY(FIntProperty,Z_Param_MatchingSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGroomBindingAsset**)Z_Param__Result=UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAsset(Z_Param_GroomAsset,Z_Param_GeometryCache,Z_Param_NumInterpolationPoints,Z_Param_SourceGeometryCacheForTransfer,Z_Param_MatchingSection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBlueprintLibrary::execCreateNewGeometryCacheGroomBindingAssetWithPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DesiredPackagePath);
		P_GET_OBJECT(UGroomAsset,Z_Param_GroomAsset);
		P_GET_OBJECT(UGeometryCache,Z_Param_GeometryCache);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumInterpolationPoints);
		P_GET_OBJECT(UGeometryCache,Z_Param_SourceGeometryCacheForTransfer);
		P_GET_PROPERTY(FIntProperty,Z_Param_MatchingSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGroomBindingAsset**)Z_Param__Result=UGroomBlueprintLibrary::CreateNewGeometryCacheGroomBindingAssetWithPath(Z_Param_DesiredPackagePath,Z_Param_GroomAsset,Z_Param_GeometryCache,Z_Param_NumInterpolationPoints,Z_Param_SourceGeometryCacheForTransfer,Z_Param_MatchingSection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBlueprintLibrary::execCreateNewGroomBindingAsset)
	{
		P_GET_OBJECT(UGroomAsset,Z_Param_InGroomAsset);
		P_GET_OBJECT(USkeletalMesh,Z_Param_InSkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumInterpolationPoints);
		P_GET_OBJECT(USkeletalMesh,Z_Param_InSourceSkeletalMeshForTransfer);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMatchingSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGroomBindingAsset**)Z_Param__Result=UGroomBlueprintLibrary::CreateNewGroomBindingAsset(Z_Param_InGroomAsset,Z_Param_InSkeletalMesh,Z_Param_InNumInterpolationPoints,Z_Param_InSourceSkeletalMeshForTransfer,Z_Param_InMatchingSection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGroomBlueprintLibrary::execCreateNewGroomBindingAssetWithPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDesiredPackagePath);
		P_GET_OBJECT(UGroomAsset,Z_Param_InGroomAsset);
		P_GET_OBJECT(USkeletalMesh,Z_Param_InSkeletalMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_InNumInterpolationPoints);
		P_GET_OBJECT(USkeletalMesh,Z_Param_InSourceSkeletalMeshForTransfer);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMatchingSection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGroomBindingAsset**)Z_Param__Result=UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(Z_Param_InDesiredPackagePath,Z_Param_InGroomAsset,Z_Param_InSkeletalMesh,Z_Param_InNumInterpolationPoints,Z_Param_InSourceSkeletalMeshForTransfer,Z_Param_InMatchingSection);
		P_NATIVE_END;
	}
	void UGroomBlueprintLibrary::StaticRegisterNativesUGroomBlueprintLibrary()
	{
		UClass* Class = UGroomBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewGeometryCacheGroomBindingAsset", &UGroomBlueprintLibrary::execCreateNewGeometryCacheGroomBindingAsset },
			{ "CreateNewGeometryCacheGroomBindingAssetWithPath", &UGroomBlueprintLibrary::execCreateNewGeometryCacheGroomBindingAssetWithPath },
			{ "CreateNewGroomBindingAsset", &UGroomBlueprintLibrary::execCreateNewGroomBindingAsset },
			{ "CreateNewGroomBindingAssetWithPath", &UGroomBlueprintLibrary::execCreateNewGroomBindingAssetWithPath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics
	{
		struct GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms
		{
			UGroomAsset* GroomAsset;
			UGeometryCache* GeometryCache;
			int32 NumInterpolationPoints;
			UGeometryCache* SourceGeometryCacheForTransfer;
			int32 MatchingSection;
			UGroomBindingAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCache;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInterpolationPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceGeometryCacheForTransfer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MatchingSection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_GroomAsset = { "GroomAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, GroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, GeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_NumInterpolationPoints = { "NumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, NumInterpolationPoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_SourceGeometryCacheForTransfer = { "SourceGeometryCacheForTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, SourceGeometryCacheForTransfer), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_MatchingSection = { "MatchingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, MatchingSection), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms, ReturnValue), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_GroomAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_GeometryCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_NumInterpolationPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_SourceGeometryCacheForTransfer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_MatchingSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/**\n\x09 * Create a new groom binding asset within the contents space of the project. The asset name will be auto generated based on the groom asset name and the skeletal asset name\n\x09 * @param GroomAsset Groom asset for binding\n\x09 * @param SkeletalMesh Skeletal mesh on which the groom should be bound to\n\x09 * @param NumInterpolationPoints (Optional) Number of point used for RBF constraint\n\x09 * @param SourceSkeletalMeshForTransfer  (Optional) Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom\n\x09 */" },
		{ "CPP_Default_MatchingSection", "0" },
		{ "CPP_Default_NumInterpolationPoints", "100" },
		{ "CPP_Default_SourceGeometryCacheForTransfer", "None" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ToolTip", "Create a new groom binding asset within the contents space of the project. The asset name will be auto generated based on the groom asset name and the skeletal asset name\n@param GroomAsset Groom asset for binding\n@param SkeletalMesh Skeletal mesh on which the groom should be bound to\n@param NumInterpolationPoints (Optional) Number of point used for RBF constraint\n@param SourceSkeletalMeshForTransfer  (Optional) Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBlueprintLibrary, nullptr, "CreateNewGeometryCacheGroomBindingAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAsset_Parms), Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics
	{
		struct GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms
		{
			FString DesiredPackagePath;
			UGroomAsset* GroomAsset;
			UGeometryCache* GeometryCache;
			int32 NumInterpolationPoints;
			UGeometryCache* SourceGeometryCacheForTransfer;
			int32 MatchingSection;
			UGroomBindingAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredPackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DesiredPackagePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GroomAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCache;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInterpolationPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceGeometryCacheForTransfer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MatchingSection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_DesiredPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_DesiredPackagePath = { "DesiredPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, DesiredPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_DesiredPackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_DesiredPackagePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_GroomAsset = { "GroomAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, GroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, GeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_NumInterpolationPoints = { "NumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, NumInterpolationPoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_SourceGeometryCacheForTransfer = { "SourceGeometryCacheForTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, SourceGeometryCacheForTransfer), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_MatchingSection = { "MatchingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, MatchingSection), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms, ReturnValue), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_DesiredPackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_GroomAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_GeometryCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_NumInterpolationPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_SourceGeometryCacheForTransfer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_MatchingSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/**\n\x09 * Create a new groom binding asset within the contents space of the project.\n\x09 * @param DesiredPackagePath The package path to use for the groom binding\n\x09 * @param GroomAsset Groom asset for binding\n\x09 * @param SkeletalMesh Skeletal mesh on which the groom should be bound to\n\x09 * @param NumInterpolationPoints Number of point used for RBF constraint (if used)\n\x09 * @param SourceSkeletalMeshForTransfer Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom\n\x09 */" },
		{ "CPP_Default_MatchingSection", "0" },
		{ "CPP_Default_NumInterpolationPoints", "100" },
		{ "CPP_Default_SourceGeometryCacheForTransfer", "None" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ToolTip", "Create a new groom binding asset within the contents space of the project.\n@param DesiredPackagePath The package path to use for the groom binding\n@param GroomAsset Groom asset for binding\n@param SkeletalMesh Skeletal mesh on which the groom should be bound to\n@param NumInterpolationPoints Number of point used for RBF constraint (if used)\n@param SourceSkeletalMeshForTransfer Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBlueprintLibrary, nullptr, "CreateNewGeometryCacheGroomBindingAssetWithPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::GroomBlueprintLibrary_eventCreateNewGeometryCacheGroomBindingAssetWithPath_Parms), Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics
	{
		struct GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms
		{
			UGroomAsset* InGroomAsset;
			USkeletalMesh* InSkeletalMesh;
			int32 InNumInterpolationPoints;
			USkeletalMesh* InSourceSkeletalMeshForTransfer;
			int32 InMatchingSection;
			UGroomBindingAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGroomAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumInterpolationPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSourceSkeletalMeshForTransfer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMatchingSection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InGroomAsset = { "InGroomAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, InGroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InNumInterpolationPoints = { "InNumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, InNumInterpolationPoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InSourceSkeletalMeshForTransfer = { "InSourceSkeletalMeshForTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, InSourceSkeletalMeshForTransfer), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InMatchingSection = { "InMatchingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, InMatchingSection), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms, ReturnValue), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InGroomAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InNumInterpolationPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InSourceSkeletalMeshForTransfer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_InMatchingSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/**\n\x09 * Create a new groom binding asset within the contents space of the project. The asset name will be auto generated based on the groom asset name and the skeletal asset name\n\x09 * @param InGroomAsset Groom asset for binding\n\x09 * @param InSkeletalMesh Skeletal mesh on which the groom should be bound to\n\x09 * @param InNumInterpolationPoints (Optional) Number of point used for RBF constraint\n\x09 * @param InSourceSkeletalMeshForTransfer  (Optional) Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom\n\x09 */" },
		{ "CPP_Default_InMatchingSection", "0" },
		{ "CPP_Default_InNumInterpolationPoints", "100" },
		{ "CPP_Default_InSourceSkeletalMeshForTransfer", "None" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ToolTip", "Create a new groom binding asset within the contents space of the project. The asset name will be auto generated based on the groom asset name and the skeletal asset name\n@param InGroomAsset Groom asset for binding\n@param InSkeletalMesh Skeletal mesh on which the groom should be bound to\n@param InNumInterpolationPoints (Optional) Number of point used for RBF constraint\n@param InSourceSkeletalMeshForTransfer  (Optional) Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBlueprintLibrary, nullptr, "CreateNewGroomBindingAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::GroomBlueprintLibrary_eventCreateNewGroomBindingAsset_Parms), Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics
	{
		struct GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms
		{
			FString InDesiredPackagePath;
			UGroomAsset* InGroomAsset;
			USkeletalMesh* InSkeletalMesh;
			int32 InNumInterpolationPoints;
			USkeletalMesh* InSourceSkeletalMeshForTransfer;
			int32 InMatchingSection;
			UGroomBindingAsset* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDesiredPackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDesiredPackagePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGroomAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InNumInterpolationPoints;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSourceSkeletalMeshForTransfer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMatchingSection;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InDesiredPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InDesiredPackagePath = { "InDesiredPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InDesiredPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InDesiredPackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InDesiredPackagePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InGroomAsset = { "InGroomAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InGroomAsset), Z_Construct_UClass_UGroomAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InNumInterpolationPoints = { "InNumInterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InNumInterpolationPoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InSourceSkeletalMeshForTransfer = { "InSourceSkeletalMeshForTransfer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InSourceSkeletalMeshForTransfer), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InMatchingSection = { "InMatchingSection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, InMatchingSection), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms, ReturnValue), Z_Construct_UClass_UGroomBindingAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InDesiredPackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InGroomAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InNumInterpolationPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InSourceSkeletalMeshForTransfer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_InMatchingSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Groom" },
		{ "Comment", "/**\n\x09 * Create a new groom binding asset within the contents space of the project.\n\x09 * @param InDesiredPackagePath The package path to use for the groom binding\n\x09 * @param InGroomAsset Groom asset for binding\n\x09 * @param InSkeletalMesh Skeletal mesh on which the groom should be bound to\n\x09 * @param InNumInterpolationPoints Number of point used for RBF constraint (if used)\n\x09 * @param InSourceSkeletalMeshForTransfer Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom\n\x09 */" },
		{ "CPP_Default_InMatchingSection", "0" },
		{ "CPP_Default_InNumInterpolationPoints", "100" },
		{ "CPP_Default_InSourceSkeletalMeshForTransfer", "None" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ToolTip", "Create a new groom binding asset within the contents space of the project.\n@param InDesiredPackagePath The package path to use for the groom binding\n@param InGroomAsset Groom asset for binding\n@param InSkeletalMesh Skeletal mesh on which the groom should be bound to\n@param InNumInterpolationPoints Number of point used for RBF constraint (if used)\n@param InSourceSkeletalMeshForTransfer Skeletal mesh on which the groom was authored. This should be used only if the skeletal mesh on which the groom is attached to, does not match the rest pose of the groom" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGroomBlueprintLibrary, nullptr, "CreateNewGroomBindingAssetWithPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::GroomBlueprintLibrary_eventCreateNewGroomBindingAssetWithPath_Parms), Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomBlueprintLibrary);
	UClass* Z_Construct_UClass_UGroomBlueprintLibrary_NoRegister()
	{
		return UGroomBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGroomBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGroomBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset, "CreateNewGeometryCacheGroomBindingAsset" }, // 189832907
		{ &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath, "CreateNewGeometryCacheGroomBindingAssetWithPath" }, // 1692562269
		{ &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAsset, "CreateNewGroomBindingAsset" }, // 2418132973
		{ &Z_Construct_UFunction_UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath, "CreateNewGroomBindingAssetWithPath" }, // 3554752279
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/GroomBlueprintLibrary.h" },
		{ "ScriptName", "GroomLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomBlueprintLibrary_Statics::ClassParams = {
		&UGroomBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGroomBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UGroomBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UGroomBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomBlueprintLibrary.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<UGroomBlueprintLibrary>()
	{
		return UGroomBlueprintLibrary::StaticClass();
	}
	UGroomBlueprintLibrary::UGroomBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomBlueprintLibrary);
	UGroomBlueprintLibrary::~UGroomBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomBlueprintLibrary, UGroomBlueprintLibrary::StaticClass, TEXT("UGroomBlueprintLibrary"), &Z_Registration_Info_UClass_UGroomBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomBlueprintLibrary), 2595818744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_1158029635(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
