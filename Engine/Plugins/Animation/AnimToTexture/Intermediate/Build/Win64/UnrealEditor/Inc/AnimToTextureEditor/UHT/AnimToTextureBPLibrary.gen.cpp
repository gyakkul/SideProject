// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimToTextureBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimToTextureBPLibrary() {}
// Cross Module References
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
	ANIMTOTEXTURE_API UEnum* Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences();
	ANIMTOTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimToTextureBPLibrary();
	ANIMTOTEXTUREEDITOR_API UClass* Z_Construct_UClass_UAnimToTextureBPLibrary_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation();
	UPackage* Z_Construct_UPackage__Script_AnimToTextureEditor();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(UAnimToTextureBPLibrary::execUpdateMaterialInstanceFromDataAsset)
	{
		P_GET_OBJECT(UAnimToTextureDataAsset,Z_Param_DataAsset);
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_MaterialInstance);
		P_GET_UBOOL(Z_Param_bAnimate);
		P_GET_ENUM(EAnimToTextureNumBoneInfluences,Z_Param_NumBoneInfluences);
		P_GET_PROPERTY(FByteProperty,Z_Param_MaterialParameterAssociation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimToTextureBPLibrary::UpdateMaterialInstanceFromDataAsset(Z_Param_DataAsset,Z_Param_MaterialInstance,Z_Param_bAnimate,EAnimToTextureNumBoneInfluences(Z_Param_NumBoneInfluences),EMaterialParameterAssociation(Z_Param_MaterialParameterAssociation));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureBPLibrary::execSetLightMapIndex)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_LightmapIndex);
		P_GET_UBOOL(Z_Param_bGenerateLightmapUVs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureBPLibrary::SetLightMapIndex(Z_Param_StaticMesh,Z_Param_LODIndex,Z_Param_LightmapIndex,Z_Param_bGenerateLightmapUVs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureBPLibrary::execConvertSkeletalMeshToStaticMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMesh**)Z_Param__Result=UAnimToTextureBPLibrary::ConvertSkeletalMeshToStaticMesh(Z_Param_SkeletalMesh,Z_Param_PackageName,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureBPLibrary::execAnimationToTexture)
	{
		P_GET_OBJECT(UAnimToTextureDataAsset,Z_Param_DataAsset);
		P_GET_STRUCT(FTransform,Z_Param_RootTransform);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimToTextureBPLibrary::AnimationToTexture(Z_Param_DataAsset,Z_Param_RootTransform,Z_Param_Out_bSuccess);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAnimToTextureBPLibrary::StaticRegisterNativesUAnimToTextureBPLibrary()
	{
#if WITH_EDITOR
		UClass* Class = UAnimToTextureBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimationToTexture", &UAnimToTextureBPLibrary::execAnimationToTexture },
			{ "ConvertSkeletalMeshToStaticMesh", &UAnimToTextureBPLibrary::execConvertSkeletalMeshToStaticMesh },
			{ "SetLightMapIndex", &UAnimToTextureBPLibrary::execSetLightMapIndex },
			{ "UpdateMaterialInstanceFromDataAsset", &UAnimToTextureBPLibrary::execUpdateMaterialInstanceFromDataAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics
	{
		struct AnimToTextureBPLibrary_eventAnimationToTexture_Parms
		{
			UAnimToTextureDataAsset* DataAsset;
			FTransform RootTransform;
			bool bSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootTransform;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventAnimationToTexture_Parms, DataAsset), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_RootTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_RootTransform = { "RootTransform", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventAnimationToTexture_Parms, RootTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_RootTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_RootTransform_MetaData)) };
	void Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((AnimToTextureBPLibrary_eventAnimationToTexture_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimToTextureBPLibrary_eventAnimationToTexture_Parms), &Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_RootTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture" },
		{ "Comment", "/**\n\x09* Bakes Animation Data into Textures.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimToTextureBPLibrary.h" },
		{ "ToolTip", "Bakes Animation Data into Textures." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureBPLibrary, nullptr, "AnimationToTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::AnimToTextureBPLibrary_eventAnimationToTexture_Parms), Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics
	{
		struct AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms
		{
			USkeletalMesh* SkeletalMesh;
			FString PackageName;
			int32 LODIndex;
			UStaticMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, PackageName), METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_LODIndex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture" },
		{ "Comment", "/** \n\x09* Utility for converting SkeletalMesh into a StaticMesh\n\x09*/" },
		{ "CPP_Default_LODIndex", "-1" },
		{ "ModuleRelativePath", "Public/AnimToTextureBPLibrary.h" },
		{ "ToolTip", "Utility for converting SkeletalMesh into a StaticMesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureBPLibrary, nullptr, "ConvertSkeletalMeshToStaticMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::AnimToTextureBPLibrary_eventConvertSkeletalMeshToStaticMesh_Parms), Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics
	{
		struct AnimToTextureBPLibrary_eventSetLightMapIndex_Parms
		{
			UStaticMesh* StaticMesh;
			int32 LODIndex;
			int32 LightmapIndex;
			bool bGenerateLightmapUVs;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightmapIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightmapIndex;
		static void NewProp_bGenerateLightmapUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateLightmapUVs;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventSetLightMapIndex_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventSetLightMapIndex_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LightmapIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LightmapIndex = { "LightmapIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventSetLightMapIndex_Parms, LightmapIndex), METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LightmapIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LightmapIndex_MetaData)) };
	void Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_bGenerateLightmapUVs_SetBit(void* Obj)
	{
		((AnimToTextureBPLibrary_eventSetLightMapIndex_Parms*)Obj)->bGenerateLightmapUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_bGenerateLightmapUVs = { "bGenerateLightmapUVs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimToTextureBPLibrary_eventSetLightMapIndex_Parms), &Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_bGenerateLightmapUVs_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureBPLibrary_eventSetLightMapIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimToTextureBPLibrary_eventSetLightMapIndex_Parms), &Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_LightmapIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_bGenerateLightmapUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture" },
		{ "Comment", "// FIXME: you cannot set index to 2 if there is no index 1\n" },
		{ "CPP_Default_bGenerateLightmapUVs", "true" },
		{ "CPP_Default_LightmapIndex", "1" },
		{ "ModuleRelativePath", "Public/AnimToTextureBPLibrary.h" },
		{ "ToolTip", "FIXME: you cannot set index to 2 if there is no index 1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureBPLibrary, nullptr, "SetLightMapIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::AnimToTextureBPLibrary_eventSetLightMapIndex_Parms), Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics
	{
		struct AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms
		{
			UAnimToTextureDataAsset* DataAsset;
			UMaterialInstanceConstant* MaterialInstance;
			bool bAnimate;
			EAnimToTextureNumBoneInfluences NumBoneInfluences;
			TEnumAsByte<EMaterialParameterAssociation> MaterialParameterAssociation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimate_MetaData[];
#endif
		static void NewProp_bAnimate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumBoneInfluences_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBoneInfluences_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NumBoneInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterAssociation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialParameterAssociation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms, DataAsset), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_bAnimate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_bAnimate_SetBit(void* Obj)
	{
		((AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms*)Obj)->bAnimate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_bAnimate = { "bAnimate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms), &Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_bAnimate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_bAnimate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_bAnimate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_NumBoneInfluences_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_NumBoneInfluences_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_NumBoneInfluences = { "NumBoneInfluences", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms, NumBoneInfluences), Z_Construct_UEnum_AnimToTexture_EAnimToTextureNumBoneInfluences, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_NumBoneInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_NumBoneInfluences_MetaData)) }; // 2738411651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialParameterAssociation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialParameterAssociation = { "MaterialParameterAssociation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms, MaterialParameterAssociation), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialParameterAssociation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialParameterAssociation_MetaData)) }; // 534775543
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_bAnimate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_NumBoneInfluences_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_NumBoneInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::NewProp_MaterialParameterAssociation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture" },
		{ "Comment", "/**\n\x09* Updates a material's parameters to match those of an animToTexture data asset\n\x09*/" },
		{ "CPP_Default_bAnimate", "false" },
		{ "CPP_Default_MaterialParameterAssociation", "LayerParameter" },
		{ "CPP_Default_NumBoneInfluences", "One" },
		{ "ModuleRelativePath", "Public/AnimToTextureBPLibrary.h" },
		{ "ToolTip", "Updates a material's parameters to match those of an animToTexture data asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureBPLibrary, nullptr, "UpdateMaterialInstanceFromDataAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::AnimToTextureBPLibrary_eventUpdateMaterialInstanceFromDataAsset_Parms), Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimToTextureBPLibrary);
	UClass* Z_Construct_UClass_UAnimToTextureBPLibrary_NoRegister()
	{
		return UAnimToTextureBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimToTextureBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTextureEditor,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimToTextureBPLibrary_AnimationToTexture, "AnimationToTexture" }, // 1084665400
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimToTextureBPLibrary_ConvertSkeletalMeshToStaticMesh, "ConvertSkeletalMeshToStaticMesh" }, // 1242468868
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimToTextureBPLibrary_SetLightMapIndex, "SetLightMapIndex" }, // 826763113
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimToTextureBPLibrary_UpdateMaterialInstanceFromDataAsset, "UpdateMaterialInstanceFromDataAsset" }, // 4242201840
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* TODO: \n*\x09- Right now it is saving data per-vertex instead of per-point.\n*     This will require more pixels if the mesh has lots of material slots or uv-shells.\n*     FStaticMeshOperations::FindOverlappingCorners(FOverlappingCorners& OutOverlappingCorners, const FMeshDescription& MeshDescription, float ComparisonThreshold)\n*/" },
		{ "IncludePath", "AnimToTextureBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimToTextureBPLibrary.h" },
		{ "ToolTip", "* TODO:\n*      - Right now it is saving data per-vertex instead of per-point.\n*     This will require more pixels if the mesh has lots of material slots or uv-shells.\n*     FStaticMeshOperations::FindOverlappingCorners(FOverlappingCorners& OutOverlappingCorners, const FMeshDescription& MeshDescription, float ComparisonThreshold)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimToTextureBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::ClassParams = {
		&UAnimToTextureBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimToTextureBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimToTextureBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimToTextureBPLibrary.OuterSingleton, Z_Construct_UClass_UAnimToTextureBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimToTextureBPLibrary.OuterSingleton;
	}
	template<> ANIMTOTEXTUREEDITOR_API UClass* StaticClass<UAnimToTextureBPLibrary>()
	{
		return UAnimToTextureBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimToTextureBPLibrary);
	UAnimToTextureBPLibrary::~UAnimToTextureBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimToTextureBPLibrary, UAnimToTextureBPLibrary::StaticClass, TEXT("UAnimToTextureBPLibrary"), &Z_Registration_Info_UClass_UAnimToTextureBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimToTextureBPLibrary), 485190012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_3079148993(TEXT("/Script/AnimToTextureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTextureEditor_Public_AnimToTextureBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
