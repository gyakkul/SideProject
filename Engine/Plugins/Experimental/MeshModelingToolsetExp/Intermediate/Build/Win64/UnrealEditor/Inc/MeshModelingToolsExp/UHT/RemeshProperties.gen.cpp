// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Properties/RemeshProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemeshProperties() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshConstraintProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshConstraintProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URemeshProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshBoundaryConstraint;
	static UEnum* EMeshBoundaryConstraint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshBoundaryConstraint"));
		}
		return Z_Registration_Info_UEnum_EMeshBoundaryConstraint.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshBoundaryConstraint>()
	{
		return EMeshBoundaryConstraint_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::Enumerators[] = {
		{ "EMeshBoundaryConstraint::Fixed", (int64)EMeshBoundaryConstraint::Fixed },
		{ "EMeshBoundaryConstraint::Refine", (int64)EMeshBoundaryConstraint::Refine },
		{ "EMeshBoundaryConstraint::Free", (int64)EMeshBoundaryConstraint::Free },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Boundary Constraint Types */" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EMeshBoundaryConstraint::Fixed" },
		{ "Free.DisplayName", "Free" },
		{ "Free.Name", "EMeshBoundaryConstraint::Free" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "Refine.DisplayName", "Refine" },
		{ "Refine.Name", "EMeshBoundaryConstraint::Refine" },
		{ "ToolTip", "Mesh Boundary Constraint Types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMeshBoundaryConstraint",
		"EMeshBoundaryConstraint",
		Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint()
	{
		if (!Z_Registration_Info_UEnum_EMeshBoundaryConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshBoundaryConstraint.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshBoundaryConstraint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroupBoundaryConstraint;
	static UEnum* EGroupBoundaryConstraint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EGroupBoundaryConstraint"));
		}
		return Z_Registration_Info_UEnum_EGroupBoundaryConstraint.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EGroupBoundaryConstraint>()
	{
		return EGroupBoundaryConstraint_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::Enumerators[] = {
		{ "EGroupBoundaryConstraint::Fixed", (int64)EGroupBoundaryConstraint::Fixed },
		{ "EGroupBoundaryConstraint::Refine", (int64)EGroupBoundaryConstraint::Refine },
		{ "EGroupBoundaryConstraint::Free", (int64)EGroupBoundaryConstraint::Free },
		{ "EGroupBoundaryConstraint::Ignore", (int64)EGroupBoundaryConstraint::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Group Boundary Constraint Types */" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EGroupBoundaryConstraint::Fixed" },
		{ "Free.DisplayName", "Free" },
		{ "Free.Name", "EGroupBoundaryConstraint::Free" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EGroupBoundaryConstraint::Ignore" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "Refine.DisplayName", "Refine" },
		{ "Refine.Name", "EGroupBoundaryConstraint::Refine" },
		{ "ToolTip", "Group Boundary Constraint Types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EGroupBoundaryConstraint",
		"EGroupBoundaryConstraint",
		Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint()
	{
		if (!Z_Registration_Info_UEnum_EGroupBoundaryConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroupBoundaryConstraint.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroupBoundaryConstraint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialBoundaryConstraint;
	static UEnum* EMaterialBoundaryConstraint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMaterialBoundaryConstraint"));
		}
		return Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMaterialBoundaryConstraint>()
	{
		return EMaterialBoundaryConstraint_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::Enumerators[] = {
		{ "EMaterialBoundaryConstraint::Fixed", (int64)EMaterialBoundaryConstraint::Fixed },
		{ "EMaterialBoundaryConstraint::Refine", (int64)EMaterialBoundaryConstraint::Refine },
		{ "EMaterialBoundaryConstraint::Free", (int64)EMaterialBoundaryConstraint::Free },
		{ "EMaterialBoundaryConstraint::Ignore", (int64)EMaterialBoundaryConstraint::Ignore },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Material Boundary Constraint Types */" },
		{ "Fixed.DisplayName", "Fixed" },
		{ "Fixed.Name", "EMaterialBoundaryConstraint::Fixed" },
		{ "Free.DisplayName", "Free" },
		{ "Free.Name", "EMaterialBoundaryConstraint::Free" },
		{ "Ignore.DisplayName", "Ignore" },
		{ "Ignore.Name", "EMaterialBoundaryConstraint::Ignore" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "Refine.DisplayName", "Refine" },
		{ "Refine.Name", "EMaterialBoundaryConstraint::Refine" },
		{ "ToolTip", "Material Boundary Constraint Types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMaterialBoundaryConstraint",
		"EMaterialBoundaryConstraint",
		Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint()
	{
		if (!Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialBoundaryConstraint.InnerSingleton;
	}
	void UMeshConstraintProperties::StaticRegisterNativesUMeshConstraintProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshConstraintProperties);
	UClass* Z_Construct_UClass_UMeshConstraintProperties_NoRegister()
	{
		return UMeshConstraintProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMeshConstraintProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveSharpEdges_MetaData[];
#endif
		static void NewProp_bPreserveSharpEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveSharpEdges;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshBoundaryConstraint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupBoundaryConstraint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialBoundaryConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBoundaryConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialBoundaryConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventNormalFlips_MetaData[];
#endif
		static void NewProp_bPreventNormalFlips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventNormalFlips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventTinyTriangles_MetaData[];
#endif
		static void NewProp_bPreventTinyTriangles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventTinyTriangles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshConstraintProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshConstraintProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/RemeshProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** If true, sharp edges are preserved  */" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "If true, sharp edges are preserved" },
	};
#endif
	void Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges_SetBit(void* Obj)
	{
		((UMeshConstraintProperties*)Obj)->bPreserveSharpEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges = { "bPreserveSharpEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshConstraintProperties), &Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint_MetaData[] = {
		{ "Category", "Remeshing|Boundary Constraints" },
		{ "Comment", "/** Mesh Boundary Constraint Type */" },
		{ "DisplayName", "Mesh Boundary" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Mesh Boundary Constraint Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint = { "MeshBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshConstraintProperties, MeshBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EMeshBoundaryConstraint, METADATA_PARAMS(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint_MetaData)) }; // 1916899982
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint_MetaData[] = {
		{ "Category", "Remeshing|Boundary Constraints" },
		{ "Comment", "/** Group Boundary Constraint Type */" },
		{ "DisplayName", "Group Boundary" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Group Boundary Constraint Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint = { "GroupBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshConstraintProperties, GroupBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EGroupBoundaryConstraint, METADATA_PARAMS(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint_MetaData)) }; // 2514104683
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint_MetaData[] = {
		{ "Category", "Remeshing|Boundary Constraints" },
		{ "Comment", "/** Material Boundary Constraint Type */" },
		{ "DisplayName", "Material Boundary" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Material Boundary Constraint Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint = { "MaterialBoundaryConstraint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshConstraintProperties, MaterialBoundaryConstraint), Z_Construct_UEnum_MeshModelingToolsExp_EMaterialBoundaryConstraint, METADATA_PARAMS(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint_MetaData)) }; // 1203065482
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** Prevent normal flips */" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Prevent normal flips" },
	};
#endif
	void Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips_SetBit(void* Obj)
	{
		((UMeshConstraintProperties*)Obj)->bPreventNormalFlips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips = { "bPreventNormalFlips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshConstraintProperties), &Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** Prevent introduction of tiny triangles or slivers */" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Prevent introduction of tiny triangles or slivers" },
	};
#endif
	void Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles_SetBit(void* Obj)
	{
		((UMeshConstraintProperties*)Obj)->bPreventTinyTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles = { "bPreventTinyTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshConstraintProperties), &Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshConstraintProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreserveSharpEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MeshBoundaryConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_GroupBoundaryConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_MaterialBoundaryConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventNormalFlips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshConstraintProperties_Statics::NewProp_bPreventTinyTriangles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshConstraintProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshConstraintProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshConstraintProperties_Statics::ClassParams = {
		&UMeshConstraintProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshConstraintProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshConstraintProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshConstraintProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshConstraintProperties()
	{
		if (!Z_Registration_Info_UClass_UMeshConstraintProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshConstraintProperties.OuterSingleton, Z_Construct_UClass_UMeshConstraintProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshConstraintProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshConstraintProperties>()
	{
		return UMeshConstraintProperties::StaticClass();
	}
	UMeshConstraintProperties::UMeshConstraintProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshConstraintProperties);
	UMeshConstraintProperties::~UMeshConstraintProperties() {}
	void URemeshProperties::StaticRegisterNativesURemeshProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemeshProperties);
	UClass* Z_Construct_UClass_URemeshProperties_NoRegister()
	{
		return URemeshProperties::StaticClass();
	}
	struct Z_Construct_UClass_URemeshProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlips_MetaData[];
#endif
		static void NewProp_bFlips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplits_MetaData[];
#endif
		static void NewProp_bSplits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollapses_MetaData[];
#endif
		static void NewProp_bCollapses_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemeshProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshConstraintProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Properties/RemeshProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshProperties_Statics::NewProp_SmoothingStrength_MetaData[] = {
		{ "Category", "Remeshing" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount of Vertex Smoothing applied within Remeshing */" },
		{ "DisplayName", "Smoothing Rate" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Amount of Vertex Smoothing applied within Remeshing" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URemeshProperties_Statics::NewProp_SmoothingStrength = { "SmoothingStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemeshProperties, SmoothingStrength), METADATA_PARAMS(Z_Construct_UClass_URemeshProperties_Statics::NewProp_SmoothingStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshProperties_Statics::NewProp_SmoothingStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** Enable edge flips in Remeshing (tends to lose edges/detail) */" },
		{ "DisplayName", "Allow Flips" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Enable edge flips in Remeshing (tends to lose edges/detail)" },
	};
#endif
	void Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips_SetBit(void* Obj)
	{
		((URemeshProperties*)Obj)->bFlips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips = { "bFlips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemeshProperties), &Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** Enable edge splits in Remeshing */" },
		{ "DisplayName", "Allow Splits" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Enable edge splits in Remeshing" },
	};
#endif
	void Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits_SetBit(void* Obj)
	{
		((URemeshProperties*)Obj)->bSplits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits = { "bSplits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemeshProperties), &Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses_MetaData[] = {
		{ "Category", "Remeshing|Edge Constraints" },
		{ "Comment", "/** Enable edge collapses in Remeshing */" },
		{ "DisplayName", "Allow Collapses" },
		{ "ModuleRelativePath", "Public/Properties/RemeshProperties.h" },
		{ "ToolTip", "Enable edge collapses in Remeshing" },
	};
#endif
	void Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses_SetBit(void* Obj)
	{
		((URemeshProperties*)Obj)->bCollapses = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses = { "bCollapses", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemeshProperties), &Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemeshProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshProperties_Statics::NewProp_SmoothingStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshProperties_Statics::NewProp_bFlips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshProperties_Statics::NewProp_bSplits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemeshProperties_Statics::NewProp_bCollapses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemeshProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemeshProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemeshProperties_Statics::ClassParams = {
		&URemeshProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemeshProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemeshProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URemeshProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemeshProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemeshProperties()
	{
		if (!Z_Registration_Info_UClass_URemeshProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemeshProperties.OuterSingleton, Z_Construct_UClass_URemeshProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemeshProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URemeshProperties>()
	{
		return URemeshProperties::StaticClass();
	}
	URemeshProperties::URemeshProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemeshProperties);
	URemeshProperties::~URemeshProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics::EnumInfo[] = {
		{ EMeshBoundaryConstraint_StaticEnum, TEXT("EMeshBoundaryConstraint"), &Z_Registration_Info_UEnum_EMeshBoundaryConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1916899982U) },
		{ EGroupBoundaryConstraint_StaticEnum, TEXT("EGroupBoundaryConstraint"), &Z_Registration_Info_UEnum_EGroupBoundaryConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2514104683U) },
		{ EMaterialBoundaryConstraint_StaticEnum, TEXT("EMaterialBoundaryConstraint"), &Z_Registration_Info_UEnum_EMaterialBoundaryConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1203065482U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshConstraintProperties, UMeshConstraintProperties::StaticClass, TEXT("UMeshConstraintProperties"), &Z_Registration_Info_UClass_UMeshConstraintProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshConstraintProperties), 3716098261U) },
		{ Z_Construct_UClass_URemeshProperties, URemeshProperties::StaticClass, TEXT("URemeshProperties"), &Z_Registration_Info_UClass_URemeshProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemeshProperties), 3635881457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_1247440169(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_Properties_RemeshProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
