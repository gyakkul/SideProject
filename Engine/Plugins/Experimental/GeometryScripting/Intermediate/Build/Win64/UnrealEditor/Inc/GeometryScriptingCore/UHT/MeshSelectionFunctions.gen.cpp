// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/MeshSelectionFunctions.h"
#include "GeometryScript/GeometryScriptSelectionTypes.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSelectionFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptIndexList();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshSelection();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType;
	static UEnum* EGeometryScriptTopologyConnectionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptTopologyConnectionType"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptTopologyConnectionType>()
	{
		return EGeometryScriptTopologyConnectionType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType_Statics::Enumerators[] = {
		{ "EGeometryScriptTopologyConnectionType::Geometric", (int64)EGeometryScriptTopologyConnectionType::Geometric },
		{ "EGeometryScriptTopologyConnectionType::Polygroup", (int64)EGeometryScriptTopologyConnectionType::Polygroup },
		{ "EGeometryScriptTopologyConnectionType::MaterialID", (int64)EGeometryScriptTopologyConnectionType::MaterialID },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Types of connection between adjacent Mesh Elements (vertices/triangles/polygoups)\n */" },
		{ "Geometric.Name", "EGeometryScriptTopologyConnectionType::Geometric" },
		{ "MaterialID.Name", "EGeometryScriptTopologyConnectionType::MaterialID" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "Polygroup.DisplayName", "PolyGroup" },
		{ "Polygroup.Name", "EGeometryScriptTopologyConnectionType::Polygroup" },
		{ "ToolTip", "Types of connection between adjacent Mesh Elements (vertices/triangles/polygoups)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptTopologyConnectionType",
		"EGeometryScriptTopologyConnectionType",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execExpandContractMeshSelection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_NewSelection);
		P_GET_PROPERTY(FIntProperty,Z_Param_Iterations);
		P_GET_UBOOL(Z_Param_bContract);
		P_GET_UBOOL(Z_Param_bOnlyExpandToFaceNeighbours);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::ExpandContractMeshSelection(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Out_NewSelection,Z_Param_Iterations,Z_Param_bContract,Z_Param_bOnlyExpandToFaceNeighbours);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execExpandMeshSelectionToConnected)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_NewSelection);
		P_GET_ENUM(EGeometryScriptTopologyConnectionType,Z_Param_ConnectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::ExpandMeshSelectionToConnected(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Out_NewSelection,EGeometryScriptTopologyConnectionType(Z_Param_ConnectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execInvertMeshSelection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_NewSelection);
		P_GET_UBOOL(Z_Param_bOnlyToConnected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::InvertMeshSelection(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Out_NewSelection,Z_Param_bOnlyToConnected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsInsideMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_OBJECT(UDynamicMesh,Z_Param_SelectionMesh);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_Selection);
		P_GET_STRUCT(FTransform,Z_Param_SelectionMeshTransform);
		P_GET_ENUM(EGeometryScriptMeshSelectionType,Z_Param_SelectionType);
		P_GET_UBOOL(Z_Param_bInvert);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_ShellDistance);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_WindingThreshold);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinNumTrianglePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInsideMesh(Z_Param_TargetMesh,Z_Param_SelectionMesh,Z_Param_Out_Selection,Z_Param_SelectionMeshTransform,EGeometryScriptMeshSelectionType(Z_Param_SelectionType),Z_Param_bInvert,Z_Param_ShellDistance,Z_Param_WindingThreshold,Z_Param_MinNumTrianglePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsByNormalAngle)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_Selection);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_MaxAngleDeg);
		P_GET_ENUM(EGeometryScriptMeshSelectionType,Z_Param_SelectionType);
		P_GET_UBOOL(Z_Param_bInvert);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinNumTrianglePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsByNormalAngle(Z_Param_TargetMesh,Z_Param_Out_Selection,Z_Param_Normal,Z_Param_MaxAngleDeg,EGeometryScriptMeshSelectionType(Z_Param_SelectionType),Z_Param_bInvert,Z_Param_MinNumTrianglePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsWithPlane)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_Selection);
		P_GET_STRUCT(FVector,Z_Param_PlaneOrigin);
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
		P_GET_ENUM(EGeometryScriptMeshSelectionType,Z_Param_SelectionType);
		P_GET_UBOOL(Z_Param_bInvert);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinNumTrianglePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsWithPlane(Z_Param_TargetMesh,Z_Param_Out_Selection,Z_Param_PlaneOrigin,Z_Param_PlaneNormal,EGeometryScriptMeshSelectionType(Z_Param_SelectionType),Z_Param_bInvert,Z_Param_MinNumTrianglePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsInSphere)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_Selection);
		P_GET_STRUCT(FVector,Z_Param_SphereOrigin);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_SphereRadius);
		P_GET_ENUM(EGeometryScriptMeshSelectionType,Z_Param_SelectionType);
		P_GET_UBOOL(Z_Param_bInvert);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinNumTrianglePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInSphere(Z_Param_TargetMesh,Z_Param_Out_Selection,Z_Param_SphereOrigin,Z_Param_SphereRadius,EGeometryScriptMeshSelectionType(Z_Param_SelectionType),Z_Param_bInvert,Z_Param_MinNumTrianglePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsInBox)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_Selection);
		P_GET_STRUCT(FBox,Z_Param_Box);
		P_GET_ENUM(EGeometryScriptMeshSelectionType,Z_Param_SelectionType);
		P_GET_UBOOL(Z_Param_bInvert);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinNumTrianglePoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::SelectMeshElementsInBox(Z_Param_TargetMesh,Z_Param_Out_Selection,Z_Param_Box,EGeometryScriptMeshSelectionType(Z_Param_SelectionType),Z_Param_bInvert,Z_Param_MinNumTrianglePoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execConvertMeshSelectionToIndexList)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_STRUCT_REF(FGeometryScriptIndexList,Z_Param_Out_IndexList);
		P_GET_ENUM_REF(EGeometryScriptIndexType,Z_Param_Out_ResultListType);
		P_GET_ENUM(EGeometryScriptIndexType,Z_Param_ConvertToType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexList(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Out_IndexList,(EGeometryScriptIndexType&)(Z_Param_Out_ResultListType),EGeometryScriptIndexType(Z_Param_ConvertToType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execConvertIndexListToMeshSelection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptIndexList,Z_Param_IndexList);
		P_GET_ENUM(EGeometryScriptMeshSelectionType,Z_Param_SelectionType);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_Selection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexListToMeshSelection(Z_Param_TargetMesh,Z_Param_IndexList,EGeometryScriptMeshSelectionType(Z_Param_SelectionType),Z_Param_Out_Selection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execConvertMeshSelectionToIndexArray)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_TARRAY_REF(int32,Z_Param_Out_IndexArray);
		P_GET_ENUM_REF(EGeometryScriptMeshSelectionType,Z_Param_Out_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelectionToIndexArray(Z_Param_TargetMesh,Z_Param_Selection,Z_Param_Out_IndexArray,(EGeometryScriptMeshSelectionType&)(Z_Param_Out_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execConvertIndexSetToMeshSelection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_TSET_REF(int32,Z_Param_Out_IndexSet);
		P_GET_ENUM(EGeometryScriptMeshSelectionType,Z_Param_SelectionType);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_Selection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexSetToMeshSelection(Z_Param_TargetMesh,Z_Param_Out_IndexSet,EGeometryScriptMeshSelectionType(Z_Param_SelectionType),Z_Param_Out_Selection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execConvertIndexArrayToMeshSelection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_TARRAY_REF(int32,Z_Param_Out_IndexArray);
		P_GET_ENUM(EGeometryScriptMeshSelectionType,Z_Param_SelectionType);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_Selection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::ConvertIndexArrayToMeshSelection(Z_Param_TargetMesh,Z_Param_Out_IndexArray,EGeometryScriptMeshSelectionType(Z_Param_SelectionType),Z_Param_Out_Selection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execCombineMeshSelections)
	{
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_SelectionA);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_SelectionB);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_ResultSelection);
		P_GET_ENUM(EGeometryScriptCombineSelectionMode,Z_Param_CombineMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_MeshSelectionFunctions::CombineMeshSelections(Z_Param_SelectionA,Z_Param_SelectionB,Z_Param_Out_ResultSelection,EGeometryScriptCombineSelectionMode(Z_Param_CombineMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execConvertMeshSelection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_FromSelection);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_ToSelection);
		P_GET_ENUM(EGeometryScriptMeshSelectionType,Z_Param_NewType);
		P_GET_UBOOL(Z_Param_bAllowPartialInclusion);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::ConvertMeshSelection(Z_Param_TargetMesh,Z_Param_FromSelection,Z_Param_Out_ToSelection,EGeometryScriptMeshSelectionType(Z_Param_NewType),Z_Param_bAllowPartialInclusion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execCreateSelectAllMeshSelection)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_TargetMesh);
		P_GET_STRUCT_REF(FGeometryScriptMeshSelection,Z_Param_Out_Selection);
		P_GET_ENUM(EGeometryScriptMeshSelectionType,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_MeshSelectionFunctions::CreateSelectAllMeshSelection(Z_Param_TargetMesh,Z_Param_Out_Selection,EGeometryScriptMeshSelectionType(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execDebugPrintMeshSelection)
	{
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_UBOOL(Z_Param_bDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_MeshSelectionFunctions::DebugPrintMeshSelection(Z_Param_Selection,Z_Param_bDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_MeshSelectionFunctions::execGetMeshSelectionInfo)
	{
		P_GET_STRUCT(FGeometryScriptMeshSelection,Z_Param_Selection);
		P_GET_ENUM_REF(EGeometryScriptMeshSelectionType,Z_Param_Out_SelectionType);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NumSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_MeshSelectionFunctions::GetMeshSelectionInfo(Z_Param_Selection,(EGeometryScriptMeshSelectionType&)(Z_Param_Out_SelectionType),Z_Param_Out_NumSelected);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_MeshSelectionFunctions::StaticRegisterNativesUGeometryScriptLibrary_MeshSelectionFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CombineMeshSelections", &UGeometryScriptLibrary_MeshSelectionFunctions::execCombineMeshSelections },
			{ "ConvertIndexArrayToMeshSelection", &UGeometryScriptLibrary_MeshSelectionFunctions::execConvertIndexArrayToMeshSelection },
			{ "ConvertIndexListToMeshSelection", &UGeometryScriptLibrary_MeshSelectionFunctions::execConvertIndexListToMeshSelection },
			{ "ConvertIndexSetToMeshSelection", &UGeometryScriptLibrary_MeshSelectionFunctions::execConvertIndexSetToMeshSelection },
			{ "ConvertMeshSelection", &UGeometryScriptLibrary_MeshSelectionFunctions::execConvertMeshSelection },
			{ "ConvertMeshSelectionToIndexArray", &UGeometryScriptLibrary_MeshSelectionFunctions::execConvertMeshSelectionToIndexArray },
			{ "ConvertMeshSelectionToIndexList", &UGeometryScriptLibrary_MeshSelectionFunctions::execConvertMeshSelectionToIndexList },
			{ "CreateSelectAllMeshSelection", &UGeometryScriptLibrary_MeshSelectionFunctions::execCreateSelectAllMeshSelection },
			{ "DebugPrintMeshSelection", &UGeometryScriptLibrary_MeshSelectionFunctions::execDebugPrintMeshSelection },
			{ "ExpandContractMeshSelection", &UGeometryScriptLibrary_MeshSelectionFunctions::execExpandContractMeshSelection },
			{ "ExpandMeshSelectionToConnected", &UGeometryScriptLibrary_MeshSelectionFunctions::execExpandMeshSelectionToConnected },
			{ "GetMeshSelectionInfo", &UGeometryScriptLibrary_MeshSelectionFunctions::execGetMeshSelectionInfo },
			{ "InvertMeshSelection", &UGeometryScriptLibrary_MeshSelectionFunctions::execInvertMeshSelection },
			{ "SelectMeshElementsByNormalAngle", &UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsByNormalAngle },
			{ "SelectMeshElementsInBox", &UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsInBox },
			{ "SelectMeshElementsInsideMesh", &UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsInsideMesh },
			{ "SelectMeshElementsInSphere", &UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsInSphere },
			{ "SelectMeshElementsWithPlane", &UGeometryScriptLibrary_MeshSelectionFunctions::execSelectMeshElementsWithPlane },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventCombineMeshSelections_Parms
		{
			FGeometryScriptMeshSelection SelectionA;
			FGeometryScriptMeshSelection SelectionB;
			FGeometryScriptMeshSelection ResultSelection;
			EGeometryScriptCombineSelectionMode CombineMode;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionB;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResultSelection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CombineMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CombineMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::NewProp_SelectionA = { "SelectionA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventCombineMeshSelections_Parms, SelectionA), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::NewProp_SelectionB = { "SelectionB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventCombineMeshSelections_Parms, SelectionB), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::NewProp_ResultSelection = { "ResultSelection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventCombineMeshSelections_Parms, ResultSelection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::NewProp_CombineMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::NewProp_CombineMode = { "CombineMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventCombineMeshSelections_Parms, CombineMode), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptCombineSelectionMode, METADATA_PARAMS(nullptr, 0) }; // 950965262
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::NewProp_SelectionA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::NewProp_SelectionB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::NewProp_ResultSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::NewProp_CombineMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::NewProp_CombineMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Combine two Mesh Selections into a new Mesh Selection.\n\x09 * The two inputs SelectionA and SelectionB must have the same Type.\n\x09 * @param CombineMode specifies how the selection elements in SelectionA and SelectionB are interpreted/combined.\n\x09 */" },
		{ "CPP_Default_CombineMode", "Add" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Combine two Mesh Selections into a new Mesh Selection.\nThe two inputs SelectionA and SelectionB must have the same Type.\n@param CombineMode specifies how the selection elements in SelectionA and SelectionB are interpreted/combined." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "CombineMeshSelections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventCombineMeshSelections_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexArrayToMeshSelection_Parms
		{
			UDynamicMesh* TargetMesh;
			TArray<int32> IndexArray;
			EGeometryScriptMeshSelectionType SelectionType;
			FGeometryScriptMeshSelection Selection;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexArrayToMeshSelection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_IndexArray_Inner = { "IndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_IndexArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_IndexArray = { "IndexArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexArrayToMeshSelection_Parms, IndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_IndexArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_IndexArray_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexArrayToMeshSelection_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexArrayToMeshSelection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexArrayToMeshSelection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_IndexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_IndexArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Create a Mesh Selection from the IndexArray. \n\x09 * @param SelectionType type of indices specified in the selection\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a Mesh Selection from the IndexArray.\n@param SelectionType type of indices specified in the selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "ConvertIndexArrayToMeshSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexArrayToMeshSelection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexListToMeshSelection_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptIndexList IndexList;
			EGeometryScriptMeshSelectionType SelectionType;
			FGeometryScriptMeshSelection Selection;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexListToMeshSelection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexListToMeshSelection_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexListToMeshSelection_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexListToMeshSelection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexListToMeshSelection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Create a Mesh Selection from the Index List. For cases where the IndexList Type does not match\n\x09 * the SelectionType, ConvertMeshSelection with bAllowPartialInclusion=true is used to convert.\n\x09 * @param SelectionType type of indices desired in the Output selection\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a Mesh Selection from the Index List. For cases where the IndexList Type does not match\nthe SelectionType, ConvertMeshSelection with bAllowPartialInclusion=true is used to convert.\n@param SelectionType type of indices desired in the Output selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "ConvertIndexListToMeshSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexListToMeshSelection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexSetToMeshSelection_Parms
		{
			UDynamicMesh* TargetMesh;
			TSet<int32> IndexSet;
			EGeometryScriptMeshSelectionType SelectionType;
			FGeometryScriptMeshSelection Selection;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IndexSet;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexSetToMeshSelection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_IndexSet_ElementProp = { "IndexSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_IndexSet_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_IndexSet = { "IndexSet", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexSetToMeshSelection_Parms, IndexSet), METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_IndexSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_IndexSet_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexSetToMeshSelection_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexSetToMeshSelection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexSetToMeshSelection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_IndexSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_IndexSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Create a Mesh Selection from the IndexSet. \n\x09 * @param SelectionType type of indices specified in the selection\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a Mesh Selection from the IndexSet.\n@param SelectionType type of indices specified in the selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "ConvertIndexSetToMeshSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventConvertIndexSetToMeshSelection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelection_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection FromSelection;
			FGeometryScriptMeshSelection ToSelection;
			EGeometryScriptMeshSelectionType NewType;
			bool bAllowPartialInclusion;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FromSelection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToSelection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewType;
		static void NewProp_bAllowPartialInclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialInclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_FromSelection = { "FromSelection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelection_Parms, FromSelection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_ToSelection = { "ToSelection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelection_Parms, ToSelection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_NewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_NewType = { "NewType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelection_Parms, NewType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_bAllowPartialInclusion_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelection_Parms*)Obj)->bAllowPartialInclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_bAllowPartialInclusion = { "bAllowPartialInclusion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_bAllowPartialInclusion_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_FromSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_ToSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_NewType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_NewType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_bAllowPartialInclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Convert a Mesh Selection to a different Type (eg Vertices to Triangles, etc)\n\x09 * By default, Vertices map to Triangle one-rings, and Triangles to all contained vertices.\n\x09 * If bAllowPartialInclusion is disabled, then more restrictive conversions are performed, as follows:\n\x09 *   For To-Vertices, only include vertices where all one-ring triangles are included in FromSelection.\n\x09 *   For To-Triangles, only include triangles where all tri vertices are included in FromSelection.\n\x09 *   For To-PolyGroups, only include groups where all group triangles are included in FromSelection\n\x09 * @param bAllowPartialInclusion if false, perform more limited selection conversion as described above\n\x09 */" },
		{ "CPP_Default_bAllowPartialInclusion", "true" },
		{ "CPP_Default_NewType", "Triangles" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Convert a Mesh Selection to a different Type (eg Vertices to Triangles, etc)\nBy default, Vertices map to Triangle one-rings, and Triangles to all contained vertices.\nIf bAllowPartialInclusion is disabled, then more restrictive conversions are performed, as follows:\n  For To-Vertices, only include vertices where all one-ring triangles are included in FromSelection.\n  For To-Triangles, only include triangles where all tri vertices are included in FromSelection.\n  For To-PolyGroups, only include groups where all group triangles are included in FromSelection\n@param bAllowPartialInclusion if false, perform more limited selection conversion as described above" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "ConvertMeshSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexArray_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			TArray<int32> IndexArray;
			EGeometryScriptMeshSelectionType SelectionType;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexArray_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexArray_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_IndexArray_Inner = { "IndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_IndexArray = { "IndexArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexArray_Parms, IndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexArray_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexArray_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_IndexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_IndexArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Convert a Mesh Selection to an Index List\n\x09 * @param ConvertToType optional parameter specifying the type of Index List to convert to. If Set to Any, no conversion will be performed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Convert a Mesh Selection to an Index List\n@param ConvertToType optional parameter specifying the type of Index List to convert to. If Set to Any, no conversion will be performed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "ConvertMeshSelectionToIndexArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexArray_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexList_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptIndexList IndexList;
			EGeometryScriptIndexType ResultListType;
			EGeometryScriptIndexType ConvertToType;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IndexList;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResultListType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultListType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConvertToType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConvertToType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexList_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexList_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_IndexList = { "IndexList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexList_Parms, IndexList), Z_Construct_UScriptStruct_FGeometryScriptIndexList, METADATA_PARAMS(nullptr, 0) }; // 2920384414
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ResultListType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ResultListType = { "ResultListType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexList_Parms, ResultListType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType, METADATA_PARAMS(nullptr, 0) }; // 4266585007
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ConvertToType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ConvertToType = { "ConvertToType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexList_Parms, ConvertToType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptIndexType, METADATA_PARAMS(nullptr, 0) }; // 4266585007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexList_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_IndexList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ResultListType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ResultListType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ConvertToType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ConvertToType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Convert a Mesh Selection to an Index List\n\x09 * @param ConvertToType optional parameter specifying the type of Index List to convert to. If Set to Any, no conversion will be performed.\n\x09 */" },
		{ "CPP_Default_ConvertToType", "Any" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Convert a Mesh Selection to an Index List\n@param ConvertToType optional parameter specifying the type of Index List to convert to. If Set to Any, no conversion will be performed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "ConvertMeshSelectionToIndexList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventConvertMeshSelectionToIndexList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventCreateSelectAllMeshSelection_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			EGeometryScriptMeshSelectionType SelectionType;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventCreateSelectAllMeshSelection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventCreateSelectAllMeshSelection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventCreateSelectAllMeshSelection_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventCreateSelectAllMeshSelection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Create a Selection of the given SelectionType that contains all the mesh elements of TargetMesh\n\x09 */" },
		{ "CPP_Default_SelectionType", "Triangles" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a Selection of the given SelectionType that contains all the mesh elements of TargetMesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "CreateSelectAllMeshSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventCreateSelectAllMeshSelection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventDebugPrintMeshSelection_Parms
		{
			FGeometryScriptMeshSelection Selection;
			bool bDisable;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static void NewProp_bDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventDebugPrintMeshSelection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::NewProp_bDisable_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionFunctions_eventDebugPrintMeshSelection_Parms*)Obj)->bDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::NewProp_bDisable = { "bDisable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionFunctions_eventDebugPrintMeshSelection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::NewProp_bDisable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::NewProp_bDisable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Print information about the Mesh Selection to the Output Log\n\x09 * @param bDisable if true, printing will be disabled (useful for debugging)\n\x09 */" },
		{ "CPP_Default_bDisable", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Print information about the Mesh Selection to the Output Log\n@param bDisable if true, printing will be disabled (useful for debugging)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "DebugPrintMeshSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventDebugPrintMeshSelection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptMeshSelection NewSelection;
			int32 Iterations;
			bool bContract;
			bool bOnlyExpandToFaceNeighbours;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSelection;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
		static void NewProp_bContract_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContract;
		static void NewProp_bOnlyExpandToFaceNeighbours_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyExpandToFaceNeighbours;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_NewSelection = { "NewSelection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms, NewSelection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms, Iterations), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_bContract_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms*)Obj)->bContract = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_bContract = { "bContract", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_bContract_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_bOnlyExpandToFaceNeighbours_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms*)Obj)->bOnlyExpandToFaceNeighbours = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_bOnlyExpandToFaceNeighbours = { "bOnlyExpandToFaceNeighbours", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_bOnlyExpandToFaceNeighbours_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_NewSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_Iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_bContract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_bOnlyExpandToFaceNeighbours,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Grow or Shrink the Selection on the TargetMesh to connected neighbours.\n\x09 * For Vertex selections, Expand includes vertices in one-ring of selected vertices, and Contract removes any vertices with a one-ring neighbour that is not selected\n\x09 * For Triangle selections, Add/Remove Triangles connected to selected Triangles\n\x09 * For PolyGroup selections, Add/Remove PolyGroups connected to selected PolyGroups\n\x09 * @param Iterations number of times to Expand/Contract the Selection. Valid range is [0,100] where 0 is a no-op.\n\x09 * @param bContract if true selection contracts instead of growing\n\x09 * @param bOnlyExpandToFaceNeighbours if true, only adjacent Triangles/PolyGroups directly connected by an edge are added, vs connected to any selected vertex\n\x09 */" },
		{ "CPP_Default_bContract", "false" },
		{ "CPP_Default_bOnlyExpandToFaceNeighbours", "false" },
		{ "CPP_Default_Iterations", "1" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Grow or Shrink the Selection on the TargetMesh to connected neighbours.\nFor Vertex selections, Expand includes vertices in one-ring of selected vertices, and Contract removes any vertices with a one-ring neighbour that is not selected\nFor Triangle selections, Add/Remove Triangles connected to selected Triangles\nFor PolyGroup selections, Add/Remove PolyGroups connected to selected PolyGroups\n@param Iterations number of times to Expand/Contract the Selection. Valid range is [0,100] where 0 is a no-op.\n@param bContract if true selection contracts instead of growing\n@param bOnlyExpandToFaceNeighbours if true, only adjacent Triangles/PolyGroups directly connected by an edge are added, vs connected to any selected vertex" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "ExpandContractMeshSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventExpandContractMeshSelection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventExpandMeshSelectionToConnected_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptMeshSelection NewSelection;
			EGeometryScriptTopologyConnectionType ConnectionType;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSelection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandMeshSelectionToConnected_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandMeshSelectionToConnected_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_NewSelection = { "NewSelection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandMeshSelectionToConnected_Parms, NewSelection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_ConnectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_ConnectionType = { "ConnectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandMeshSelectionToConnected_Parms, ConnectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptTopologyConnectionType, METADATA_PARAMS(nullptr, 0) }; // 3525930867
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventExpandMeshSelectionToConnected_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_NewSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_ConnectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_ConnectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Expand the Selection on the TargetMesh to connected regions and return the NewSelection\n\x09 * @param ConnectionType defines what \"connected\" means, ie purely geometric connection, or some additional constraint like same MaterialIDs/etc \n\x09 */" },
		{ "CPP_Default_ConnectionType", "Geometric" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Expand the Selection on the TargetMesh to connected regions and return the NewSelection\n@param ConnectionType defines what \"connected\" means, ie purely geometric connection, or some additional constraint like same MaterialIDs/etc" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "ExpandMeshSelectionToConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventExpandMeshSelectionToConnected_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventGetMeshSelectionInfo_Parms
		{
			FGeometryScriptMeshSelection Selection;
			EGeometryScriptMeshSelectionType SelectionType;
			int32 NumSelected;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventGetMeshSelectionInfo_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventGetMeshSelectionInfo_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::NewProp_NumSelected = { "NumSelected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventGetMeshSelectionInfo_Parms, NumSelected), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::NewProp_NumSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Query information about a Mesh Selection\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Query information about a Mesh Selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "GetMeshSelectionInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventGetMeshSelectionInfo_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventInvertMeshSelection_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FGeometryScriptMeshSelection NewSelection;
			bool bOnlyToConnected;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSelection;
		static void NewProp_bOnlyToConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyToConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventInvertMeshSelection_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventInvertMeshSelection_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_NewSelection = { "NewSelection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventInvertMeshSelection_Parms, NewSelection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_bOnlyToConnected_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionFunctions_eventInvertMeshSelection_Parms*)Obj)->bOnlyToConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_bOnlyToConnected = { "bOnlyToConnected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionFunctions_eventInvertMeshSelection_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_bOnlyToConnected_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventInvertMeshSelection_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_NewSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_bOnlyToConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Invert the Selection on the TargetMesh, ie select what is not currently selected\n\x09 * @param bOnlyToConnected if true, the inverse is limited to mesh areas geometrically connected to the Selection, instead of the entire mesh\n\x09 */" },
		{ "CPP_Default_bOnlyToConnected", "false" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Invert the Selection on the TargetMesh, ie select what is not currently selected\n@param bOnlyToConnected if true, the inverse is limited to mesh areas geometrically connected to the Selection, instead of the entire mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "InvertMeshSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventInvertMeshSelection_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FVector Normal;
			double MaxAngleDeg;
			EGeometryScriptMeshSelectionType SelectionType;
			bool bInvert;
			int32 MinNumTrianglePoints;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxAngleDeg;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinNumTrianglePoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_MaxAngleDeg = { "MaxAngleDeg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms, MaxAngleDeg), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_MinNumTrianglePoints = { "MinNumTrianglePoints", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms, MinNumTrianglePoints), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_MaxAngleDeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_bInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_MinNumTrianglePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MinNumTrianglePoints" },
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09* Create a new Mesh Selection of the SelectionType for the TargetMesh by finding all elements that have a normal\n\x09* vector that is within an angular deviation threshold from the given Normal. \n\x09* For Triangle and PolyGroup selections the triangle facet normal is used, for Vertex selections the per-vertex averaged normal is used.\n\x09* @param Normal normal/direction vector to measure against\n\x09* @param MaxAngleDeg maximum angular deviation from Normal, in degrees\n\x09* @param bInvert return a selection of all elements not within the given deviation\n\x09* @param MinNumTrianglePoints number of vertices of a triangle that must be within the angular deviation for it to be selected (1,2, or 3)\n\x09*/" },
		{ "CPP_Default_bInvert", "false" },
		{ "CPP_Default_MaxAngleDeg", "1.000000" },
		{ "CPP_Default_MinNumTrianglePoints", "3" },
		{ "CPP_Default_Normal", "0.000000,0.000000,1.000000" },
		{ "CPP_Default_SelectionType", "Triangles" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new Mesh Selection of the SelectionType for the TargetMesh by finding all elements that have a normal\nvector that is within an angular deviation threshold from the given Normal.\nFor Triangle and PolyGroup selections the triangle facet normal is used, for Vertex selections the per-vertex averaged normal is used.\n@param Normal normal/direction vector to measure against\n@param MaxAngleDeg maximum angular deviation from Normal, in degrees\n@param bInvert return a selection of all elements not within the given deviation\n@param MinNumTrianglePoints number of vertices of a triangle that must be within the angular deviation for it to be selected (1,2, or 3)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "SelectMeshElementsByNormalAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsByNormalAngle_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInBox_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FBox Box;
			EGeometryScriptMeshSelectionType SelectionType;
			bool bInvert;
			int32 MinNumTrianglePoints;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Box;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinNumTrianglePoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInBox_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInBox_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInBox_Parms, Box), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInBox_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInBox_Parms*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInBox_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_MinNumTrianglePoints = { "MinNumTrianglePoints", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInBox_Parms, MinNumTrianglePoints), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInBox_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_Box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_bInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_MinNumTrianglePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MinNumTrianglePoints" },
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09 * Create a new Mesh Selection of the SelectionType for the TargetMesh by finding all elements contained in the Box.\n\x09 * @param bInvert return a selection of all elements not in the Box\n\x09 * @param MinNumTrianglePoints number of vertices of a triangle that must be in the box for it to be selected (1,2, or 3)\n\x09 */" },
		{ "CPP_Default_bInvert", "false" },
		{ "CPP_Default_MinNumTrianglePoints", "3" },
		{ "CPP_Default_SelectionType", "Triangles" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new Mesh Selection of the SelectionType for the TargetMesh by finding all elements contained in the Box.\n@param bInvert return a selection of all elements not in the Box\n@param MinNumTrianglePoints number of vertices of a triangle that must be in the box for it to be selected (1,2, or 3)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "SelectMeshElementsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInBox_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms
		{
			UDynamicMesh* TargetMesh;
			UDynamicMesh* SelectionMesh;
			FGeometryScriptMeshSelection Selection;
			FTransform SelectionMeshTransform;
			EGeometryScriptMeshSelectionType SelectionType;
			bool bInvert;
			double ShellDistance;
			double WindingThreshold;
			int32 MinNumTrianglePoints;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionMeshTransform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ShellDistance;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_WindingThreshold;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinNumTrianglePoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_SelectionMesh = { "SelectionMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms, SelectionMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_SelectionMeshTransform = { "SelectionMeshTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms, SelectionMeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_ShellDistance = { "ShellDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms, ShellDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_WindingThreshold = { "WindingThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms, WindingThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_MinNumTrianglePoints = { "MinNumTrianglePoints", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms, MinNumTrianglePoints), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_SelectionMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_SelectionMeshTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_bInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_ShellDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_WindingThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_MinNumTrianglePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MinNumTrianglePoints" },
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09* Create a new Mesh Selection of the SelectionType for the TargetMesh by finding all elements inside a second SelectionMesh\n\x09* For Triangle and PolyGroup selections the triangle facet normal is used, for Vertex selections the per-vertex averaged normal is used.\n\x09* @param SelectionMeshTransform Transform applied to SelectionMesh for inside/outside testing\n\x09* @param bInvert return a selection of all elements not within the given deviation\n\x09* @param ShellDistance If > 0, points within this distance from SelectionMesh will also be considered \"inside\"\n\x09* @param WindingThreshold Threshold used for Fast Mesh Winding Number inside/outside test (range is [0,1], with 1 being \"inside\")\n\x09* @param MinNumTrianglePoints number of vertices of a triangle that must be within the angular deviation for it to be selected (1,2, or 3)\n\x09*/" },
		{ "CPP_Default_bInvert", "false" },
		{ "CPP_Default_MinNumTrianglePoints", "3" },
		{ "CPP_Default_SelectionType", "Triangles" },
		{ "CPP_Default_ShellDistance", "0.000000" },
		{ "CPP_Default_WindingThreshold", "0.500000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new Mesh Selection of the SelectionType for the TargetMesh by finding all elements inside a second SelectionMesh\nFor Triangle and PolyGroup selections the triangle facet normal is used, for Vertex selections the per-vertex averaged normal is used.\n@param SelectionMeshTransform Transform applied to SelectionMesh for inside/outside testing\n@param bInvert return a selection of all elements not within the given deviation\n@param ShellDistance If > 0, points within this distance from SelectionMesh will also be considered \"inside\"\n@param WindingThreshold Threshold used for Fast Mesh Winding Number inside/outside test (range is [0,1], with 1 being \"inside\")\n@param MinNumTrianglePoints number of vertices of a triangle that must be within the angular deviation for it to be selected (1,2, or 3)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "SelectMeshElementsInsideMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInsideMesh_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FVector SphereOrigin;
			double SphereRadius;
			EGeometryScriptMeshSelectionType SelectionType;
			bool bInvert;
			int32 MinNumTrianglePoints;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereOrigin;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_SphereRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinNumTrianglePoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_SphereOrigin = { "SphereOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms, SphereOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_MinNumTrianglePoints = { "MinNumTrianglePoints", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms, MinNumTrianglePoints), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_SphereOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_SphereRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_bInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_MinNumTrianglePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MinNumTrianglePoints" },
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09* Create a new Mesh Selection of the SelectionType for the TargetMesh by finding all elements contained in the Sphere.\n\x09* @param SphereOrigin center point of the Sphere\n\x09* @param SphereRadius radius of the Sphere\n\x09* @param bInvert return a selection of all elements not in the Sphere\n\x09* @param MinNumTrianglePoints number of vertices of a triangle that must be in the Sphere for it to be selected (1,2, or 3)\n\x09*/" },
		{ "CPP_Default_bInvert", "false" },
		{ "CPP_Default_MinNumTrianglePoints", "3" },
		{ "CPP_Default_SelectionType", "Triangles" },
		{ "CPP_Default_SphereOrigin", "" },
		{ "CPP_Default_SphereRadius", "100.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new Mesh Selection of the SelectionType for the TargetMesh by finding all elements contained in the Sphere.\n@param SphereOrigin center point of the Sphere\n@param SphereRadius radius of the Sphere\n@param bInvert return a selection of all elements not in the Sphere\n@param MinNumTrianglePoints number of vertices of a triangle that must be in the Sphere for it to be selected (1,2, or 3)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "SelectMeshElementsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsInSphere_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics
	{
		struct GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms
		{
			UDynamicMesh* TargetMesh;
			FGeometryScriptMeshSelection Selection;
			FVector PlaneOrigin;
			FVector PlaneNormal;
			EGeometryScriptMeshSelectionType SelectionType;
			bool bInvert;
			int32 MinNumTrianglePoints;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Selection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinNumTrianglePoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms, TargetMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_Selection = { "Selection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms, Selection), Z_Construct_UScriptStruct_FGeometryScriptMeshSelection, METADATA_PARAMS(nullptr, 0) }; // 3644640625
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_PlaneOrigin = { "PlaneOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms, PlaneOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms, SelectionType), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptMeshSelectionType, METADATA_PARAMS(nullptr, 0) }; // 1261801425
	void Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_MinNumTrianglePoints = { "MinNumTrianglePoints", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms, MinNumTrianglePoints), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_Selection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_PlaneOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_PlaneNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_SelectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_SelectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_bInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_MinNumTrianglePoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MinNumTrianglePoints" },
		{ "Category", "GeometryScript|MeshSelection" },
		{ "Comment", "/**\n\x09* Create a new Mesh Selection of the SelectionType for the TargetMesh by finding all elements on the \"positive\" side of a Plane\n\x09* @param PlaneOrigin center point of the Plane\n\x09* @param PlaneNormal normal vector for the Plane\n\x09* @param bInvert return a selection of all elements on the other (negative) side of the Plane\n\x09* @param MinNumTrianglePoints number of vertices of a triangle that must be on the positive Plane side to be selected (1,2, or 3)\n\x09*/" },
		{ "CPP_Default_bInvert", "false" },
		{ "CPP_Default_MinNumTrianglePoints", "3" },
		{ "CPP_Default_PlaneNormal", "0.000000,0.000000,1.000000" },
		{ "CPP_Default_PlaneOrigin", "" },
		{ "CPP_Default_SelectionType", "Triangles" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a new Mesh Selection of the SelectionType for the TargetMesh by finding all elements on the \"positive\" side of a Plane\n@param PlaneOrigin center point of the Plane\n@param PlaneNormal normal vector for the Plane\n@param bInvert return a selection of all elements on the other (negative) side of the Plane\n@param MinNumTrianglePoints number of vertices of a triangle that must be on the positive Plane side to be selected (1,2, or 3)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, nullptr, "SelectMeshElementsWithPlane", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::GeometryScriptLibrary_MeshSelectionFunctions_eventSelectMeshElementsWithPlane_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_MeshSelectionFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CombineMeshSelections, "CombineMeshSelections" }, // 898711116
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexArrayToMeshSelection, "ConvertIndexArrayToMeshSelection" }, // 1242752150
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexListToMeshSelection, "ConvertIndexListToMeshSelection" }, // 3681201887
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertIndexSetToMeshSelection, "ConvertIndexSetToMeshSelection" }, // 1137607550
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelection, "ConvertMeshSelection" }, // 1809375580
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexArray, "ConvertMeshSelectionToIndexArray" }, // 2440708307
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ConvertMeshSelectionToIndexList, "ConvertMeshSelectionToIndexList" }, // 2263706289
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_CreateSelectAllMeshSelection, "CreateSelectAllMeshSelection" }, // 1450536319
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_DebugPrintMeshSelection, "DebugPrintMeshSelection" }, // 2841772483
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandContractMeshSelection, "ExpandContractMeshSelection" }, // 3417796567
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_ExpandMeshSelectionToConnected, "ExpandMeshSelectionToConnected" }, // 2066358059
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_GetMeshSelectionInfo, "GetMeshSelectionInfo" }, // 293930406
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_InvertMeshSelection, "InvertMeshSelection" }, // 1488278381
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsByNormalAngle, "SelectMeshElementsByNormalAngle" }, // 1885691553
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInBox, "SelectMeshElementsInBox" }, // 1994965728
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInsideMesh, "SelectMeshElementsInsideMesh" }, // 3663376869
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsInSphere, "SelectMeshElementsInSphere" }, // 739143001
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_MeshSelectionFunctions_SelectMeshElementsWithPlane, "SelectMeshElementsWithPlane" }, // 3546590702
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/MeshSelectionFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/MeshSelectionFunctions.h" },
		{ "ScriptName", "GeometryScript_MeshSelection" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_MeshSelectionFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_MeshSelectionFunctions>()
	{
		return UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass();
	}
	UGeometryScriptLibrary_MeshSelectionFunctions::UGeometryScriptLibrary_MeshSelectionFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_MeshSelectionFunctions);
	UGeometryScriptLibrary_MeshSelectionFunctions::~UGeometryScriptLibrary_MeshSelectionFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptTopologyConnectionType_StaticEnum, TEXT("EGeometryScriptTopologyConnectionType"), &Z_Registration_Info_UEnum_EGeometryScriptTopologyConnectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3525930867U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, UGeometryScriptLibrary_MeshSelectionFunctions::StaticClass, TEXT("UGeometryScriptLibrary_MeshSelectionFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshSelectionFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_MeshSelectionFunctions), 553298387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_323595638(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_MeshSelectionFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
