// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RevolveBoundaryTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevolveBoundaryTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveProperties();
	MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshBoundaryToolBase();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryOperatorFactory();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryOperatorFactory_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_URevolveBoundaryToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void URevolveBoundaryToolBuilder::StaticRegisterNativesURevolveBoundaryToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveBoundaryToolBuilder);
	UClass* Z_Construct_UClass_URevolveBoundaryToolBuilder_NoRegister()
	{
		return URevolveBoundaryToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Tool Builder\n" },
		{ "IncludePath", "RevolveBoundaryTool.h" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveBoundaryToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::ClassParams = {
		&URevolveBoundaryToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URevolveBoundaryToolBuilder()
	{
		if (!Z_Registration_Info_UClass_URevolveBoundaryToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveBoundaryToolBuilder.OuterSingleton, Z_Construct_UClass_URevolveBoundaryToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URevolveBoundaryToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveBoundaryToolBuilder>()
	{
		return URevolveBoundaryToolBuilder::StaticClass();
	}
	URevolveBoundaryToolBuilder::URevolveBoundaryToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveBoundaryToolBuilder);
	URevolveBoundaryToolBuilder::~URevolveBoundaryToolBuilder() {}
	void URevolveBoundaryOperatorFactory::StaticRegisterNativesURevolveBoundaryOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveBoundaryOperatorFactory);
	UClass* Z_Construct_UClass_URevolveBoundaryOperatorFactory_NoRegister()
	{
		return URevolveBoundaryOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevolveBoundaryTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RevolveBoundaryTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RevolveBoundaryTool.h" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::NewProp_RevolveBoundaryTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::NewProp_RevolveBoundaryTool = { "RevolveBoundaryTool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveBoundaryOperatorFactory, RevolveBoundaryTool), Z_Construct_UClass_URevolveBoundaryTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::NewProp_RevolveBoundaryTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::NewProp_RevolveBoundaryTool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::NewProp_RevolveBoundaryTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveBoundaryOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::ClassParams = {
		&URevolveBoundaryOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URevolveBoundaryOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_URevolveBoundaryOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveBoundaryOperatorFactory.OuterSingleton, Z_Construct_UClass_URevolveBoundaryOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URevolveBoundaryOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveBoundaryOperatorFactory>()
	{
		return URevolveBoundaryOperatorFactory::StaticClass();
	}
	URevolveBoundaryOperatorFactory::URevolveBoundaryOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveBoundaryOperatorFactory);
	URevolveBoundaryOperatorFactory::~URevolveBoundaryOperatorFactory() {}
	void URevolveBoundaryToolProperties::StaticRegisterNativesURevolveBoundaryToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveBoundaryToolProperties);
	UClass* Z_Construct_UClass_URevolveBoundaryToolProperties_NoRegister()
	{
		return URevolveBoundaryToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_URevolveBoundaryToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CapFillMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapFillMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CapFillMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInputMesh_MetaData[];
#endif
		static void NewProp_bDisplayInputMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInputMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisOrientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URevolveProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RevolveBoundaryTool.h" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed. */" },
		{ "DisplayAfter", "QuadSplitMode" },
		{ "EditCondition", "HeightOffsetPerDegree != 0 || RevolveDegrees != 360" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode = { "CapFillMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveBoundaryToolProperties, CapFillMode), Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode, METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode_MetaData)) }; // 3493575265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** If true, displays the original mesh in addition to the revolved boundary. */" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "If true, displays the original mesh in addition to the revolved boundary." },
	};
#endif
	void Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh_SetBit(void* Obj)
	{
		((URevolveBoundaryToolProperties*)Obj)->bDisplayInputMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh = { "bDisplayInputMesh", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URevolveBoundaryToolProperties), &Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrigin_MetaData[] = {
		{ "Category", "RevolutionAxis" },
		{ "Comment", "/** Sets the revolution axis origin. */" },
		{ "Delta", "5" },
		{ "DisplayName", "Origin" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Sets the revolution axis origin." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrigin = { "AxisOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveBoundaryToolProperties, AxisOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrientation_MetaData[] = {
		{ "Category", "RevolutionAxis" },
		{ "ClampMax", "180000" },
		{ "ClampMin", "-180000" },
		{ "Comment", "/** Sets the revolution axis pitch and yaw. */" },
		{ "DisplayName", "Orientation" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Sets the revolution axis pitch and yaw." },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrientation = { "AxisOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveBoundaryToolProperties, AxisOrientation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrientation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_CapFillMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_bDisplayInputMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::NewProp_AxisOrientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveBoundaryToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::ClassParams = {
		&URevolveBoundaryToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URevolveBoundaryToolProperties()
	{
		if (!Z_Registration_Info_UClass_URevolveBoundaryToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveBoundaryToolProperties.OuterSingleton, Z_Construct_UClass_URevolveBoundaryToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URevolveBoundaryToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveBoundaryToolProperties>()
	{
		return URevolveBoundaryToolProperties::StaticClass();
	}
	URevolveBoundaryToolProperties::URevolveBoundaryToolProperties() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveBoundaryToolProperties);
	URevolveBoundaryToolProperties::~URevolveBoundaryToolProperties() {}
	void URevolveBoundaryTool::StaticRegisterNativesURevolveBoundaryTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveBoundaryTool);
	UClass* Z_Construct_UClass_URevolveBoundaryTool_NoRegister()
	{
		return URevolveBoundaryTool::StaticClass();
	}
	struct Z_Construct_UClass_URevolveBoundaryTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputTypeProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URevolveBoundaryTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshBoundaryToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Tool that revolves the boundary of a mesh around an axis to create a new mesh. Mainly useful for\n * revolving planar meshes. \n */" },
		{ "IncludePath", "RevolveBoundaryTool.h" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Tool that revolves the boundary of a mesh around an axis to create a new mesh. Mainly useful for\nrevolving planar meshes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_OutputTypeProperties_MetaData[] = {
		{ "Comment", "/** Property set for type of output object (StaticMesh, Volume, etc) */" },
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
		{ "ToolTip", "Property set for type of output object (StaticMesh, Volume, etc)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveBoundaryTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_OutputTypeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_OutputTypeProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveBoundaryTool, Settings), Z_Construct_UClass_URevolveBoundaryToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_MaterialProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveBoundaryTool, MaterialProperties), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_MaterialProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_MaterialProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveBoundaryTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_PlaneMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_PlaneMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/RevolveBoundaryTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveBoundaryTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Preview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveBoundaryTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_OutputTypeProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_MaterialProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_PlaneMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveBoundaryTool_Statics::NewProp_Preview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URevolveBoundaryTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveBoundaryTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveBoundaryTool_Statics::ClassParams = {
		&URevolveBoundaryTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URevolveBoundaryTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URevolveBoundaryTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveBoundaryTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URevolveBoundaryTool()
	{
		if (!Z_Registration_Info_UClass_URevolveBoundaryTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveBoundaryTool.OuterSingleton, Z_Construct_UClass_URevolveBoundaryTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URevolveBoundaryTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<URevolveBoundaryTool>()
	{
		return URevolveBoundaryTool::StaticClass();
	}
	URevolveBoundaryTool::URevolveBoundaryTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveBoundaryTool);
	URevolveBoundaryTool::~URevolveBoundaryTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveBoundaryTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveBoundaryTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URevolveBoundaryToolBuilder, URevolveBoundaryToolBuilder::StaticClass, TEXT("URevolveBoundaryToolBuilder"), &Z_Registration_Info_UClass_URevolveBoundaryToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveBoundaryToolBuilder), 3944366558U) },
		{ Z_Construct_UClass_URevolveBoundaryOperatorFactory, URevolveBoundaryOperatorFactory::StaticClass, TEXT("URevolveBoundaryOperatorFactory"), &Z_Registration_Info_UClass_URevolveBoundaryOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveBoundaryOperatorFactory), 2308934103U) },
		{ Z_Construct_UClass_URevolveBoundaryToolProperties, URevolveBoundaryToolProperties::StaticClass, TEXT("URevolveBoundaryToolProperties"), &Z_Registration_Info_UClass_URevolveBoundaryToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveBoundaryToolProperties), 1059458370U) },
		{ Z_Construct_UClass_URevolveBoundaryTool, URevolveBoundaryTool::StaticClass, TEXT("URevolveBoundaryTool"), &Z_Registration_Info_UClass_URevolveBoundaryTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveBoundaryTool), 1504290344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveBoundaryTool_h_1009162158(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveBoundaryTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveBoundaryTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
