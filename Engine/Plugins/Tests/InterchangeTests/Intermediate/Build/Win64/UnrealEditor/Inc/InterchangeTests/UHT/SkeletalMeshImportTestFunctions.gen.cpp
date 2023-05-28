// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/SkeletalMeshImportTestFunctions.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshImportTestFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_USkeletalMeshImportTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_USkeletalMeshImportTestFunctions_NoRegister();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckSkinnedVertexCountForBone)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FStrProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bTestFirstAlternateProfile);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedSkinnedVertexCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckSkinnedVertexCountForBone(Z_Param_Mesh,Z_Param_BoneName,Z_Param_bTestFirstAlternateProfile,Z_Param_ExpectedSkinnedVertexCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckBonePosition)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_BoneIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExpectedBonePosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckBonePosition(Z_Param_Mesh,Z_Param_BoneIndex,Z_Param_Out_ExpectedBonePosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckBoneCount)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfBones);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckBoneCount(Z_Param_Mesh,Z_Param_ExpectedNumberOfBones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckVertexIndexNormal)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExpectedVertexNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckVertexIndexNormal(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_VertexIndex,Z_Param_Out_ExpectedVertexNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckVertexIndexPosition)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExpectedVertexPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckVertexIndexPosition(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_VertexIndex,Z_Param_Out_ExpectedVertexPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckSectionImportedMaterialSlotName)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedImportedMaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckSectionImportedMaterialSlotName(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_SectionIndex,Z_Param_ExpectedImportedMaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckSectionMaterialName)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedMaterialName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckSectionMaterialName(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_SectionIndex,Z_Param_ExpectedMaterialName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckUVChannelCount)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfUVChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckUVChannelCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfUVChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckTriangleCountInSection)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfTriangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckTriangleCountInSection(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_SectionIndex,Z_Param_ExpectedNumberOfTriangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckSectionCount)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfSections);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckSectionCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfSections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckMaterialSlotCount)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfMaterialSlots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckMaterialSlotCount(Z_Param_Mesh,Z_Param_ExpectedNumberOfMaterialSlots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckLodCount)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfLods);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckLodCount(Z_Param_Mesh,Z_Param_ExpectedNumberOfLods);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckRenderTriangleCount)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfRenderTriangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckRenderTriangleCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfRenderTriangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckRenderVertexCount)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfRenderVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckRenderVertexCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfRenderVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshImportTestFunctions::execCheckImportedSkeletalMeshCount)
	{
		P_GET_TARRAY_REF(USkeletalMesh*,Z_Param_Out_Meshes);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfImportedSkeletalMeshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=USkeletalMeshImportTestFunctions::CheckImportedSkeletalMeshCount(Z_Param_Out_Meshes,Z_Param_ExpectedNumberOfImportedSkeletalMeshes);
		P_NATIVE_END;
	}
	void USkeletalMeshImportTestFunctions::StaticRegisterNativesUSkeletalMeshImportTestFunctions()
	{
		UClass* Class = USkeletalMeshImportTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckBoneCount", &USkeletalMeshImportTestFunctions::execCheckBoneCount },
			{ "CheckBonePosition", &USkeletalMeshImportTestFunctions::execCheckBonePosition },
			{ "CheckImportedSkeletalMeshCount", &USkeletalMeshImportTestFunctions::execCheckImportedSkeletalMeshCount },
			{ "CheckLodCount", &USkeletalMeshImportTestFunctions::execCheckLodCount },
			{ "CheckMaterialSlotCount", &USkeletalMeshImportTestFunctions::execCheckMaterialSlotCount },
			{ "CheckRenderTriangleCount", &USkeletalMeshImportTestFunctions::execCheckRenderTriangleCount },
			{ "CheckRenderVertexCount", &USkeletalMeshImportTestFunctions::execCheckRenderVertexCount },
			{ "CheckSectionCount", &USkeletalMeshImportTestFunctions::execCheckSectionCount },
			{ "CheckSectionImportedMaterialSlotName", &USkeletalMeshImportTestFunctions::execCheckSectionImportedMaterialSlotName },
			{ "CheckSectionMaterialName", &USkeletalMeshImportTestFunctions::execCheckSectionMaterialName },
			{ "CheckSkinnedVertexCountForBone", &USkeletalMeshImportTestFunctions::execCheckSkinnedVertexCountForBone },
			{ "CheckTriangleCountInSection", &USkeletalMeshImportTestFunctions::execCheckTriangleCountInSection },
			{ "CheckUVChannelCount", &USkeletalMeshImportTestFunctions::execCheckUVChannelCount },
			{ "CheckVertexIndexNormal", &USkeletalMeshImportTestFunctions::execCheckVertexIndexNormal },
			{ "CheckVertexIndexPosition", &USkeletalMeshImportTestFunctions::execCheckVertexIndexPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckBoneCount_Parms
		{
			USkeletalMesh* Mesh;
			int32 ExpectedNumberOfBones;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfBones;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckBoneCount_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::NewProp_ExpectedNumberOfBones = { "ExpectedNumberOfBones", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckBoneCount_Parms, ExpectedNumberOfBones), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckBoneCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::NewProp_ExpectedNumberOfBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh has the expected number of bones */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh has the expected number of bones" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckBoneCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::SkeletalMeshImportTestFunctions_eventCheckBoneCount_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckBonePosition_Parms
		{
			USkeletalMesh* Mesh;
			int32 BoneIndex;
			FVector ExpectedBonePosition;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedBonePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpectedBonePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckBonePosition_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckBonePosition_Parms, BoneIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_ExpectedBonePosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_ExpectedBonePosition = { "ExpectedBonePosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckBonePosition_Parms, ExpectedBonePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_ExpectedBonePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_ExpectedBonePosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckBonePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_BoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_ExpectedBonePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check that the bone of the specified index has the expected position */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check that the bone of the specified index has the expected position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckBonePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::SkeletalMeshImportTestFunctions_eventCheckBonePosition_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckImportedSkeletalMeshCount_Parms
		{
			TArray<USkeletalMesh*> Meshes;
			int32 ExpectedNumberOfImportedSkeletalMeshes;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfImportedSkeletalMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_Meshes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckImportedSkeletalMeshCount_Parms, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_Meshes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_ExpectedNumberOfImportedSkeletalMeshes = { "ExpectedNumberOfImportedSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckImportedSkeletalMeshCount_Parms, ExpectedNumberOfImportedSkeletalMeshes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckImportedSkeletalMeshCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_Meshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_ExpectedNumberOfImportedSkeletalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of skeletal meshes are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of skeletal meshes are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckImportedSkeletalMeshCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::SkeletalMeshImportTestFunctions_eventCheckImportedSkeletalMeshCount_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckLodCount_Parms
		{
			USkeletalMesh* Mesh;
			int32 ExpectedNumberOfLods;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfLods;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckLodCount_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::NewProp_ExpectedNumberOfLods = { "ExpectedNumberOfLods", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckLodCount_Parms, ExpectedNumberOfLods), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckLodCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::NewProp_ExpectedNumberOfLods,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh has the expected number of LODs */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh has the expected number of LODs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckLodCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::SkeletalMeshImportTestFunctions_eventCheckLodCount_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckMaterialSlotCount_Parms
		{
			USkeletalMesh* Mesh;
			int32 ExpectedNumberOfMaterialSlots;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfMaterialSlots;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckMaterialSlotCount_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_ExpectedNumberOfMaterialSlots = { "ExpectedNumberOfMaterialSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckMaterialSlotCount_Parms, ExpectedNumberOfMaterialSlots), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckMaterialSlotCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_ExpectedNumberOfMaterialSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh has the expected number of material slots */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh has the expected number of material slots" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckMaterialSlotCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::SkeletalMeshImportTestFunctions_eventCheckMaterialSlotCount_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms
		{
			USkeletalMesh* Mesh;
			int32 LodIndex;
			int32 ExpectedNumberOfRenderTriangles;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfRenderTriangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_ExpectedNumberOfRenderTriangles = { "ExpectedNumberOfRenderTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms, ExpectedNumberOfRenderTriangles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_ExpectedNumberOfRenderTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the triangle count in the built render data for the given LOD is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the triangle count in the built render data for the given LOD is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckRenderTriangleCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::SkeletalMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckRenderVertexCount_Parms
		{
			USkeletalMesh* Mesh;
			int32 LodIndex;
			int32 ExpectedNumberOfRenderVertices;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfRenderVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckRenderVertexCount_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckRenderVertexCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_ExpectedNumberOfRenderVertices = { "ExpectedNumberOfRenderVertices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckRenderVertexCount_Parms, ExpectedNumberOfRenderVertices), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckRenderVertexCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_ExpectedNumberOfRenderVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the vertex count in the built render data for the given LOD is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the vertex count in the built render data for the given LOD is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckRenderVertexCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::SkeletalMeshImportTestFunctions_eventCheckRenderVertexCount_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckSectionCount_Parms
		{
			USkeletalMesh* Mesh;
			int32 LodIndex;
			int32 ExpectedNumberOfSections;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfSections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionCount_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_ExpectedNumberOfSections = { "ExpectedNumberOfSections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionCount_Parms, ExpectedNumberOfSections), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_ExpectedNumberOfSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the built render data for the given mesh LOD has the expected number of sections */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the built render data for the given mesh LOD has the expected number of sections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckSectionCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::SkeletalMeshImportTestFunctions_eventCheckSectionCount_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms
		{
			USkeletalMesh* Mesh;
			int32 LodIndex;
			int32 SectionIndex;
			FString ExpectedImportedMaterialSlotName;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedImportedMaterialSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedImportedMaterialSlotName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName = { "ExpectedImportedMaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms, ExpectedImportedMaterialSlotName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the imported material slot name for the given section in the render data for the given LOD is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the imported material slot name for the given section in the render data for the given LOD is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckSectionImportedMaterialSlotName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::SkeletalMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckSectionMaterialName_Parms
		{
			USkeletalMesh* Mesh;
			int32 LodIndex;
			int32 SectionIndex;
			FString ExpectedMaterialName;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedMaterialName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedMaterialName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionMaterialName_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionMaterialName_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionMaterialName_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ExpectedMaterialName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ExpectedMaterialName = { "ExpectedMaterialName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionMaterialName_Parms, ExpectedMaterialName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ExpectedMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ExpectedMaterialName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSectionMaterialName_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ExpectedMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the material name for the given section in the render data for the given LOD is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the material name for the given section in the render data for the given LOD is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckSectionMaterialName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::SkeletalMeshImportTestFunctions_eventCheckSectionMaterialName_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckSkinnedVertexCountForBone_Parms
		{
			USkeletalMesh* Mesh;
			FString BoneName;
			bool bTestFirstAlternateProfile;
			int32 ExpectedSkinnedVertexCount;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneName;
		static void NewProp_bTestFirstAlternateProfile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTestFirstAlternateProfile;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedSkinnedVertexCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSkinnedVertexCountForBone_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSkinnedVertexCountForBone_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_BoneName_MetaData)) };
	void Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_bTestFirstAlternateProfile_SetBit(void* Obj)
	{
		((SkeletalMeshImportTestFunctions_eventCheckSkinnedVertexCountForBone_Parms*)Obj)->bTestFirstAlternateProfile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_bTestFirstAlternateProfile = { "bTestFirstAlternateProfile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshImportTestFunctions_eventCheckSkinnedVertexCountForBone_Parms), &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_bTestFirstAlternateProfile_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_ExpectedSkinnedVertexCount = { "ExpectedSkinnedVertexCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSkinnedVertexCountForBone_Parms, ExpectedSkinnedVertexCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckSkinnedVertexCountForBone_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_bTestFirstAlternateProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_ExpectedSkinnedVertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check that the specified bone name is skinned with the expected number of vertices */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check that the specified bone name is skinned with the expected number of vertices" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckSkinnedVertexCountForBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::SkeletalMeshImportTestFunctions_eventCheckSkinnedVertexCountForBone_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckTriangleCountInSection_Parms
		{
			USkeletalMesh* Mesh;
			int32 LodIndex;
			int32 SectionIndex;
			int32 ExpectedNumberOfTriangles;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfTriangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckTriangleCountInSection_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckTriangleCountInSection_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckTriangleCountInSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::NewProp_ExpectedNumberOfTriangles = { "ExpectedNumberOfTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckTriangleCountInSection_Parms, ExpectedNumberOfTriangles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckTriangleCountInSection_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::NewProp_ExpectedNumberOfTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the given section in the built render data for the given LOD has the expected number of triangles */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the given section in the built render data for the given LOD has the expected number of triangles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckTriangleCountInSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::SkeletalMeshImportTestFunctions_eventCheckTriangleCountInSection_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckUVChannelCount_Parms
		{
			USkeletalMesh* Mesh;
			int32 LodIndex;
			int32 ExpectedNumberOfUVChannels;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfUVChannels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckUVChannelCount_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckUVChannelCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_ExpectedNumberOfUVChannels = { "ExpectedNumberOfUVChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckUVChannelCount_Parms, ExpectedNumberOfUVChannels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckUVChannelCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_ExpectedNumberOfUVChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh has the expected number of UV channels */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh has the expected number of UV channels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckUVChannelCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::SkeletalMeshImportTestFunctions_eventCheckUVChannelCount_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckVertexIndexNormal_Parms
		{
			USkeletalMesh* Mesh;
			int32 LodIndex;
			int32 VertexIndex;
			FVector ExpectedVertexNormal;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedVertexNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpectedVertexNormal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckVertexIndexNormal_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckVertexIndexNormal_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckVertexIndexNormal_Parms, VertexIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_ExpectedVertexNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_ExpectedVertexNormal = { "ExpectedVertexNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckVertexIndexNormal_Parms, ExpectedVertexNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_ExpectedVertexNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_ExpectedVertexNormal_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckVertexIndexNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_VertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_ExpectedVertexNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the vertex of the given index is at the expected normal */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the vertex of the given index is at the expected normal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckVertexIndexNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::SkeletalMeshImportTestFunctions_eventCheckVertexIndexNormal_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics
	{
		struct SkeletalMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms
		{
			USkeletalMesh* Mesh;
			int32 LodIndex;
			int32 VertexIndex;
			FVector ExpectedVertexPosition;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedVertexPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpectedVertexPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms, VertexIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ExpectedVertexPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ExpectedVertexPosition = { "ExpectedVertexPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms, ExpectedVertexPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ExpectedVertexPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ExpectedVertexPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_VertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ExpectedVertexPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the vertex of the given index is at the expected position */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the vertex of the given index is at the expected position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshImportTestFunctions, nullptr, "CheckVertexIndexPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::SkeletalMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms), Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshImportTestFunctions);
	UClass* Z_Construct_UClass_USkeletalMeshImportTestFunctions_NoRegister()
	{
		return USkeletalMeshImportTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBoneCount, "CheckBoneCount" }, // 394281249
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckBonePosition, "CheckBonePosition" }, // 684409067
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckImportedSkeletalMeshCount, "CheckImportedSkeletalMeshCount" }, // 1393443033
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckLodCount, "CheckLodCount" }, // 2571546598
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckMaterialSlotCount, "CheckMaterialSlotCount" }, // 1427871014
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderTriangleCount, "CheckRenderTriangleCount" }, // 4042808815
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckRenderVertexCount, "CheckRenderVertexCount" }, // 1522335867
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionCount, "CheckSectionCount" }, // 4147787091
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionImportedMaterialSlotName, "CheckSectionImportedMaterialSlotName" }, // 656272473
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSectionMaterialName, "CheckSectionMaterialName" }, // 3311301464
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckSkinnedVertexCountForBone, "CheckSkinnedVertexCountForBone" }, // 2387623994
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckTriangleCountInSection, "CheckTriangleCountInSection" }, // 155282282
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckUVChannelCount, "CheckUVChannelCount" }, // 3466484739
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexNormal, "CheckVertexIndexNormal" }, // 1033114122
		{ &Z_Construct_UFunction_USkeletalMeshImportTestFunctions_CheckVertexIndexPosition, "CheckVertexIndexPosition" }, // 3815400541
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/SkeletalMeshImportTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshImportTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics::ClassParams = {
		&USkeletalMeshImportTestFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshImportTestFunctions()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshImportTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshImportTestFunctions.OuterSingleton, Z_Construct_UClass_USkeletalMeshImportTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshImportTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<USkeletalMeshImportTestFunctions>()
	{
		return USkeletalMeshImportTestFunctions::StaticClass();
	}
	USkeletalMeshImportTestFunctions::USkeletalMeshImportTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshImportTestFunctions);
	USkeletalMeshImportTestFunctions::~USkeletalMeshImportTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshImportTestFunctions, USkeletalMeshImportTestFunctions::StaticClass, TEXT("USkeletalMeshImportTestFunctions"), &Z_Registration_Info_UClass_USkeletalMeshImportTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshImportTestFunctions), 2888878929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_2669271113(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_SkeletalMeshImportTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
