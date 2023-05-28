// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpriteEditorOnlyTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpriteEditorOnlyTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpriteCollisionMode();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpritePivotMode();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpritePolygonMode();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_ESpriteShapeType();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteAssetInitParameters();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryCollection();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryShape();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpriteCollisionMode;
	static UEnum* ESpriteCollisionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpriteCollisionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpriteCollisionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpriteCollisionMode, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("ESpriteCollisionMode"));
		}
		return Z_Registration_Info_UEnum_ESpriteCollisionMode.OuterSingleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<ESpriteCollisionMode::Type>()
	{
		return ESpriteCollisionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Statics::Enumerators[] = {
		{ "ESpriteCollisionMode::None", (int64)ESpriteCollisionMode::None },
		{ "ESpriteCollisionMode::Use2DPhysics", (int64)ESpriteCollisionMode::Use2DPhysics },
		{ "ESpriteCollisionMode::Use3DPhysics", (int64)ESpriteCollisionMode::Use3DPhysics },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// The kind of collision that a Paper2D asset or component might participate in\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "None.Comment", "/** Should this have no collison and not participate in physics? */" },
		{ "None.Name", "ESpriteCollisionMode::None" },
		{ "None.ToolTip", "Should this have no collison and not participate in physics?" },
		{ "ToolTip", "The kind of collision that a Paper2D asset or component might participate in" },
		{ "Use2DPhysics.DisplayName", "Use 2D Physics (Deprecated)" },
		{ "Use2DPhysics.Hidden", "" },
		{ "Use2DPhysics.Name", "ESpriteCollisionMode::Use2DPhysics" },
		{ "Use3DPhysics.Comment", "/** Should this have 3D collision geometry and participate in the 3D physics world? */" },
		{ "Use3DPhysics.DisplayName", "Use 3D Physics" },
		{ "Use3DPhysics.Name", "ESpriteCollisionMode::Use3DPhysics" },
		{ "Use3DPhysics.ToolTip", "Should this have 3D collision geometry and participate in the 3D physics world?" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		"ESpriteCollisionMode",
		"ESpriteCollisionMode::Type",
		Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Paper2D_ESpriteCollisionMode()
	{
		if (!Z_Registration_Info_UEnum_ESpriteCollisionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpriteCollisionMode.InnerSingleton, Z_Construct_UEnum_Paper2D_ESpriteCollisionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpriteCollisionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpriteShapeType;
	static UEnum* ESpriteShapeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpriteShapeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpriteShapeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpriteShapeType, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("ESpriteShapeType"));
		}
		return Z_Registration_Info_UEnum_ESpriteShapeType.OuterSingleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<ESpriteShapeType>()
	{
		return ESpriteShapeType_StaticEnum();
	}
	struct Z_Construct_UEnum_Paper2D_ESpriteShapeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Paper2D_ESpriteShapeType_Statics::Enumerators[] = {
		{ "ESpriteShapeType::Box", (int64)ESpriteShapeType::Box },
		{ "ESpriteShapeType::Circle", (int64)ESpriteShapeType::Circle },
		{ "ESpriteShapeType::Polygon", (int64)ESpriteShapeType::Polygon },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Paper2D_ESpriteShapeType_Statics::Enum_MetaDataParams[] = {
		{ "Box.Comment", "/** Box/Rectangular prism (size defined by BoxSize) */" },
		{ "Box.Name", "ESpriteShapeType::Box" },
		{ "Box.ToolTip", "Box/Rectangular prism (size defined by BoxSize)" },
		{ "Circle.Comment", "/** Circle/Sphere (major axis is defined by BoxSize.X, minor axis by BoxSize.Y) */" },
		{ "Circle.Name", "ESpriteShapeType::Circle" },
		{ "Circle.ToolTip", "Circle/Sphere (major axis is defined by BoxSize.X, minor axis by BoxSize.Y)" },
		{ "Comment", "// The type of a shape in a sprite geometry structure\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "Polygon.Comment", "/** Custom closed polygon */" },
		{ "Polygon.Name", "ESpriteShapeType::Polygon" },
		{ "Polygon.ToolTip", "Custom closed polygon" },
		{ "ToolTip", "The type of a shape in a sprite geometry structure" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Paper2D_ESpriteShapeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		"ESpriteShapeType",
		"ESpriteShapeType",
		Z_Construct_UEnum_Paper2D_ESpriteShapeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_ESpriteShapeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Paper2D_ESpriteShapeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_ESpriteShapeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Paper2D_ESpriteShapeType()
	{
		if (!Z_Registration_Info_UEnum_ESpriteShapeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpriteShapeType.InnerSingleton, Z_Construct_UEnum_Paper2D_ESpriteShapeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpriteShapeType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpriteGeometryShape;
class UScriptStruct* FSpriteGeometryShape::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpriteGeometryShape.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpriteGeometryShape.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteGeometryShape, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteGeometryShape"));
	}
	return Z_Registration_Info_UScriptStruct_SpriteGeometryShape.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteGeometryShape>()
{
	return FSpriteGeometryShape::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNegativeWinding_MetaData[];
#endif
		static void NewProp_bNegativeWinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNegativeWinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A single piece of geometry (e.g., a polygon which may be convex or concave, a box, or a circle)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "A single piece of geometry (e.g., a polygon which may be convex or concave, a box, or a circle)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteGeometryShape>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// The type of this piece of geometry\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "The type of this piece of geometry" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryShape, ShapeType), Z_Construct_UEnum_Paper2D_ESpriteShapeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType_MetaData)) }; // 2126328342
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// Vertices for the polygon (valid for Box and Polygon, but empty for Circle)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Vertices for the polygon (valid for Box and Polygon, but empty for Circle)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryShape, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxSize_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// Size of the box or major/minor dimensions of the circle\n// Note: Only valid when GeometryType is Box or Circle\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Size of the box or major/minor dimensions of the circle\nNote: Only valid when GeometryType is Box or Circle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxSize = { "BoxSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryShape, BoxSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxPosition_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// Center of the box or circle, acts as the pivot point for polygons (but may not be at the center of them)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Center of the box or circle, acts as the pivot point for polygons (but may not be at the center of them)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxPosition = { "BoxPosition", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryShape, BoxPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// Rotation of the shape (in degrees)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Rotation of the shape (in degrees)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryShape, Rotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "// For Polygon geometry, this tells us if the winding should be negative (CW) regardless of the order in Vertices\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "For Polygon geometry, this tells us if the winding should be negative (CW) regardless of the order in Vertices" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_SetBit(void* Obj)
	{
		((FSpriteGeometryShape*)Obj)->bNegativeWinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding = { "bNegativeWinding", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSpriteGeometryShape), &Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Vertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_BoxPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewProp_bNegativeWinding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"SpriteGeometryShape",
		sizeof(FSpriteGeometryShape),
		alignof(FSpriteGeometryShape),
		Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryShape()
	{
		if (!Z_Registration_Info_UScriptStruct_SpriteGeometryShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpriteGeometryShape.InnerSingleton, Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpriteGeometryShape.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpritePolygonMode;
	static UEnum* ESpritePolygonMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpritePolygonMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpritePolygonMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpritePolygonMode, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("ESpritePolygonMode"));
		}
		return Z_Registration_Info_UEnum_ESpritePolygonMode.OuterSingleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<ESpritePolygonMode::Type>()
	{
		return ESpritePolygonMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Statics::Enumerators[] = {
		{ "ESpritePolygonMode::SourceBoundingBox", (int64)ESpritePolygonMode::SourceBoundingBox },
		{ "ESpritePolygonMode::TightBoundingBox", (int64)ESpritePolygonMode::TightBoundingBox },
		{ "ESpritePolygonMode::ShrinkWrapped", (int64)ESpritePolygonMode::ShrinkWrapped },
		{ "ESpritePolygonMode::FullyCustom", (int64)ESpritePolygonMode::FullyCustom },
		{ "ESpritePolygonMode::Diced", (int64)ESpritePolygonMode::Diced },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Method of specifying polygons for a sprite's render or collision data\n" },
		{ "Diced.Comment", "/** Diced (split up into smaller squares, including only non-empty ones in the final geometry).  This option is only supported for Render geometry and will be ignored for Collision geometry. */" },
		{ "Diced.Name", "ESpritePolygonMode::Diced" },
		{ "Diced.ToolTip", "Diced (split up into smaller squares, including only non-empty ones in the final geometry).  This option is only supported for Render geometry and will be ignored for Collision geometry." },
		{ "FullyCustom.Comment", "/** Fully custom geometry; edited by hand */" },
		{ "FullyCustom.Name", "ESpritePolygonMode::FullyCustom" },
		{ "FullyCustom.ToolTip", "Fully custom geometry; edited by hand" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ShrinkWrapped.Comment", "/** Shrink-wrapped geometry */" },
		{ "ShrinkWrapped.Name", "ESpritePolygonMode::ShrinkWrapped" },
		{ "ShrinkWrapped.ToolTip", "Shrink-wrapped geometry" },
		{ "SourceBoundingBox.Comment", "/** Use the bounding box of the source sprite (no optimization) */" },
		{ "SourceBoundingBox.Name", "ESpritePolygonMode::SourceBoundingBox" },
		{ "SourceBoundingBox.ToolTip", "Use the bounding box of the source sprite (no optimization)" },
		{ "TightBoundingBox.Comment", "/** Tighten the bounding box around the sprite to exclude fully transparent areas (the default) */" },
		{ "TightBoundingBox.Name", "ESpritePolygonMode::TightBoundingBox" },
		{ "TightBoundingBox.ToolTip", "Tighten the bounding box around the sprite to exclude fully transparent areas (the default)" },
		{ "ToolTip", "Method of specifying polygons for a sprite's render or collision data" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		"ESpritePolygonMode",
		"ESpritePolygonMode::Type",
		Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Paper2D_ESpritePolygonMode()
	{
		if (!Z_Registration_Info_UEnum_ESpritePolygonMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpritePolygonMode.InnerSingleton, Z_Construct_UEnum_Paper2D_ESpritePolygonMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpritePolygonMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpriteGeometryCollection;
class UScriptStruct* FSpriteGeometryCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpriteGeometryCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpriteGeometryCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteGeometryCollection, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteGeometryCollection"));
	}
	return Z_Registration_Info_UScriptStruct_SpriteGeometryCollection.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteGeometryCollection>()
{
	return FSpriteGeometryCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Shapes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shapes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Shapes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GeometryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelsPerSubdivisionX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PixelsPerSubdivisionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelsPerSubdivisionY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PixelsPerSubdivisionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidVertexMerging_MetaData[];
#endif
		static void NewProp_bAvoidVertexMerging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidVertexMerging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DetailAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyEpsilon_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplifyEpsilon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteGeometryCollection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes_Inner = { "Shapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpriteGeometryShape, METADATA_PARAMS(nullptr, 0) }; // 2930652624
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// List of shapes\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "List of shapes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes = { "Shapes", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryCollection, Shapes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes_MetaData)) }; // 2930652624
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_GeometryType_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// The geometry type (automatic / manual)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "The geometry type (automatic / manual)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_GeometryType = { "GeometryType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryCollection, GeometryType), Z_Construct_UEnum_Paper2D_ESpritePolygonMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_GeometryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_GeometryType_MetaData)) }; // 3815864169
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionX_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// Size of a single subdivision (in pixels) in X (for Diced mode)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Size of a single subdivision (in pixels) in X (for Diced mode)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionX = { "PixelsPerSubdivisionX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryCollection, PixelsPerSubdivisionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionY_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// Size of a single subdivision (in pixels) in Y (for Diced mode)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Size of a single subdivision (in pixels) in Y (for Diced mode)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionY = { "PixelsPerSubdivisionY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryCollection, PixelsPerSubdivisionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// Experimental: Hint to the triangulation routine that extra vertices should be preserved\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Experimental: Hint to the triangulation routine that extra vertices should be preserved" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_SetBit(void* Obj)
	{
		((FSpriteGeometryCollection*)Obj)->bAvoidVertexMerging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging = { "bAvoidVertexMerging", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSpriteGeometryCollection), &Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_AlphaThreshold_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// Alpha threshold for a transparent pixel (range 0..1, anything equal or below this value will be considered unimportant)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Alpha threshold for a transparent pixel (range 0..1, anything equal or below this value will be considered unimportant)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_AlphaThreshold = { "AlphaThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryCollection, AlphaThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_AlphaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_AlphaThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_DetailAmount_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// Amount to detail to consider when shrink-wrapping (range 0..1, 0 = low detail, 1 = high detail)\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "Amount to detail to consider when shrink-wrapping (range 0..1, 0 = low detail, 1 = high detail)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_DetailAmount = { "DetailAmount", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryCollection, DetailAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_DetailAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_DetailAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_SimplifyEpsilon_MetaData[] = {
		{ "Category", "PolygonData" },
		{ "Comment", "// This is the threshold below which multiple vertices will be merged together when doing shrink-wrapping.  Higher values result in fewer vertices.\n" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "ToolTip", "This is the threshold below which multiple vertices will be merged together when doing shrink-wrapping.  Higher values result in fewer vertices." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_SimplifyEpsilon = { "SimplifyEpsilon", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteGeometryCollection, SimplifyEpsilon), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_SimplifyEpsilon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_SimplifyEpsilon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_Shapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_GeometryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_PixelsPerSubdivisionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_bAvoidVertexMerging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_AlphaThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_DetailAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewProp_SimplifyEpsilon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"SpriteGeometryCollection",
		sizeof(FSpriteGeometryCollection),
		alignof(FSpriteGeometryCollection),
		Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpriteGeometryCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_SpriteGeometryCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpriteGeometryCollection.InnerSingleton, Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpriteGeometryCollection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpriteAssetInitParameters;
class UScriptStruct* FSpriteAssetInitParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpriteAssetInitParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpriteAssetInitParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteAssetInitParameters, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteAssetInitParameters"));
	}
	return Z_Registration_Info_UScriptStruct_SpriteAssetInitParameters.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteAssetInitParameters>()
{
	return FSpriteAssetInitParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteAssetInitParameters>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"SpriteAssetInitParameters",
		sizeof(FSpriteAssetInitParameters),
		alignof(FSpriteAssetInitParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpriteAssetInitParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_SpriteAssetInitParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpriteAssetInitParameters.InnerSingleton, Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpriteAssetInitParameters.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpritePivotMode;
	static UEnum* ESpritePivotMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpritePivotMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpritePivotMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_ESpritePivotMode, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("ESpritePivotMode"));
		}
		return Z_Registration_Info_UEnum_ESpritePivotMode.OuterSingleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<ESpritePivotMode::Type>()
	{
		return ESpritePivotMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Paper2D_ESpritePivotMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Paper2D_ESpritePivotMode_Statics::Enumerators[] = {
		{ "ESpritePivotMode::Top_Left", (int64)ESpritePivotMode::Top_Left },
		{ "ESpritePivotMode::Top_Center", (int64)ESpritePivotMode::Top_Center },
		{ "ESpritePivotMode::Top_Right", (int64)ESpritePivotMode::Top_Right },
		{ "ESpritePivotMode::Center_Left", (int64)ESpritePivotMode::Center_Left },
		{ "ESpritePivotMode::Center_Center", (int64)ESpritePivotMode::Center_Center },
		{ "ESpritePivotMode::Center_Right", (int64)ESpritePivotMode::Center_Right },
		{ "ESpritePivotMode::Bottom_Left", (int64)ESpritePivotMode::Bottom_Left },
		{ "ESpritePivotMode::Bottom_Center", (int64)ESpritePivotMode::Bottom_Center },
		{ "ESpritePivotMode::Bottom_Right", (int64)ESpritePivotMode::Bottom_Right },
		{ "ESpritePivotMode::Custom", (int64)ESpritePivotMode::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Paper2D_ESpritePivotMode_Statics::Enum_MetaDataParams[] = {
		{ "Bottom_Center.Name", "ESpritePivotMode::Bottom_Center" },
		{ "Bottom_Left.Name", "ESpritePivotMode::Bottom_Left" },
		{ "Bottom_Right.Name", "ESpritePivotMode::Bottom_Right" },
		{ "Center_Center.Name", "ESpritePivotMode::Center_Center" },
		{ "Center_Left.Name", "ESpritePivotMode::Center_Left" },
		{ "Center_Right.Name", "ESpritePivotMode::Center_Right" },
		{ "Custom.Name", "ESpritePivotMode::Custom" },
		{ "ModuleRelativePath", "Classes/SpriteEditorOnlyTypes.h" },
		{ "Top_Center.Name", "ESpritePivotMode::Top_Center" },
		{ "Top_Left.Name", "ESpritePivotMode::Top_Left" },
		{ "Top_Right.Name", "ESpritePivotMode::Top_Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Paper2D_ESpritePivotMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		"ESpritePivotMode",
		"ESpritePivotMode::Type",
		Z_Construct_UEnum_Paper2D_ESpritePivotMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_ESpritePivotMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Paper2D_ESpritePivotMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_ESpritePivotMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Paper2D_ESpritePivotMode()
	{
		if (!Z_Registration_Info_UEnum_ESpritePivotMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpritePivotMode.InnerSingleton, Z_Construct_UEnum_Paper2D_ESpritePivotMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpritePivotMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_Statics::EnumInfo[] = {
		{ ESpriteCollisionMode_StaticEnum, TEXT("ESpriteCollisionMode"), &Z_Registration_Info_UEnum_ESpriteCollisionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2663272316U) },
		{ ESpriteShapeType_StaticEnum, TEXT("ESpriteShapeType"), &Z_Registration_Info_UEnum_ESpriteShapeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2126328342U) },
		{ ESpritePolygonMode_StaticEnum, TEXT("ESpritePolygonMode"), &Z_Registration_Info_UEnum_ESpritePolygonMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3815864169U) },
		{ ESpritePivotMode_StaticEnum, TEXT("ESpritePivotMode"), &Z_Registration_Info_UEnum_ESpritePivotMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1469996073U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_Statics::ScriptStructInfo[] = {
		{ FSpriteGeometryShape::StaticStruct, Z_Construct_UScriptStruct_FSpriteGeometryShape_Statics::NewStructOps, TEXT("SpriteGeometryShape"), &Z_Registration_Info_UScriptStruct_SpriteGeometryShape, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpriteGeometryShape), 2930652624U) },
		{ FSpriteGeometryCollection::StaticStruct, Z_Construct_UScriptStruct_FSpriteGeometryCollection_Statics::NewStructOps, TEXT("SpriteGeometryCollection"), &Z_Registration_Info_UScriptStruct_SpriteGeometryCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpriteGeometryCollection), 671462443U) },
		{ FSpriteAssetInitParameters::StaticStruct, Z_Construct_UScriptStruct_FSpriteAssetInitParameters_Statics::NewStructOps, TEXT("SpriteAssetInitParameters"), &Z_Registration_Info_UScriptStruct_SpriteAssetInitParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpriteAssetInitParameters), 3104213828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_1412651222(TEXT("/Script/Paper2D"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_SpriteEditorOnlyTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
