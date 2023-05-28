// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/SceneUtilityFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneUtilityFunctions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshPool_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptDebug_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromComponentOptions;
class UScriptStruct* FGeometryScriptCopyMeshFromComponentOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromComponentOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromComponentOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptCopyMeshFromComponentOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromComponentOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptCopyMeshFromComponentOptions>()
{
	return FGeometryScriptCopyMeshFromComponentOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantNormals_MetaData[];
#endif
		static void NewProp_bWantNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantTangents_MetaData[];
#endif
		static void NewProp_bWantTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestedLOD_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequestedLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/SceneUtilityFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptCopyMeshFromComponentOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantNormals_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/SceneUtilityFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantNormals_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshFromComponentOptions*)Obj)->bWantNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantNormals = { "bWantNormals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshFromComponentOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantTangents_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/SceneUtilityFunctions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantTangents_SetBit(void* Obj)
	{
		((FGeometryScriptCopyMeshFromComponentOptions*)Obj)->bWantTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantTangents = { "bWantTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryScriptCopyMeshFromComponentOptions), &Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_RequestedLOD_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/SceneUtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_RequestedLOD = { "RequestedLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptCopyMeshFromComponentOptions, RequestedLOD), Z_Construct_UScriptStruct_FGeometryScriptMeshReadLOD, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_RequestedLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_RequestedLOD_MetaData)) }; // 3978269310
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_bWantTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewProp_RequestedLOD,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptCopyMeshFromComponentOptions",
		sizeof(FGeometryScriptCopyMeshFromComponentOptions),
		alignof(FGeometryScriptCopyMeshFromComponentOptions),
		Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromComponentOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromComponentOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromComponentOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SceneUtilityFunctions::execCopyCollisionMeshesFromObject)
	{
		P_GET_OBJECT(UObject,Z_Param_FromObject);
		P_GET_OBJECT(UDynamicMesh,Z_Param_ToDynamicMesh);
		P_GET_UBOOL(Z_Param_bTransformToWorld);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_LocalToWorld);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_UBOOL(Z_Param_bUseComplexCollision);
		P_GET_PROPERTY(FIntProperty,Z_Param_SphereResolution);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_SceneUtilityFunctions::CopyCollisionMeshesFromObject(Z_Param_FromObject,Z_Param_ToDynamicMesh,Z_Param_bTransformToWorld,Z_Param_Out_LocalToWorld,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_bUseComplexCollision,Z_Param_SphereResolution,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SceneUtilityFunctions::execSetComponentMaterialList)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_TARRAY_REF(UMaterialInterface*,Z_Param_Out_MaterialList);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_SceneUtilityFunctions::SetComponentMaterialList(Z_Param_Component,Z_Param_Out_MaterialList,Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SceneUtilityFunctions::execCopyMeshFromComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_OBJECT(UDynamicMesh,Z_Param_ToDynamicMesh);
		P_GET_STRUCT(FGeometryScriptCopyMeshFromComponentOptions,Z_Param_Options);
		P_GET_UBOOL(Z_Param_bTransformToWorld);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_LocalToWorld);
		P_GET_ENUM_REF(EGeometryScriptOutcomePins,Z_Param_Out_Outcome);
		P_GET_OBJECT(UGeometryScriptDebug,Z_Param_Debug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=UGeometryScriptLibrary_SceneUtilityFunctions::CopyMeshFromComponent(Z_Param_Component,Z_Param_ToDynamicMesh,Z_Param_Options,Z_Param_bTransformToWorld,Z_Param_Out_LocalToWorld,(EGeometryScriptOutcomePins&)(Z_Param_Out_Outcome),Z_Param_Debug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_SceneUtilityFunctions::execCreateDynamicMeshPool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMeshPool**)Z_Param__Result=UGeometryScriptLibrary_SceneUtilityFunctions::CreateDynamicMeshPool();
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_SceneUtilityFunctions::StaticRegisterNativesUGeometryScriptLibrary_SceneUtilityFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyCollisionMeshesFromObject", &UGeometryScriptLibrary_SceneUtilityFunctions::execCopyCollisionMeshesFromObject },
			{ "CopyMeshFromComponent", &UGeometryScriptLibrary_SceneUtilityFunctions::execCopyMeshFromComponent },
			{ "CreateDynamicMeshPool", &UGeometryScriptLibrary_SceneUtilityFunctions::execCreateDynamicMeshPool },
			{ "SetComponentMaterialList", &UGeometryScriptLibrary_SceneUtilityFunctions::execSetComponentMaterialList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics
	{
		struct GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms
		{
			UObject* FromObject;
			UDynamicMesh* ToDynamicMesh;
			bool bTransformToWorld;
			FTransform LocalToWorld;
			EGeometryScriptOutcomePins Outcome;
			bool bUseComplexCollision;
			int32 SphereResolution;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToDynamicMesh;
		static void NewProp_bTransformToWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformToWorld;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToWorld;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static void NewProp_bUseComplexCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexCollision;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SphereResolution;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_FromObject = { "FromObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms, FromObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_ToDynamicMesh = { "ToDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms, ToDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_bTransformToWorld_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms*)Obj)->bTransformToWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_bTransformToWorld = { "bTransformToWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_bTransformToWorld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_LocalToWorld = { "LocalToWorld", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms, LocalToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	void Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_bUseComplexCollision_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms*)Obj)->bUseComplexCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_bUseComplexCollision = { "bUseComplexCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_bUseComplexCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_SphereResolution = { "SphereResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms, SphereResolution), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_FromObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_ToDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_bTransformToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_LocalToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_bUseComplexCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_SphereResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Scene" },
		{ "Comment", "/**\n\x09 * Extract the Collision Geometry from FromObject and copy/approximate it with meshes stored in ToDynamicMesh.\n\x09 * For Simple Collision, FromObject can be a StaticMesh Asset or any PrimitiveComponent\n\x09 * For Complex Collision, FromObject can be a StaticMesh Asset, StaticMeshComponent, or DynamicMeshComponent\n\x09 * @param bTransformToWorld if true, output mesh is in World space\n\x09 * @param LocalToWorld local-to-world transform is returned here (whether mesh is in local or world space)\n\x09 * @param bUseComplexCollision if true, complex collision is extracted, otherwise Simple collision shapes are meshed\n\x09 * @param SphereResolution determines tessellation density of sphere and capsule shapes\n\x09 */" },
		{ "CPP_Default_bUseComplexCollision", "false" },
		{ "CPP_Default_Debug", "None" },
		{ "CPP_Default_SphereResolution", "16" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/SceneUtilityFunctions.h" },
		{ "ToolTip", "Extract the Collision Geometry from FromObject and copy/approximate it with meshes stored in ToDynamicMesh.\nFor Simple Collision, FromObject can be a StaticMesh Asset or any PrimitiveComponent\nFor Complex Collision, FromObject can be a StaticMesh Asset, StaticMeshComponent, or DynamicMeshComponent\n@param bTransformToWorld if true, output mesh is in World space\n@param LocalToWorld local-to-world transform is returned here (whether mesh is in local or world space)\n@param bUseComplexCollision if true, complex collision is extracted, otherwise Simple collision shapes are meshed\n@param SphereResolution determines tessellation density of sphere and capsule shapes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions, nullptr, "CopyCollisionMeshesFromObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::GeometryScriptLibrary_SceneUtilityFunctions_eventCopyCollisionMeshesFromObject_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics
	{
		struct GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms
		{
			USceneComponent* Component;
			UDynamicMesh* ToDynamicMesh;
			FGeometryScriptCopyMeshFromComponentOptions Options;
			bool bTransformToWorld;
			FTransform LocalToWorld;
			EGeometryScriptOutcomePins Outcome;
			UGeometryScriptDebug* Debug;
			UDynamicMesh* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToDynamicMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static void NewProp_bTransformToWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransformToWorld;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToWorld;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Outcome_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Outcome;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_ToDynamicMesh = { "ToDynamicMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms, ToDynamicMesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms, Options), Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions, METADATA_PARAMS(nullptr, 0) }; // 1611494183
	void Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_bTransformToWorld_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms*)Obj)->bTransformToWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_bTransformToWorld = { "bTransformToWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_bTransformToWorld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_LocalToWorld = { "LocalToWorld", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms, LocalToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Outcome_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms, Outcome), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptOutcomePins, METADATA_PARAMS(nullptr, 0) }; // 3716180884
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_ToDynamicMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_bTransformToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_LocalToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Outcome_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Outcome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Scene" },
		{ "Comment", "/**\n\x09 * Copy the mesh from a given Component to a Dynamic Mesh.\n\x09 * StaticMeshComponent, DynamicMeshCompnent, and BrushComponent are supported.\n\x09 * This function offers minimal control over the copying, if more control is needed for Static Meshes, use CopyMeshFromStaticMesh.\n\x09 * @param bTransformToWorld if true, output mesh is in World space\n\x09 * @param LocalToWorld local-to-world transform is returned here (whether mesh is in local or world space)\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ExpandEnumAsExecs", "Outcome" },
		{ "ModuleRelativePath", "Public/GeometryScript/SceneUtilityFunctions.h" },
		{ "ToolTip", "Copy the mesh from a given Component to a Dynamic Mesh.\nStaticMeshComponent, DynamicMeshCompnent, and BrushComponent are supported.\nThis function offers minimal control over the copying, if more control is needed for Static Meshes, use CopyMeshFromStaticMesh.\n@param bTransformToWorld if true, output mesh is in World space\n@param LocalToWorld local-to-world transform is returned here (whether mesh is in local or world space)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions, nullptr, "CopyMeshFromComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::GeometryScriptLibrary_SceneUtilityFunctions_eventCopyMeshFromComponent_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics
	{
		struct GeometryScriptLibrary_SceneUtilityFunctions_eventCreateDynamicMeshPool_Parms
		{
			UDynamicMeshPool* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Dynamic Mesh Pool" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventCreateDynamicMeshPool_Parms, ReturnValue), Z_Construct_UClass_UDynamicMeshPool_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Utility" },
		{ "Comment", "/**\n\x09 * Create a new UDynamicMeshPool object. \n\x09 * Caller needs to create a UProperty reference to the returned object, or it will be garbage-collected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/SceneUtilityFunctions.h" },
		{ "ToolTip", "Create a new UDynamicMeshPool object.\nCaller needs to create a UProperty reference to the returned object, or it will be garbage-collected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions, nullptr, "CreateDynamicMeshPool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::GeometryScriptLibrary_SceneUtilityFunctions_eventCreateDynamicMeshPool_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics
	{
		struct GeometryScriptLibrary_SceneUtilityFunctions_eventSetComponentMaterialList_Parms
		{
			UPrimitiveComponent* Component;
			TArray<UMaterialInterface*> MaterialList;
			UGeometryScriptDebug* Debug;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventSetComponentMaterialList_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_MaterialList_Inner = { "MaterialList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_MaterialList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_MaterialList = { "MaterialList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventSetComponentMaterialList_Parms, MaterialList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_MaterialList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_MaterialList_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_SceneUtilityFunctions_eventSetComponentMaterialList_Parms, Debug), Z_Construct_UClass_UGeometryScriptDebug_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_MaterialList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_MaterialList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::NewProp_Debug,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|Scene" },
		{ "Comment", "/**\n\x09 * Configure the Material set on a PrimitiveComponent, by repeatedly calling SetMaterial.\n\x09 * This is a simple utility function and it's behavior will depend on the specifics of the Component.\n\x09 */" },
		{ "CPP_Default_Debug", "None" },
		{ "ModuleRelativePath", "Public/GeometryScript/SceneUtilityFunctions.h" },
		{ "ToolTip", "Configure the Material set on a PrimitiveComponent, by repeatedly calling SetMaterial.\nThis is a simple utility function and it's behavior will depend on the specifics of the Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions, nullptr, "SetComponentMaterialList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::GeometryScriptLibrary_SceneUtilityFunctions_eventSetComponentMaterialList_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_SceneUtilityFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyCollisionMeshesFromObject, "CopyCollisionMeshesFromObject" }, // 1816993681
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CopyMeshFromComponent, "CopyMeshFromComponent" }, // 1883980978
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_CreateDynamicMeshPool, "CreateDynamicMeshPool" }, // 3399479357
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_SceneUtilityFunctions_SetComponentMaterialList, "SetComponentMaterialList" }, // 2093854238
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/SceneUtilityFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/SceneUtilityFunctions.h" },
		{ "ScriptName", "GeometryScript_SceneUtils" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_SceneUtilityFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_SceneUtilityFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_SceneUtilityFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_SceneUtilityFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_SceneUtilityFunctions>()
	{
		return UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass();
	}
	UGeometryScriptLibrary_SceneUtilityFunctions::UGeometryScriptLibrary_SceneUtilityFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_SceneUtilityFunctions);
	UGeometryScriptLibrary_SceneUtilityFunctions::~UGeometryScriptLibrary_SceneUtilityFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptCopyMeshFromComponentOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptCopyMeshFromComponentOptions_Statics::NewStructOps, TEXT("GeometryScriptCopyMeshFromComponentOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptCopyMeshFromComponentOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptCopyMeshFromComponentOptions), 1611494183U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_SceneUtilityFunctions, UGeometryScriptLibrary_SceneUtilityFunctions::StaticClass, TEXT("UGeometryScriptLibrary_SceneUtilityFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_SceneUtilityFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_SceneUtilityFunctions), 969671765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_2694159138(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_SceneUtilityFunctions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
