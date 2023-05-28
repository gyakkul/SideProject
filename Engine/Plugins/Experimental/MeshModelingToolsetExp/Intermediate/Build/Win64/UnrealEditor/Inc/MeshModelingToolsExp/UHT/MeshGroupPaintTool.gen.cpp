// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshGroupPaintTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshGroupPaintTool() {}
// Cross Module References
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UGroupEraseBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UGroupPaintBrushFilterProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UGroupPaintBrushFilterProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UGroupPaintBrushOpProps_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshGroupPaintTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshGroupPaintTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshGroupPaintToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshGroupPaintToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshGroupPaintToolFreezeActions();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshSculptToolBase();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolygroupLayersProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyLassoMarqueeMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UMeshGroupPaintToolBuilder::StaticRegisterNativesUMeshGroupPaintToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshGroupPaintToolBuilder);
	UClass* Z_Construct_UClass_UMeshGroupPaintToolBuilder_NoRegister()
	{
		return UMeshGroupPaintToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMeshGroupPaintToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshGroupPaintToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Builder\n */" },
		{ "IncludePath", "MeshGroupPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshGroupPaintToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshGroupPaintToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshGroupPaintToolBuilder_Statics::ClassParams = {
		&UMeshGroupPaintToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshGroupPaintToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMeshGroupPaintToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshGroupPaintToolBuilder.OuterSingleton, Z_Construct_UClass_UMeshGroupPaintToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshGroupPaintToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshGroupPaintToolBuilder>()
	{
		return UMeshGroupPaintToolBuilder::StaticClass();
	}
	UMeshGroupPaintToolBuilder::UMeshGroupPaintToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshGroupPaintToolBuilder);
	UMeshGroupPaintToolBuilder::~UMeshGroupPaintToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshGroupPaintInteractionType;
	static UEnum* EMeshGroupPaintInteractionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshGroupPaintInteractionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshGroupPaintInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshGroupPaintInteractionType"));
		}
		return Z_Registration_Info_UEnum_EMeshGroupPaintInteractionType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshGroupPaintInteractionType>()
	{
		return EMeshGroupPaintInteractionType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType_Statics::Enumerators[] = {
		{ "EMeshGroupPaintInteractionType::Brush", (int64)EMeshGroupPaintInteractionType::Brush },
		{ "EMeshGroupPaintInteractionType::Fill", (int64)EMeshGroupPaintInteractionType::Fill },
		{ "EMeshGroupPaintInteractionType::GroupFill", (int64)EMeshGroupPaintInteractionType::GroupFill },
		{ "EMeshGroupPaintInteractionType::PolyLasso", (int64)EMeshGroupPaintInteractionType::PolyLasso },
		{ "EMeshGroupPaintInteractionType::LastValue", (int64)EMeshGroupPaintInteractionType::LastValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType_Statics::Enum_MetaDataParams[] = {
		{ "Brush.Name", "EMeshGroupPaintInteractionType::Brush" },
		{ "Comment", "/** Mesh Sculpting Brush Types */" },
		{ "Fill.Name", "EMeshGroupPaintInteractionType::Fill" },
		{ "GroupFill.Name", "EMeshGroupPaintInteractionType::GroupFill" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "EMeshGroupPaintInteractionType::LastValue" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "PolyLasso.Name", "EMeshGroupPaintInteractionType::PolyLasso" },
		{ "ToolTip", "Mesh Sculpting Brush Types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMeshGroupPaintInteractionType",
		"EMeshGroupPaintInteractionType",
		Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType()
	{
		if (!Z_Registration_Info_UEnum_EMeshGroupPaintInteractionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshGroupPaintInteractionType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshGroupPaintInteractionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshGroupPaintBrushType;
	static UEnum* EMeshGroupPaintBrushType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshGroupPaintBrushType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshGroupPaintBrushType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshGroupPaintBrushType"));
		}
		return Z_Registration_Info_UEnum_EMeshGroupPaintBrushType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshGroupPaintBrushType>()
	{
		return EMeshGroupPaintBrushType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType_Statics::Enumerators[] = {
		{ "EMeshGroupPaintBrushType::Paint", (int64)EMeshGroupPaintBrushType::Paint },
		{ "EMeshGroupPaintBrushType::Erase", (int64)EMeshGroupPaintBrushType::Erase },
		{ "EMeshGroupPaintBrushType::LastValue", (int64)EMeshGroupPaintBrushType::LastValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Sculpting Brush Types */" },
		{ "Erase.Comment", "/** Erase active group */" },
		{ "Erase.DisplayName", "Erase" },
		{ "Erase.Name", "EMeshGroupPaintBrushType::Erase" },
		{ "Erase.ToolTip", "Erase active group" },
		{ "LastValue.Hidden", "" },
		{ "LastValue.Name", "EMeshGroupPaintBrushType::LastValue" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "Paint.Comment", "/** Paint active group */" },
		{ "Paint.DisplayName", "Paint" },
		{ "Paint.Name", "EMeshGroupPaintBrushType::Paint" },
		{ "Paint.ToolTip", "Paint active group" },
		{ "ToolTip", "Mesh Sculpting Brush Types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMeshGroupPaintBrushType",
		"EMeshGroupPaintBrushType",
		Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType()
	{
		if (!Z_Registration_Info_UEnum_EMeshGroupPaintBrushType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshGroupPaintBrushType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshGroupPaintBrushType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshGroupPaintBrushAreaType;
	static UEnum* EMeshGroupPaintBrushAreaType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshGroupPaintBrushAreaType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshGroupPaintBrushAreaType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshGroupPaintBrushAreaType"));
		}
		return Z_Registration_Info_UEnum_EMeshGroupPaintBrushAreaType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshGroupPaintBrushAreaType>()
	{
		return EMeshGroupPaintBrushAreaType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType_Statics::Enumerators[] = {
		{ "EMeshGroupPaintBrushAreaType::Connected", (int64)EMeshGroupPaintBrushAreaType::Connected },
		{ "EMeshGroupPaintBrushAreaType::Volumetric", (int64)EMeshGroupPaintBrushAreaType::Volumetric },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Sculpting Brush Area Types */" },
		{ "Connected.Name", "EMeshGroupPaintBrushAreaType::Connected" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Mesh Sculpting Brush Area Types" },
		{ "Volumetric.Name", "EMeshGroupPaintBrushAreaType::Volumetric" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMeshGroupPaintBrushAreaType",
		"EMeshGroupPaintBrushAreaType",
		Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType()
	{
		if (!Z_Registration_Info_UEnum_EMeshGroupPaintBrushAreaType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshGroupPaintBrushAreaType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshGroupPaintBrushAreaType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshGroupPaintVisibilityType;
	static UEnum* EMeshGroupPaintVisibilityType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshGroupPaintVisibilityType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshGroupPaintVisibilityType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshGroupPaintVisibilityType"));
		}
		return Z_Registration_Info_UEnum_EMeshGroupPaintVisibilityType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshGroupPaintVisibilityType>()
	{
		return EMeshGroupPaintVisibilityType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType_Statics::Enumerators[] = {
		{ "EMeshGroupPaintVisibilityType::None", (int64)EMeshGroupPaintVisibilityType::None },
		{ "EMeshGroupPaintVisibilityType::FrontFacing", (int64)EMeshGroupPaintVisibilityType::FrontFacing },
		{ "EMeshGroupPaintVisibilityType::Unoccluded", (int64)EMeshGroupPaintVisibilityType::Unoccluded },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Mesh Sculpting Brush Types */" },
		{ "FrontFacing.Name", "EMeshGroupPaintVisibilityType::FrontFacing" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "None.Name", "EMeshGroupPaintVisibilityType::None" },
		{ "ToolTip", "Mesh Sculpting Brush Types" },
		{ "Unoccluded.Name", "EMeshGroupPaintVisibilityType::Unoccluded" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMeshGroupPaintVisibilityType",
		"EMeshGroupPaintVisibilityType",
		Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType()
	{
		if (!Z_Registration_Info_UEnum_EMeshGroupPaintVisibilityType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshGroupPaintVisibilityType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshGroupPaintVisibilityType.InnerSingleton;
	}
	void UGroupPaintBrushFilterProperties::StaticRegisterNativesUGroupPaintBrushFilterProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroupPaintBrushFilterProperties);
	UClass* Z_Construct_UClass_UGroupPaintBrushFilterProperties_NoRegister()
	{
		return UGroupPaintBrushFilterProperties::StaticClass();
	}
	struct Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrimaryBrushType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryBrushType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PrimaryBrushType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SubToolType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubToolType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SubToolType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrushSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BrushAreaMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushAreaMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BrushAreaMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitBackFaces_MetaData[];
#endif
		static void NewProp_bHitBackFaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitBackFaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetGroup_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SetGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySetUngrouped_MetaData[];
#endif
		static void NewProp_bOnlySetUngrouped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySetUngrouped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EraseGroup_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EraseGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyEraseCurrent_MetaData[];
#endif
		static void NewProp_bOnlyEraseCurrent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyEraseCurrent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUVSeams_MetaData[];
#endif
		static void NewProp_bUVSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUVSeams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalSeams_MetaData[];
#endif
		static void NewProp_bNormalSeams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalSeams;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisibilityFilter_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityFilter_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VisibilityFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTriVertCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinTriVertCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowHitGroup_MetaData[];
#endif
		static void NewProp_bShowHitGroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHitGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAllGroups_MetaData[];
#endif
		static void NewProp_bShowAllGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAllGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshGroupPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_PrimaryBrushType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_PrimaryBrushType_MetaData[] = {
		{ "Comment", "/** Primary Brush Mode *///UPROPERTY(EditAnywhere, Category = Brush2, meta = (DisplayName = \"Brush Type\"))\n" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Primary Brush Mode //UPROPERTY(EditAnywhere, Category = Brush2, meta = (DisplayName = \"Brush Type\"))" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_PrimaryBrushType = { "PrimaryBrushType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupPaintBrushFilterProperties, PrimaryBrushType), Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushType, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_PrimaryBrushType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_PrimaryBrushType_MetaData)) }; // 1923438266
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SubToolType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SubToolType_MetaData[] = {
		{ "Category", "ActionType" },
		{ "DisplayName", "Action" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SubToolType = { "SubToolType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupPaintBrushFilterProperties, SubToolType), Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintInteractionType, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SubToolType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SubToolType_MetaData)) }; // 1647597090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushSize_MetaData[] = {
		{ "Category", "ActionType" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Relative size of brush */" },
		{ "DisplayName", "Brush Size" },
		{ "EditCondition", "SubToolType != EMeshGroupPaintInteractionType::PolyLasso" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Relative size of brush" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushSize = { "BrushSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupPaintBrushFilterProperties, BrushSize), METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode_MetaData[] = {
		{ "Category", "ActionType" },
		{ "Comment", "/** When Volumetric, all faces inside the brush sphere are selected, otherwise only connected faces are selected */" },
		{ "DisplayName", "Brush Area Mode" },
		{ "EditCondition", "SubToolType != EMeshGroupPaintInteractionType::PolyLasso" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "When Volumetric, all faces inside the brush sphere are selected, otherwise only connected faces are selected" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode = { "BrushAreaMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupPaintBrushFilterProperties, BrushAreaMode), Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintBrushAreaType, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode_MetaData)) }; // 417431004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bHitBackFaces_MetaData[] = {
		{ "Category", "ActionType" },
		{ "Comment", "/** Allow the Brush to hit the back-side of the mesh */" },
		{ "DisplayName", "Hit Back Faces" },
		{ "EditCondition", "SubToolType != EMeshGroupPaintInteractionType::PolyLasso" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Allow the Brush to hit the back-side of the mesh" },
	};
#endif
	void Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bHitBackFaces_SetBit(void* Obj)
	{
		((UGroupPaintBrushFilterProperties*)Obj)->bHitBackFaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bHitBackFaces = { "bHitBackFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroupPaintBrushFilterProperties), &Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bHitBackFaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bHitBackFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bHitBackFaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SetGroup_MetaData[] = {
		{ "Category", "ActionType" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The group that will be assigned to triangles */" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "The group that will be assigned to triangles" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SetGroup = { "SetGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupPaintBrushFilterProperties, SetGroup), METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SetGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SetGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlySetUngrouped_MetaData[] = {
		{ "Category", "ActionType" },
		{ "Comment", "/** If true, only triangles with no group assigned will be painted */" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "If true, only triangles with no group assigned will be painted" },
	};
#endif
	void Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlySetUngrouped_SetBit(void* Obj)
	{
		((UGroupPaintBrushFilterProperties*)Obj)->bOnlySetUngrouped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlySetUngrouped = { "bOnlySetUngrouped", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroupPaintBrushFilterProperties), &Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlySetUngrouped_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlySetUngrouped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlySetUngrouped_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_EraseGroup_MetaData[] = {
		{ "Category", "ActionType" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Group to set as Erased value */" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Group to set as Erased value" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_EraseGroup = { "EraseGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupPaintBrushFilterProperties, EraseGroup), METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_EraseGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_EraseGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlyEraseCurrent_MetaData[] = {
		{ "Category", "ActionType" },
		{ "Comment", "/** When enabled, only the current group configured in the Paint brush is erased */" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "When enabled, only the current group configured in the Paint brush is erased" },
	};
#endif
	void Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlyEraseCurrent_SetBit(void* Obj)
	{
		((UGroupPaintBrushFilterProperties*)Obj)->bOnlyEraseCurrent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlyEraseCurrent = { "bOnlyEraseCurrent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroupPaintBrushFilterProperties), &Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlyEraseCurrent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlyEraseCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlyEraseCurrent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_AngleThreshold_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The Region affected by the current operation will be bounded by edge angles larger than this threshold */" },
		{ "EditCondition", "SubToolType != EMeshGroupPaintInteractionType::PolyLasso && BrushAreaMode == EMeshGroupPaintBrushAreaType::Connected" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "The Region affected by the current operation will be bounded by edge angles larger than this threshold" },
		{ "UIMax", "180.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupPaintBrushFilterProperties, AngleThreshold), METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_AngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_AngleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bUVSeams_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The Region affected by the current operation will be bounded by UV borders/seams */" },
		{ "EditCondition", "SubToolType != EMeshGroupPaintInteractionType::PolyLasso && BrushAreaMode == EMeshGroupPaintBrushAreaType::Connected" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "The Region affected by the current operation will be bounded by UV borders/seams" },
	};
#endif
	void Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bUVSeams_SetBit(void* Obj)
	{
		((UGroupPaintBrushFilterProperties*)Obj)->bUVSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bUVSeams = { "bUVSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroupPaintBrushFilterProperties), &Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bUVSeams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bUVSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bUVSeams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bNormalSeams_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The Region affected by the current operation will be bounded by Hard Normal edges/seams */" },
		{ "EditCondition", "SubToolType != EMeshGroupPaintInteractionType::PolyLasso && BrushAreaMode == EMeshGroupPaintBrushAreaType::Connected" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "The Region affected by the current operation will be bounded by Hard Normal edges/seams" },
	};
#endif
	void Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bNormalSeams_SetBit(void* Obj)
	{
		((UGroupPaintBrushFilterProperties*)Obj)->bNormalSeams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bNormalSeams = { "bNormalSeams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroupPaintBrushFilterProperties), &Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bNormalSeams_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bNormalSeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bNormalSeams_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Control which triangles can be affected by the current operation based on visibility. Applied after all other filters. */" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Control which triangles can be affected by the current operation based on visibility. Applied after all other filters." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter = { "VisibilityFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupPaintBrushFilterProperties, VisibilityFilter), Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintVisibilityType, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter_MetaData)) }; // 1382255015
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_MinTriVertCount_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Number of vertices in a triangle the Lasso must hit to be counted as \"inside\" */" },
		{ "EditCondition", "SubToolType == EMeshGroupPaintInteractionType::PolyLasso" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Number of vertices in a triangle the Lasso must hit to be counted as \"inside\"" },
		{ "UIMax", "3" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_MinTriVertCount = { "MinTriVertCount", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGroupPaintBrushFilterProperties, MinTriVertCount), METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_MinTriVertCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_MinTriVertCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowHitGroup_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Display the Group ID of the last triangle under the cursor */" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Display the Group ID of the last triangle under the cursor" },
	};
#endif
	void Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowHitGroup_SetBit(void* Obj)
	{
		((UGroupPaintBrushFilterProperties*)Obj)->bShowHitGroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowHitGroup = { "bShowHitGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroupPaintBrushFilterProperties), &Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowHitGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowHitGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowHitGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowAllGroups_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Display the Group ID for all visible groups in the mesh */" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Display the Group ID for all visible groups in the mesh" },
	};
#endif
	void Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowAllGroups_SetBit(void* Obj)
	{
		((UGroupPaintBrushFilterProperties*)Obj)->bShowAllGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowAllGroups = { "bShowAllGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGroupPaintBrushFilterProperties), &Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowAllGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowAllGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowAllGroups_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_PrimaryBrushType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_PrimaryBrushType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SubToolType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SubToolType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_BrushAreaMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bHitBackFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_SetGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlySetUngrouped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_EraseGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bOnlyEraseCurrent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_AngleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bUVSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bNormalSeams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_VisibilityFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_MinTriVertCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowHitGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::NewProp_bShowAllGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroupPaintBrushFilterProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::ClassParams = {
		&UGroupPaintBrushFilterProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroupPaintBrushFilterProperties()
	{
		if (!Z_Registration_Info_UClass_UGroupPaintBrushFilterProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroupPaintBrushFilterProperties.OuterSingleton, Z_Construct_UClass_UGroupPaintBrushFilterProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroupPaintBrushFilterProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UGroupPaintBrushFilterProperties>()
	{
		return UGroupPaintBrushFilterProperties::StaticClass();
	}
	UGroupPaintBrushFilterProperties::UGroupPaintBrushFilterProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroupPaintBrushFilterProperties);
	UGroupPaintBrushFilterProperties::~UGroupPaintBrushFilterProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshGroupPaintToolActions;
	static UEnum* EMeshGroupPaintToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshGroupPaintToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshGroupPaintToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMeshGroupPaintToolActions"));
		}
		return Z_Registration_Info_UEnum_EMeshGroupPaintToolActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMeshGroupPaintToolActions>()
	{
		return EMeshGroupPaintToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions_Statics::Enumerators[] = {
		{ "EMeshGroupPaintToolActions::NoAction", (int64)EMeshGroupPaintToolActions::NoAction },
		{ "EMeshGroupPaintToolActions::ClearFrozen", (int64)EMeshGroupPaintToolActions::ClearFrozen },
		{ "EMeshGroupPaintToolActions::FreezeCurrent", (int64)EMeshGroupPaintToolActions::FreezeCurrent },
		{ "EMeshGroupPaintToolActions::FreezeOthers", (int64)EMeshGroupPaintToolActions::FreezeOthers },
		{ "EMeshGroupPaintToolActions::GrowCurrent", (int64)EMeshGroupPaintToolActions::GrowCurrent },
		{ "EMeshGroupPaintToolActions::ShrinkCurrent", (int64)EMeshGroupPaintToolActions::ShrinkCurrent },
		{ "EMeshGroupPaintToolActions::ClearCurrent", (int64)EMeshGroupPaintToolActions::ClearCurrent },
		{ "EMeshGroupPaintToolActions::FloodFillCurrent", (int64)EMeshGroupPaintToolActions::FloodFillCurrent },
		{ "EMeshGroupPaintToolActions::ClearAll", (int64)EMeshGroupPaintToolActions::ClearAll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions_Statics::Enum_MetaDataParams[] = {
		{ "ClearAll.Name", "EMeshGroupPaintToolActions::ClearAll" },
		{ "ClearCurrent.Name", "EMeshGroupPaintToolActions::ClearCurrent" },
		{ "ClearFrozen.Name", "EMeshGroupPaintToolActions::ClearFrozen" },
		{ "FloodFillCurrent.Name", "EMeshGroupPaintToolActions::FloodFillCurrent" },
		{ "FreezeCurrent.Name", "EMeshGroupPaintToolActions::FreezeCurrent" },
		{ "FreezeOthers.Name", "EMeshGroupPaintToolActions::FreezeOthers" },
		{ "GrowCurrent.Name", "EMeshGroupPaintToolActions::GrowCurrent" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "NoAction.Name", "EMeshGroupPaintToolActions::NoAction" },
		{ "ShrinkCurrent.Name", "EMeshGroupPaintToolActions::ShrinkCurrent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMeshGroupPaintToolActions",
		"EMeshGroupPaintToolActions",
		Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions()
	{
		if (!Z_Registration_Info_UEnum_EMeshGroupPaintToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshGroupPaintToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMeshGroupPaintToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshGroupPaintToolActions.InnerSingleton;
	}
	void UMeshGroupPaintToolActionPropertySet::StaticRegisterNativesUMeshGroupPaintToolActionPropertySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshGroupPaintToolActionPropertySet);
	UClass* Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet_NoRegister()
	{
		return UMeshGroupPaintToolActionPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshGroupPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshGroupPaintToolActionPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet_Statics::ClassParams = {
		&UMeshGroupPaintToolActionPropertySet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet()
	{
		if (!Z_Registration_Info_UClass_UMeshGroupPaintToolActionPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshGroupPaintToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshGroupPaintToolActionPropertySet.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshGroupPaintToolActionPropertySet>()
	{
		return UMeshGroupPaintToolActionPropertySet::StaticClass();
	}
	UMeshGroupPaintToolActionPropertySet::UMeshGroupPaintToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshGroupPaintToolActionPropertySet);
	UMeshGroupPaintToolActionPropertySet::~UMeshGroupPaintToolActionPropertySet() {}
	DEFINE_FUNCTION(UMeshGroupPaintToolFreezeActions::execShrinkCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShrinkCurrent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshGroupPaintToolFreezeActions::execGrowCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrowCurrent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshGroupPaintToolFreezeActions::execFloodFillCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FloodFillCurrent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshGroupPaintToolFreezeActions::execClearCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCurrent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshGroupPaintToolFreezeActions::execClearAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshGroupPaintToolFreezeActions::execFreezeOthers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FreezeOthers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshGroupPaintToolFreezeActions::execFreezeCurrent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FreezeCurrent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshGroupPaintToolFreezeActions::execUnfreezeAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnfreezeAll();
		P_NATIVE_END;
	}
	void UMeshGroupPaintToolFreezeActions::StaticRegisterNativesUMeshGroupPaintToolFreezeActions()
	{
		UClass* Class = UMeshGroupPaintToolFreezeActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAll", &UMeshGroupPaintToolFreezeActions::execClearAll },
			{ "ClearCurrent", &UMeshGroupPaintToolFreezeActions::execClearCurrent },
			{ "FloodFillCurrent", &UMeshGroupPaintToolFreezeActions::execFloodFillCurrent },
			{ "FreezeCurrent", &UMeshGroupPaintToolFreezeActions::execFreezeCurrent },
			{ "FreezeOthers", &UMeshGroupPaintToolFreezeActions::execFreezeOthers },
			{ "GrowCurrent", &UMeshGroupPaintToolFreezeActions::execGrowCurrent },
			{ "ShrinkCurrent", &UMeshGroupPaintToolFreezeActions::execShrinkCurrent },
			{ "UnfreezeAll", &UMeshGroupPaintToolFreezeActions::execUnfreezeAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearAll_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Operations" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshGroupPaintToolFreezeActions, nullptr, "ClearAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearCurrent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearCurrent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Operations" },
		{ "DisplayPriority", "11" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshGroupPaintToolFreezeActions, nullptr, "ClearCurrent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FloodFillCurrent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FloodFillCurrent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Operations" },
		{ "DisplayPriority", "12" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FloodFillCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshGroupPaintToolFreezeActions, nullptr, "FloodFillCurrent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FloodFillCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FloodFillCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FloodFillCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FloodFillCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeCurrent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeCurrent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Freezing" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshGroupPaintToolFreezeActions, nullptr, "FreezeCurrent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeOthers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeOthers_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Freezing" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeOthers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshGroupPaintToolFreezeActions, nullptr, "FreezeOthers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeOthers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeOthers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeOthers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeOthers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_GrowCurrent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_GrowCurrent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Operations" },
		{ "DisplayPriority", "20" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_GrowCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshGroupPaintToolFreezeActions, nullptr, "GrowCurrent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_GrowCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_GrowCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_GrowCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_GrowCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ShrinkCurrent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ShrinkCurrent_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Operations" },
		{ "DisplayPriority", "21" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ShrinkCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshGroupPaintToolFreezeActions, nullptr, "ShrinkCurrent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ShrinkCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ShrinkCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ShrinkCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ShrinkCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_UnfreezeAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_UnfreezeAll_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Freezing" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_UnfreezeAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshGroupPaintToolFreezeActions, nullptr, "UnfreezeAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_UnfreezeAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_UnfreezeAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_UnfreezeAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_UnfreezeAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshGroupPaintToolFreezeActions);
	UClass* Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_NoRegister()
	{
		return UMeshGroupPaintToolFreezeActions::StaticClass();
	}
	struct Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearAll, "ClearAll" }, // 3516599536
		{ &Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ClearCurrent, "ClearCurrent" }, // 322176138
		{ &Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FloodFillCurrent, "FloodFillCurrent" }, // 1003117940
		{ &Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeCurrent, "FreezeCurrent" }, // 2792013047
		{ &Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_FreezeOthers, "FreezeOthers" }, // 1512732303
		{ &Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_GrowCurrent, "GrowCurrent" }, // 1490119977
		{ &Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_ShrinkCurrent, "ShrinkCurrent" }, // 3410519352
		{ &Z_Construct_UFunction_UMeshGroupPaintToolFreezeActions_UnfreezeAll, "UnfreezeAll" }, // 1648289041
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MeshGroupPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshGroupPaintToolFreezeActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_Statics::ClassParams = {
		&UMeshGroupPaintToolFreezeActions::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshGroupPaintToolFreezeActions()
	{
		if (!Z_Registration_Info_UClass_UMeshGroupPaintToolFreezeActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshGroupPaintToolFreezeActions.OuterSingleton, Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshGroupPaintToolFreezeActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshGroupPaintToolFreezeActions>()
	{
		return UMeshGroupPaintToolFreezeActions::StaticClass();
	}
	UMeshGroupPaintToolFreezeActions::UMeshGroupPaintToolFreezeActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshGroupPaintToolFreezeActions);
	UMeshGroupPaintToolFreezeActions::~UMeshGroupPaintToolFreezeActions() {}
	void UMeshGroupPaintTool::StaticRegisterNativesUMeshGroupPaintTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshGroupPaintTool);
	UClass* Z_Construct_UClass_UMeshGroupPaintTool_NoRegister()
	{
		return UMeshGroupPaintTool::StaticClass();
	}
	struct Z_Construct_UClass_UMeshGroupPaintTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygroupLayerProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PolygroupLayerProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FilterProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaintBrushOpProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PaintBrushOpProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EraseBrushOpProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EraseBrushOpProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreezeActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FreezeActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyLassoMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PolyLassoMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMeshActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshElementsDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshElementsDisplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshGroupPaintTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSculptToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Element Paint Tool Class\n */" },
		{ "IncludePath", "MeshGroupPaintTool.h" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Mesh Element Paint Tool Class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PolygroupLayerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PolygroupLayerProperties = { "PolygroupLayerProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshGroupPaintTool, PolygroupLayerProperties), Z_Construct_UClass_UPolygroupLayersProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PolygroupLayerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PolygroupLayerProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_FilterProperties_MetaData[] = {
		{ "Comment", "/** Filters on paint brush */" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "Filters on paint brush" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_FilterProperties = { "FilterProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshGroupPaintTool, FilterProperties), Z_Construct_UClass_UGroupPaintBrushFilterProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_FilterProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_FilterProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PaintBrushOpProperties_MetaData[] = {
		{ "Comment", "// This will be of type UGroupPaintBrushOpProps, we keep a ref so we can change active group ID on pick\n" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
		{ "ToolTip", "This will be of type UGroupPaintBrushOpProps, we keep a ref so we can change active group ID on pick" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PaintBrushOpProperties = { "PaintBrushOpProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshGroupPaintTool, PaintBrushOpProperties), Z_Construct_UClass_UGroupPaintBrushOpProps_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PaintBrushOpProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PaintBrushOpProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_EraseBrushOpProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_EraseBrushOpProperties = { "EraseBrushOpProperties", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshGroupPaintTool, EraseBrushOpProperties), Z_Construct_UClass_UGroupEraseBrushOpProps_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_EraseBrushOpProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_EraseBrushOpProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_FreezeActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_FreezeActions = { "FreezeActions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshGroupPaintTool, FreezeActions), Z_Construct_UClass_UMeshGroupPaintToolFreezeActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_FreezeActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_FreezeActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PolyLassoMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PolyLassoMechanic = { "PolyLassoMechanic", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshGroupPaintTool, PolyLassoMechanic), Z_Construct_UClass_UPolyLassoMarqueeMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PolyLassoMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PolyLassoMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PreviewMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PreviewMeshActor = { "PreviewMeshActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshGroupPaintTool, PreviewMeshActor), Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PreviewMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PreviewMeshActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_DynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshGroupPaintTool, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_DynamicMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_DynamicMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_MeshElementsDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/MeshGroupPaintTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_MeshElementsDisplay = { "MeshElementsDisplay", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshGroupPaintTool, MeshElementsDisplay), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_MeshElementsDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_MeshElementsDisplay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshGroupPaintTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PolygroupLayerProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_FilterProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PaintBrushOpProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_EraseBrushOpProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_FreezeActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PolyLassoMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_PreviewMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_DynamicMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshGroupPaintTool_Statics::NewProp_MeshElementsDisplay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshGroupPaintTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshGroupPaintTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshGroupPaintTool_Statics::ClassParams = {
		&UMeshGroupPaintTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshGroupPaintTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshGroupPaintTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshGroupPaintTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshGroupPaintTool()
	{
		if (!Z_Registration_Info_UClass_UMeshGroupPaintTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshGroupPaintTool.OuterSingleton, Z_Construct_UClass_UMeshGroupPaintTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshGroupPaintTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMeshGroupPaintTool>()
	{
		return UMeshGroupPaintTool::StaticClass();
	}
	UMeshGroupPaintTool::UMeshGroupPaintTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshGroupPaintTool);
	UMeshGroupPaintTool::~UMeshGroupPaintTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshGroupPaintTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshGroupPaintTool_h_Statics::EnumInfo[] = {
		{ EMeshGroupPaintInteractionType_StaticEnum, TEXT("EMeshGroupPaintInteractionType"), &Z_Registration_Info_UEnum_EMeshGroupPaintInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1647597090U) },
		{ EMeshGroupPaintBrushType_StaticEnum, TEXT("EMeshGroupPaintBrushType"), &Z_Registration_Info_UEnum_EMeshGroupPaintBrushType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1923438266U) },
		{ EMeshGroupPaintBrushAreaType_StaticEnum, TEXT("EMeshGroupPaintBrushAreaType"), &Z_Registration_Info_UEnum_EMeshGroupPaintBrushAreaType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 417431004U) },
		{ EMeshGroupPaintVisibilityType_StaticEnum, TEXT("EMeshGroupPaintVisibilityType"), &Z_Registration_Info_UEnum_EMeshGroupPaintVisibilityType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1382255015U) },
		{ EMeshGroupPaintToolActions_StaticEnum, TEXT("EMeshGroupPaintToolActions"), &Z_Registration_Info_UEnum_EMeshGroupPaintToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3908341139U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshGroupPaintTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshGroupPaintToolBuilder, UMeshGroupPaintToolBuilder::StaticClass, TEXT("UMeshGroupPaintToolBuilder"), &Z_Registration_Info_UClass_UMeshGroupPaintToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshGroupPaintToolBuilder), 1057847963U) },
		{ Z_Construct_UClass_UGroupPaintBrushFilterProperties, UGroupPaintBrushFilterProperties::StaticClass, TEXT("UGroupPaintBrushFilterProperties"), &Z_Registration_Info_UClass_UGroupPaintBrushFilterProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroupPaintBrushFilterProperties), 311287306U) },
		{ Z_Construct_UClass_UMeshGroupPaintToolActionPropertySet, UMeshGroupPaintToolActionPropertySet::StaticClass, TEXT("UMeshGroupPaintToolActionPropertySet"), &Z_Registration_Info_UClass_UMeshGroupPaintToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshGroupPaintToolActionPropertySet), 60518498U) },
		{ Z_Construct_UClass_UMeshGroupPaintToolFreezeActions, UMeshGroupPaintToolFreezeActions::StaticClass, TEXT("UMeshGroupPaintToolFreezeActions"), &Z_Registration_Info_UClass_UMeshGroupPaintToolFreezeActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshGroupPaintToolFreezeActions), 2242591616U) },
		{ Z_Construct_UClass_UMeshGroupPaintTool, UMeshGroupPaintTool::StaticClass, TEXT("UMeshGroupPaintTool"), &Z_Registration_Info_UClass_UMeshGroupPaintTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshGroupPaintTool), 3194901223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshGroupPaintTool_h_731627075(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshGroupPaintTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshGroupPaintTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshGroupPaintTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MeshGroupPaintTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
