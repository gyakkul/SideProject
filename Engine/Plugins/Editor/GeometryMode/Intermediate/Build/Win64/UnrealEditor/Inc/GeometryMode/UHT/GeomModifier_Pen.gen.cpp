// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeomModifier_Pen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier_Pen() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Edit();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Pen();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_Pen_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier_Pen::StaticRegisterNativesUGeomModifier_Pen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeomModifier_Pen);
	UClass* Z_Construct_UClass_UGeomModifier_Pen_NoRegister()
	{
		return UGeomModifier_Pen::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Pen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoExtrude_MetaData[];
#endif
		static void NewProp_bAutoExtrude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoExtrude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateConvexPolygons_MetaData[];
#endif
		static void NewProp_bCreateConvexPolygons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateConvexPolygons;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateBrushShape_MetaData[];
#endif
		static void NewProp_bCreateBrushShape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateBrushShape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExtrudeDepth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseWorldSpacePos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseWorldSpacePos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Pen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeomModifier_Edit,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Settings" },
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier_Pen.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, the shape will be automatically extruded into a brush upon completion. */" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "If true, the shape will be automatically extruded into a brush upon completion." },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude_SetBit(void* Obj)
	{
		((UGeomModifier_Pen*)Obj)->bAutoExtrude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude = { "bAutoExtrude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGeomModifier_Pen), &Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, the tool will try and optimize the resulting triangles into convex polygons before creating the brush. */" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "If true, the tool will try and optimize the resulting triangles into convex polygons before creating the brush." },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons_SetBit(void* Obj)
	{
		((UGeomModifier_Pen*)Obj)->bCreateConvexPolygons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons = { "bCreateConvexPolygons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGeomModifier_Pen), &Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, the resulting shape will be turned into an ABrushShape actor. */" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "If true, the resulting shape will be turned into an ABrushShape actor." },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape_SetBit(void* Obj)
	{
		((UGeomModifier_Pen*)Obj)->bCreateBrushShape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape = { "bCreateBrushShape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGeomModifier_Pen), &Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ExtrudeDepth_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** How far to extrude the newly created brush if bAutoExtrude is set to true. */" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "How far to extrude the newly created brush if bAutoExtrude is set to true." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ExtrudeDepth = { "ExtrudeDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Pen, ExtrudeDepth), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ExtrudeDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ExtrudeDepth_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices_Inner = { "ShapeVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices_MetaData[] = {
		{ "Comment", "/** The vertices that the user has dropped down in the world so far. */" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "The vertices that the user has dropped down in the world so far." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices = { "ShapeVertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Pen, ShapeVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_MouseWorldSpacePos_MetaData[] = {
		{ "Comment", "/** The mouse position, in world space, where the user currently is hovering (snapped to grid if that setting is enabled). */" },
		{ "ModuleRelativePath", "Classes/GeomModifier_Pen.h" },
		{ "ToolTip", "The mouse position, in world space, where the user currently is hovering (snapped to grid if that setting is enabled)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_MouseWorldSpacePos = { "MouseWorldSpacePos", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier_Pen, MouseWorldSpacePos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_MouseWorldSpacePos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_MouseWorldSpacePos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeomModifier_Pen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bAutoExtrude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateConvexPolygons,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_bCreateBrushShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ExtrudeDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_ShapeVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Pen_Statics::NewProp_MouseWorldSpacePos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Pen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier_Pen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Pen_Statics::ClassParams = {
		&UGeomModifier_Pen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeomModifier_Pen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Pen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Pen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier_Pen()
	{
		if (!Z_Registration_Info_UClass_UGeomModifier_Pen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeomModifier_Pen.OuterSingleton, Z_Construct_UClass_UGeomModifier_Pen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeomModifier_Pen.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier_Pen>()
	{
		return UGeomModifier_Pen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier_Pen);
	UGeomModifier_Pen::~UGeomModifier_Pen() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeomModifier_Pen, UGeomModifier_Pen::StaticClass, TEXT("UGeomModifier_Pen"), &Z_Registration_Info_UClass_UGeomModifier_Pen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeomModifier_Pen), 2594846134U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_3474043891(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_Pen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
