// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlaneCutTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaneCutTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAcceptOutputProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UAcceptOutputProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutOperatorFactory();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutOperatorFactory_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UPlaneCutToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UPlaneCutToolBuilder::StaticRegisterNativesUPlaneCutToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneCutToolBuilder);
	UClass* Z_Construct_UClass_UPlaneCutToolBuilder_NoRegister()
	{
		return UPlaneCutToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPlaneCutToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaneCutToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "PlaneCutTool.h" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaneCutToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneCutToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneCutToolBuilder_Statics::ClassParams = {
		&UPlaneCutToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlaneCutToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaneCutToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPlaneCutToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneCutToolBuilder.OuterSingleton, Z_Construct_UClass_UPlaneCutToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaneCutToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPlaneCutToolBuilder>()
	{
		return UPlaneCutToolBuilder::StaticClass();
	}
	UPlaneCutToolBuilder::UPlaneCutToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneCutToolBuilder);
	UPlaneCutToolBuilder::~UPlaneCutToolBuilder() {}
	void UAcceptOutputProperties::StaticRegisterNativesUAcceptOutputProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAcceptOutputProperties);
	UClass* Z_Construct_UClass_UAcceptOutputProperties_NoRegister()
	{
		return UAcceptOutputProperties::StaticClass();
	}
	struct Z_Construct_UClass_UAcceptOutputProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSeparatedPiecesAsNewMeshAssets_MetaData[];
#endif
		static void NewProp_bExportSeparatedPiecesAsNewMeshAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSeparatedPiecesAsNewMeshAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAcceptOutputProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAcceptOutputProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Properties controlling how changes are baked out to static meshes on tool accept\n*/" },
		{ "IncludePath", "PlaneCutTool.h" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "Properties controlling how changes are baked out to static meshes on tool accept" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAcceptOutputProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets_MetaData[] = {
		{ "Category", "ToolOutputOptions" },
		{ "Comment", "/** If true, meshes cut into multiple pieces will be saved as separate assets on 'accept'. */" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If true, meshes cut into multiple pieces will be saved as separate assets on 'accept'." },
	};
#endif
	void Z_Construct_UClass_UAcceptOutputProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets_SetBit(void* Obj)
	{
		((UAcceptOutputProperties*)Obj)->bExportSeparatedPiecesAsNewMeshAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAcceptOutputProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets = { "bExportSeparatedPiecesAsNewMeshAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAcceptOutputProperties), &Z_Construct_UClass_UAcceptOutputProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAcceptOutputProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAcceptOutputProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAcceptOutputProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAcceptOutputProperties_Statics::NewProp_bExportSeparatedPiecesAsNewMeshAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAcceptOutputProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAcceptOutputProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAcceptOutputProperties_Statics::ClassParams = {
		&UAcceptOutputProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAcceptOutputProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAcceptOutputProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAcceptOutputProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAcceptOutputProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAcceptOutputProperties()
	{
		if (!Z_Registration_Info_UClass_UAcceptOutputProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAcceptOutputProperties.OuterSingleton, Z_Construct_UClass_UAcceptOutputProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAcceptOutputProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UAcceptOutputProperties>()
	{
		return UAcceptOutputProperties::StaticClass();
	}
	UAcceptOutputProperties::UAcceptOutputProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAcceptOutputProperties);
	UAcceptOutputProperties::~UAcceptOutputProperties() {}
	void UPlaneCutToolProperties::StaticRegisterNativesUPlaneCutToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneCutToolProperties);
	UClass* Z_Construct_UClass_UPlaneCutToolProperties_NoRegister()
	{
		return UPlaneCutToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UPlaneCutToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepBothHalves_MetaData[];
#endif
		static void NewProp_bKeepBothHalves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepBothHalves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingBetweenHalves_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpacingBetweenHalves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreview_MetaData[];
#endif
		static void NewProp_bShowPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillCutHole_MetaData[];
#endif
		static void NewProp_bFillCutHole_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillCutHole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillSpans_MetaData[];
#endif
		static void NewProp_bFillSpans_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillSpans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaneCutToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the plane cut operation\n */" },
		{ "IncludePath", "PlaneCutTool.h" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "Standard properties of the plane cut operation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, both halves of the cut are computed */" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If true, both halves of the cut are computed" },
	};
#endif
	void Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves_SetBit(void* Obj)
	{
		((UPlaneCutToolProperties*)Obj)->bKeepBothHalves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves = { "bKeepBothHalves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlaneCutToolProperties), &Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_SpacingBetweenHalves_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** If keeping both halves, separate the two pieces by this amount */" },
		{ "Delta", "0.500000" },
		{ "EditCondition", "bKeepBothHalves == true" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If keeping both halves, separate the two pieces by this amount" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_SpacingBetweenHalves = { "SpacingBetweenHalves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneCutToolProperties, SpacingBetweenHalves), METADATA_PARAMS(Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_SpacingBetweenHalves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_SpacingBetweenHalves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif
	void Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview_SetBit(void* Obj)
	{
		((UPlaneCutToolProperties*)Obj)->bShowPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview = { "bShowPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlaneCutToolProperties), &Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, the cut surface is filled with simple planar hole fill surface(s) */" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If true, the cut surface is filled with simple planar hole fill surface(s)" },
	};
#endif
	void Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole_SetBit(void* Obj)
	{
		((UPlaneCutToolProperties*)Obj)->bFillCutHole = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole = { "bFillCutHole", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlaneCutToolProperties), &Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, will attempt to fill cut holes even if they're ill-formed (e.g. because they connect to pre-existing holes in the geometry) */" },
		{ "EditCondition", "bFillCutHole" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "If true, will attempt to fill cut holes even if they're ill-formed (e.g. because they connect to pre-existing holes in the geometry)" },
	};
#endif
	void Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans_SetBit(void* Obj)
	{
		((UPlaneCutToolProperties*)Obj)->bFillSpans = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans = { "bFillSpans", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlaneCutToolProperties), &Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneCutToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bKeepBothHalves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_SpacingBetweenHalves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bShowPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillCutHole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutToolProperties_Statics::NewProp_bFillSpans,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaneCutToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneCutToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneCutToolProperties_Statics::ClassParams = {
		&UPlaneCutToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlaneCutToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaneCutToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaneCutToolProperties()
	{
		if (!Z_Registration_Info_UClass_UPlaneCutToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneCutToolProperties.OuterSingleton, Z_Construct_UClass_UPlaneCutToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaneCutToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPlaneCutToolProperties>()
	{
		return UPlaneCutToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneCutToolProperties);
	UPlaneCutToolProperties::~UPlaneCutToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlaneCutToolActions;
	static UEnum* EPlaneCutToolActions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlaneCutToolActions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlaneCutToolActions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EPlaneCutToolActions"));
		}
		return Z_Registration_Info_UEnum_EPlaneCutToolActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EPlaneCutToolActions>()
	{
		return EPlaneCutToolActions_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::Enumerators[] = {
		{ "EPlaneCutToolActions::NoAction", (int64)EPlaneCutToolActions::NoAction },
		{ "EPlaneCutToolActions::Cut", (int64)EPlaneCutToolActions::Cut },
		{ "EPlaneCutToolActions::FlipPlane", (int64)EPlaneCutToolActions::FlipPlane },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::Enum_MetaDataParams[] = {
		{ "Cut.Name", "EPlaneCutToolActions::Cut" },
		{ "FlipPlane.Name", "EPlaneCutToolActions::FlipPlane" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "NoAction.Name", "EPlaneCutToolActions::NoAction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EPlaneCutToolActions",
		"EPlaneCutToolActions",
		Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions()
	{
		if (!Z_Registration_Info_UEnum_EPlaneCutToolActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlaneCutToolActions.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EPlaneCutToolActions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlaneCutToolActions.InnerSingleton;
	}
	void UPlaneCutOperatorFactory::StaticRegisterNativesUPlaneCutOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneCutOperatorFactory);
	UClass* Z_Construct_UClass_UPlaneCutOperatorFactory_NoRegister()
	{
		return UPlaneCutOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPlaneCutOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CutTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlaneCutTool.h" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::NewProp_CutTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::NewProp_CutTool = { "CutTool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneCutOperatorFactory, CutTool), Z_Construct_UClass_UPlaneCutTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::NewProp_CutTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::NewProp_CutTool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::NewProp_CutTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneCutOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::ClassParams = {
		&UPlaneCutOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaneCutOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_UPlaneCutOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneCutOperatorFactory.OuterSingleton, Z_Construct_UClass_UPlaneCutOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaneCutOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPlaneCutOperatorFactory>()
	{
		return UPlaneCutOperatorFactory::StaticClass();
	}
	UPlaneCutOperatorFactory::UPlaneCutOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneCutOperatorFactory);
	UPlaneCutOperatorFactory::~UPlaneCutOperatorFactory() {}
	DEFINE_FUNCTION(UPlaneCutTool::execFlipPlane)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlipPlane();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlaneCutTool::execCut)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cut();
		P_NATIVE_END;
	}
	void UPlaneCutTool::StaticRegisterNativesUPlaneCutTool()
	{
		UClass* Class = UPlaneCutTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cut", &UPlaneCutTool::execCut },
			{ "FlipPlane", &UPlaneCutTool::execFlipPlane },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlaneCutTool_Cut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlaneCutTool_Cut_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Cut with the current plane without exiting the tool (Hotkey: T)*/" },
		{ "DisplayName", "Cut" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "Cut with the current plane without exiting the tool (Hotkey: T)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaneCutTool_Cut_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlaneCutTool, nullptr, "Cut", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlaneCutTool_Cut_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaneCutTool_Cut_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlaneCutTool_Cut()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlaneCutTool_Cut_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Flip the cutting plane (Hotkey: R) */" },
		{ "DisplayName", "Flip Plane" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "Flip the cutting plane (Hotkey: R)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlaneCutTool, nullptr, "FlipPlane", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlaneCutTool_FlipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlaneCutTool_FlipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaneCutTool);
	UClass* Z_Construct_UClass_UPlaneCutTool_NoRegister()
	{
		return UPlaneCutTool::StaticClass();
	}
	struct Z_Construct_UClass_UPlaneCutTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BasicProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AcceptProperties;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Previews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Previews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Previews;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshesToCut_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshesToCut_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshesToCut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlaneCutTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlaneCutTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlaneCutTool_Cut, "Cut" }, // 171107708
		{ &Z_Construct_UFunction_UPlaneCutTool_FlipPlane, "FlipPlane" }, // 293387933
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Plane Cutting Tool\n */" },
		{ "IncludePath", "PlaneCutTool.h" },
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
		{ "ToolTip", "Simple Mesh Plane Cutting Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneCutTool, BasicProperties), Z_Construct_UClass_UPlaneCutToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_BasicProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_AcceptProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_AcceptProperties = { "AcceptProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneCutTool, AcceptProperties), Z_Construct_UClass_UAcceptOutputProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_AcceptProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_AcceptProperties_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews_Inner = { "Previews", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews = { "Previews", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneCutTool, Previews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut_Inner = { "MeshesToCut", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut = { "MeshesToCut", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneCutTool, MeshesToCut), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlaneCutTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlaneCutTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_PlaneMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_PlaneMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaneCutTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_BasicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_AcceptProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_Previews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_MeshesToCut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaneCutTool_Statics::NewProp_PlaneMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlaneCutTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaneCutTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaneCutTool_Statics::ClassParams = {
		&UPlaneCutTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlaneCutTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlaneCutTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlaneCutTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlaneCutTool()
	{
		if (!Z_Registration_Info_UClass_UPlaneCutTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaneCutTool.OuterSingleton, Z_Construct_UClass_UPlaneCutTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlaneCutTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UPlaneCutTool>()
	{
		return UPlaneCutTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaneCutTool);
	UPlaneCutTool::~UPlaneCutTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics::EnumInfo[] = {
		{ EPlaneCutToolActions_StaticEnum, TEXT("EPlaneCutToolActions"), &Z_Registration_Info_UEnum_EPlaneCutToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 845510664U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlaneCutToolBuilder, UPlaneCutToolBuilder::StaticClass, TEXT("UPlaneCutToolBuilder"), &Z_Registration_Info_UClass_UPlaneCutToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneCutToolBuilder), 4064947312U) },
		{ Z_Construct_UClass_UAcceptOutputProperties, UAcceptOutputProperties::StaticClass, TEXT("UAcceptOutputProperties"), &Z_Registration_Info_UClass_UAcceptOutputProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAcceptOutputProperties), 3847630016U) },
		{ Z_Construct_UClass_UPlaneCutToolProperties, UPlaneCutToolProperties::StaticClass, TEXT("UPlaneCutToolProperties"), &Z_Registration_Info_UClass_UPlaneCutToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneCutToolProperties), 1761518723U) },
		{ Z_Construct_UClass_UPlaneCutOperatorFactory, UPlaneCutOperatorFactory::StaticClass, TEXT("UPlaneCutOperatorFactory"), &Z_Registration_Info_UClass_UPlaneCutOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneCutOperatorFactory), 2581442774U) },
		{ Z_Construct_UClass_UPlaneCutTool, UPlaneCutTool::StaticClass, TEXT("UPlaneCutTool"), &Z_Registration_Info_UClass_UPlaneCutTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaneCutTool), 2663416644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_3980807074(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_PlaneCutTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
