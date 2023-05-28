// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slate/SlateVectorArtData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateVectorArtData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlateVectorArtData();
	UMG_API UClass* Z_Construct_UClass_USlateVectorArtData_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateMeshVertex();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateMeshVertex;
class UScriptStruct* FSlateMeshVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateMeshVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateMeshVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateMeshVertex, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("SlateMeshVertex"));
	}
	return Z_Registration_Info_UScriptStruct_SlateMeshVertex.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FSlateMeshVertex>()
{
	return FSlateMeshVertex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlateMeshVertex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV5_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV5;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateMeshVertex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateMeshVertex, Position), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV1), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV2), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV3), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4 = { "UV4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV4), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5 = { "UV5", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateMeshVertex, UV5), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"SlateMeshVertex",
		sizeof(FSlateMeshVertex),
		alignof(FSlateMeshVertex),
		Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateMeshVertex()
	{
		if (!Z_Registration_Info_UScriptStruct_SlateMeshVertex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateMeshVertex.InnerSingleton, Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlateMeshVertex.InnerSingleton;
	}
	void USlateVectorArtData::StaticRegisterNativesUSlateVectorArtData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateVectorArtData);
	UClass* Z_Construct_UClass_USlateVectorArtData_NoRegister()
	{
		return USlateVectorArtData::StaticClass();
	}
	struct Z_Construct_UClass_USlateVectorArtData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceMaterial;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexData;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IndexData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtentMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtentMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateVectorArtData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Turn static mesh data into Slate's simple vector art format.\n */" },
		{ "IncludePath", "Slate/SlateVectorArtData.h" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "Turn static mesh data into Slate's simple vector art format." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset_MetaData[] = {
		{ "Category", "Vector Art" },
		{ "Comment", "/** The mesh data asset from which the vector art is sourced */" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "The mesh data asset from which the vector art is sourced" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset = { "MeshAsset", nullptr, (EPropertyFlags)0x0044000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateVectorArtData, MeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial_MetaData[] = {
		{ "Comment", "/** The material which we are using, or the material from with the MIC was constructed. */" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "The material which we are using, or the material from with the MIC was constructed." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial = { "SourceMaterial", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateVectorArtData, SourceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_Inner = { "VertexData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSlateMeshVertex, METADATA_PARAMS(nullptr, 0) }; // 1053960097
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_MetaData[] = {
		{ "Comment", "/** @see GetVertexData() */" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "@see GetVertexData()" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData = { "VertexData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateVectorArtData, VertexData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_MetaData)) }; // 1053960097
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_Inner = { "IndexData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_MetaData[] = {
		{ "Comment", "/** @see GetIndexData() */" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "@see GetIndexData()" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData = { "IndexData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateVectorArtData, IndexData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/** @see GetMaterial() */" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "@see GetMaterial()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateVectorArtData, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin = { "ExtentMin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateVectorArtData, ExtentMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax = { "ExtentMax", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateVectorArtData, ExtentMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateVectorArtData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateVectorArtData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateVectorArtData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateVectorArtData_Statics::ClassParams = {
		&USlateVectorArtData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateVectorArtData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateVectorArtData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateVectorArtData()
	{
		if (!Z_Registration_Info_UClass_USlateVectorArtData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateVectorArtData.OuterSingleton, Z_Construct_UClass_USlateVectorArtData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateVectorArtData.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<USlateVectorArtData>()
	{
		return USlateVectorArtData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateVectorArtData);
	USlateVectorArtData::~USlateVectorArtData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics::ScriptStructInfo[] = {
		{ FSlateMeshVertex::StaticStruct, Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewStructOps, TEXT("SlateMeshVertex"), &Z_Registration_Info_UScriptStruct_SlateMeshVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateMeshVertex), 1053960097U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateVectorArtData, USlateVectorArtData::StaticClass, TEXT("USlateVectorArtData"), &Z_Registration_Info_UClass_USlateVectorArtData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateVectorArtData), 892056981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_2002489767(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
