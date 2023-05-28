// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drawing/TriangleSetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriangleSetComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTriangleSetComponent();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTriangleSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FRenderableTriangle();
	MODELINGCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FRenderableTriangleVertex();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderableTriangleVertex;
class UScriptStruct* FRenderableTriangleVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderableTriangleVertex, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("RenderableTriangleVertex"));
	}
	return Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FRenderableTriangleVertex>()
{
	return FRenderableTriangleVertex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderableTriangleVertex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderableTriangleVertex, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_UV_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderableTriangleVertex, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_UV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_UV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderableTriangleVertex, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderableTriangleVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_UV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		&NewStructOps,
		"RenderableTriangleVertex",
		sizeof(FRenderableTriangleVertex),
		alignof(FRenderableTriangleVertex),
		Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderableTriangleVertex()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.InnerSingleton, Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderableTriangleVertex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderableTriangle;
class UScriptStruct* FRenderableTriangle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderableTriangle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderableTriangle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderableTriangle, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("RenderableTriangle"));
	}
	return Z_Registration_Info_UScriptStruct_RenderableTriangle.OuterSingleton;
}
template<> MODELINGCOMPONENTS_API UScriptStruct* StaticStruct<FRenderableTriangle>()
{
	return FRenderableTriangle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderableTriangle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertex0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertex1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertex2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertex2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderableTriangle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderableTriangle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderableTriangle, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex0_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex0 = { "Vertex0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderableTriangle, Vertex0), Z_Construct_UScriptStruct_FRenderableTriangleVertex, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex0_MetaData)) }; // 1481322099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex1 = { "Vertex1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderableTriangle, Vertex1), Z_Construct_UScriptStruct_FRenderableTriangleVertex, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex1_MetaData)) }; // 1481322099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex2 = { "Vertex2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderableTriangle, Vertex2), Z_Construct_UScriptStruct_FRenderableTriangleVertex, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex2_MetaData)) }; // 1481322099
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderableTriangle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewProp_Vertex2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderableTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		&NewStructOps,
		"RenderableTriangle",
		sizeof(FRenderableTriangle),
		alignof(FRenderableTriangle),
		Z_Construct_UScriptStruct_FRenderableTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderableTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderableTriangle()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderableTriangle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderableTriangle.InnerSingleton, Z_Construct_UScriptStruct_FRenderableTriangle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderableTriangle.InnerSingleton;
	}
	void UTriangleSetComponent::StaticRegisterNativesUTriangleSetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTriangleSetComponent);
	UClass* Z_Construct_UClass_UTriangleSetComponent_NoRegister()
	{
		return UTriangleSetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriangleSetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoundsDirty_MetaData[];
#endif
		static void NewProp_bBoundsDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoundsDirty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriangleSetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriangleSetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A component for rendering an arbitrary assortment of triangles. Suitable, for instance, for rendering highlighted faces.\n*/" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Drawing/TriangleSetComponent.h" },
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
		{ "ToolTip", "A component for rendering an arbitrary assortment of triangles. Suitable, for instance, for rendering highlighted faces." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_Bounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTriangleSetComponent, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Drawing/TriangleSetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty_SetBit(void* Obj)
	{
		((UTriangleSetComponent*)Obj)->bBoundsDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty = { "bBoundsDirty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTriangleSetComponent), &Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriangleSetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriangleSetComponent_Statics::NewProp_bBoundsDirty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriangleSetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriangleSetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTriangleSetComponent_Statics::ClassParams = {
		&UTriangleSetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriangleSetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriangleSetComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriangleSetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriangleSetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriangleSetComponent()
	{
		if (!Z_Registration_Info_UClass_UTriangleSetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTriangleSetComponent.OuterSingleton, Z_Construct_UClass_UTriangleSetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTriangleSetComponent.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UTriangleSetComponent>()
	{
		return UTriangleSetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriangleSetComponent);
	UTriangleSetComponent::~UTriangleSetComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics::ScriptStructInfo[] = {
		{ FRenderableTriangleVertex::StaticStruct, Z_Construct_UScriptStruct_FRenderableTriangleVertex_Statics::NewStructOps, TEXT("RenderableTriangleVertex"), &Z_Registration_Info_UScriptStruct_RenderableTriangleVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderableTriangleVertex), 1481322099U) },
		{ FRenderableTriangle::StaticStruct, Z_Construct_UScriptStruct_FRenderableTriangle_Statics::NewStructOps, TEXT("RenderableTriangle"), &Z_Registration_Info_UScriptStruct_RenderableTriangle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderableTriangle), 3378297147U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTriangleSetComponent, UTriangleSetComponent::StaticClass, TEXT("UTriangleSetComponent"), &Z_Registration_Info_UClass_UTriangleSetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTriangleSetComponent), 3084941592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_1829282055(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_TriangleSetComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
