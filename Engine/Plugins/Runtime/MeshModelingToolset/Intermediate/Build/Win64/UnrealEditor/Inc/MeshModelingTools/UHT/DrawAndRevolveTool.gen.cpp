// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrawAndRevolveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawAndRevolveTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawAndRevolveTool();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawAndRevolveTool_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawAndRevolveToolBuilder();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDrawAndRevolveToolBuilder_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveOperatorFactory();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveOperatorFactory_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveToolProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URevolveToolProperties_NoRegister();
	MESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UDrawAndRevolveToolBuilder::StaticRegisterNativesUDrawAndRevolveToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawAndRevolveToolBuilder);
	UClass* Z_Construct_UClass_UDrawAndRevolveToolBuilder_NoRegister()
	{
		return UDrawAndRevolveToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DrawAndRevolveTool.h" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawAndRevolveToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::ClassParams = {
		&UDrawAndRevolveToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawAndRevolveToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.OuterSingleton, Z_Construct_UClass_UDrawAndRevolveToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UDrawAndRevolveToolBuilder>()
	{
		return UDrawAndRevolveToolBuilder::StaticClass();
	}
	UDrawAndRevolveToolBuilder::UDrawAndRevolveToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawAndRevolveToolBuilder);
	UDrawAndRevolveToolBuilder::~UDrawAndRevolveToolBuilder() {}
	void URevolveToolProperties::StaticRegisterNativesURevolveToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveToolProperties);
	UClass* Z_Construct_UClass_URevolveToolProperties_NoRegister()
	{
		return URevolveToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_URevolveToolProperties_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosePathToAxis_MetaData[];
#endif
		static void NewProp_bClosePathToAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosePathToAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawPlaneOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawPlaneOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawPlaneOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawPlaneOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSnapping_MetaData[];
#endif
		static void NewProp_bEnableSnapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSnapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowedToEditDrawPlane_MetaData[];
#endif
		static void NewProp_bAllowedToEditDrawPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowedToEditDrawPlane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URevolveToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URevolveProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DrawAndRevolveTool.h" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed. */" },
		{ "DisplayAfter", "QuadSplitMode" },
		{ "EditCondition", "HeightOffsetPerDegree != 0 || RevolveDegrees != 360" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Determines how end caps are created. This is not relevant if the end caps are not visible or if the path is not closed." },
		{ "ValidEnumValues", "None, CenterFan, Delaunay" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode = { "CapFillMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveToolProperties, CapFillMode), Z_Construct_UEnum_MeshModelingTools_ERevolvePropertiesCapFillMode, METADATA_PARAMS(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode_MetaData)) }; // 3493575265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis_MetaData[] = {
		{ "Category", "Revolve" },
		{ "Comment", "/** Connect the ends of an open path to the axis to add caps to the top and bottom of the revolved result.\n\x09  * This is not relevant for paths that are already closed. */" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Connect the ends of an open path to the axis to add caps to the top and bottom of the revolved result.\nThis is not relevant for paths that are already closed." },
	};
#endif
	void Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis_SetBit(void* Obj)
	{
		((URevolveToolProperties*)Obj)->bClosePathToAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis = { "bClosePathToAxis", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URevolveToolProperties), &Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrigin_MetaData[] = {
		{ "Category", "DrawPlane" },
		{ "Comment", "/** Sets the draw plane origin. The revolution axis is the X axis in the plane. */" },
		{ "Delta", "5" },
		{ "DisplayName", "Origin" },
		{ "EditCondition", "bAllowedToEditDrawPlane" },
		{ "HideEditConditionToggle", "" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Sets the draw plane origin. The revolution axis is the X axis in the plane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrigin = { "DrawPlaneOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveToolProperties, DrawPlaneOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrientation_MetaData[] = {
		{ "Category", "DrawPlane" },
		{ "ClampMax", "180000" },
		{ "ClampMin", "-180000" },
		{ "Comment", "/** Sets the draw plane orientation. The revolution axis is the X axis in the plane. */" },
		{ "DisplayName", "Orientation" },
		{ "EditCondition", "bAllowedToEditDrawPlane" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Sets the draw plane orientation. The revolution axis is the X axis in the plane." },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrientation = { "DrawPlaneOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveToolProperties, DrawPlaneOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enables snapping while editing the path. */" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Enables snapping while editing the path." },
	};
#endif
	void Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping_SetBit(void* Obj)
	{
		((URevolveToolProperties*)Obj)->bEnableSnapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping = { "bEnableSnapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URevolveToolProperties), &Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane_MetaData[] = {
		{ "Comment", "// Not user visible- used to disallow draw plane modification.\n" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Not user visible- used to disallow draw plane modification." },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane_SetBit(void* Obj)
	{
		((URevolveToolProperties*)Obj)->bAllowedToEditDrawPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane = { "bAllowedToEditDrawPlane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URevolveToolProperties), &Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_CapFillMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bClosePathToAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_DrawPlaneOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bEnableSnapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveToolProperties_Statics::NewProp_bAllowedToEditDrawPlane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URevolveToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveToolProperties_Statics::ClassParams = {
		&URevolveToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URevolveToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URevolveToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URevolveToolProperties()
	{
		if (!Z_Registration_Info_UClass_URevolveToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveToolProperties.OuterSingleton, Z_Construct_UClass_URevolveToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URevolveToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<URevolveToolProperties>()
	{
		return URevolveToolProperties::StaticClass();
	}
	URevolveToolProperties::URevolveToolProperties() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveToolProperties);
	URevolveToolProperties::~URevolveToolProperties() {}
	void URevolveOperatorFactory::StaticRegisterNativesURevolveOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URevolveOperatorFactory);
	UClass* Z_Construct_UClass_URevolveOperatorFactory_NoRegister()
	{
		return URevolveOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_URevolveOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RevolveTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RevolveTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URevolveOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DrawAndRevolveTool.h" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URevolveOperatorFactory_Statics::NewProp_RevolveTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URevolveOperatorFactory_Statics::NewProp_RevolveTool = { "RevolveTool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URevolveOperatorFactory, RevolveTool), Z_Construct_UClass_UDrawAndRevolveTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URevolveOperatorFactory_Statics::NewProp_RevolveTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveOperatorFactory_Statics::NewProp_RevolveTool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URevolveOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URevolveOperatorFactory_Statics::NewProp_RevolveTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URevolveOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URevolveOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URevolveOperatorFactory_Statics::ClassParams = {
		&URevolveOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URevolveOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URevolveOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URevolveOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URevolveOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URevolveOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_URevolveOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URevolveOperatorFactory.OuterSingleton, Z_Construct_UClass_URevolveOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URevolveOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<URevolveOperatorFactory>()
	{
		return URevolveOperatorFactory::StaticClass();
	}
	URevolveOperatorFactory::URevolveOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URevolveOperatorFactory);
	URevolveOperatorFactory::~URevolveOperatorFactory() {}
	void UDrawAndRevolveTool::StaticRegisterNativesUDrawAndRevolveTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawAndRevolveTool);
	UClass* Z_Construct_UClass_UDrawAndRevolveTool_NoRegister()
	{
		return UDrawAndRevolveTool::StaticClass();
	}
	struct Z_Construct_UClass_UDrawAndRevolveTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlPointsMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlPointsMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneMechanic;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawAndRevolveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawAndRevolveTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Draws a profile curve and revolves it around an axis. */" },
		{ "IncludePath", "DrawAndRevolveTool.h" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Draws a profile curve and revolves it around an axis." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_ControlPointsMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_ControlPointsMechanic = { "ControlPointsMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawAndRevolveTool, ControlPointsMechanic), Z_Construct_UClass_UCurveControlPointsMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_ControlPointsMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_ControlPointsMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawAndRevolveTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_PlaneMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_PlaneMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_OutputTypeProperties_MetaData[] = {
		{ "Comment", "/** Property set for type of output object (StaticMesh, Volume, etc) */" },
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
		{ "ToolTip", "Property set for type of output object (StaticMesh, Volume, etc)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawAndRevolveTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_OutputTypeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_OutputTypeProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawAndRevolveTool, Settings), Z_Construct_UClass_URevolveToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_MaterialProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawAndRevolveTool, MaterialProperties), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_MaterialProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_MaterialProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawAndRevolveTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawAndRevolveTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Preview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawAndRevolveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_ControlPointsMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_PlaneMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_OutputTypeProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_MaterialProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawAndRevolveTool_Statics::NewProp_Preview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawAndRevolveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawAndRevolveTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawAndRevolveTool_Statics::ClassParams = {
		&UDrawAndRevolveTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDrawAndRevolveTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawAndRevolveTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawAndRevolveTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawAndRevolveTool()
	{
		if (!Z_Registration_Info_UClass_UDrawAndRevolveTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawAndRevolveTool.OuterSingleton, Z_Construct_UClass_UDrawAndRevolveTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawAndRevolveTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UDrawAndRevolveTool>()
	{
		return UDrawAndRevolveTool::StaticClass();
	}
	UDrawAndRevolveTool::UDrawAndRevolveTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawAndRevolveTool);
	UDrawAndRevolveTool::~UDrawAndRevolveTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawAndRevolveTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawAndRevolveTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDrawAndRevolveToolBuilder, UDrawAndRevolveToolBuilder::StaticClass, TEXT("UDrawAndRevolveToolBuilder"), &Z_Registration_Info_UClass_UDrawAndRevolveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawAndRevolveToolBuilder), 3006794563U) },
		{ Z_Construct_UClass_URevolveToolProperties, URevolveToolProperties::StaticClass, TEXT("URevolveToolProperties"), &Z_Registration_Info_UClass_URevolveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveToolProperties), 1529884562U) },
		{ Z_Construct_UClass_URevolveOperatorFactory, URevolveOperatorFactory::StaticClass, TEXT("URevolveOperatorFactory"), &Z_Registration_Info_UClass_URevolveOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URevolveOperatorFactory), 3395355118U) },
		{ Z_Construct_UClass_UDrawAndRevolveTool, UDrawAndRevolveTool::StaticClass, TEXT("UDrawAndRevolveTool"), &Z_Registration_Info_UClass_UDrawAndRevolveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawAndRevolveTool), 2906981897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawAndRevolveTool_h_1501688521(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawAndRevolveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_DrawAndRevolveTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
