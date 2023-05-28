// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralMeshComponent.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKConvexElem();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshSection();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshVertex();
	UPackage* Z_Construct_UPackage__Script_ProceduralMeshComponent();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProcMeshTangent;
class UScriptStruct* FProcMeshTangent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProcMeshTangent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProcMeshTangent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcMeshTangent, (UObject*)Z_Construct_UPackage__Script_ProceduralMeshComponent(), TEXT("ProcMeshTangent"));
	}
	return Z_Registration_Info_UScriptStruct_ProcMeshTangent.OuterSingleton;
}
template<> PROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<FProcMeshTangent>()
{
	return FProcMeshTangent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProcMeshTangent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TangentX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipTangentY_MetaData[];
#endif
		static void NewProp_bFlipTangentY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipTangentY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshTangent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Struct used to specify a tangent vector for a vertex\n*\x09The Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member.\n*/" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Struct used to specify a tangent vector for a vertex\nThe Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcMeshTangent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_TangentX_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Direction of X tangent for this vertex */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Direction of X tangent for this vertex" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_TangentX = { "TangentX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshTangent, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_TangentX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_TangentX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_bFlipTangentY_MetaData[] = {
		{ "Category", "Tangent" },
		{ "Comment", "/** Bool that indicates whether we should flip the Y tangent when we compute it using cross product */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Bool that indicates whether we should flip the Y tangent when we compute it using cross product" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit(void* Obj)
	{
		((FProcMeshTangent*)Obj)->bFlipTangentY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_bFlipTangentY = { "bFlipTangentY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FProcMeshTangent), &Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_bFlipTangentY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_bFlipTangentY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_bFlipTangentY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcMeshTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_TangentX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewProp_bFlipTangentY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcMeshTangent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMeshComponent,
		nullptr,
		&NewStructOps,
		"ProcMeshTangent",
		sizeof(FProcMeshTangent),
		alignof(FProcMeshTangent),
		Z_Construct_UScriptStruct_FProcMeshTangent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshTangent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshTangent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshTangent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent()
	{
		if (!Z_Registration_Info_UScriptStruct_ProcMeshTangent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProcMeshTangent.InnerSingleton, Z_Construct_UScriptStruct_FProcMeshTangent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProcMeshTangent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProcMeshVertex;
class UScriptStruct* FProcMeshVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProcMeshVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProcMeshVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcMeshVertex, (UObject*)Z_Construct_UPackage__Script_ProceduralMeshComponent(), TEXT("ProcMeshVertex"));
	}
	return Z_Registration_Info_UScriptStruct_ProcMeshVertex.OuterSingleton;
}
template<> PROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<FProcMeshVertex>()
{
	return FProcMeshVertex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProcMeshVertex_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshVertex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** One vertex for the procedural mesh, used for storing data internally */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "One vertex for the procedural mesh, used for storing data internally" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcMeshVertex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex position */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex normal */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex normal" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshVertex, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex tangent */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex tangent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshVertex, Tangent), Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Tangent_MetaData)) }; // 3570636161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex color */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV0_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV1_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshVertex, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV2_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshVertex, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV3_MetaData[] = {
		{ "Category", "Vertex" },
		{ "Comment", "/** Vertex texture co-ordinate */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex texture co-ordinate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshVertex, UV3), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV3_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcMeshVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewProp_UV3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcMeshVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMeshComponent,
		nullptr,
		&NewStructOps,
		"ProcMeshVertex",
		sizeof(FProcMeshVertex),
		alignof(FProcMeshVertex),
		Z_Construct_UScriptStruct_FProcMeshVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcMeshVertex()
	{
		if (!Z_Registration_Info_UScriptStruct_ProcMeshVertex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProcMeshVertex.InnerSingleton, Z_Construct_UScriptStruct_FProcMeshVertex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProcMeshVertex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProcMeshSection;
class UScriptStruct* FProcMeshSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProcMeshSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProcMeshSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProcMeshSection, (UObject*)Z_Construct_UPackage__Script_ProceduralMeshComponent(), TEXT("ProcMeshSection"));
	}
	return Z_Registration_Info_UScriptStruct_ProcMeshSection.OuterSingleton;
}
template<> PROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<FProcMeshSection>()
{
	return FProcMeshSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProcMeshSection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcVertexBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcVertexBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcVertexBuffer;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ProcIndexBuffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcIndexBuffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcIndexBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionLocalBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionLocalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[];
#endif
		static void NewProp_bEnableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSectionVisible_MetaData[];
#endif
		static void NewProp_bSectionVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSectionVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshSection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** One section of the procedural mesh. Each material has its own section. */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "One section of the procedural mesh. Each material has its own section." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProcMeshSection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcVertexBuffer_Inner = { "ProcVertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshVertex, METADATA_PARAMS(nullptr, 0) }; // 157583715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcVertexBuffer_MetaData[] = {
		{ "Comment", "/** Vertex buffer for this section */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Vertex buffer for this section" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcVertexBuffer = { "ProcVertexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshSection, ProcVertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcVertexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcVertexBuffer_MetaData)) }; // 157583715
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcIndexBuffer_Inner = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData[] = {
		{ "Comment", "/** Index buffer for this section */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Index buffer for this section" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcIndexBuffer = { "ProcIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshSection, ProcIndexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcIndexBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_SectionLocalBox_MetaData[] = {
		{ "Comment", "/** Local bounding box of section */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Local bounding box of section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_SectionLocalBox = { "SectionLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProcMeshSection, SectionLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_SectionLocalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_SectionLocalBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bEnableCollision_MetaData[] = {
		{ "Comment", "/** Should we build collision data for triangles in this section */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Should we build collision data for triangles in this section" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bEnableCollision_SetBit(void* Obj)
	{
		((FProcMeshSection*)Obj)->bEnableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bEnableCollision = { "bEnableCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FProcMeshSection), &Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bEnableCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bEnableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bSectionVisible_MetaData[] = {
		{ "Comment", "/** Should we display this section */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Should we display this section" },
	};
#endif
	void Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bSectionVisible_SetBit(void* Obj)
	{
		((FProcMeshSection*)Obj)->bSectionVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bSectionVisible = { "bSectionVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FProcMeshSection), &Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bSectionVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bSectionVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bSectionVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProcMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcVertexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcVertexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcIndexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_ProcIndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_SectionLocalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bEnableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewProp_bSectionVisible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProcMeshSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMeshComponent,
		nullptr,
		&NewStructOps,
		"ProcMeshSection",
		sizeof(FProcMeshSection),
		alignof(FProcMeshSection),
		Z_Construct_UScriptStruct_FProcMeshSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProcMeshSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProcMeshSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProcMeshSection()
	{
		if (!Z_Registration_Info_UScriptStruct_ProcMeshSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProcMeshSection.InnerSingleton, Z_Construct_UScriptStruct_FProcMeshSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProcMeshSection.InnerSingleton;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execClearCollisionConvexMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCollisionConvexMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execAddCollisionConvexMesh)
	{
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCollisionConvexMesh(Z_Param_ConvexVerts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execGetNumSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execIsMeshSectionVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionVisible(Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execSetMeshSectionVisible)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execClearAllMeshSections)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllMeshSections();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execClearMeshSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMeshSection(Z_Param_SectionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execUpdateMeshSection_LinearColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV3);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
		P_GET_UBOOL(Z_Param_bSRGBConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshSection_LinearColor(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bSRGBConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execUpdateMeshSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_VertexColors);
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_VertexColors,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execCreateMeshSection_LinearColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV3);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_VertexColors);
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
		P_GET_UBOOL(Z_Param_bCreateCollision);
		P_GET_UBOOL(Z_Param_bSRGBConversion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMeshSection_LinearColor(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Out_UV3,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bCreateCollision,Z_Param_bSRGBConversion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProceduralMeshComponent::execCreateMeshSection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_VertexColors);
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
		P_GET_UBOOL(Z_Param_bCreateCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateMeshSection(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UV0,Z_Param_Out_VertexColors,Z_Param_Out_Tangents,Z_Param_bCreateCollision);
		P_NATIVE_END;
	}
	void UProceduralMeshComponent::StaticRegisterNativesUProceduralMeshComponent()
	{
		UClass* Class = UProceduralMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCollisionConvexMesh", &UProceduralMeshComponent::execAddCollisionConvexMesh },
			{ "ClearAllMeshSections", &UProceduralMeshComponent::execClearAllMeshSections },
			{ "ClearCollisionConvexMeshes", &UProceduralMeshComponent::execClearCollisionConvexMeshes },
			{ "ClearMeshSection", &UProceduralMeshComponent::execClearMeshSection },
			{ "CreateMeshSection", &UProceduralMeshComponent::execCreateMeshSection },
			{ "CreateMeshSection_LinearColor", &UProceduralMeshComponent::execCreateMeshSection_LinearColor },
			{ "GetNumSections", &UProceduralMeshComponent::execGetNumSections },
			{ "IsMeshSectionVisible", &UProceduralMeshComponent::execIsMeshSectionVisible },
			{ "SetMeshSectionVisible", &UProceduralMeshComponent::execSetMeshSectionVisible },
			{ "UpdateMeshSection", &UProceduralMeshComponent::execUpdateMeshSection },
			{ "UpdateMeshSection_LinearColor", &UProceduralMeshComponent::execUpdateMeshSection_LinearColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics
	{
		struct ProceduralMeshComponent_eventAddCollisionConvexMesh_Parms
		{
			TArray<FVector> ConvexVerts;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConvexVerts_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConvexVerts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts_Inner = { "ConvexVerts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts = { "ConvexVerts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventAddCollisionConvexMesh_Parms, ConvexVerts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::NewProp_ConvexVerts,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Add simple collision convex to this component */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Add simple collision convex to this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "AddCollisionConvexMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::ProceduralMeshComponent_eventAddCollisionConvexMesh_Parms), Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Clear all mesh sections and reset to empty state */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Clear all mesh sections and reset to empty state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "ClearAllMeshSections", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Remove collision meshes from this component */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Remove collision meshes from this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "ClearCollisionConvexMeshes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics
	{
		struct ProceduralMeshComponent_eventClearMeshSection_Parms
		{
			int32 SectionIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventClearMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::NewProp_SectionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Clear a section of the procedural mesh. Other sections do not change index. */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Clear a section of the procedural mesh. Other sections do not change index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "ClearMeshSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::ProceduralMeshComponent_eventClearMeshSection_Parms), Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics
	{
		struct ProceduralMeshComponent_eventCreateMeshSection_Parms
		{
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UV0;
			TArray<FColor> VertexColors;
			TArray<FProcMeshTangent> Tangents;
			bool bCreateCollision;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3570636161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_MetaData)) }; // 3570636161
	void Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((ProceduralMeshComponent_eventCreateMeshSection_Parms*)Obj)->bCreateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProceduralMeshComponent_eventCreateMeshSection_Parms), &Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::NewProp_bCreateCollision,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09""Create/replace a section for this procedural mesh component.\n\x09 *\x09This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n\x09 *\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09""bCreateCollision\x09Indicates whether collision should be created for this section. This adds significant cost.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Create Mesh Section FColor" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Create/replace a section for this procedural mesh component.\nThis function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "CreateMeshSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::ProceduralMeshComponent_eventCreateMeshSection_Parms), Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics
	{
		struct ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms
		{
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UV0;
			TArray<FVector2D> UV1;
			TArray<FVector2D> UV2;
			TArray<FVector2D> UV3;
			TArray<FLinearColor> VertexColors;
			TArray<FProcMeshTangent> Tangents;
			bool bCreateCollision;
			bool bSRGBConversion;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSRGBConversion_MetaData[];
#endif
		static void NewProp_bSRGBConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSRGBConversion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3570636161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData)) }; // 3570636161
	void Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms*)Obj)->bCreateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms), &Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion_MetaData[] = {
		{ "DisplayName", "SRGB Conversion" },
	};
#endif
	void Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion_SetBit(void* Obj)
	{
		((ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms*)Obj)->bSRGBConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion = { "bSRGBConversion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms), &Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Triangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_UV3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bCreateCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "UV1,UV2,UV3" },
		{ "AutoCreateRefTerm", "Normals,UV0,UV1,UV2,UV3,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09""Create/replace a section for this procedural mesh component.\n\x09 *\x09@param\x09SectionIndex\x09\x09Index of the section to create or replace.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Triangles\x09\x09\x09Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09""bCreateCollision\x09Indicates whether collision should be created for this section. This adds significant cost.\n\x09 *\x09@param\x09""bSRGBConversion\x09\x09Whether to do sRGB conversion when converting FLinearColor to FColor\n\x09 */" },
		{ "CPP_Default_bSRGBConversion", "false" },
		{ "DisplayName", "Create Mesh Section" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Create/replace a section for this procedural mesh component.\n@param  SectionIndex            Index of the section to create or replace.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Triangles                       Index buffer indicating which vertices make up each triangle. Length must be a multiple of 3.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  bCreateCollision        Indicates whether collision should be created for this section. This adds significant cost.\n@param  bSRGBConversion         Whether to do sRGB conversion when converting FLinearColor to FColor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "CreateMeshSection_LinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::ProceduralMeshComponent_eventCreateMeshSection_LinearColor_Parms), Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics
	{
		struct ProceduralMeshComponent_eventGetNumSections_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventGetNumSections_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Returns number of sections currently created for this component */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Returns number of sections currently created for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "GetNumSections", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::ProceduralMeshComponent_eventGetNumSections_Parms), Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics
	{
		struct ProceduralMeshComponent_eventIsMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventIsMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ProceduralMeshComponent_eventIsMeshSectionVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProceduralMeshComponent_eventIsMeshSectionVisible_Parms), &Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Returns whether a particular section is currently visible */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Returns whether a particular section is currently visible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "IsMeshSectionVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::ProceduralMeshComponent_eventIsMeshSectionVisible_Parms), Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics
	{
		struct ProceduralMeshComponent_eventSetMeshSectionVisible_Parms
		{
			int32 SectionIndex;
			bool bNewVisibility;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventSetMeshSectionVisible_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((ProceduralMeshComponent_eventSetMeshSectionVisible_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProceduralMeshComponent_eventSetMeshSectionVisible_Parms), &Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Control visibility of a particular section */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Control visibility of a particular section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "SetMeshSectionVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::ProceduralMeshComponent_eventSetMeshSectionVisible_Parms), Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics
	{
		struct ProceduralMeshComponent_eventUpdateMeshSection_Parms
		{
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<FVector> Normals;
			TArray<FVector2D> UV0;
			TArray<FColor> VertexColors;
			TArray<FProcMeshTangent> Tangents;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3570636161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_MetaData)) }; // 3570636161
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::NewProp_Tangents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Normals,UV0,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\n\x09 *\x09This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Update Mesh Section' function which uses LinearColor instead." },
		{ "DisplayName", "Update Mesh Section FColor" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\nThis function is deprecated for Blueprints because it uses the unsupported 'Color' type. Use new 'Create Mesh Section' function which uses LinearColor instead.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "UpdateMeshSection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::ProceduralMeshComponent_eventUpdateMeshSection_Parms), Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics
	{
		struct ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms
		{
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<FVector> Normals;
			TArray<FVector2D> UV0;
			TArray<FVector2D> UV1;
			TArray<FVector2D> UV2;
			TArray<FVector2D> UV3;
			TArray<FLinearColor> VertexColors;
			TArray<FProcMeshTangent> Tangents;
			bool bSRGBConversion;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV3_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV3;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSRGBConversion_MetaData[];
#endif
		static void NewProp_bSRGBConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSRGBConversion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_Inner = { "UV3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, UV3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) }; // 3570636161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_MetaData)) }; // 3570636161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion_MetaData[] = {
		{ "DisplayName", "SRGB Conversion" },
	};
#endif
	void Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion_SetBit(void* Obj)
	{
		((ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms*)Obj)->bSRGBConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion = { "bSRGBConversion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms), &Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_SectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Normals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_UV3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_VertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_Tangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::NewProp_bSRGBConversion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "UV1,UV2,UV3" },
		{ "AutoCreateRefTerm", "Normals,UV0,UV1,UV2,UV3,VertexColors,Tangents" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09 *\x09Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\n\x09 *\x09@param\x09Vertices\x09\x09\x09Vertex buffer of all vertex positions to use for this mesh section.\n\x09 *\x09@param\x09Normals\x09\x09\x09\x09Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09UV0\x09\x09\x09\x09\x09Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09VertexColors\x09\x09Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09Tangents\x09\x09\x09Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n\x09 *\x09@param\x09""bSRGBConversion\x09\x09Whether to do sRGB conversion when converting FLinearColor to FColor\n\x09 */" },
		{ "CPP_Default_bSRGBConversion", "true" },
		{ "DisplayName", "Update Mesh Section" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Updates a section of this procedural mesh component. This is faster than CreateMeshSection, but does not let you change topology. Collision info is also updated.\n@param  Vertices                        Vertex buffer of all vertex positions to use for this mesh section.\n@param  Normals                         Optional array of normal vectors for each vertex. If supplied, must be same length as Vertices array.\n@param  UV0                                     Optional array of texture co-ordinates for each vertex. If supplied, must be same length as Vertices array.\n@param  VertexColors            Optional array of colors for each vertex. If supplied, must be same length as Vertices array.\n@param  Tangents                        Optional array of tangent vector for each vertex. If supplied, must be same length as Vertices array.\n@param  bSRGBConversion         Whether to do sRGB conversion when converting FLinearColor to FColor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProceduralMeshComponent, nullptr, "UpdateMeshSection_LinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::ProceduralMeshComponent_eventUpdateMeshSection_LinearColor_Parms), Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProceduralMeshComponent);
	UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister()
	{
		return UProceduralMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProceduralMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexAsSimpleCollision_MetaData[];
#endif
		static void NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexAsSimpleCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncCooking_MetaData[];
#endif
		static void NewProp_bUseAsyncCooking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncCooking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshBodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProcMeshBodySetup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProcMeshSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcMeshSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProcMeshSections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionConvexElems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionConvexElems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionConvexElems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AsyncBodySetupQueue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AsyncBodySetupQueue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AsyncBodySetupQueue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProceduralMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProceduralMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProceduralMeshComponent_AddCollisionConvexMesh, "AddCollisionConvexMesh" }, // 3661888703
		{ &Z_Construct_UFunction_UProceduralMeshComponent_ClearAllMeshSections, "ClearAllMeshSections" }, // 3766863135
		{ &Z_Construct_UFunction_UProceduralMeshComponent_ClearCollisionConvexMeshes, "ClearCollisionConvexMeshes" }, // 3645327864
		{ &Z_Construct_UFunction_UProceduralMeshComponent_ClearMeshSection, "ClearMeshSection" }, // 822272918
		{ &Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection, "CreateMeshSection" }, // 3802947871
		{ &Z_Construct_UFunction_UProceduralMeshComponent_CreateMeshSection_LinearColor, "CreateMeshSection_LinearColor" }, // 3780111004
		{ &Z_Construct_UFunction_UProceduralMeshComponent_GetNumSections, "GetNumSections" }, // 4284667473
		{ &Z_Construct_UFunction_UProceduralMeshComponent_IsMeshSectionVisible, "IsMeshSectionVisible" }, // 1836499018
		{ &Z_Construct_UFunction_UProceduralMeshComponent_SetMeshSectionVisible, "SetMeshSectionVisible" }, // 3750850822
		{ &Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection, "UpdateMeshSection" }, // 239874852
		{ &Z_Construct_UFunction_UProceduralMeshComponent_UpdateMeshSection_LinearColor, "UpdateMeshSection_LinearColor" }, // 3215363008
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n*\x09""Component that allows you to specify custom triangle mesh geometry\n*\x09""Beware! This feature is experimental and may be substantially changed in future releases.\n*/" },
		{ "HideCategories", "Object LOD Mobility Trigger" },
		{ "IncludePath", "ProceduralMeshComponent.h" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry\nBeware! This feature is experimental and may be substantially changed in future releases." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/** \n\x09 *\x09""Controls whether the complex (Per poly) geometry should be treated as 'simple' collision. \n\x09 *\x09Should be set to false if this component is going to be given simple collision and simulated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Controls whether the complex (Per poly) geometry should be treated as 'simple' collision.\nShould be set to false if this component is going to be given simple collision and simulated." },
	};
#endif
	void Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit(void* Obj)
	{
		((UProceduralMeshComponent*)Obj)->bUseComplexAsSimpleCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision = { "bUseComplexAsSimpleCollision", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProceduralMeshComponent), &Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData[] = {
		{ "Category", "Procedural Mesh" },
		{ "Comment", "/**\n\x09*\x09""Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)\n\x09*/" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Controls whether the physics cooking should be done off the game thread. This should be used when collision geometry doesn't have to be immediately up to date (For example streaming in far away objects)" },
	};
#endif
	void Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit(void* Obj)
	{
		((UProceduralMeshComponent*)Obj)->bUseAsyncCooking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking = { "bUseAsyncCooking", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UProceduralMeshComponent), &Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshBodySetup_MetaData[] = {
		{ "Comment", "/** Collision data */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Collision data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshBodySetup = { "ProcMeshBodySetup", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralMeshComponent, ProcMeshBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshBodySetup_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshSections_Inner = { "ProcMeshSections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProcMeshSection, METADATA_PARAMS(nullptr, 0) }; // 3430930785
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshSections_MetaData[] = {
		{ "Comment", "/** Array of sections of mesh */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Array of sections of mesh" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshSections = { "ProcMeshSections", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralMeshComponent, ProcMeshSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshSections_MetaData)) }; // 3430930785
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_CollisionConvexElems_Inner = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKConvexElem, METADATA_PARAMS(nullptr, 0) }; // 1323963064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData[] = {
		{ "Comment", "/** Convex shapes used for simple collision */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Convex shapes used for simple collision" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_CollisionConvexElems = { "CollisionConvexElems", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralMeshComponent, CollisionConvexElems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_CollisionConvexElems_MetaData)) }; // 1323963064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "Comment", "/** Local space bounds of mesh */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Local space bounds of mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralMeshComponent, LocalBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_LocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_LocalBounds_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData[] = {
		{ "Comment", "/** Queue for async body setups that are being cooked */" },
		{ "ModuleRelativePath", "Public/ProceduralMeshComponent.h" },
		{ "ToolTip", "Queue for async body setups that are being cooked" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue = { "AsyncBodySetupQueue", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UProceduralMeshComponent, AsyncBodySetupQueue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProceduralMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseComplexAsSimpleCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_bUseAsyncCooking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshBodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_ProcMeshSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_CollisionConvexElems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_CollisionConvexElems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_LocalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProceduralMeshComponent_Statics::NewProp_AsyncBodySetupQueue,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UProceduralMeshComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(UProceduralMeshComponent, IInterface_CollisionDataProvider), false },  // 1866130202
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProceduralMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProceduralMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProceduralMeshComponent_Statics::ClassParams = {
		&UProceduralMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProceduralMeshComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMeshComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProceduralMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProceduralMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProceduralMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UProceduralMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProceduralMeshComponent.OuterSingleton, Z_Construct_UClass_UProceduralMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProceduralMeshComponent.OuterSingleton;
	}
	template<> PROCEDURALMESHCOMPONENT_API UClass* StaticClass<UProceduralMeshComponent>()
	{
		return UProceduralMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProceduralMeshComponent);
	UProceduralMeshComponent::~UProceduralMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FProcMeshTangent::StaticStruct, Z_Construct_UScriptStruct_FProcMeshTangent_Statics::NewStructOps, TEXT("ProcMeshTangent"), &Z_Registration_Info_UScriptStruct_ProcMeshTangent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProcMeshTangent), 3570636161U) },
		{ FProcMeshVertex::StaticStruct, Z_Construct_UScriptStruct_FProcMeshVertex_Statics::NewStructOps, TEXT("ProcMeshVertex"), &Z_Registration_Info_UScriptStruct_ProcMeshVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProcMeshVertex), 157583715U) },
		{ FProcMeshSection::StaticStruct, Z_Construct_UScriptStruct_FProcMeshSection_Statics::NewStructOps, TEXT("ProcMeshSection"), &Z_Registration_Info_UScriptStruct_ProcMeshSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProcMeshSection), 3430930785U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProceduralMeshComponent, UProceduralMeshComponent::StaticClass, TEXT("UProceduralMeshComponent"), &Z_Registration_Info_UClass_UProceduralMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProceduralMeshComponent), 1229063734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_2555158510(TEXT("/Script/ProceduralMeshComponent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
