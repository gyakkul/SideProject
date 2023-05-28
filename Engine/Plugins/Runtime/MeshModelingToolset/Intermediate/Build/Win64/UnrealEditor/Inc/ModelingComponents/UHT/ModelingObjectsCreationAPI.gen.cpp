// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingObjectsCreationAPI.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelingObjectsCreationAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshNaniteSettings();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingObjectsCreationAPI();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingObjectsCreationAPI_NoRegister();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint();
	MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateMeshObjectParams();
	MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateMeshObjectResult();
	MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateTextureObjectParams();
	MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FCreateTextureObjectResult();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECreateModelingObjectResult;
	static UEnum* ECreateModelingObjectResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECreateModelingObjectResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECreateModelingObjectResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ECreateModelingObjectResult"));
		}
		return Z_Registration_Info_UEnum_ECreateModelingObjectResult.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ECreateModelingObjectResult>()
	{
		return ECreateModelingObjectResult_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::Enumerators[] = {
		{ "ECreateModelingObjectResult::Ok", (int64)ECreateModelingObjectResult::Ok },
		{ "ECreateModelingObjectResult::Cancelled", (int64)ECreateModelingObjectResult::Cancelled },
		{ "ECreateModelingObjectResult::Failed_Unknown", (int64)ECreateModelingObjectResult::Failed_Unknown },
		{ "ECreateModelingObjectResult::Failed_NoAPIFound", (int64)ECreateModelingObjectResult::Failed_NoAPIFound },
		{ "ECreateModelingObjectResult::Failed_InvalidWorld", (int64)ECreateModelingObjectResult::Failed_InvalidWorld },
		{ "ECreateModelingObjectResult::Failed_InvalidMesh", (int64)ECreateModelingObjectResult::Failed_InvalidMesh },
		{ "ECreateModelingObjectResult::Failed_InvalidTexture", (int64)ECreateModelingObjectResult::Failed_InvalidTexture },
		{ "ECreateModelingObjectResult::Failed_AssetCreationFailed", (int64)ECreateModelingObjectResult::Failed_AssetCreationFailed },
		{ "ECreateModelingObjectResult::Failed_ActorCreationFailed", (int64)ECreateModelingObjectResult::Failed_ActorCreationFailed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "ECreateModelingObjectResult::Cancelled" },
		{ "Comment", "/**\n * Result code returned by UModelingObjectsCreationAPI functions\n */" },
		{ "Failed_ActorCreationFailed.Name", "ECreateModelingObjectResult::Failed_ActorCreationFailed" },
		{ "Failed_AssetCreationFailed.Name", "ECreateModelingObjectResult::Failed_AssetCreationFailed" },
		{ "Failed_InvalidMesh.Name", "ECreateModelingObjectResult::Failed_InvalidMesh" },
		{ "Failed_InvalidTexture.Name", "ECreateModelingObjectResult::Failed_InvalidTexture" },
		{ "Failed_InvalidWorld.Name", "ECreateModelingObjectResult::Failed_InvalidWorld" },
		{ "Failed_NoAPIFound.Name", "ECreateModelingObjectResult::Failed_NoAPIFound" },
		{ "Failed_Unknown.Name", "ECreateModelingObjectResult::Failed_Unknown" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "Ok.Name", "ECreateModelingObjectResult::Ok" },
		{ "ToolTip", "Result code returned by UModelingObjectsCreationAPI functions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"ECreateModelingObjectResult",
		"ECreateModelingObjectResult",
		Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult()
	{
		if (!Z_Registration_Info_UEnum_ECreateModelingObjectResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECreateModelingObjectResult.InnerSingleton, Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECreateModelingObjectResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType;
	static UEnum* ECreateMeshObjectSourceMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ECreateMeshObjectSourceMeshType"));
		}
		return Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ECreateMeshObjectSourceMeshType>()
	{
		return ECreateMeshObjectSourceMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::Enumerators[] = {
		{ "ECreateMeshObjectSourceMeshType::MeshDescription", (int64)ECreateMeshObjectSourceMeshType::MeshDescription },
		{ "ECreateMeshObjectSourceMeshType::DynamicMesh", (int64)ECreateMeshObjectSourceMeshType::DynamicMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Types of possible source meshes stored in FCreateMeshObjectParams\n */" },
		{ "DynamicMesh.Name", "ECreateMeshObjectSourceMeshType::DynamicMesh" },
		{ "MeshDescription.Name", "ECreateMeshObjectSourceMeshType::MeshDescription" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Types of possible source meshes stored in FCreateMeshObjectParams" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"ECreateMeshObjectSourceMeshType",
		"ECreateMeshObjectSourceMeshType",
		Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType()
	{
		if (!Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.InnerSingleton, Z_Construct_UEnum_ModelingComponents_ECreateMeshObjectSourceMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECreateObjectTypeHint;
	static UEnum* ECreateObjectTypeHint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECreateObjectTypeHint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECreateObjectTypeHint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("ECreateObjectTypeHint"));
		}
		return Z_Registration_Info_UEnum_ECreateObjectTypeHint.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<ECreateObjectTypeHint>()
	{
		return ECreateObjectTypeHint_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::Enumerators[] = {
		{ "ECreateObjectTypeHint::Undefined", (int64)ECreateObjectTypeHint::Undefined },
		{ "ECreateObjectTypeHint::StaticMesh", (int64)ECreateObjectTypeHint::StaticMesh },
		{ "ECreateObjectTypeHint::Volume", (int64)ECreateObjectTypeHint::Volume },
		{ "ECreateObjectTypeHint::DynamicMeshActor", (int64)ECreateObjectTypeHint::DynamicMeshActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Hint for the type of mesh object a UModelingObjectsCreationAPI might create based\n * on FCreateMeshObjectParams data. This can be used by clients to try to specify\n * the type of object to emit, however there is no guarantee that an API implementation\n * supports creating all types.\n */" },
		{ "DynamicMeshActor.Name", "ECreateObjectTypeHint::DynamicMeshActor" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "StaticMesh.Name", "ECreateObjectTypeHint::StaticMesh" },
		{ "ToolTip", "Hint for the type of mesh object a UModelingObjectsCreationAPI might create based\non FCreateMeshObjectParams data. This can be used by clients to try to specify\nthe type of object to emit, however there is no guarantee that an API implementation\nsupports creating all types." },
		{ "Undefined.Name", "ECreateObjectTypeHint::Undefined" },
		{ "Volume.Name", "ECreateObjectTypeHint::Volume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"ECreateObjectTypeHint",
		"ECreateObjectTypeHint",
		Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint()
	{
		if (!Z_Registration_Info_UEnum_ECreateObjectTypeHint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECreateObjectTypeHint.InnerSingleton, Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECreateObjectTypeHint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateMeshObjectParams;
class UScriptStruct* FCreateMeshObjectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateMeshObjectParams, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateMeshObjectParams"));
	}
	return Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateMeshObjectParams>()
{
	return FCreateMeshObjectParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceComponent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TypeHint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeHint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeHint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeHintClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_TypeHintClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeHintExtended_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TypeHintExtended;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRaytracingSupport_MetaData[];
#endif
		static void NewProp_bEnableRaytracingSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRaytracingSupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecomputeNormals_MetaData[];
#endif
		static void NewProp_bEnableRecomputeNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecomputeNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRecomputeTangents_MetaData[];
#endif
		static void NewProp_bEnableRecomputeTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRecomputeTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNanite_MetaData[];
#endif
		static void NewProp_bEnableNanite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNanite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteProxyTrianglePercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NaniteProxyTrianglePercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaniteSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateMeshObjectParams is a collection of input data intended to be passed to\n * UModelingObjectsCreationAPI::CreateMeshObject(). Not all data necessarily needs\n * to be specified, this will depend on the particular implementation. The comments\n * below are representative of how this data structure is used in the Tools and\n * API implementation(s) provided with Unreal Engine, but end-user implementors\n * could abuse these fields as necessary.\n * \n * The definition of a \"mesh object\" is implementation-specific.\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateMeshObjectParams is a collection of input data intended to be passed to\nUModelingObjectsCreationAPI::CreateMeshObject(). Not all data necessarily needs\nto be specified, this will depend on the particular implementation. The comments\nbelow are representative of how this data structure is used in the Tools and\nAPI implementation(s) provided with Unreal Engine, but end-user implementors\ncould abuse these fields as necessary.\n\nThe definition of a \"mesh object\" is implementation-specific." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateMeshObjectParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** A Source Component the new mesh is based on, if such a Component exists */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A Source Component the new mesh is based on, if such a Component exists" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, SourceComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_SourceComponent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** A suggested type for the newly-created Mesh (possibly ignored) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A suggested type for the newly-created Mesh (possibly ignored)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint = { "TypeHint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, TypeHint), Z_Construct_UEnum_ModelingComponents_ECreateObjectTypeHint, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint_MetaData)) }; // 1559716843
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintClass_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** A suggested UClass type for the newly-created Object (possibly ignored) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A suggested UClass type for the newly-created Object (possibly ignored)" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintClass = { "TypeHintClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, TypeHintClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintExtended_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** An arbitrary integer that can be used to pass data to an API implementation */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "An arbitrary integer that can be used to pass data to an API implementation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintExtended = { "TypeHintExtended", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, TypeHintExtended), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintExtended_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintExtended_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TargetWorld_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** The World/Level the new mesh object should be created in (if known) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The World/Level the new mesh object should be created in (if known)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TargetWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TargetWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** The 3D local-to-world transform for the new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The 3D local-to-world transform for the new mesh object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_BaseName_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** The base name of the new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The base name of the new mesh object" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, BaseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_BaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_BaseName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Materials for the new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Materials for the new mesh object" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials_Inner = { "AssetMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Optional Materials for a newly-created Mesh Asset, if this is applicable for the created mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Optional Materials for a newly-created Mesh Asset, if this is applicable for the created mesh object" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials = { "AssetMaterials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, AssetMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether the new mesh object should have collision support/data */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether the new mesh object should have collision support/data" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FCreateMeshObjectParams*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_CollisionMode_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Which Collision mode to enable on the new mesh object, if supported */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Which Collision mode to enable on the new mesh object, if supported" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_CollisionMode = { "CollisionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, CollisionMode), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_CollisionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_CollisionMode_MetaData)) }; // 3043805667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether normals should be automatically recomputed for this new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether normals should be automatically recomputed for this new mesh object" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport_SetBit(void* Obj)
	{
		((FCreateMeshObjectParams*)Obj)->bEnableRaytracingSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport = { "bEnableRaytracingSupport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether normals should be automatically recomputed for this new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether normals should be automatically recomputed for this new mesh object" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals_SetBit(void* Obj)
	{
		((FCreateMeshObjectParams*)Obj)->bEnableRecomputeNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals = { "bEnableRecomputeNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether tangents should be automatically recomputed for this new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether tangents should be automatically recomputed for this new mesh object" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents_SetBit(void* Obj)
	{
		((FCreateMeshObjectParams*)Obj)->bEnableRecomputeTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents = { "bEnableRecomputeTangents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify whether Nanite should be enabled on this new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify whether Nanite should be enabled on this new mesh object" },
	};
#endif
	void Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite_SetBit(void* Obj)
	{
		((FCreateMeshObjectParams*)Obj)->bEnableNanite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite = { "bEnableNanite", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCreateMeshObjectParams), &Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteProxyTrianglePercent_MetaData[] = {
		{ "Comment", "/** Specify the Nanite proxy triangle percentage for this new mesh object */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Replaced NaniteProxyTrianglePercent with usage of Engine FMeshNaniteSettings" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify the Nanite proxy triangle percentage for this new mesh object" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteProxyTrianglePercent = { "NaniteProxyTrianglePercent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, NaniteProxyTrianglePercent_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteProxyTrianglePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteProxyTrianglePercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteSettings_MetaData[] = {
		{ "Category", "CreateMeshObjectParams" },
		{ "Comment", "/** Specify the Nanite Settings for this new mesh object, only used if bEnableNanite=true */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Specify the Nanite Settings for this new mesh object, only used if bEnableNanite=true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteSettings = { "NaniteSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectParams, NaniteSettings), Z_Construct_UScriptStruct_FMeshNaniteSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteSettings_MetaData)) }; // 2370712239
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TypeHintExtended,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_TargetWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_BaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_AssetMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_CollisionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRaytracingSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableRecomputeTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_bEnableNanite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteProxyTrianglePercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewProp_NaniteSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		&NewStructOps,
		"CreateMeshObjectParams",
		sizeof(FCreateMeshObjectParams),
		alignof(FCreateMeshObjectParams),
		Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateMeshObjectParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.InnerSingleton, Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateMeshObjectParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateMeshObjectResult;
class UScriptStruct* FCreateMeshObjectResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateMeshObjectResult, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateMeshObjectResult"));
	}
	return Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateMeshObjectResult>()
{
	return FCreateMeshObjectResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateMeshObjectResult is returned by UModelingObjectsCreationAPI::CreateMeshObject()\n * to indicate success/failure and provide information about created mesh objects\n */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateMeshObjectResult is returned by UModelingObjectsCreationAPI::CreateMeshObject()\nto indicate success/failure and provide information about created mesh objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateMeshObjectResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode_MetaData[] = {
		{ "Category", "CreateMeshObjectResult" },
		{ "Comment", "/** Success/Failure status for the requested operation */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Success/Failure status for the requested operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectResult, ResultCode), Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode_MetaData)) }; // 2700712582
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewActor_MetaData[] = {
		{ "Category", "CreateMeshObjectResult" },
		{ "Comment", "/** A pointer to a newly-created Actor for the mesh object, if applicable (eg StaticMeshActor) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A pointer to a newly-created Actor for the mesh object, if applicable (eg StaticMeshActor)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectResult, NewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewComponent_MetaData[] = {
		{ "Category", "CreateMeshObjectResult" },
		{ "Comment", "/** A pointer to a newly-created PrimitiveComponent for the mesh object, if applicable (eg StaticMeshComponent) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A pointer to a newly-created PrimitiveComponent for the mesh object, if applicable (eg StaticMeshComponent)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewComponent = { "NewComponent", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectResult, NewComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewAsset_MetaData[] = {
		{ "Category", "CreateMeshObjectResult" },
		{ "Comment", "/** A pointer to a newly-created Asset for the mesh object, if applicable (eg StaticMeshAsset) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A pointer to a newly-created Asset for the mesh object, if applicable (eg StaticMeshAsset)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateMeshObjectResult, NewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_ResultCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewProp_NewAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		&NewStructOps,
		"CreateMeshObjectResult",
		sizeof(FCreateMeshObjectResult),
		alignof(FCreateMeshObjectResult),
		Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateMeshObjectResult()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.InnerSingleton, Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateMeshObjectResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateTextureObjectParams;
class UScriptStruct* FCreateTextureObjectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateTextureObjectParams, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateTextureObjectParams"));
	}
	return Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateTextureObjectParams>()
{
	return FCreateTextureObjectParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeHintExtended_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TypeHintExtended;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoreRelativeToObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StoreRelativeToObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTransientTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedTransientTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateTextureObjectParams is a collection of input data intended to be passed to\n * UModelingObjectsCreationAPI::CreateTextureObject(). Not all data necessarily needs\n * to be specified, this will depend on the particular implementation. The comments\n * below are representative of how this data structure is used in the Tools and\n * API implementation(s) provided with Unreal Engine, but end-user implementors\n * could abuse these fields as necessary.\n *\n * The definition of a \"texture object\" is implementation-specific. \n * In the UE Editor this is generally a UTexture2D\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateTextureObjectParams is a collection of input data intended to be passed to\nUModelingObjectsCreationAPI::CreateTextureObject(). Not all data necessarily needs\nto be specified, this will depend on the particular implementation. The comments\nbelow are representative of how this data structure is used in the Tools and\nAPI implementation(s) provided with Unreal Engine, but end-user implementors\ncould abuse these fields as necessary.\n\nThe definition of a \"texture object\" is implementation-specific.\nIn the UE Editor this is generally a UTexture2D" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateTextureObjectParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TypeHintExtended_MetaData[] = {
		{ "Category", "CreateTextureObjectParams" },
		{ "Comment", "/** An arbitrary integer that can be used to pass data to an API implementation */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "An arbitrary integer that can be used to pass data to an API implementation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TypeHintExtended = { "TypeHintExtended", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateTextureObjectParams, TypeHintExtended), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TypeHintExtended_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TypeHintExtended_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TargetWorld_MetaData[] = {
		{ "Category", "CreateTextureObjectParams" },
		{ "Comment", "/** \n\x09 * The World/Level the new texture object should be created in (if known).\n\x09 * Note that Textures generally do not exist as objects in a Level. \n\x09 * However, it may be necessary to store the texture in a path relative to the\n\x09 * level (for example if the level is in a Plugin, this would be necessary in-Editor)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The World/Level the new texture object should be created in (if known).\nNote that Textures generally do not exist as objects in a Level.\nHowever, it may be necessary to store the texture in a path relative to the\nlevel (for example if the level is in a Plugin, this would be necessary in-Editor)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TargetWorld = { "TargetWorld", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateTextureObjectParams, TargetWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TargetWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TargetWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_StoreRelativeToObject_MetaData[] = {
		{ "Category", "CreateTextureObjectParams" },
		{ "Comment", "/** An object to store the Texture relative to. For example the texture could be stored at the same path. */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "An object to store the Texture relative to. For example the texture could be stored at the same path." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_StoreRelativeToObject = { "StoreRelativeToObject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateTextureObjectParams, StoreRelativeToObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_StoreRelativeToObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_StoreRelativeToObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_BaseName_MetaData[] = {
		{ "Category", "CreateTextureObjectParams" },
		{ "Comment", "/** The base name of the new mesh object */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "The base name of the new mesh object" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateTextureObjectParams, BaseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_BaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_BaseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_GeneratedTransientTexture_MetaData[] = {
		{ "Category", "CreateTextureObjectParams" },
		{ "Comment", "/** \n\x09 * Texture source data. Generally assumed that this is a Texture created in the Transient package\n\x09 * that is intended to be saved in a permanent package.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Texture source data. Generally assumed that this is a Texture created in the Transient package\nthat is intended to be saved in a permanent package." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_GeneratedTransientTexture = { "GeneratedTransientTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateTextureObjectParams, GeneratedTransientTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_GeneratedTransientTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_GeneratedTransientTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TypeHintExtended,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_TargetWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_StoreRelativeToObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_BaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewProp_GeneratedTransientTexture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		&NewStructOps,
		"CreateTextureObjectParams",
		sizeof(FCreateTextureObjectParams),
		alignof(FCreateTextureObjectParams),
		Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateTextureObjectParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.InnerSingleton, Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateTextureObjectParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CreateTextureObjectResult;
class UScriptStruct* FCreateTextureObjectResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCreateTextureObjectResult, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("CreateTextureObjectResult"));
	}
	return Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FCreateTextureObjectResult>()
{
	return FCreateTextureObjectResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ResultCode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultCode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NewAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCreateTextureObjectResult is returned by UModelingObjectsCreationAPI::CreateTextureObject()\n * to indicate success/failure and provide information about created texture objects\n */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "FCreateTextureObjectResult is returned by UModelingObjectsCreationAPI::CreateTextureObject()\nto indicate success/failure and provide information about created texture objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCreateTextureObjectResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode_MetaData[] = {
		{ "Category", "CreateTextureObjectResult" },
		{ "Comment", "/** Success/Failure status for the requested operation */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Success/Failure status for the requested operation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode = { "ResultCode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateTextureObjectResult, ResultCode), Z_Construct_UEnum_ModelingComponents_ECreateModelingObjectResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode_MetaData)) }; // 2700712582
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_NewAsset_MetaData[] = {
		{ "Category", "CreateTextureObjectResult" },
		{ "Comment", "/** A pointer to a newly-created Asset for the texture object, if applicable (eg StaticMeshAsset) */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "A pointer to a newly-created Asset for the texture object, if applicable (eg StaticMeshAsset)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_NewAsset = { "NewAsset", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCreateTextureObjectResult, NewAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_NewAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_NewAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_ResultCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewProp_NewAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		&NewStructOps,
		"CreateTextureObjectResult",
		sizeof(FCreateTextureObjectResult),
		alignof(FCreateTextureObjectResult),
		Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCreateTextureObjectResult()
	{
		if (!Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.InnerSingleton, Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CreateTextureObjectResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UModelingObjectsCreationAPI::execCreateTextureObject)
	{
		P_GET_STRUCT_REF(FCreateTextureObjectParams,Z_Param_Out_CreateTexParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCreateTextureObjectResult*)Z_Param__Result=P_THIS->CreateTextureObject(Z_Param_Out_CreateTexParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UModelingObjectsCreationAPI::execCreateMeshObject)
	{
		P_GET_STRUCT_REF(FCreateMeshObjectParams,Z_Param_Out_CreateMeshParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCreateMeshObjectResult*)Z_Param__Result=P_THIS->CreateMeshObject(Z_Param_Out_CreateMeshParams);
		P_NATIVE_END;
	}
	void UModelingObjectsCreationAPI::StaticRegisterNativesUModelingObjectsCreationAPI()
	{
		UClass* Class = UModelingObjectsCreationAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMeshObject", &UModelingObjectsCreationAPI::execCreateMeshObject },
			{ "CreateTextureObject", &UModelingObjectsCreationAPI::execCreateTextureObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics
	{
		struct ModelingObjectsCreationAPI_eventCreateMeshObject_Parms
		{
			FCreateMeshObjectParams CreateMeshParams;
			FCreateMeshObjectResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateMeshParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreateMeshParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_CreateMeshParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_CreateMeshParams = { "CreateMeshParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateMeshObject_Parms, CreateMeshParams), Z_Construct_UScriptStruct_FCreateMeshObjectParams, METADATA_PARAMS(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_CreateMeshParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_CreateMeshParams_MetaData)) }; // 2278027223
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateMeshObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FCreateMeshObjectResult, METADATA_PARAMS(nullptr, 0) }; // 1448086276
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_CreateMeshParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modeling Objects" },
		{ "Comment", "/**\n\x09 * Create a new mesh object based on the data in CreateMeshParams\n\x09 * @return a results data structure, containing a result code and information about any new objects created\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Create a new mesh object based on the data in CreateMeshParams\n@return a results data structure, containing a result code and information about any new objects created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModelingObjectsCreationAPI, nullptr, "CreateMeshObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::ModelingObjectsCreationAPI_eventCreateMeshObject_Parms), Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics
	{
		struct ModelingObjectsCreationAPI_eventCreateTextureObject_Parms
		{
			FCreateTextureObjectParams CreateTexParams;
			FCreateTextureObjectResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateTexParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreateTexParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_CreateTexParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_CreateTexParams = { "CreateTexParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateTextureObject_Parms, CreateTexParams), Z_Construct_UScriptStruct_FCreateTextureObjectParams, METADATA_PARAMS(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_CreateTexParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_CreateTexParams_MetaData)) }; // 702216083
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ModelingObjectsCreationAPI_eventCreateTextureObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FCreateTextureObjectResult, METADATA_PARAMS(nullptr, 0) }; // 1028884110
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_CreateTexParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Modeling Objects" },
		{ "Comment", "/**\n\x09 * Create a new texture object based on the data in CreateTexParams\n\x09 * @return a results data structure, containing a result code and information about any new objects created\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Create a new texture object based on the data in CreateTexParams\n@return a results data structure, containing a result code and information about any new objects created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModelingObjectsCreationAPI, nullptr, "CreateTextureObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::ModelingObjectsCreationAPI_eventCreateTextureObject_Parms), Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingObjectsCreationAPI);
	UClass* Z_Construct_UClass_UModelingObjectsCreationAPI_NoRegister()
	{
		return UModelingObjectsCreationAPI::StaticClass();
	}
	struct Z_Construct_UClass_UModelingObjectsCreationAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateMeshObject, "CreateMeshObject" }, // 1372976693
		{ &Z_Construct_UFunction_UModelingObjectsCreationAPI_CreateTextureObject, "CreateTextureObject" }, // 3347104645
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UModelingObjectsCreationAPI is a base interface for functions that can be used to\n * create various types of objects from Modeling Tools, or other sources. The \"type\" is\n * very generic here - \"Mesh\", \"Texture\", etc - because this API is meant to provide\n * an abstraction for Tools to emit different types of objects in different situations.\n * For example an Tool might emit StaticMesh Asset/Actors in-Editor, but ProceduralMeshComponents at Runtime.\n * \n * The creation inputs are specified via the structs above (eg FCreateMeshObjectParams, FCreateTextureObjectParams),\n * which are very extensive, kitchen-sink sort of structs. Generally \"New Mesh Object\"\n * creation behavior will be very complex and so this API is really just a way to route\n * the data, and very few guarantees can be made about any specific implementation.\n * \n * The assumed (but not really required) usage of instances of this type are that they\n * will be registered with an InteractiveToolsContext's ContextObjectStore, and then \n * fetched from there by Tools/Algorithms/etc that need to use these capabilities can\n * use the UE::Modeling::CreateXObject() helper functions below. However the interface\n * does not have any dependencies on this usage model. \n * \n * See UEditorModelingObjectsCreationAPI for an example implementation suitable for in-Editor use.\n */" },
		{ "IncludePath", "ModelingObjectsCreationAPI.h" },
		{ "ModuleRelativePath", "Public/ModelingObjectsCreationAPI.h" },
		{ "ToolTip", "UModelingObjectsCreationAPI is a base interface for functions that can be used to\ncreate various types of objects from Modeling Tools, or other sources. The \"type\" is\nvery generic here - \"Mesh\", \"Texture\", etc - because this API is meant to provide\nan abstraction for Tools to emit different types of objects in different situations.\nFor example an Tool might emit StaticMesh Asset/Actors in-Editor, but ProceduralMeshComponents at Runtime.\n\nThe creation inputs are specified via the structs above (eg FCreateMeshObjectParams, FCreateTextureObjectParams),\nwhich are very extensive, kitchen-sink sort of structs. Generally \"New Mesh Object\"\ncreation behavior will be very complex and so this API is really just a way to route\nthe data, and very few guarantees can be made about any specific implementation.\n\nThe assumed (but not really required) usage of instances of this type are that they\nwill be registered with an InteractiveToolsContext's ContextObjectStore, and then\nfetched from there by Tools/Algorithms/etc that need to use these capabilities can\nuse the UE::Modeling::CreateXObject() helper functions below. However the interface\ndoes not have any dependencies on this usage model.\n\nSee UEditorModelingObjectsCreationAPI for an example implementation suitable for in-Editor use." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingObjectsCreationAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::ClassParams = {
		&UModelingObjectsCreationAPI::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelingObjectsCreationAPI()
	{
		if (!Z_Registration_Info_UClass_UModelingObjectsCreationAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingObjectsCreationAPI.OuterSingleton, Z_Construct_UClass_UModelingObjectsCreationAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelingObjectsCreationAPI.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UModelingObjectsCreationAPI>()
	{
		return UModelingObjectsCreationAPI::StaticClass();
	}
	UModelingObjectsCreationAPI::UModelingObjectsCreationAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelingObjectsCreationAPI);
	UModelingObjectsCreationAPI::~UModelingObjectsCreationAPI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::EnumInfo[] = {
		{ ECreateModelingObjectResult_StaticEnum, TEXT("ECreateModelingObjectResult"), &Z_Registration_Info_UEnum_ECreateModelingObjectResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2700712582U) },
		{ ECreateMeshObjectSourceMeshType_StaticEnum, TEXT("ECreateMeshObjectSourceMeshType"), &Z_Registration_Info_UEnum_ECreateMeshObjectSourceMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3784009961U) },
		{ ECreateObjectTypeHint_StaticEnum, TEXT("ECreateObjectTypeHint"), &Z_Registration_Info_UEnum_ECreateObjectTypeHint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1559716843U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::ScriptStructInfo[] = {
		{ FCreateMeshObjectParams::StaticStruct, Z_Construct_UScriptStruct_FCreateMeshObjectParams_Statics::NewStructOps, TEXT("CreateMeshObjectParams"), &Z_Registration_Info_UScriptStruct_CreateMeshObjectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateMeshObjectParams), 2278027223U) },
		{ FCreateMeshObjectResult::StaticStruct, Z_Construct_UScriptStruct_FCreateMeshObjectResult_Statics::NewStructOps, TEXT("CreateMeshObjectResult"), &Z_Registration_Info_UScriptStruct_CreateMeshObjectResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateMeshObjectResult), 1448086276U) },
		{ FCreateTextureObjectParams::StaticStruct, Z_Construct_UScriptStruct_FCreateTextureObjectParams_Statics::NewStructOps, TEXT("CreateTextureObjectParams"), &Z_Registration_Info_UScriptStruct_CreateTextureObjectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateTextureObjectParams), 702216083U) },
		{ FCreateTextureObjectResult::StaticStruct, Z_Construct_UScriptStruct_FCreateTextureObjectResult_Statics::NewStructOps, TEXT("CreateTextureObjectResult"), &Z_Registration_Info_UScriptStruct_CreateTextureObjectResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCreateTextureObjectResult), 1028884110U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModelingObjectsCreationAPI, UModelingObjectsCreationAPI::StaticClass, TEXT("UModelingObjectsCreationAPI"), &Z_Registration_Info_UClass_UModelingObjectsCreationAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingObjectsCreationAPI), 3531422253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_2445783740(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ModelingObjectsCreationAPI_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
