// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImportTestFunctions/StaticMeshImportTestFunctions.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "InterchangeTestFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshImportTestFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBuildSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UImportTestFunctionsBase();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UStaticMeshImportTestFunctions();
	INTERCHANGETESTS_API UClass* Z_Construct_UClass_UStaticMeshImportTestFunctions_NoRegister();
	INTERCHANGETESTS_API UEnum* Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags();
	INTERCHANGETESTS_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeTestFunctionResult();
	UPackage* Z_Construct_UPackage__Script_InterchangeTests();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStaticMeshImportTestGroundTruthBitflags;
	static UEnum* EStaticMeshImportTestGroundTruthBitflags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStaticMeshImportTestGroundTruthBitflags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStaticMeshImportTestGroundTruthBitflags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags, (UObject*)Z_Construct_UPackage__Script_InterchangeTests(), TEXT("EStaticMeshImportTestGroundTruthBitflags"));
		}
		return Z_Registration_Info_UEnum_EStaticMeshImportTestGroundTruthBitflags.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UEnum* StaticEnum<EStaticMeshImportTestGroundTruthBitflags>()
	{
		return EStaticMeshImportTestGroundTruthBitflags_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags_Statics::Enumerators[] = {
		{ "EStaticMeshImportTestGroundTruthBitflags::CheckLodCountEqual", (int64)EStaticMeshImportTestGroundTruthBitflags::CheckLodCountEqual },
		{ "EStaticMeshImportTestGroundTruthBitflags::CheckVertexCountEqual", (int64)EStaticMeshImportTestGroundTruthBitflags::CheckVertexCountEqual },
		{ "EStaticMeshImportTestGroundTruthBitflags::CheckTriangleCountEqual", (int64)EStaticMeshImportTestGroundTruthBitflags::CheckTriangleCountEqual },
		{ "EStaticMeshImportTestGroundTruthBitflags::CheckUVChannelCountEqual", (int64)EStaticMeshImportTestGroundTruthBitflags::CheckUVChannelCountEqual },
		{ "EStaticMeshImportTestGroundTruthBitflags::CheckCollisionPrimitiveCountEqual", (int64)EStaticMeshImportTestGroundTruthBitflags::CheckCollisionPrimitiveCountEqual },
		{ "EStaticMeshImportTestGroundTruthBitflags::CheckVertexPositionsEqual", (int64)EStaticMeshImportTestGroundTruthBitflags::CheckVertexPositionsEqual },
		{ "EStaticMeshImportTestGroundTruthBitflags::CheckNormalsEqual", (int64)EStaticMeshImportTestGroundTruthBitflags::CheckNormalsEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags_Statics::Enum_MetaDataParams[] = {
		{ "Bitmask", "" },
		{ "CheckCollisionPrimitiveCountEqual.Name", "EStaticMeshImportTestGroundTruthBitflags::CheckCollisionPrimitiveCountEqual" },
		{ "CheckLodCountEqual.Name", "EStaticMeshImportTestGroundTruthBitflags::CheckLodCountEqual" },
		{ "CheckNormalsEqual.Name", "EStaticMeshImportTestGroundTruthBitflags::CheckNormalsEqual" },
		{ "CheckTriangleCountEqual.Name", "EStaticMeshImportTestGroundTruthBitflags::CheckTriangleCountEqual" },
		{ "CheckUVChannelCountEqual.Name", "EStaticMeshImportTestGroundTruthBitflags::CheckUVChannelCountEqual" },
		{ "CheckVertexCountEqual.Name", "EStaticMeshImportTestGroundTruthBitflags::CheckVertexCountEqual" },
		{ "CheckVertexPositionsEqual.Name", "EStaticMeshImportTestGroundTruthBitflags::CheckVertexPositionsEqual" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeTests,
		nullptr,
		"EStaticMeshImportTestGroundTruthBitflags",
		"EStaticMeshImportTestGroundTruthBitflags",
		Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags()
	{
		if (!Z_Registration_Info_UEnum_EStaticMeshImportTestGroundTruthBitflags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStaticMeshImportTestGroundTruthBitflags.InnerSingleton, Z_Construct_UEnum_InterchangeTests_EStaticMeshImportTestGroundTruthBitflags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStaticMeshImportTestGroundTruthBitflags.InnerSingleton;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckNaniteSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_STRUCT_REF(FMeshNaniteSettings,Z_Param_Out_ExpectedNaniteSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckNaniteSettings(Z_Param_Mesh,Z_Param_Out_ExpectedNaniteSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckBuildSettings)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_STRUCT_REF(FMeshBuildSettings,Z_Param_Out_ExpectedBuildSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckBuildSettings(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_Out_ExpectedBuildSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckAgainstGroundTruth)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UStaticMesh>,Z_Param_MeshToCompare);
		P_GET_UBOOL(Z_Param_bCheckVertexCountEqual);
		P_GET_UBOOL(Z_Param_bCheckTriangleCountEqual);
		P_GET_UBOOL(Z_Param_bCheckUVChannelCountEqual);
		P_GET_UBOOL(Z_Param_bCheckCollisionPrimitiveCountEqual);
		P_GET_UBOOL(Z_Param_bCheckVertexPositionsEqual);
		P_GET_UBOOL(Z_Param_bCheckNormalsEqual);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckAgainstGroundTruth(Z_Param_Mesh,Z_Param_MeshToCompare,Z_Param_bCheckVertexCountEqual,Z_Param_bCheckTriangleCountEqual,Z_Param_bCheckUVChannelCountEqual,Z_Param_bCheckCollisionPrimitiveCountEqual,Z_Param_bCheckVertexPositionsEqual,Z_Param_bCheckNormalsEqual);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckSocketLocation)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_SocketIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExpectedSocketLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckSocketLocation(Z_Param_Mesh,Z_Param_SocketIndex,Z_Param_Out_ExpectedSocketLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckSocketName)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_SocketIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckSocketName(Z_Param_Mesh,Z_Param_SocketIndex,Z_Param_ExpectedSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckSocketCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedSocketCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckSocketCount(Z_Param_Mesh,Z_Param_ExpectedSocketCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckSimpleCollisionPrimitiveCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedSphereElementCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedBoxElementCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedCapsuleElementCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedConvexElementCount);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedTaperedCapsuleElementCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckSimpleCollisionPrimitiveCount(Z_Param_Mesh,Z_Param_ExpectedSphereElementCount,Z_Param_ExpectedBoxElementCount,Z_Param_ExpectedCapsuleElementCount,Z_Param_ExpectedConvexElementCount,Z_Param_ExpectedTaperedCapsuleElementCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckRenderUVChannelCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfUVChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckRenderUVChannelCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfUVChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckUVChannelCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfUVChannels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckUVChannelCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfUVChannels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckPolygonCountInPolygonGroup)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygonGroupIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfPolygons);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckPolygonCountInPolygonGroup(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_PolygonGroupIndex,Z_Param_ExpectedNumberOfPolygons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckTriangleCountInPolygonGroup)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygonGroupIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfTriangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckTriangleCountInPolygonGroup(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_PolygonGroupIndex,Z_Param_ExpectedNumberOfTriangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckThatMeshHasQuadsOrNgons)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_UBOOL(Z_Param_bMeshHasQuadsOrNgons);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckThatMeshHasQuadsOrNgons(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_bMeshHasQuadsOrNgons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckPolygonCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfPolygons);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckPolygonCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfPolygons);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckRenderTriangleCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedTotalNumberOfTriangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckRenderTriangleCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedTotalNumberOfTriangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckTriangleCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedTotalNumberOfTriangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckTriangleCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedTotalNumberOfTriangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckRenderHasVertexColors)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_UBOOL(Z_Param_bExpectedHasVertexColors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckRenderHasVertexColors(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_bExpectedHasVertexColors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckRenderVertexIndexColor)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexIndex);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_ExpectedVertexColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckRenderVertexIndexColor(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_VertexIndex,Z_Param_Out_ExpectedVertexColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckRenderVertexIndexNormal)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexIndex);
		P_GET_STRUCT_REF(FVector4f,Z_Param_Out_ExpectedVertexNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckRenderVertexIndexNormal(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_VertexIndex,Z_Param_Out_ExpectedVertexNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckVertexIndexPosition)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_VertexIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ExpectedVertexPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckVertexIndexPosition(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_VertexIndex,Z_Param_Out_ExpectedVertexPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckRenderVertexCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfRenderVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckRenderVertexCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfRenderVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckVertexCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckVertexCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckSectionImportedMaterialSlotName)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedImportedMaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckSectionImportedMaterialSlotName(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_SectionIndex,Z_Param_ExpectedImportedMaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckSectionMaterialName)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedMaterialName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckSectionMaterialName(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_SectionIndex,Z_Param_ExpectedMaterialName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckSectionMaterialIndex)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedMaterialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckSectionMaterialIndex(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_SectionIndex,Z_Param_ExpectedMaterialIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckPolygonGroupImportedMaterialSlotName)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_PolygonGroupIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedImportedMaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckPolygonGroupImportedMaterialSlotName(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_PolygonGroupIndex,Z_Param_ExpectedImportedMaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckPolygonGroupCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfPolygonGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckPolygonGroupCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfPolygonGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckImportedMaterialSlotName)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedImportedMaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckImportedMaterialSlotName(Z_Param_Mesh,Z_Param_MaterialIndex,Z_Param_ExpectedImportedMaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckMaterialSlotCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfMaterialSlots);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckMaterialSlotCount(Z_Param_Mesh,Z_Param_ExpectedNumberOfMaterialSlots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckSectionCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LodIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfSections);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckSectionCount(Z_Param_Mesh,Z_Param_LodIndex,Z_Param_ExpectedNumberOfSections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckLodCount)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfLods);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckLodCount(Z_Param_Mesh,Z_Param_ExpectedNumberOfLods);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaticMeshImportTestFunctions::execCheckImportedStaticMeshCount)
	{
		P_GET_TARRAY_REF(UStaticMesh*,Z_Param_Out_Meshes);
		P_GET_PROPERTY(FIntProperty,Z_Param_ExpectedNumberOfImportedStaticMeshes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInterchangeTestFunctionResult*)Z_Param__Result=UStaticMeshImportTestFunctions::CheckImportedStaticMeshCount(Z_Param_Out_Meshes,Z_Param_ExpectedNumberOfImportedStaticMeshes);
		P_NATIVE_END;
	}
	void UStaticMeshImportTestFunctions::StaticRegisterNativesUStaticMeshImportTestFunctions()
	{
		UClass* Class = UStaticMeshImportTestFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAgainstGroundTruth", &UStaticMeshImportTestFunctions::execCheckAgainstGroundTruth },
			{ "CheckBuildSettings", &UStaticMeshImportTestFunctions::execCheckBuildSettings },
			{ "CheckImportedMaterialSlotName", &UStaticMeshImportTestFunctions::execCheckImportedMaterialSlotName },
			{ "CheckImportedStaticMeshCount", &UStaticMeshImportTestFunctions::execCheckImportedStaticMeshCount },
			{ "CheckLodCount", &UStaticMeshImportTestFunctions::execCheckLodCount },
			{ "CheckMaterialSlotCount", &UStaticMeshImportTestFunctions::execCheckMaterialSlotCount },
			{ "CheckNaniteSettings", &UStaticMeshImportTestFunctions::execCheckNaniteSettings },
			{ "CheckPolygonCount", &UStaticMeshImportTestFunctions::execCheckPolygonCount },
			{ "CheckPolygonCountInPolygonGroup", &UStaticMeshImportTestFunctions::execCheckPolygonCountInPolygonGroup },
			{ "CheckPolygonGroupCount", &UStaticMeshImportTestFunctions::execCheckPolygonGroupCount },
			{ "CheckPolygonGroupImportedMaterialSlotName", &UStaticMeshImportTestFunctions::execCheckPolygonGroupImportedMaterialSlotName },
			{ "CheckRenderHasVertexColors", &UStaticMeshImportTestFunctions::execCheckRenderHasVertexColors },
			{ "CheckRenderTriangleCount", &UStaticMeshImportTestFunctions::execCheckRenderTriangleCount },
			{ "CheckRenderUVChannelCount", &UStaticMeshImportTestFunctions::execCheckRenderUVChannelCount },
			{ "CheckRenderVertexCount", &UStaticMeshImportTestFunctions::execCheckRenderVertexCount },
			{ "CheckRenderVertexIndexColor", &UStaticMeshImportTestFunctions::execCheckRenderVertexIndexColor },
			{ "CheckRenderVertexIndexNormal", &UStaticMeshImportTestFunctions::execCheckRenderVertexIndexNormal },
			{ "CheckSectionCount", &UStaticMeshImportTestFunctions::execCheckSectionCount },
			{ "CheckSectionImportedMaterialSlotName", &UStaticMeshImportTestFunctions::execCheckSectionImportedMaterialSlotName },
			{ "CheckSectionMaterialIndex", &UStaticMeshImportTestFunctions::execCheckSectionMaterialIndex },
			{ "CheckSectionMaterialName", &UStaticMeshImportTestFunctions::execCheckSectionMaterialName },
			{ "CheckSimpleCollisionPrimitiveCount", &UStaticMeshImportTestFunctions::execCheckSimpleCollisionPrimitiveCount },
			{ "CheckSocketCount", &UStaticMeshImportTestFunctions::execCheckSocketCount },
			{ "CheckSocketLocation", &UStaticMeshImportTestFunctions::execCheckSocketLocation },
			{ "CheckSocketName", &UStaticMeshImportTestFunctions::execCheckSocketName },
			{ "CheckThatMeshHasQuadsOrNgons", &UStaticMeshImportTestFunctions::execCheckThatMeshHasQuadsOrNgons },
			{ "CheckTriangleCount", &UStaticMeshImportTestFunctions::execCheckTriangleCount },
			{ "CheckTriangleCountInPolygonGroup", &UStaticMeshImportTestFunctions::execCheckTriangleCountInPolygonGroup },
			{ "CheckUVChannelCount", &UStaticMeshImportTestFunctions::execCheckUVChannelCount },
			{ "CheckVertexCount", &UStaticMeshImportTestFunctions::execCheckVertexCount },
			{ "CheckVertexIndexPosition", &UStaticMeshImportTestFunctions::execCheckVertexIndexPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms
		{
			UStaticMesh* Mesh;
			TSoftObjectPtr<UStaticMesh> MeshToCompare;
			bool bCheckVertexCountEqual;
			bool bCheckTriangleCountEqual;
			bool bCheckUVChannelCountEqual;
			bool bCheckCollisionPrimitiveCountEqual;
			bool bCheckVertexPositionsEqual;
			bool bCheckNormalsEqual;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MeshToCompare;
		static void NewProp_bCheckVertexCountEqual_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckVertexCountEqual;
		static void NewProp_bCheckTriangleCountEqual_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckTriangleCountEqual;
		static void NewProp_bCheckUVChannelCountEqual_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckUVChannelCountEqual;
		static void NewProp_bCheckCollisionPrimitiveCountEqual_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckCollisionPrimitiveCountEqual;
		static void NewProp_bCheckVertexPositionsEqual_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckVertexPositionsEqual;
		static void NewProp_bCheckNormalsEqual_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckNormalsEqual;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_MeshToCompare = { "MeshToCompare", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms, MeshToCompare), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckVertexCountEqual_SetBit(void* Obj)
	{
		((StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms*)Obj)->bCheckVertexCountEqual = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckVertexCountEqual = { "bCheckVertexCountEqual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms), &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckVertexCountEqual_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckTriangleCountEqual_SetBit(void* Obj)
	{
		((StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms*)Obj)->bCheckTriangleCountEqual = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckTriangleCountEqual = { "bCheckTriangleCountEqual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms), &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckTriangleCountEqual_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckUVChannelCountEqual_SetBit(void* Obj)
	{
		((StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms*)Obj)->bCheckUVChannelCountEqual = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckUVChannelCountEqual = { "bCheckUVChannelCountEqual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms), &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckUVChannelCountEqual_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckCollisionPrimitiveCountEqual_SetBit(void* Obj)
	{
		((StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms*)Obj)->bCheckCollisionPrimitiveCountEqual = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckCollisionPrimitiveCountEqual = { "bCheckCollisionPrimitiveCountEqual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms), &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckCollisionPrimitiveCountEqual_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckVertexPositionsEqual_SetBit(void* Obj)
	{
		((StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms*)Obj)->bCheckVertexPositionsEqual = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckVertexPositionsEqual = { "bCheckVertexPositionsEqual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms), &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckVertexPositionsEqual_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckNormalsEqual_SetBit(void* Obj)
	{
		((StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms*)Obj)->bCheckNormalsEqual = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckNormalsEqual = { "bCheckNormalsEqual", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms), &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckNormalsEqual_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_MeshToCompare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckVertexCountEqual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckTriangleCountEqual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckUVChannelCountEqual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckCollisionPrimitiveCountEqual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckVertexPositionsEqual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_bCheckNormalsEqual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the static mesh is equivalent to a ground truth asset */" },
		{ "CPP_Default_bCheckCollisionPrimitiveCountEqual", "true" },
		{ "CPP_Default_bCheckNormalsEqual", "true" },
		{ "CPP_Default_bCheckTriangleCountEqual", "true" },
		{ "CPP_Default_bCheckUVChannelCountEqual", "true" },
		{ "CPP_Default_bCheckVertexCountEqual", "true" },
		{ "CPP_Default_bCheckVertexPositionsEqual", "true" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the static mesh is equivalent to a ground truth asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckAgainstGroundTruth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::StaticMeshImportTestFunctions_eventCheckAgainstGroundTruth_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckBuildSettings_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			FMeshBuildSettings ExpectedBuildSettings;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedBuildSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpectedBuildSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckBuildSettings_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckBuildSettings_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_ExpectedBuildSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_ExpectedBuildSettings = { "ExpectedBuildSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckBuildSettings_Parms, ExpectedBuildSettings), Z_Construct_UScriptStruct_FMeshBuildSettings, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_ExpectedBuildSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_ExpectedBuildSettings_MetaData)) }; // 3244455572
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckBuildSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_ExpectedBuildSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the static mesh source model has the expected build settings */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the static mesh source model has the expected build settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckBuildSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::StaticMeshImportTestFunctions_eventCheckBuildSettings_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckImportedMaterialSlotName_Parms
		{
			UStaticMesh* Mesh;
			int32 MaterialIndex;
			FString ExpectedImportedMaterialSlotName;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckImportedMaterialSlotName_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckImportedMaterialSlotName_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName = { "ExpectedImportedMaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckImportedMaterialSlotName_Parms, ExpectedImportedMaterialSlotName), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckImportedMaterialSlotName_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the static mesh imported material slot name for the given material index is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the static mesh imported material slot name for the given material index is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckImportedMaterialSlotName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::StaticMeshImportTestFunctions_eventCheckImportedMaterialSlotName_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckImportedStaticMeshCount_Parms
		{
			TArray<UStaticMesh*> Meshes;
			int32 ExpectedNumberOfImportedStaticMeshes;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfImportedStaticMeshes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_Meshes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckImportedStaticMeshCount_Parms, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_Meshes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_ExpectedNumberOfImportedStaticMeshes = { "ExpectedNumberOfImportedStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckImportedStaticMeshCount_Parms, ExpectedNumberOfImportedStaticMeshes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckImportedStaticMeshCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_Meshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_ExpectedNumberOfImportedStaticMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the expected number of static meshes are imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the expected number of static meshes are imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckImportedStaticMeshCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::StaticMeshImportTestFunctions_eventCheckImportedStaticMeshCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckLodCount_Parms
		{
			UStaticMesh* Mesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckLodCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::NewProp_ExpectedNumberOfLods = { "ExpectedNumberOfLods", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckLodCount_Parms, ExpectedNumberOfLods), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckLodCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::NewProp_ExpectedNumberOfLods,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the static mesh has the expected number of LODs */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the static mesh has the expected number of LODs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckLodCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::StaticMeshImportTestFunctions_eventCheckLodCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckMaterialSlotCount_Parms
		{
			UStaticMesh* Mesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckMaterialSlotCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_ExpectedNumberOfMaterialSlots = { "ExpectedNumberOfMaterialSlots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckMaterialSlotCount_Parms, ExpectedNumberOfMaterialSlots), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckMaterialSlotCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_ExpectedNumberOfMaterialSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the static mesh has the expected number of material slots */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the static mesh has the expected number of material slots" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckMaterialSlotCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::StaticMeshImportTestFunctions_eventCheckMaterialSlotCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckNaniteSettings_Parms
		{
			UStaticMesh* Mesh;
			FMeshNaniteSettings ExpectedNaniteSettings;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedNaniteSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpectedNaniteSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckNaniteSettings_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::NewProp_ExpectedNaniteSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::NewProp_ExpectedNaniteSettings = { "ExpectedNaniteSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckNaniteSettings_Parms, ExpectedNaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::NewProp_ExpectedNaniteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::NewProp_ExpectedNaniteSettings_MetaData)) }; // 2370712239
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckNaniteSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::NewProp_ExpectedNaniteSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the static mesh has the expected Nanite settings */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the static mesh has the expected Nanite settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckNaniteSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::StaticMeshImportTestFunctions_eventCheckNaniteSettings_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00422601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckPolygonCount_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 ExpectedNumberOfPolygons;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfPolygons;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::NewProp_ExpectedNumberOfPolygons = { "ExpectedNumberOfPolygons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonCount_Parms, ExpectedNumberOfPolygons), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::NewProp_ExpectedNumberOfPolygons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh description has the expected number of polygons for the given LOD */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh description has the expected number of polygons for the given LOD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckPolygonCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::StaticMeshImportTestFunctions_eventCheckPolygonCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckPolygonCountInPolygonGroup_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 PolygonGroupIndex;
			int32 ExpectedNumberOfPolygons;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonGroupIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfPolygons;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonCountInPolygonGroup_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonCountInPolygonGroup_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::NewProp_PolygonGroupIndex = { "PolygonGroupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonCountInPolygonGroup_Parms, PolygonGroupIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::NewProp_ExpectedNumberOfPolygons = { "ExpectedNumberOfPolygons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonCountInPolygonGroup_Parms, ExpectedNumberOfPolygons), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonCountInPolygonGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::NewProp_PolygonGroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::NewProp_ExpectedNumberOfPolygons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the given mesh description polygon group of the given LOD has the expected number of polygons */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the given mesh description polygon group of the given LOD has the expected number of polygons" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckPolygonCountInPolygonGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::StaticMeshImportTestFunctions_eventCheckPolygonCountInPolygonGroup_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckPolygonGroupCount_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 ExpectedNumberOfPolygonGroups;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfPolygonGroups;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonGroupCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonGroupCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::NewProp_ExpectedNumberOfPolygonGroups = { "ExpectedNumberOfPolygonGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonGroupCount_Parms, ExpectedNumberOfPolygonGroups), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonGroupCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::NewProp_ExpectedNumberOfPolygonGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh description has the expected number of polygon groups for the given LOD */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh description has the expected number of polygon groups for the given LOD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckPolygonGroupCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::StaticMeshImportTestFunctions_eventCheckPolygonGroupCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckPolygonGroupImportedMaterialSlotName_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 PolygonGroupIndex;
			FString ExpectedImportedMaterialSlotName;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonGroupIndex;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonGroupImportedMaterialSlotName_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonGroupImportedMaterialSlotName_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_PolygonGroupIndex = { "PolygonGroupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonGroupImportedMaterialSlotName_Parms, PolygonGroupIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName = { "ExpectedImportedMaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonGroupImportedMaterialSlotName_Parms, ExpectedImportedMaterialSlotName), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckPolygonGroupImportedMaterialSlotName_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_PolygonGroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh description material slot name for the given polygon group in the given LOD is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh description material slot name for the given polygon group in the given LOD is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckPolygonGroupImportedMaterialSlotName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::StaticMeshImportTestFunctions_eventCheckPolygonGroupImportedMaterialSlotName_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckRenderHasVertexColors_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			bool bExpectedHasVertexColors;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static void NewProp_bExpectedHasVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExpectedHasVertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderHasVertexColors_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderHasVertexColors_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::NewProp_bExpectedHasVertexColors_SetBit(void* Obj)
	{
		((StaticMeshImportTestFunctions_eventCheckRenderHasVertexColors_Parms*)Obj)->bExpectedHasVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::NewProp_bExpectedHasVertexColors = { "bExpectedHasVertexColors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshImportTestFunctions_eventCheckRenderHasVertexColors_Parms), &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::NewProp_bExpectedHasVertexColors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderHasVertexColors_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::NewProp_bExpectedHasVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the render data contains any vertex colors of the given LOD */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the render data contains any vertex colors of the given LOD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckRenderHasVertexColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::StaticMeshImportTestFunctions_eventCheckRenderHasVertexColors_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 ExpectedTotalNumberOfTriangles;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedTotalNumberOfTriangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_ExpectedTotalNumberOfTriangles = { "ExpectedTotalNumberOfTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms, ExpectedTotalNumberOfTriangles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_ExpectedTotalNumberOfTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the render data has the expected number of triangles for the given LOD */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the render data has the expected number of triangles for the given LOD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckRenderTriangleCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::StaticMeshImportTestFunctions_eventCheckRenderTriangleCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckRenderUVChannelCount_Parms
		{
			UStaticMesh* Mesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderUVChannelCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderUVChannelCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::NewProp_ExpectedNumberOfUVChannels = { "ExpectedNumberOfUVChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderUVChannelCount_Parms, ExpectedNumberOfUVChannels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderUVChannelCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::NewProp_ExpectedNumberOfUVChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the render data has the expected number of UV channels */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the render data has the expected number of UV channels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckRenderUVChannelCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::StaticMeshImportTestFunctions_eventCheckRenderUVChannelCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckRenderVertexCount_Parms
		{
			UStaticMesh* Mesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_ExpectedNumberOfRenderVertices = { "ExpectedNumberOfRenderVertices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexCount_Parms, ExpectedNumberOfRenderVertices), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_ExpectedNumberOfRenderVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the render data vertex count for the given LOD is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the render data vertex count for the given LOD is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckRenderVertexCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::StaticMeshImportTestFunctions_eventCheckRenderVertexCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckRenderVertexIndexColor_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 VertexIndex;
			FColor ExpectedVertexColor;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedVertexColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpectedVertexColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexIndexColor_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexIndexColor_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexIndexColor_Parms, VertexIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_ExpectedVertexColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_ExpectedVertexColor = { "ExpectedVertexColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexIndexColor_Parms, ExpectedVertexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_ExpectedVertexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_ExpectedVertexColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexIndexColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_VertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_ExpectedVertexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the render data vertex index of the given LOD has the expected vertex color */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the render data vertex index of the given LOD has the expected vertex color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckRenderVertexIndexColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::StaticMeshImportTestFunctions_eventCheckRenderVertexIndexColor_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckRenderVertexIndexNormal_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 VertexIndex;
			FVector4f ExpectedVertexNormal;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexIndexNormal_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexIndexNormal_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexIndexNormal_Parms, VertexIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_ExpectedVertexNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_ExpectedVertexNormal = { "ExpectedVertexNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexIndexNormal_Parms, ExpectedVertexNormal), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_ExpectedVertexNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_ExpectedVertexNormal_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckRenderVertexIndexNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_VertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_ExpectedVertexNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the render data vertex index of the given LOD has the expected vertex normal */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the render data vertex index of the given LOD has the expected vertex normal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckRenderVertexIndexNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::StaticMeshImportTestFunctions_eventCheckRenderVertexIndexNormal_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckSectionCount_Parms
		{
			UStaticMesh* Mesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_ExpectedNumberOfSections = { "ExpectedNumberOfSections", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionCount_Parms, ExpectedNumberOfSections), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_ExpectedNumberOfSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the render data for the given mesh LOD has the expected number of sections */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the render data for the given mesh LOD has the expected number of sections" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckSectionCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::StaticMeshImportTestFunctions_eventCheckSectionCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms
		{
			UStaticMesh* Mesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName = { "ExpectedImportedMaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms, ExpectedImportedMaterialSlotName), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ExpectedImportedMaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the section index in the built render data for the given LOD is referencing the expected imported material slot name*/" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the section index in the built render data for the given LOD is referencing the expected imported material slot name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckSectionImportedMaterialSlotName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::StaticMeshImportTestFunctions_eventCheckSectionImportedMaterialSlotName_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckSectionMaterialIndex_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 SectionIndex;
			int32 ExpectedMaterialIndex;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedMaterialIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionMaterialIndex_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionMaterialIndex_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionMaterialIndex_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::NewProp_ExpectedMaterialIndex = { "ExpectedMaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionMaterialIndex_Parms, ExpectedMaterialIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionMaterialIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::NewProp_ExpectedMaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the section index in the built render data for the given LOD is referencing the expected material index */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the section index in the built render data for the given LOD is referencing the expected material index" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckSectionMaterialIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::StaticMeshImportTestFunctions_eventCheckSectionMaterialIndex_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckSectionMaterialName_Parms
		{
			UStaticMesh* Mesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionMaterialName_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionMaterialName_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionMaterialName_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ExpectedMaterialName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ExpectedMaterialName = { "ExpectedMaterialName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionMaterialName_Parms, ExpectedMaterialName), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ExpectedMaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ExpectedMaterialName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSectionMaterialName_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ExpectedMaterialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the section index in the built render data for the given LOD is referencing the expected material */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the section index in the built render data for the given LOD is referencing the expected material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckSectionMaterialName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::StaticMeshImportTestFunctions_eventCheckSectionMaterialName_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckSimpleCollisionPrimitiveCount_Parms
		{
			UStaticMesh* Mesh;
			int32 ExpectedSphereElementCount;
			int32 ExpectedBoxElementCount;
			int32 ExpectedCapsuleElementCount;
			int32 ExpectedConvexElementCount;
			int32 ExpectedTaperedCapsuleElementCount;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedSphereElementCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedBoxElementCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedCapsuleElementCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedConvexElementCount;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedTaperedCapsuleElementCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSimpleCollisionPrimitiveCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ExpectedSphereElementCount = { "ExpectedSphereElementCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSimpleCollisionPrimitiveCount_Parms, ExpectedSphereElementCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ExpectedBoxElementCount = { "ExpectedBoxElementCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSimpleCollisionPrimitiveCount_Parms, ExpectedBoxElementCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ExpectedCapsuleElementCount = { "ExpectedCapsuleElementCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSimpleCollisionPrimitiveCount_Parms, ExpectedCapsuleElementCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ExpectedConvexElementCount = { "ExpectedConvexElementCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSimpleCollisionPrimitiveCount_Parms, ExpectedConvexElementCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ExpectedTaperedCapsuleElementCount = { "ExpectedTaperedCapsuleElementCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSimpleCollisionPrimitiveCount_Parms, ExpectedTaperedCapsuleElementCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSimpleCollisionPrimitiveCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ExpectedSphereElementCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ExpectedBoxElementCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ExpectedCapsuleElementCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ExpectedConvexElementCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ExpectedTaperedCapsuleElementCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the static mesh expected number of simple collision primitives were imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the static mesh expected number of simple collision primitives were imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckSimpleCollisionPrimitiveCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::StaticMeshImportTestFunctions_eventCheckSimpleCollisionPrimitiveCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckSocketCount_Parms
		{
			UStaticMesh* Mesh;
			int32 ExpectedSocketCount;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedSocketCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::NewProp_ExpectedSocketCount = { "ExpectedSocketCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketCount_Parms, ExpectedSocketCount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::NewProp_ExpectedSocketCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the static mesh expected number of sockets were imported */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the static mesh expected number of sockets were imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckSocketCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::StaticMeshImportTestFunctions_eventCheckSocketCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckSocketLocation_Parms
		{
			UStaticMesh* Mesh;
			int32 SocketIndex;
			FVector ExpectedSocketLocation;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SocketIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedSocketLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpectedSocketLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketLocation_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_SocketIndex = { "SocketIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketLocation_Parms, SocketIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_ExpectedSocketLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_ExpectedSocketLocation = { "ExpectedSocketLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketLocation_Parms, ExpectedSocketLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_ExpectedSocketLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_ExpectedSocketLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_SocketIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_ExpectedSocketLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the static mesh given socket index has the expected location */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the static mesh given socket index has the expected location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckSocketLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::StaticMeshImportTestFunctions_eventCheckSocketLocation_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckSocketName_Parms
		{
			UStaticMesh* Mesh;
			int32 SocketIndex;
			FString ExpectedSocketName;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SocketIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedSocketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketName_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_SocketIndex = { "SocketIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketName_Parms, SocketIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_ExpectedSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_ExpectedSocketName = { "ExpectedSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketName_Parms, ExpectedSocketName), METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_ExpectedSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_ExpectedSocketName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckSocketName_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_SocketIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_ExpectedSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the static mesh given socket index has the expected name */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the static mesh given socket index has the expected name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckSocketName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::StaticMeshImportTestFunctions_eventCheckSocketName_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckThatMeshHasQuadsOrNgons_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			bool bMeshHasQuadsOrNgons;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static void NewProp_bMeshHasQuadsOrNgons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshHasQuadsOrNgons;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckThatMeshHasQuadsOrNgons_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckThatMeshHasQuadsOrNgons_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::NewProp_bMeshHasQuadsOrNgons_SetBit(void* Obj)
	{
		((StaticMeshImportTestFunctions_eventCheckThatMeshHasQuadsOrNgons_Parms*)Obj)->bMeshHasQuadsOrNgons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::NewProp_bMeshHasQuadsOrNgons = { "bMeshHasQuadsOrNgons", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaticMeshImportTestFunctions_eventCheckThatMeshHasQuadsOrNgons_Parms), &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::NewProp_bMeshHasQuadsOrNgons_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckThatMeshHasQuadsOrNgons_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::NewProp_bMeshHasQuadsOrNgons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh description contains any quads or ngons */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh description contains any quads or ngons" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckThatMeshHasQuadsOrNgons", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::StaticMeshImportTestFunctions_eventCheckThatMeshHasQuadsOrNgons_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckTriangleCount_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 ExpectedTotalNumberOfTriangles;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedTotalNumberOfTriangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckTriangleCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckTriangleCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::NewProp_ExpectedTotalNumberOfTriangles = { "ExpectedTotalNumberOfTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckTriangleCount_Parms, ExpectedTotalNumberOfTriangles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckTriangleCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::NewProp_ExpectedTotalNumberOfTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh description has the expected number of triangles for the given LOD */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh description has the expected number of triangles for the given LOD" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckTriangleCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::StaticMeshImportTestFunctions_eventCheckTriangleCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckTriangleCountInPolygonGroup_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 PolygonGroupIndex;
			int32 ExpectedNumberOfTriangles;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PolygonGroupIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfTriangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckTriangleCountInPolygonGroup_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckTriangleCountInPolygonGroup_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::NewProp_PolygonGroupIndex = { "PolygonGroupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckTriangleCountInPolygonGroup_Parms, PolygonGroupIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::NewProp_ExpectedNumberOfTriangles = { "ExpectedNumberOfTriangles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckTriangleCountInPolygonGroup_Parms, ExpectedNumberOfTriangles), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckTriangleCountInPolygonGroup_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::NewProp_PolygonGroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::NewProp_ExpectedNumberOfTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the given mesh description polygon group of the given LOD has the expected number of triangles */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the given mesh description polygon group of the given LOD has the expected number of triangles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckTriangleCountInPolygonGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::StaticMeshImportTestFunctions_eventCheckTriangleCountInPolygonGroup_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckUVChannelCount_Parms
		{
			UStaticMesh* Mesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckUVChannelCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckUVChannelCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_ExpectedNumberOfUVChannels = { "ExpectedNumberOfUVChannels", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckUVChannelCount_Parms, ExpectedNumberOfUVChannels), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckUVChannelCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_ExpectedNumberOfUVChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh description has the expected number of UV channels */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh description has the expected number of UV channels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckUVChannelCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::StaticMeshImportTestFunctions_eventCheckUVChannelCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckVertexCount_Parms
		{
			UStaticMesh* Mesh;
			int32 LodIndex;
			int32 ExpectedNumberOfVertices;
			FInterchangeTestFunctionResult ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LodIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumberOfVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckVertexCount_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckVertexCount_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::NewProp_ExpectedNumberOfVertices = { "ExpectedNumberOfVertices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckVertexCount_Parms, ExpectedNumberOfVertices), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckVertexCount_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::NewProp_ExpectedNumberOfVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh description vertex count for the given LOD is as expected */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh description vertex count for the given LOD is as expected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckVertexCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::StaticMeshImportTestFunctions_eventCheckVertexCount_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics
	{
		struct StaticMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms
		{
			UStaticMesh* Mesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms, LodIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_VertexIndex = { "VertexIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms, VertexIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ExpectedVertexPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ExpectedVertexPosition = { "ExpectedVertexPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms, ExpectedVertexPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ExpectedVertexPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ExpectedVertexPosition_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FInterchangeTestFunctionResult, METADATA_PARAMS(nullptr, 0) }; // 1077685810
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_LodIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_VertexIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ExpectedVertexPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check whether the mesh description vertex of the given index is at the expected position */" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ToolTip", "Check whether the mesh description vertex of the given index is at the expected position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaticMeshImportTestFunctions, nullptr, "CheckVertexIndexPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::StaticMeshImportTestFunctions_eventCheckVertexIndexPosition_Parms), Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshImportTestFunctions);
	UClass* Z_Construct_UClass_UStaticMeshImportTestFunctions_NoRegister()
	{
		return UStaticMeshImportTestFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImportTestFunctionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeTests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckAgainstGroundTruth, "CheckAgainstGroundTruth" }, // 1101300238
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckBuildSettings, "CheckBuildSettings" }, // 987424251
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedMaterialSlotName, "CheckImportedMaterialSlotName" }, // 3631973636
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckImportedStaticMeshCount, "CheckImportedStaticMeshCount" }, // 2458087632
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckLodCount, "CheckLodCount" }, // 3234216370
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckMaterialSlotCount, "CheckMaterialSlotCount" }, // 4049253010
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckNaniteSettings, "CheckNaniteSettings" }, // 56446681
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCount, "CheckPolygonCount" }, // 3228043447
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonCountInPolygonGroup, "CheckPolygonCountInPolygonGroup" }, // 1832420502
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupCount, "CheckPolygonGroupCount" }, // 2341571889
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckPolygonGroupImportedMaterialSlotName, "CheckPolygonGroupImportedMaterialSlotName" }, // 2769858701
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderHasVertexColors, "CheckRenderHasVertexColors" }, // 3078946036
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderTriangleCount, "CheckRenderTriangleCount" }, // 2032722609
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderUVChannelCount, "CheckRenderUVChannelCount" }, // 3482767205
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexCount, "CheckRenderVertexCount" }, // 3815388561
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexColor, "CheckRenderVertexIndexColor" }, // 3061331100
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckRenderVertexIndexNormal, "CheckRenderVertexIndexNormal" }, // 2765257685
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionCount, "CheckSectionCount" }, // 2239670210
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionImportedMaterialSlotName, "CheckSectionImportedMaterialSlotName" }, // 634724912
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialIndex, "CheckSectionMaterialIndex" }, // 3479828220
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSectionMaterialName, "CheckSectionMaterialName" }, // 938014541
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSimpleCollisionPrimitiveCount, "CheckSimpleCollisionPrimitiveCount" }, // 3247079487
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketCount, "CheckSocketCount" }, // 975746117
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketLocation, "CheckSocketLocation" }, // 3970010625
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckSocketName, "CheckSocketName" }, // 2756155785
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckThatMeshHasQuadsOrNgons, "CheckThatMeshHasQuadsOrNgons" }, // 514457768
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCount, "CheckTriangleCount" }, // 640476068
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckTriangleCountInPolygonGroup, "CheckTriangleCountInPolygonGroup" }, // 2725908219
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckUVChannelCount, "CheckUVChannelCount" }, // 565197979
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexCount, "CheckVertexCount" }, // 755005808
		{ &Z_Construct_UFunction_UStaticMeshImportTestFunctions_CheckVertexIndexPosition, "CheckVertexIndexPosition" }, // 1566942750
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ImportTestFunctions/StaticMeshImportTestFunctions.h" },
		{ "ModuleRelativePath", "Public/ImportTestFunctions/StaticMeshImportTestFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshImportTestFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics::ClassParams = {
		&UStaticMeshImportTestFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshImportTestFunctions()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshImportTestFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshImportTestFunctions.OuterSingleton, Z_Construct_UClass_UStaticMeshImportTestFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshImportTestFunctions.OuterSingleton;
	}
	template<> INTERCHANGETESTS_API UClass* StaticClass<UStaticMeshImportTestFunctions>()
	{
		return UStaticMeshImportTestFunctions::StaticClass();
	}
	UStaticMeshImportTestFunctions::UStaticMeshImportTestFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshImportTestFunctions);
	UStaticMeshImportTestFunctions::~UStaticMeshImportTestFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_Statics::EnumInfo[] = {
		{ EStaticMeshImportTestGroundTruthBitflags_StaticEnum, TEXT("EStaticMeshImportTestGroundTruthBitflags"), &Z_Registration_Info_UEnum_EStaticMeshImportTestGroundTruthBitflags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3426625643U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshImportTestFunctions, UStaticMeshImportTestFunctions::StaticClass, TEXT("UStaticMeshImportTestFunctions"), &Z_Registration_Info_UClass_UStaticMeshImportTestFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshImportTestFunctions), 199405633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_2674559235(TEXT("/Script/InterchangeTests"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_InterchangeTests_Source_InterchangeTests_Public_ImportTestFunctions_StaticMeshImportTestFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
