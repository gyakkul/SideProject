// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/GeometryFramework/Public/UDynamicMesh.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUDynamicMesh() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMesh_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshGenerator();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshGenerator_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshPool();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshPool_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();
	GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags();
	GEOMETRYFRAMEWORK_API UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType();
	GEOMETRYFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature();
	GEOMETRYFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicMeshChangeInfo();
	UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References
	void UDynamicMeshGenerator::StaticRegisterNativesUDynamicMeshGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshGenerator);
	UClass* Z_Construct_UClass_UDynamicMeshGenerator_NoRegister()
	{
		return UDynamicMeshGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDynamicMeshGenerator is an abstract base class for an implementation that can\n * mutate an input mesh into an output mesh. A subclass of this class can be attached to\n * a UDynamicMesh to allow for arbitrarily-complex procedural generation\n */" },
		{ "IncludePath", "UDynamicMesh.h" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "UDynamicMeshGenerator is an abstract base class for an implementation that can\nmutate an input mesh into an output mesh. A subclass of this class can be attached to\na UDynamicMesh to allow for arbitrarily-complex procedural generation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshGenerator_Statics::ClassParams = {
		&UDynamicMeshGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshGenerator()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshGenerator.OuterSingleton, Z_Construct_UClass_UDynamicMeshGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshGenerator.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UDynamicMeshGenerator>()
	{
		return UDynamicMeshGenerator::StaticClass();
	}
	UDynamicMeshGenerator::UDynamicMeshGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshGenerator);
	UDynamicMeshGenerator::~UDynamicMeshGenerator() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicMeshChangeType;
	static UEnum* EDynamicMeshChangeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshChangeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDynamicMeshChangeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType, (UObject*)Z_Construct_UPackage__Script_GeometryFramework(), TEXT("EDynamicMeshChangeType"));
		}
		return Z_Registration_Info_UEnum_EDynamicMeshChangeType.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshChangeType>()
	{
		return EDynamicMeshChangeType_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType_Statics::Enumerators[] = {
		{ "EDynamicMeshChangeType::GeneralEdit", (int64)EDynamicMeshChangeType::GeneralEdit },
		{ "EDynamicMeshChangeType::MeshChange", (int64)EDynamicMeshChangeType::MeshChange },
		{ "EDynamicMeshChangeType::MeshReplacementChange", (int64)EDynamicMeshChangeType::MeshReplacementChange },
		{ "EDynamicMeshChangeType::MeshVertexChange", (int64)EDynamicMeshChangeType::MeshVertexChange },
		{ "EDynamicMeshChangeType::DeformationEdit", (int64)EDynamicMeshChangeType::DeformationEdit },
		{ "EDynamicMeshChangeType::AttributeEdit", (int64)EDynamicMeshChangeType::AttributeEdit },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType_Statics::Enum_MetaDataParams[] = {
		{ "AttributeEdit.Name", "EDynamicMeshChangeType::AttributeEdit" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EDynamicMeshChangeType is used by FDynamicMeshChangeInfo to indicate a \"type\" of mesh change\n */" },
		{ "DeformationEdit.Name", "EDynamicMeshChangeType::DeformationEdit" },
		{ "GeneralEdit.Name", "EDynamicMeshChangeType::GeneralEdit" },
		{ "MeshChange.Name", "EDynamicMeshChangeType::MeshChange" },
		{ "MeshReplacementChange.Name", "EDynamicMeshChangeType::MeshReplacementChange" },
		{ "MeshVertexChange.Name", "EDynamicMeshChangeType::MeshVertexChange" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "EDynamicMeshChangeType is used by FDynamicMeshChangeInfo to indicate a \"type\" of mesh change" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryFramework,
		nullptr,
		"EDynamicMeshChangeType",
		"EDynamicMeshChangeType",
		Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshChangeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicMeshChangeType.InnerSingleton, Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDynamicMeshChangeType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags;
	static UEnum* EDynamicMeshAttributeChangeFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags, (UObject*)Z_Construct_UPackage__Script_GeometryFramework(), TEXT("EDynamicMeshAttributeChangeFlags"));
		}
		return Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UEnum* StaticEnum<EDynamicMeshAttributeChangeFlags>()
	{
		return EDynamicMeshAttributeChangeFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags_Statics::Enumerators[] = {
		{ "EDynamicMeshAttributeChangeFlags::Unknown", (int64)EDynamicMeshAttributeChangeFlags::Unknown },
		{ "EDynamicMeshAttributeChangeFlags::MeshTopology", (int64)EDynamicMeshAttributeChangeFlags::MeshTopology },
		{ "EDynamicMeshAttributeChangeFlags::VertexPositions", (int64)EDynamicMeshAttributeChangeFlags::VertexPositions },
		{ "EDynamicMeshAttributeChangeFlags::NormalsTangents", (int64)EDynamicMeshAttributeChangeFlags::NormalsTangents },
		{ "EDynamicMeshAttributeChangeFlags::VertexColors", (int64)EDynamicMeshAttributeChangeFlags::VertexColors },
		{ "EDynamicMeshAttributeChangeFlags::UVs", (int64)EDynamicMeshAttributeChangeFlags::UVs },
		{ "EDynamicMeshAttributeChangeFlags::TriangleGroups", (int64)EDynamicMeshAttributeChangeFlags::TriangleGroups },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MeshTopology.Name", "EDynamicMeshAttributeChangeFlags::MeshTopology" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "NormalsTangents.Name", "EDynamicMeshAttributeChangeFlags::NormalsTangents" },
		{ "TriangleGroups.Name", "EDynamicMeshAttributeChangeFlags::TriangleGroups" },
		{ "Unknown.Name", "EDynamicMeshAttributeChangeFlags::Unknown" },
		{ "UVs.Name", "EDynamicMeshAttributeChangeFlags::UVs" },
		{ "VertexColors.Name", "EDynamicMeshAttributeChangeFlags::VertexColors" },
		{ "VertexPositions.Name", "EDynamicMeshAttributeChangeFlags::VertexPositions" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryFramework,
		nullptr,
		"EDynamicMeshAttributeChangeFlags",
		"EDynamicMeshAttributeChangeFlags",
		Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags()
	{
		if (!Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.InnerSingleton, Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicMeshChangeInfo;
class UScriptStruct* FDynamicMeshChangeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicMeshChangeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicMeshChangeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo, (UObject*)Z_Construct_UPackage__Script_GeometryFramework(), TEXT("DynamicMeshChangeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicMeshChangeInfo.OuterSingleton;
}
template<> GEOMETRYFRAMEWORK_API UScriptStruct* StaticStruct<FDynamicMeshChangeInfo>()
{
	return FDynamicMeshChangeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Flags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRevertChange_MetaData[];
#endif
		static void NewProp_bIsRevertChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRevertChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FDynamicMeshChangeInfo stores information about a change to a UDynamicMesh.\n * This struct is emitted by the UDynamicMesh OnPreMeshChanged() and OnMeshChanged() delegates.\n */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "FDynamicMeshChangeInfo stores information about a change to a UDynamicMesh.\nThis struct is emitted by the UDynamicMesh OnPreMeshChanged() and OnMeshChanged() delegates." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicMeshChangeInfo>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "DynamicMeshChangeInfo" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDynamicMeshChangeInfo, Type), Z_Construct_UEnum_GeometryFramework_EDynamicMeshChangeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Type_MetaData)) }; // 1875317361
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Flags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "DynamicMeshChangeInfo" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDynamicMeshChangeInfo, Flags), Z_Construct_UEnum_GeometryFramework_EDynamicMeshAttributeChangeFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Flags_MetaData)) }; // 3340556279
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_bIsRevertChange_MetaData[] = {
		{ "Category", "DynamicMeshChangeInfo" },
		{ "Comment", "// for changes that are an FChange, indicates whether this is an 'Apply' or 'Revert' of the FChange\n" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "for changes that are an FChange, indicates whether this is an 'Apply' or 'Revert' of the FChange" },
	};
#endif
	void Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_bIsRevertChange_SetBit(void* Obj)
	{
		((FDynamicMeshChangeInfo*)Obj)->bIsRevertChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_bIsRevertChange = { "bIsRevertChange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDynamicMeshChangeInfo), &Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_bIsRevertChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_bIsRevertChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_bIsRevertChange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Flags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_Flags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewProp_bIsRevertChange,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
		nullptr,
		&NewStructOps,
		"DynamicMeshChangeInfo",
		sizeof(FDynamicMeshChangeInfo),
		alignof(FDynamicMeshChangeInfo),
		Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicMeshChangeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DynamicMeshChangeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicMeshChangeInfo.InnerSingleton, Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DynamicMeshChangeInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics
	{
		struct _Script_GeometryFramework_eventOnDynamicMeshModifiedBP_Parms
		{
			UDynamicMesh* Mesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GeometryFramework_eventOnDynamicMeshModifiedBP_Parms, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GeometryFramework, nullptr, "OnDynamicMeshModifiedBP__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::_Script_GeometryFramework_eventOnDynamicMeshModifiedBP_Parms), Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDynamicMeshModifiedBP_DelegateWrapper(const FMulticastScriptDelegate& OnDynamicMeshModifiedBP, UDynamicMesh* Mesh)
{
	struct _Script_GeometryFramework_eventOnDynamicMeshModifiedBP_Parms
	{
		UDynamicMesh* Mesh;
	};
	_Script_GeometryFramework_eventOnDynamicMeshModifiedBP_Parms Parms;
	Parms.Mesh=Mesh;
	OnDynamicMeshModifiedBP.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDynamicMesh::execGetTriangleCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTriangleCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMesh::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMesh::execResetToCube)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=P_THIS->ResetToCube();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMesh::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=P_THIS->Reset();
		P_NATIVE_END;
	}
	void UDynamicMesh::StaticRegisterNativesUDynamicMesh()
	{
		UClass* Class = UDynamicMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTriangleCount", &UDynamicMesh::execGetTriangleCount },
			{ "IsEmpty", &UDynamicMesh::execIsEmpty },
			{ "Reset", &UDynamicMesh::execReset },
			{ "ResetToCube", &UDynamicMesh::execResetToCube },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics
	{
		struct DynamicMesh_eventGetTriangleCount_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Triangle Count" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMesh_eventGetTriangleCount_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/**\n\x09 * @return number of triangles in the mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "@return number of triangles in the mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMesh, nullptr, "GetTriangleCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::DynamicMesh_eventGetTriangleCount_Parms), Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMesh_GetTriangleCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMesh_GetTriangleCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics
	{
		struct DynamicMesh_eventIsEmpty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DynamicMesh_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DynamicMesh_eventIsEmpty_Parms), &Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/**\n\x09 * @return true if the mesh has no triangles\n\x09 */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "@return true if the mesh has no triangles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMesh, nullptr, "IsEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::DynamicMesh_eventIsEmpty_Parms), Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMesh_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMesh_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMesh_Reset_Statics
	{
		struct DynamicMesh_eventReset_Parms
		{
			UDynamicMesh* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMesh_Reset_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicMesh_Reset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMesh_eventReset_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMesh_Reset_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_Reset_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMesh_Reset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMesh_Reset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMesh_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/**\n\x09 * Clear the internal mesh to an empty mesh.\n\x09 * This *does not* allocate a new mesh, so any existing mesh pointers/refs are still valid\n\x09 */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "Clear the internal mesh to an empty mesh.\nThis *does not* allocate a new mesh, so any existing mesh pointers/refs are still valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMesh_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMesh, nullptr, "Reset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMesh_Reset_Statics::DynamicMesh_eventReset_Parms), Z_Construct_UFunction_UDynamicMesh_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMesh_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMesh_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMesh_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics
	{
		struct DynamicMesh_eventResetToCube_Parms
		{
			UDynamicMesh* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Target" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMesh_eventResetToCube_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/**\n\x09 * Clear the internal mesh to a 100x100x100 cube with base at the origin.\n\x09 * This this instead of Reset() if an initially-empty mesh is undesirable (eg for a Component)\n\x09 */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "Clear the internal mesh to a 100x100x100 cube with base at the origin.\nThis this instead of Reset() if an initially-empty mesh is undesirable (eg for a Component)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMesh, nullptr, "ResetToCube", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::DynamicMesh_eventResetToCube_Parms), Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMesh_ResetToCube()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMesh_ResetToCube_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMesh);
	UClass* Z_Construct_UClass_UDynamicMesh_NoRegister()
	{
		return UDynamicMesh::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshModifiedBPEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MeshModifiedBPEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshGenerator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMeshGenerator_MetaData[];
#endif
		static void NewProp_bEnableMeshGenerator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMeshGenerator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicMesh_GetTriangleCount, "GetTriangleCount" }, // 4188489828
		{ &Z_Construct_UFunction_UDynamicMesh_IsEmpty, "IsEmpty" }, // 638556416
		{ &Z_Construct_UFunction_UDynamicMesh_Reset, "Reset" }, // 1524242518
		{ &Z_Construct_UFunction_UDynamicMesh_ResetToCube, "ResetToCube" }, // 628876996
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UDynamicMesh is a UObject container for a FDynamicMesh3. \n */" },
		{ "IncludePath", "UDynamicMesh.h" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "UDynamicMesh is a UObject container for a FDynamicMesh3." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMesh_Statics::NewProp_MeshModifiedBPEvent_MetaData[] = {
		{ "Comment", "/** Blueprintable event called when mesh is modified, in the same cases as OnMeshChanged */" },
		{ "DisplayName", "MeshModified" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "Blueprintable event called when mesh is modified, in the same cases as OnMeshChanged" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDynamicMesh_Statics::NewProp_MeshModifiedBPEvent = { "MeshModifiedBPEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMesh, MeshModifiedBPEvent), Z_Construct_UDelegateFunction_GeometryFramework_OnDynamicMeshModifiedBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDynamicMesh_Statics::NewProp_MeshModifiedBPEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMesh_Statics::NewProp_MeshModifiedBPEvent_MetaData)) }; // 2339404550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMesh_Statics::NewProp_MeshGenerator_MetaData[] = {
		{ "Comment", "/**\n\x09 * Active mesh generator. If configured, and bEnableMeshGenerator is true, then MeshGenerator->Generate() \n\x09 * will be called when this mesh is Reset(). The Regenerate() function below can be used to force regeneration.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "Active mesh generator. If configured, and bEnableMeshGenerator is true, then MeshGenerator->Generate()\nwill be called when this mesh is Reset(). The Regenerate() function below can be used to force regeneration." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMesh_Statics::NewProp_MeshGenerator = { "MeshGenerator", nullptr, (EPropertyFlags)0x0026080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMesh, MeshGenerator), Z_Construct_UClass_UDynamicMeshGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDynamicMesh_Statics::NewProp_MeshGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMesh_Statics::NewProp_MeshGenerator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMesh_Statics::NewProp_bEnableMeshGenerator_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/**\n\x09 * Controls whether the active Generator (if configured) will be applied when rebuilding the mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "Controls whether the active Generator (if configured) will be applied when rebuilding the mesh" },
	};
#endif
	void Z_Construct_UClass_UDynamicMesh_Statics::NewProp_bEnableMeshGenerator_SetBit(void* Obj)
	{
		((UDynamicMesh*)Obj)->bEnableMeshGenerator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDynamicMesh_Statics::NewProp_bEnableMeshGenerator = { "bEnableMeshGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDynamicMesh), &Z_Construct_UClass_UDynamicMesh_Statics::NewProp_bEnableMeshGenerator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDynamicMesh_Statics::NewProp_bEnableMeshGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMesh_Statics::NewProp_bEnableMeshGenerator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMesh_Statics::NewProp_MeshModifiedBPEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMesh_Statics::NewProp_MeshGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMesh_Statics::NewProp_bEnableMeshGenerator,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDynamicMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UDynamicMesh, IMeshVertexCommandChangeTarget), false },  // 84206154
			{ Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UDynamicMesh, IMeshCommandChangeTarget), false },  // 4016242093
			{ Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UDynamicMesh, IMeshReplacementCommandChangeTarget), false },  // 2403131168
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMesh_Statics::ClassParams = {
		&UDynamicMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicMesh_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMesh_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMesh()
	{
		if (!Z_Registration_Info_UClass_UDynamicMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMesh.OuterSingleton, Z_Construct_UClass_UDynamicMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMesh.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UDynamicMesh>()
	{
		return UDynamicMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMesh);
	UDynamicMesh::~UDynamicMesh() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDynamicMesh)
	DEFINE_FUNCTION(UDynamicMeshPool::execFreeAllMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FreeAllMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshPool::execReturnAllMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnAllMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshPool::execReturnMesh)
	{
		P_GET_OBJECT(UDynamicMesh,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnMesh(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDynamicMeshPool::execRequestMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDynamicMesh**)Z_Param__Result=P_THIS->RequestMesh();
		P_NATIVE_END;
	}
	void UDynamicMeshPool::StaticRegisterNativesUDynamicMeshPool()
	{
		UClass* Class = UDynamicMeshPool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FreeAllMeshes", &UDynamicMeshPool::execFreeAllMeshes },
			{ "RequestMesh", &UDynamicMeshPool::execRequestMesh },
			{ "ReturnAllMeshes", &UDynamicMeshPool::execReturnAllMeshes },
			{ "ReturnMesh", &UDynamicMeshPool::execReturnMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Release all GeneratedMeshes back to the pool and allow them to be garbage collected */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "Release all GeneratedMeshes back to the pool and allow them to be garbage collected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshPool, nullptr, "FreeAllMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics
	{
		struct DynamicMeshPool_eventRequestMesh_Parms
		{
			UDynamicMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMeshPool_eventRequestMesh_Parms, ReturnValue), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** @return an available UDynamicMesh from the pool (possibly allocating a new mesh) */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "@return an available UDynamicMesh from the pool (possibly allocating a new mesh)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshPool, nullptr, "RequestMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::DynamicMeshPool_eventRequestMesh_Parms), Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshPool_RequestMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshPool_RequestMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Release all GeneratedMeshes back to the pool */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "Release all GeneratedMeshes back to the pool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshPool, nullptr, "ReturnAllMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics
	{
		struct DynamicMeshPool_eventReturnMesh_Parms
		{
			UDynamicMesh* Mesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DynamicMeshPool_eventReturnMesh_Parms, Mesh), Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Release a UDynamicMesh returned by RequestMesh() back to the pool */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "Release a UDynamicMesh returned by RequestMesh() back to the pool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDynamicMeshPool, nullptr, "ReturnMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::DynamicMeshPool_eventReturnMesh_Parms), Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshPool);
	UClass* Z_Construct_UClass_UDynamicMeshPool_NoRegister()
	{
		return UDynamicMeshPool::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedMeshes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllCreatedMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllCreatedMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllCreatedMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDynamicMeshPool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDynamicMeshPool_FreeAllMeshes, "FreeAllMeshes" }, // 1021899861
		{ &Z_Construct_UFunction_UDynamicMeshPool_RequestMesh, "RequestMesh" }, // 2232126954
		{ &Z_Construct_UFunction_UDynamicMeshPool_ReturnAllMeshes, "ReturnAllMeshes" }, // 2684981354
		{ &Z_Construct_UFunction_UDynamicMeshPool_ReturnMesh, "ReturnMesh" }, // 1863010946
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshPool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UDynamicMeshPool manages a Pool of UDynamicMesh objects. This allows\n * the meshes to be re-used instead of being garbage-collected. This\n * is intended to be used by Blueprints that need to do procedural geometry\n * operations that generate temporary meshes, as these will commonly run their\n * construction scripts many times as the user (eg) manipulates parameters,\n * and constantly spawning new UDynamicMesh instances will result in enormous\n * memory usage hanging around until GC runs.\n *\n * Usage is to call RequestMesh() to take ownership of an available UDynamicMesh (which\n * will allocate a new one if the pool is empty) and ReturnMesh() to return it to the pool.\n *\n * ReturnAllMeshes() can be called to return all allocated meshes.\n *\n * In both cases, there is nothing preventing you from still holding on to the mesh.\n * So, be careful.\n *\n * FreeAllMeshes() calls ReturnAllMeshes() and then releases the pool's references to\n * the allocated meshes, so they can be Garbage Collected\n *\n * If you Request() more meshes than you Return(), the Pool will still be holding on to\n * references to those meshes, and they will never be Garbage Collected (ie memory leak).\n * As a failsafe, if the number of allocated meshes exceeds geometry.DynamicMesh.MaxPoolSize,\n * the Pool will release all it's references and run garbage collection on the next call to RequestMesh().\n * (Do not rely on this as a memory management strategy)\n *\n * An alternate strategy that could be employed here is for the Pool to not hold\n * references to meshes it has provided, only those that have been explicitly returned.\n * Then non-returned meshes would simply be garbage-collected, however it allows\n * potentially a large amount of memory to be consumed until that occurs.\n *\n * UDynamicMesh::Reset() is called on the object returned to the Pool, which clears\n * the internal FDynamicMesh3 (which uses normal C++ memory management, so no garbage collection involved)\n * So the Pool does not re-use mesh memory, only the UObject containers.\n */" },
		{ "IncludePath", "UDynamicMesh.h" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "UDynamicMeshPool manages a Pool of UDynamicMesh objects. This allows\nthe meshes to be re-used instead of being garbage-collected. This\nis intended to be used by Blueprints that need to do procedural geometry\noperations that generate temporary meshes, as these will commonly run their\nconstruction scripts many times as the user (eg) manipulates parameters,\nand constantly spawning new UDynamicMesh instances will result in enormous\nmemory usage hanging around until GC runs.\n\nUsage is to call RequestMesh() to take ownership of an available UDynamicMesh (which\nwill allocate a new one if the pool is empty) and ReturnMesh() to return it to the pool.\n\nReturnAllMeshes() can be called to return all allocated meshes.\n\nIn both cases, there is nothing preventing you from still holding on to the mesh.\nSo, be careful.\n\nFreeAllMeshes() calls ReturnAllMeshes() and then releases the pool's references to\nthe allocated meshes, so they can be Garbage Collected\n\nIf you Request() more meshes than you Return(), the Pool will still be holding on to\nreferences to those meshes, and they will never be Garbage Collected (ie memory leak).\nAs a failsafe, if the number of allocated meshes exceeds geometry.DynamicMesh.MaxPoolSize,\nthe Pool will release all it's references and run garbage collection on the next call to RequestMesh().\n(Do not rely on this as a memory management strategy)\n\nAn alternate strategy that could be employed here is for the Pool to not hold\nreferences to meshes it has provided, only those that have been explicitly returned.\nThen non-returned meshes would simply be garbage-collected, however it allows\npotentially a large amount of memory to be consumed until that occurs.\n\nUDynamicMesh::Reset() is called on the object returned to the Pool, which clears\nthe internal FDynamicMesh3 (which uses normal C++ memory management, so no garbage collection involved)\nSo the Pool does not re-use mesh memory, only the UObject containers." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_CachedMeshes_Inner = { "CachedMeshes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_CachedMeshes_MetaData[] = {
		{ "Comment", "/** Meshes in the pool that are available */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "Meshes in the pool that are available" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_CachedMeshes = { "CachedMeshes", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshPool, CachedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_CachedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_CachedMeshes_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_AllCreatedMeshes_Inner = { "AllCreatedMeshes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDynamicMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_AllCreatedMeshes_MetaData[] = {
		{ "Comment", "/** All meshes the pool has allocated */" },
		{ "ModuleRelativePath", "Public/UDynamicMesh.h" },
		{ "ToolTip", "All meshes the pool has allocated" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_AllCreatedMeshes = { "AllCreatedMeshes", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDynamicMeshPool, AllCreatedMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_AllCreatedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_AllCreatedMeshes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDynamicMeshPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_CachedMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_CachedMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_AllCreatedMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDynamicMeshPool_Statics::NewProp_AllCreatedMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshPool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshPool_Statics::ClassParams = {
		&UDynamicMeshPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDynamicMeshPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshPool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshPool()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshPool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshPool.OuterSingleton, Z_Construct_UClass_UDynamicMeshPool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshPool.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UDynamicMeshPool>()
	{
		return UDynamicMeshPool::StaticClass();
	}
	UDynamicMeshPool::UDynamicMeshPool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshPool);
	UDynamicMeshPool::~UDynamicMeshPool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_Statics::EnumInfo[] = {
		{ EDynamicMeshChangeType_StaticEnum, TEXT("EDynamicMeshChangeType"), &Z_Registration_Info_UEnum_EDynamicMeshChangeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1875317361U) },
		{ EDynamicMeshAttributeChangeFlags_StaticEnum, TEXT("EDynamicMeshAttributeChangeFlags"), &Z_Registration_Info_UEnum_EDynamicMeshAttributeChangeFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3340556279U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_Statics::ScriptStructInfo[] = {
		{ FDynamicMeshChangeInfo::StaticStruct, Z_Construct_UScriptStruct_FDynamicMeshChangeInfo_Statics::NewStructOps, TEXT("DynamicMeshChangeInfo"), &Z_Registration_Info_UScriptStruct_DynamicMeshChangeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicMeshChangeInfo), 1567474157U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshGenerator, UDynamicMeshGenerator::StaticClass, TEXT("UDynamicMeshGenerator"), &Z_Registration_Info_UClass_UDynamicMeshGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshGenerator), 3163699589U) },
		{ Z_Construct_UClass_UDynamicMesh, UDynamicMesh::StaticClass, TEXT("UDynamicMesh"), &Z_Registration_Info_UClass_UDynamicMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMesh), 4138076761U) },
		{ Z_Construct_UClass_UDynamicMeshPool, UDynamicMeshPool::StaticClass, TEXT("UDynamicMeshPool"), &Z_Registration_Info_UClass_UDynamicMeshPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshPool), 672148575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_3653042256(TEXT("/Script/GeometryFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_UDynamicMesh_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
