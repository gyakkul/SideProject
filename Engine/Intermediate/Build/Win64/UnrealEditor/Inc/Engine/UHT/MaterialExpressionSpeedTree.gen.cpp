// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionSpeedTree.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSpeedTree() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeGeometryType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeLODType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESpeedTreeWindType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeedTreeGeometryType;
	static UEnum* ESpeedTreeGeometryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpeedTreeGeometryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpeedTreeGeometryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeGeometryType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeGeometryType"));
		}
		return Z_Registration_Info_UEnum_ESpeedTreeGeometryType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESpeedTreeGeometryType>()
	{
		return ESpeedTreeGeometryType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::Enumerators[] = {
		{ "STG_Branch", (int64)STG_Branch },
		{ "STG_Frond", (int64)STG_Frond },
		{ "STG_Leaf", (int64)STG_Leaf },
		{ "STG_FacingLeaf", (int64)STG_FacingLeaf },
		{ "STG_Billboard", (int64)STG_Billboard },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "STG_Billboard.DisplayName", "Billboard" },
		{ "STG_Billboard.Name", "STG_Billboard" },
		{ "STG_Branch.DisplayName", "Branch" },
		{ "STG_Branch.Name", "STG_Branch" },
		{ "STG_FacingLeaf.DisplayName", "Facing Leaf" },
		{ "STG_FacingLeaf.Name", "STG_FacingLeaf" },
		{ "STG_Frond.DisplayName", "Frond" },
		{ "STG_Frond.Name", "STG_Frond" },
		{ "STG_Leaf.DisplayName", "Leaf" },
		{ "STG_Leaf.Name", "STG_Leaf" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESpeedTreeGeometryType",
		"ESpeedTreeGeometryType",
		Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESpeedTreeGeometryType()
	{
		if (!Z_Registration_Info_UEnum_ESpeedTreeGeometryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeedTreeGeometryType.InnerSingleton, Z_Construct_UEnum_Engine_ESpeedTreeGeometryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpeedTreeGeometryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeedTreeWindType;
	static UEnum* ESpeedTreeWindType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpeedTreeWindType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpeedTreeWindType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeWindType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeWindType"));
		}
		return Z_Registration_Info_UEnum_ESpeedTreeWindType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESpeedTreeWindType>()
	{
		return ESpeedTreeWindType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::Enumerators[] = {
		{ "STW_None", (int64)STW_None },
		{ "STW_Fastest", (int64)STW_Fastest },
		{ "STW_Fast", (int64)STW_Fast },
		{ "STW_Better", (int64)STW_Better },
		{ "STW_Best", (int64)STW_Best },
		{ "STW_Palm", (int64)STW_Palm },
		{ "STW_BestPlus", (int64)STW_BestPlus },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "STW_Best.DisplayName", "Best" },
		{ "STW_Best.Name", "STW_Best" },
		{ "STW_BestPlus.DisplayName", "BestPlus" },
		{ "STW_BestPlus.Name", "STW_BestPlus" },
		{ "STW_Better.DisplayName", "Better" },
		{ "STW_Better.Name", "STW_Better" },
		{ "STW_Fast.DisplayName", "Fast" },
		{ "STW_Fast.Name", "STW_Fast" },
		{ "STW_Fastest.DisplayName", "Fastest" },
		{ "STW_Fastest.Name", "STW_Fastest" },
		{ "STW_None.DisplayName", "None" },
		{ "STW_None.Name", "STW_None" },
		{ "STW_Palm.DisplayName", "Palm" },
		{ "STW_Palm.Name", "STW_Palm" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESpeedTreeWindType",
		"ESpeedTreeWindType",
		Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESpeedTreeWindType()
	{
		if (!Z_Registration_Info_UEnum_ESpeedTreeWindType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeedTreeWindType.InnerSingleton, Z_Construct_UEnum_Engine_ESpeedTreeWindType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpeedTreeWindType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpeedTreeLODType;
	static UEnum* ESpeedTreeLODType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpeedTreeLODType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpeedTreeLODType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESpeedTreeLODType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESpeedTreeLODType"));
		}
		return Z_Registration_Info_UEnum_ESpeedTreeLODType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESpeedTreeLODType>()
	{
		return ESpeedTreeLODType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::Enumerators[] = {
		{ "STLOD_Pop", (int64)STLOD_Pop },
		{ "STLOD_Smooth", (int64)STLOD_Smooth },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "STLOD_Pop.DisplayName", "Pop" },
		{ "STLOD_Pop.Name", "STLOD_Pop" },
		{ "STLOD_Smooth.DisplayName", "Smooth" },
		{ "STLOD_Smooth.Name", "STLOD_Smooth" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESpeedTreeLODType",
		"ESpeedTreeLODType",
		Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESpeedTreeLODType()
	{
		if (!Z_Registration_Info_UEnum_ESpeedTreeLODType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpeedTreeLODType.InnerSingleton, Z_Construct_UEnum_Engine_ESpeedTreeLODType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpeedTreeLODType.InnerSingleton;
	}
	void UMaterialExpressionSpeedTree::StaticRegisterNativesUMaterialExpressionSpeedTree()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionSpeedTree);
	UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree_NoRegister()
	{
		return UMaterialExpressionSpeedTree::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraBendWS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraBendWS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GeometryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BillboardThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BillboardThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAccurateWindVelocities_MetaData[];
#endif
		static void NewProp_bAccurateWindVelocities_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccurateWindVelocities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionSpeedTree.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'WindType' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput = { "GeometryInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, GeometryInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'GeometryType' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput = { "WindInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, WindInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'LODType' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput = { "LODInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, LODInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "An extra bending of the tree for local effects" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS = { "ExtraBendWS", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, ExtraBendWS), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "Geometry Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The type of SpeedTree geometry on which this material will be used" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType = { "GeometryType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, GeometryType), Z_Construct_UEnum_Engine_ESpeedTreeGeometryType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType_MetaData)) }; // 2771093420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "Wind Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The type of wind effect used on this tree. This can only go as high as it was in the SpeedTree Modeler, but you can set it to a lower option for lower quality wind and faster rendering." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType = { "WindType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, WindType), Z_Construct_UEnum_Engine_ESpeedTreeWindType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType_MetaData)) }; // 800821610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "LOD Type" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The type of LOD to use" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType = { "LODType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, LODType), Z_Construct_UEnum_Engine_ESpeedTreeLODType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType_MetaData)) }; // 3717653901
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Billboard Threshold" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "The threshold for triangles to be removed from the bilboard mesh when not facing the camera (0 = none pass, 1 = all pass)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold = { "BillboardThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionSpeedTree, BillboardThreshold), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_MetaData[] = {
		{ "Category", "MaterialExpressionSpeedTree" },
		{ "DisplayName", "Accurate Wind Velocities" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSpeedTree.h" },
		{ "ToolTip", "Support accurate velocities from wind. This will incur extra cost per vertex." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_SetBit(void* Obj)
	{
		((UMaterialExpressionSpeedTree*)Obj)->bAccurateWindVelocities = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities = { "bAccurateWindVelocities", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialExpressionSpeedTree), &Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_ExtraBendWS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_GeometryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_WindType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_LODType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_BillboardThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::NewProp_bAccurateWindVelocities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionSpeedTree>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::ClassParams = {
		&UMaterialExpressionSpeedTree::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionSpeedTree()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.OuterSingleton, Z_Construct_UClass_UMaterialExpressionSpeedTree_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionSpeedTree.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionSpeedTree>()
	{
		return UMaterialExpressionSpeedTree::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSpeedTree);
	UMaterialExpressionSpeedTree::~UMaterialExpressionSpeedTree() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionSpeedTree)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics::EnumInfo[] = {
		{ ESpeedTreeGeometryType_StaticEnum, TEXT("ESpeedTreeGeometryType"), &Z_Registration_Info_UEnum_ESpeedTreeGeometryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2771093420U) },
		{ ESpeedTreeWindType_StaticEnum, TEXT("ESpeedTreeWindType"), &Z_Registration_Info_UEnum_ESpeedTreeWindType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 800821610U) },
		{ ESpeedTreeLODType_StaticEnum, TEXT("ESpeedTreeLODType"), &Z_Registration_Info_UEnum_ESpeedTreeLODType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3717653901U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionSpeedTree, UMaterialExpressionSpeedTree::StaticClass, TEXT("UMaterialExpressionSpeedTree"), &Z_Registration_Info_UClass_UMaterialExpressionSpeedTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionSpeedTree), 3250566456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_2475620250(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionSpeedTree_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
