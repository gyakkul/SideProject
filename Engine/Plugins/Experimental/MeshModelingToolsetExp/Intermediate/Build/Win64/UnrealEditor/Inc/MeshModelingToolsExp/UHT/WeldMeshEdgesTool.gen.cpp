// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WeldMeshEdgesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeldMeshEdgesTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesOperatorFactory();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshElementsVisualizer_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UWeldMeshEdgesToolBuilder::StaticRegisterNativesUWeldMeshEdgesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeldMeshEdgesToolBuilder);
	UClass* Z_Construct_UClass_UWeldMeshEdgesToolBuilder_NoRegister()
	{
		return UWeldMeshEdgesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "WeldMeshEdgesTool.h" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeldMeshEdgesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::ClassParams = {
		&UWeldMeshEdgesToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeldMeshEdgesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.OuterSingleton, Z_Construct_UClass_UWeldMeshEdgesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UWeldMeshEdgesToolBuilder>()
	{
		return UWeldMeshEdgesToolBuilder::StaticClass();
	}
	UWeldMeshEdgesToolBuilder::UWeldMeshEdgesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeldMeshEdgesToolBuilder);
	UWeldMeshEdgesToolBuilder::~UWeldMeshEdgesToolBuilder() {}
	void UWeldMeshEdgesToolProperties::StaticRegisterNativesUWeldMeshEdgesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeldMeshEdgesToolProperties);
	UClass* Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister()
	{
		return UWeldMeshEdgesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyUnique_MetaData[];
#endif
		static void NewProp_bOnlyUnique_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyUnique;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResolveTJunctions_MetaData[];
#endif
		static void NewProp_bResolveTJunctions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResolveTJunctions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialEdges_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InitialEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemainingEdges_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingEdges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeldMeshEdgesTool.h" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000.0" },
		{ "ClampMin", "0.00000001" },
		{ "Comment", "/** Edges are considered matching if both pairs of endpoint vertices are closer than this distance */" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Edges are considered matching if both pairs of endpoint vertices are closer than this distance" },
		{ "UIMax", "0.01" },
		{ "UIMin", "0.000001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_Tolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Only merge unambiguous pairs that have unique duplicate-edge matches */" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Only merge unambiguous pairs that have unique duplicate-edge matches" },
	};
#endif
	void Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique_SetBit(void* Obj)
	{
		((UWeldMeshEdgesToolProperties*)Obj)->bOnlyUnique = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique = { "bOnlyUnique", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWeldMeshEdgesToolProperties), &Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If enabled, after an initial attempt at Welding, attempt to resolve remaining open edges in T-junction configurations via edge splits, and then retry Weld */" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "If enabled, after an initial attempt at Welding, attempt to resolve remaining open edges in T-junction configurations via edge splits, and then retry Weld" },
	};
#endif
	void Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions_SetBit(void* Obj)
	{
		((UWeldMeshEdgesToolProperties*)Obj)->bResolveTJunctions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions = { "bResolveTJunctions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWeldMeshEdgesToolProperties), &Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_InitialEdges_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Initial number of open boundary edges */" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Initial number of open boundary edges" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_InitialEdges = { "InitialEdges", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, InitialEdges), METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_InitialEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_InitialEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_RemainingEdges_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Number of remaining open boundary edges */" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Number of remaining open boundary edges" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_RemainingEdges = { "RemainingEdges", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeldMeshEdgesToolProperties, RemainingEdges), METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_RemainingEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_RemainingEdges_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bOnlyUnique,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_bResolveTJunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_InitialEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::NewProp_RemainingEdges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeldMeshEdgesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::ClassParams = {
		&UWeldMeshEdgesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeldMeshEdgesToolProperties()
	{
		if (!Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.OuterSingleton, Z_Construct_UClass_UWeldMeshEdgesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UWeldMeshEdgesToolProperties>()
	{
		return UWeldMeshEdgesToolProperties::StaticClass();
	}
	UWeldMeshEdgesToolProperties::UWeldMeshEdgesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeldMeshEdgesToolProperties);
	UWeldMeshEdgesToolProperties::~UWeldMeshEdgesToolProperties() {}
	void UWeldMeshEdgesOperatorFactory::StaticRegisterNativesUWeldMeshEdgesOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeldMeshEdgesOperatorFactory);
	UClass* Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister()
	{
		return UWeldMeshEdgesOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeldMeshEdgesTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeldMeshEdgesTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeldMeshEdgesTool.h" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::NewProp_WeldMeshEdgesTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::NewProp_WeldMeshEdgesTool = { "WeldMeshEdgesTool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeldMeshEdgesOperatorFactory, WeldMeshEdgesTool), Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::NewProp_WeldMeshEdgesTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::NewProp_WeldMeshEdgesTool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::NewProp_WeldMeshEdgesTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeldMeshEdgesOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::ClassParams = {
		&UWeldMeshEdgesOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeldMeshEdgesOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.OuterSingleton, Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UWeldMeshEdgesOperatorFactory>()
	{
		return UWeldMeshEdgesOperatorFactory::StaticClass();
	}
	UWeldMeshEdgesOperatorFactory::UWeldMeshEdgesOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeldMeshEdgesOperatorFactory);
	UWeldMeshEdgesOperatorFactory::~UWeldMeshEdgesOperatorFactory() {}
	void UWeldMeshEdgesTool::StaticRegisterNativesUWeldMeshEdgesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWeldMeshEdgesTool);
	UClass* Z_Construct_UClass_UWeldMeshEdgesTool_NoRegister()
	{
		return UWeldMeshEdgesTool::StaticClass();
	}
	struct Z_Construct_UClass_UWeldMeshEdgesTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewCompute_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewCompute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshElementsDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshElementsDisplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperatorFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OperatorFactory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeldMeshEdgesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mesh Weld Edges Tool\n */" },
		{ "IncludePath", "WeldMeshEdgesTool.h" },
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
		{ "ToolTip", "Mesh Weld Edges Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeldMeshEdgesTool, Settings), Z_Construct_UClass_UWeldMeshEdgesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_PreviewCompute_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_PreviewCompute = { "PreviewCompute", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeldMeshEdgesTool, PreviewCompute), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_PreviewCompute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_PreviewCompute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_MeshElementsDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_MeshElementsDisplay = { "MeshElementsDisplay", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeldMeshEdgesTool, MeshElementsDisplay), Z_Construct_UClass_UMeshElementsVisualizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_MeshElementsDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_MeshElementsDisplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_OperatorFactory_MetaData[] = {
		{ "ModuleRelativePath", "Public/WeldMeshEdgesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_OperatorFactory = { "OperatorFactory", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWeldMeshEdgesTool, OperatorFactory), Z_Construct_UClass_UWeldMeshEdgesOperatorFactory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_OperatorFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_OperatorFactory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeldMeshEdgesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_PreviewCompute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_MeshElementsDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeldMeshEdgesTool_Statics::NewProp_OperatorFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeldMeshEdgesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeldMeshEdgesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWeldMeshEdgesTool_Statics::ClassParams = {
		&UWeldMeshEdgesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWeldMeshEdgesTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeldMeshEdgesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeldMeshEdgesTool()
	{
		if (!Z_Registration_Info_UClass_UWeldMeshEdgesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWeldMeshEdgesTool.OuterSingleton, Z_Construct_UClass_UWeldMeshEdgesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWeldMeshEdgesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UWeldMeshEdgesTool>()
	{
		return UWeldMeshEdgesTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeldMeshEdgesTool);
	UWeldMeshEdgesTool::~UWeldMeshEdgesTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWeldMeshEdgesToolBuilder, UWeldMeshEdgesToolBuilder::StaticClass, TEXT("UWeldMeshEdgesToolBuilder"), &Z_Registration_Info_UClass_UWeldMeshEdgesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeldMeshEdgesToolBuilder), 4282742785U) },
		{ Z_Construct_UClass_UWeldMeshEdgesToolProperties, UWeldMeshEdgesToolProperties::StaticClass, TEXT("UWeldMeshEdgesToolProperties"), &Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeldMeshEdgesToolProperties), 3066602393U) },
		{ Z_Construct_UClass_UWeldMeshEdgesOperatorFactory, UWeldMeshEdgesOperatorFactory::StaticClass, TEXT("UWeldMeshEdgesOperatorFactory"), &Z_Registration_Info_UClass_UWeldMeshEdgesOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeldMeshEdgesOperatorFactory), 2448052574U) },
		{ Z_Construct_UClass_UWeldMeshEdgesTool, UWeldMeshEdgesTool::StaticClass, TEXT("UWeldMeshEdgesTool"), &Z_Registration_Info_UClass_UWeldMeshEdgesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWeldMeshEdgesTool), 630719077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_2269605436(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_WeldMeshEdgesTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
