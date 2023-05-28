// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Physics/CollisionPropertySets.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollisionPropertySets() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode();
	MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsBoxData();
	MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsCapsuleData();
	MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsConvexData();
	MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsLevelSetData();
	MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsSphereData();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionGeometryMode;
	static UEnum* ECollisionGeometryMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollisionGeometryMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollisionGeometryMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ECollisionGeometryMode"));
		}
		return Z_Registration_Info_UEnum_ECollisionGeometryMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ECollisionGeometryMode>()
	{
		return ECollisionGeometryMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::Enumerators[] = {
		{ "ECollisionGeometryMode::Default", (int64)ECollisionGeometryMode::Default },
		{ "ECollisionGeometryMode::SimpleAndComplex", (int64)ECollisionGeometryMode::SimpleAndComplex },
		{ "ECollisionGeometryMode::UseSimpleAsComplex", (int64)ECollisionGeometryMode::UseSimpleAsComplex },
		{ "ECollisionGeometryMode::UseComplexAsSimple", (int64)ECollisionGeometryMode::UseComplexAsSimple },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::Enum_MetaDataParams[] = {
		{ "Default.Comment", "/** Use project physics settings (DefaultShapeComplexity) */" },
		{ "Default.Name", "ECollisionGeometryMode::Default" },
		{ "Default.ToolTip", "Use project physics settings (DefaultShapeComplexity)" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "SimpleAndComplex.Comment", "/** Create both simple and complex shapes. Simple shapes are used for regular scene queries and collision tests. Complex shape (per poly) is used for complex scene queries.*/" },
		{ "SimpleAndComplex.Name", "ECollisionGeometryMode::SimpleAndComplex" },
		{ "SimpleAndComplex.ToolTip", "Create both simple and complex shapes. Simple shapes are used for regular scene queries and collision tests. Complex shape (per poly) is used for complex scene queries." },
		{ "UseComplexAsSimple.Comment", "/** Create only complex shapes (per poly). Use complex shapes for all scene queries and collision tests. Can be used in simulation for static shapes only (i.e can be collided against but not moved through forces or velocity.) */" },
		{ "UseComplexAsSimple.Name", "ECollisionGeometryMode::UseComplexAsSimple" },
		{ "UseComplexAsSimple.ToolTip", "Create only complex shapes (per poly). Use complex shapes for all scene queries and collision tests. Can be used in simulation for static shapes only (i.e can be collided against but not moved through forces or velocity.)" },
		{ "UseSimpleAsComplex.Comment", "/** Create only simple shapes. Use simple shapes for all scene queries and collision tests.*/" },
		{ "UseSimpleAsComplex.Name", "ECollisionGeometryMode::UseSimpleAsComplex" },
		{ "UseSimpleAsComplex.ToolTip", "Create only simple shapes. Use simple shapes for all scene queries and collision tests." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"ECollisionGeometryMode",
		"ECollisionGeometryMode",
		Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode()
	{
		if (!Z_Registration_Info_UEnum_ECollisionGeometryMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionGeometryMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollisionGeometryMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsSphereData;
class UScriptStruct* FPhysicsSphereData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsSphereData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsSphereData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsSphereData, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PhysicsSphereData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsSphereData.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPhysicsSphereData>()
{
	return FPhysicsSphereData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsSphereData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsSphereData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsSphereData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsSphereData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Element_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Shape Element storing standard collision and physics properties for a shape */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Shape Element storing standard collision and physics properties for a shape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsSphereData, Element), Z_Construct_UScriptStruct_FKShapeElem, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Element_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Element_MetaData)) }; // 1351357283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewProp_Element,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		&NewStructOps,
		"PhysicsSphereData",
		sizeof(FPhysicsSphereData),
		alignof(FPhysicsSphereData),
		Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsSphereData()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsSphereData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsSphereData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsSphereData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsBoxData;
class UScriptStruct* FPhysicsBoxData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsBoxData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsBoxData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsBoxData, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PhysicsBoxData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsBoxData.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPhysicsBoxData>()
{
	return FPhysicsBoxData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsBoxData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsBoxData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsBoxData, Dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Dimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsBoxData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Element_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Shape Element storing standard collision and physics properties for a shape */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Shape Element storing standard collision and physics properties for a shape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsBoxData, Element), Z_Construct_UScriptStruct_FKShapeElem, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Element_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Element_MetaData)) }; // 1351357283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Dimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewProp_Element,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		&NewStructOps,
		"PhysicsBoxData",
		sizeof(FPhysicsBoxData),
		alignof(FPhysicsBoxData),
		Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsBoxData()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsBoxData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsBoxData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsBoxData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsCapsuleData;
class UScriptStruct* FPhysicsCapsuleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsCapsuleData, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PhysicsCapsuleData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPhysicsCapsuleData>()
{
	return FPhysicsCapsuleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsCapsuleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsCapsuleData, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsCapsuleData, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Sphere" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsCapsuleData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Element_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Shape Element storing standard collision and physics properties for a shape */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Shape Element storing standard collision and physics properties for a shape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsCapsuleData, Element), Z_Construct_UScriptStruct_FKShapeElem, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Element_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Element_MetaData)) }; // 1351357283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewProp_Element,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		&NewStructOps,
		"PhysicsCapsuleData",
		sizeof(FPhysicsCapsuleData),
		alignof(FPhysicsCapsuleData),
		Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsCapsuleData()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsCapsuleData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsConvexData;
class UScriptStruct* FPhysicsConvexData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsConvexData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsConvexData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsConvexData, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PhysicsConvexData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsConvexData.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPhysicsConvexData>()
{
	return FPhysicsConvexData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsConvexData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFaces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumFaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsConvexData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumVertices_MetaData[] = {
		{ "Category", "Convex" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumVertices = { "NumVertices", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsConvexData, NumVertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumFaces_MetaData[] = {
		{ "Category", "Convex" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumFaces = { "NumFaces", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsConvexData, NumFaces), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumFaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_Element_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Shape Element storing standard collision and physics properties for a shape */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Shape Element storing standard collision and physics properties for a shape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsConvexData, Element), Z_Construct_UScriptStruct_FKShapeElem, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_Element_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_Element_MetaData)) }; // 1351357283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_NumFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewProp_Element,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		&NewStructOps,
		"PhysicsConvexData",
		sizeof(FPhysicsConvexData),
		alignof(FPhysicsConvexData),
		Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsConvexData()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsConvexData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsConvexData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsConvexData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsLevelSetData;
class UScriptStruct* FPhysicsLevelSetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsLevelSetData, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PhysicsLevelSetData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPhysicsLevelSetData>()
{
	return FPhysicsLevelSetData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Element_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Element;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsLevelSetData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::NewProp_Element_MetaData[] = {
		{ "Category", "LevelSet" },
		{ "Comment", "/** Shape Element storing standard collision and physics properties for a shape */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Shape Element storing standard collision and physics properties for a shape" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsLevelSetData, Element), Z_Construct_UScriptStruct_FKShapeElem, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::NewProp_Element_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::NewProp_Element_MetaData)) }; // 1351357283
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::NewProp_Element,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		&NewStructOps,
		"PhysicsLevelSetData",
		sizeof(FPhysicsLevelSetData),
		alignof(FPhysicsLevelSetData),
		Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsLevelSetData()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsLevelSetData.InnerSingleton;
	}
	void UPhysicsObjectToolPropertySet::StaticRegisterNativesUPhysicsObjectToolPropertySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsObjectToolPropertySet);
	UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet_NoRegister()
	{
		return UPhysicsObjectToolPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spheres_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spheres_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Spheres;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Boxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Boxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Boxes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Capsules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Capsules;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Convexes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Convexes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Convexes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/CollisionPropertySets.h" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "Comment", "/** Source Object Name */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Source Object Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, ObjectName), METADATA_PARAMS(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_ObjectName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "Comment", "/** Collision Flags controlling how simple and complex collision shapes are used */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Collision Flags controlling how simple and complex collision shapes are used" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, CollisionType), Z_Construct_UEnum_MeshModelingToolsExp_ECollisionGeometryMode, METADATA_PARAMS(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType_MetaData)) }; // 1167877315
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres_Inner = { "Spheres", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicsSphereData, METADATA_PARAMS(nullptr, 0) }; // 3281234333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres = { "Spheres", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, Spheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres_MetaData)) }; // 3281234333
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes_Inner = { "Boxes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicsBoxData, METADATA_PARAMS(nullptr, 0) }; // 3031950703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes = { "Boxes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, Boxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes_MetaData)) }; // 3031950703
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules_Inner = { "Capsules", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicsCapsuleData, METADATA_PARAMS(nullptr, 0) }; // 2309717113
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules = { "Capsules", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, Capsules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules_MetaData)) }; // 2309717113
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes_Inner = { "Convexes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicsConvexData, METADATA_PARAMS(nullptr, 0) }; // 3732446897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes = { "Convexes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, Convexes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes_MetaData)) }; // 3732446897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets_Inner = { "LevelSets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicsLevelSetData, METADATA_PARAMS(nullptr, 0) }; // 1850066651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets_MetaData[] = {
		{ "Category", "PhysicsData" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets = { "LevelSets", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsObjectToolPropertySet, LevelSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets_MetaData)) }; // 1850066651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Spheres,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Boxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Capsules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_Convexes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::NewProp_LevelSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsObjectToolPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::ClassParams = {
		&UPhysicsObjectToolPropertySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsObjectToolPropertySet()
	{
		if (!Z_Registration_Info_UClass_UPhysicsObjectToolPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsObjectToolPropertySet.OuterSingleton, Z_Construct_UClass_UPhysicsObjectToolPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsObjectToolPropertySet.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPhysicsObjectToolPropertySet>()
	{
		return UPhysicsObjectToolPropertySet::StaticClass();
	}
	UPhysicsObjectToolPropertySet::UPhysicsObjectToolPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsObjectToolPropertySet);
	UPhysicsObjectToolPropertySet::~UPhysicsObjectToolPropertySet() {}
	void UCollisionGeometryVisualizationProperties::StaticRegisterNativesUCollisionGeometryVisualizationProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCollisionGeometryVisualizationProperties);
	UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties_NoRegister()
	{
		return UCollisionGeometryVisualizationProperties::StaticClass();
	}
	struct Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowHidden_MetaData[];
#endif
		static void NewProp_bShowHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomColors_MetaData[];
#endif
		static void NewProp_bRandomColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Physics/CollisionPropertySets.h" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "Collision Visualization" },
		{ "Comment", "/** Thickness of lines used to visualize collision shapes */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Thickness of lines used to visualize collision shapes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCollisionGeometryVisualizationProperties, LineThickness), METADATA_PARAMS(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden_MetaData[] = {
		{ "Category", "Collision Visualization" },
		{ "Comment", "/** Show occluded parts of the collision geometry, rendered with dashed lines */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Show occluded parts of the collision geometry, rendered with dashed lines" },
	};
#endif
	void Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden_SetBit(void* Obj)
	{
		((UCollisionGeometryVisualizationProperties*)Obj)->bShowHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden = { "bShowHidden", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCollisionGeometryVisualizationProperties), &Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors_MetaData[] = {
		{ "Category", "Collision Visualization" },
		{ "Comment", "/** Render each collision geometry with a randomly-chosen color */" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "Render each collision geometry with a randomly-chosen color" },
	};
#endif
	void Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors_SetBit(void* Obj)
	{
		((UCollisionGeometryVisualizationProperties*)Obj)->bRandomColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors = { "bRandomColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCollisionGeometryVisualizationProperties), &Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Collision Visualization" },
		{ "Comment", "/** The color to use for all collision visualizations, if random colors are not used */" },
		{ "EditCondition", "!bRandomColors" },
		{ "ModuleRelativePath", "Public/Physics/CollisionPropertySets.h" },
		{ "ToolTip", "The color to use for all collision visualizations, if random colors are not used" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCollisionGeometryVisualizationProperties, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bShowHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_bRandomColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCollisionGeometryVisualizationProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::ClassParams = {
		&UCollisionGeometryVisualizationProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCollisionGeometryVisualizationProperties()
	{
		if (!Z_Registration_Info_UClass_UCollisionGeometryVisualizationProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCollisionGeometryVisualizationProperties.OuterSingleton, Z_Construct_UClass_UCollisionGeometryVisualizationProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCollisionGeometryVisualizationProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UCollisionGeometryVisualizationProperties>()
	{
		return UCollisionGeometryVisualizationProperties::StaticClass();
	}
	UCollisionGeometryVisualizationProperties::UCollisionGeometryVisualizationProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollisionGeometryVisualizationProperties);
	UCollisionGeometryVisualizationProperties::~UCollisionGeometryVisualizationProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::EnumInfo[] = {
		{ ECollisionGeometryMode_StaticEnum, TEXT("ECollisionGeometryMode"), &Z_Registration_Info_UEnum_ECollisionGeometryMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1167877315U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::ScriptStructInfo[] = {
		{ FPhysicsSphereData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsSphereData_Statics::NewStructOps, TEXT("PhysicsSphereData"), &Z_Registration_Info_UScriptStruct_PhysicsSphereData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsSphereData), 3281234333U) },
		{ FPhysicsBoxData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsBoxData_Statics::NewStructOps, TEXT("PhysicsBoxData"), &Z_Registration_Info_UScriptStruct_PhysicsBoxData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsBoxData), 3031950703U) },
		{ FPhysicsCapsuleData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsCapsuleData_Statics::NewStructOps, TEXT("PhysicsCapsuleData"), &Z_Registration_Info_UScriptStruct_PhysicsCapsuleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsCapsuleData), 2309717113U) },
		{ FPhysicsConvexData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsConvexData_Statics::NewStructOps, TEXT("PhysicsConvexData"), &Z_Registration_Info_UScriptStruct_PhysicsConvexData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsConvexData), 3732446897U) },
		{ FPhysicsLevelSetData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsLevelSetData_Statics::NewStructOps, TEXT("PhysicsLevelSetData"), &Z_Registration_Info_UScriptStruct_PhysicsLevelSetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsLevelSetData), 1850066651U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsObjectToolPropertySet, UPhysicsObjectToolPropertySet::StaticClass, TEXT("UPhysicsObjectToolPropertySet"), &Z_Registration_Info_UClass_UPhysicsObjectToolPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsObjectToolPropertySet), 2955288710U) },
		{ Z_Construct_UClass_UCollisionGeometryVisualizationProperties, UCollisionGeometryVisualizationProperties::StaticClass, TEXT("UCollisionGeometryVisualizationProperties"), &Z_Registration_Info_UClass_UCollisionGeometryVisualizationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCollisionGeometryVisualizationProperties), 2444380086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_1734713845(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Physics_CollisionPropertySets_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
