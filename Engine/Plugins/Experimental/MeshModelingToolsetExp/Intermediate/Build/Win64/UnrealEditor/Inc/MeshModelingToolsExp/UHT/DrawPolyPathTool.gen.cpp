// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DrawPolyPathTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawPolyPathTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshSurfacePointToolBuilder();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDrawPolyPathExtrudeProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDrawPolyPathExtrudeProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDrawPolyPathProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDrawPolyPathProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDrawPolyPathTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDrawPolyPathTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDrawPolyPathToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDrawPolyPathToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UDrawPolyPathToolBuilder::StaticRegisterNativesUDrawPolyPathToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPolyPathToolBuilder);
	UClass* Z_Construct_UClass_UDrawPolyPathToolBuilder_NoRegister()
	{
		return UDrawPolyPathToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UDrawPolyPathToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawPolyPathToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshSurfacePointToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder\n */" },
		{ "IncludePath", "DrawPolyPathTool.h" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "ToolBuilder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawPolyPathToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPolyPathToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPolyPathToolBuilder_Statics::ClassParams = {
		&UDrawPolyPathToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawPolyPathToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UDrawPolyPathToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPolyPathToolBuilder.OuterSingleton, Z_Construct_UClass_UDrawPolyPathToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawPolyPathToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDrawPolyPathToolBuilder>()
	{
		return UDrawPolyPathToolBuilder::StaticClass();
	}
	UDrawPolyPathToolBuilder::UDrawPolyPathToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPolyPathToolBuilder);
	UDrawPolyPathToolBuilder::~UDrawPolyPathToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrawPolyPathWidthMode;
	static UEnum* EDrawPolyPathWidthMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDrawPolyPathWidthMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDrawPolyPathWidthMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDrawPolyPathWidthMode"));
		}
		return Z_Registration_Info_UEnum_EDrawPolyPathWidthMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDrawPolyPathWidthMode>()
	{
		return EDrawPolyPathWidthMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode_Statics::Enumerators[] = {
		{ "EDrawPolyPathWidthMode::Fixed", (int64)EDrawPolyPathWidthMode::Fixed },
		{ "EDrawPolyPathWidthMode::Interactive", (int64)EDrawPolyPathWidthMode::Interactive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode_Statics::Enum_MetaDataParams[] = {
		{ "Fixed.Comment", "/** Fixed width along the drawn path determined by the Width property */" },
		{ "Fixed.Name", "EDrawPolyPathWidthMode::Fixed" },
		{ "Fixed.ToolTip", "Fixed width along the drawn path determined by the Width property" },
		{ "Interactive.Comment", "/** Extrude drawn path to height set via additional mouse input after finishing the path */" },
		{ "Interactive.Name", "EDrawPolyPathWidthMode::Interactive" },
		{ "Interactive.ToolTip", "Extrude drawn path to height set via additional mouse input after finishing the path" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EDrawPolyPathWidthMode",
		"EDrawPolyPathWidthMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode()
	{
		if (!Z_Registration_Info_UEnum_EDrawPolyPathWidthMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrawPolyPathWidthMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDrawPolyPathWidthMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrawPolyPathRadiusMode;
	static UEnum* EDrawPolyPathRadiusMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDrawPolyPathRadiusMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDrawPolyPathRadiusMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDrawPolyPathRadiusMode"));
		}
		return Z_Registration_Info_UEnum_EDrawPolyPathRadiusMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDrawPolyPathRadiusMode>()
	{
		return EDrawPolyPathRadiusMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode_Statics::Enumerators[] = {
		{ "EDrawPolyPathRadiusMode::Fixed", (int64)EDrawPolyPathRadiusMode::Fixed },
		{ "EDrawPolyPathRadiusMode::Interactive", (int64)EDrawPolyPathRadiusMode::Interactive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode_Statics::Enum_MetaDataParams[] = {
		{ "Fixed.Comment", "/** Fixed radius determined by the CornerRadius property. */" },
		{ "Fixed.Name", "EDrawPolyPathRadiusMode::Fixed" },
		{ "Fixed.ToolTip", "Fixed radius determined by the CornerRadius property." },
		{ "Interactive.Comment", "/** Set the radius interactively by clicking in the viewport.  */" },
		{ "Interactive.Name", "EDrawPolyPathRadiusMode::Interactive" },
		{ "Interactive.ToolTip", "Set the radius interactively by clicking in the viewport." },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EDrawPolyPathRadiusMode",
		"EDrawPolyPathRadiusMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode()
	{
		if (!Z_Registration_Info_UEnum_EDrawPolyPathRadiusMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrawPolyPathRadiusMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDrawPolyPathRadiusMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrawPolyPathExtrudeMode;
	static UEnum* EDrawPolyPathExtrudeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDrawPolyPathExtrudeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDrawPolyPathExtrudeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDrawPolyPathExtrudeMode"));
		}
		return Z_Registration_Info_UEnum_EDrawPolyPathExtrudeMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDrawPolyPathExtrudeMode>()
	{
		return EDrawPolyPathExtrudeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode_Statics::Enumerators[] = {
		{ "EDrawPolyPathExtrudeMode::Flat", (int64)EDrawPolyPathExtrudeMode::Flat },
		{ "EDrawPolyPathExtrudeMode::Fixed", (int64)EDrawPolyPathExtrudeMode::Fixed },
		{ "EDrawPolyPathExtrudeMode::Interactive", (int64)EDrawPolyPathExtrudeMode::Interactive },
		{ "EDrawPolyPathExtrudeMode::RampFixed", (int64)EDrawPolyPathExtrudeMode::RampFixed },
		{ "EDrawPolyPathExtrudeMode::RampInteractive", (int64)EDrawPolyPathExtrudeMode::RampInteractive },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode_Statics::Enum_MetaDataParams[] = {
		{ "Fixed.Comment", "/** Extrude drawn path to a fixed height determined by the Extrude Height property */" },
		{ "Fixed.Name", "EDrawPolyPathExtrudeMode::Fixed" },
		{ "Fixed.ToolTip", "Extrude drawn path to a fixed height determined by the Extrude Height property" },
		{ "Flat.Comment", "/** Flat path without extrusion */" },
		{ "Flat.Name", "EDrawPolyPathExtrudeMode::Flat" },
		{ "Flat.ToolTip", "Flat path without extrusion" },
		{ "Interactive.Comment", "/** Extrude drawn path to height set via additional mouse input after finishing the path */" },
		{ "Interactive.Name", "EDrawPolyPathExtrudeMode::Interactive" },
		{ "Interactive.ToolTip", "Extrude drawn path to height set via additional mouse input after finishing the path" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "RampFixed.Comment", "/** Extrude with increasing height along the drawn path. The height at the start and the end of the ramp is determined by the Extrude Height and Ramp Start Ratio properties .*/" },
		{ "RampFixed.Name", "EDrawPolyPathExtrudeMode::RampFixed" },
		{ "RampFixed.ToolTip", "Extrude with increasing height along the drawn path. The height at the start and the end of the ramp is determined by the Extrude Height and Ramp Start Ratio properties ." },
		{ "RampInteractive.Comment", "/** Extrude with increasing height along the drawn path. The height is set via additional mouse input after finishing the path. */" },
		{ "RampInteractive.Name", "EDrawPolyPathExtrudeMode::RampInteractive" },
		{ "RampInteractive.ToolTip", "Extrude with increasing height along the drawn path. The height is set via additional mouse input after finishing the path." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EDrawPolyPathExtrudeMode",
		"EDrawPolyPathExtrudeMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode()
	{
		if (!Z_Registration_Info_UEnum_EDrawPolyPathExtrudeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrawPolyPathExtrudeMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDrawPolyPathExtrudeMode.InnerSingleton;
	}
	void UDrawPolyPathProperties::StaticRegisterNativesUDrawPolyPathProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPolyPathProperties);
	UClass* Z_Construct_UClass_UDrawPolyPathProperties_NoRegister()
	{
		return UDrawPolyPathProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDrawPolyPathProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_WidthMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidthMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WidthMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRoundedCorners_MetaData[];
#endif
		static void NewProp_bRoundedCorners_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundedCorners;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RadiusMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RadiusMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CornerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CornerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialSlices_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RadialSlices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSinglePolyGroup_MetaData[];
#endif
		static void NewProp_bSinglePolyGroup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSinglePolyGroup;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ExtrudeMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExtrudeMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtrudeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RampStartRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RampStartRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawPolyPathProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DrawPolyPathTool.h" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_WidthMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_WidthMode_MetaData[] = {
		{ "Category", "Path" },
		{ "Comment", "/** How the drawn path width gets set */" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "How the drawn path width gets set" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_WidthMode = { "WidthMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathProperties, WidthMode), Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathWidthMode, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_WidthMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_WidthMode_MetaData)) }; // 733560971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Path" },
		{ "ClampMax", "999999" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Width of the drawn path when using Fixed width mode; also shows the width in Interactive width mode */" },
		{ "EditCondition", "WidthMode == EDrawPolyPathWidthMode::Fixed" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "Width of the drawn path when using Fixed width mode; also shows the width in Interactive width mode" },
		{ "UIMax", "1000" },
		{ "UIMin", "0.0001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathProperties, Width), METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bRoundedCorners_MetaData[] = {
		{ "Category", "Path" },
		{ "Comment", "/** Use arc segments instead of straight lines in corners */" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "Use arc segments instead of straight lines in corners" },
	};
#endif
	void Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bRoundedCorners_SetBit(void* Obj)
	{
		((UDrawPolyPathProperties*)Obj)->bRoundedCorners = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bRoundedCorners = { "bRoundedCorners", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDrawPolyPathProperties), &Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bRoundedCorners_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bRoundedCorners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bRoundedCorners_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadiusMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadiusMode_MetaData[] = {
		{ "Category", "Path" },
		{ "Comment", "/** How the rounded corner radius gets set */" },
		{ "EditCondition", "bRoundedCorners" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "How the rounded corner radius gets set" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadiusMode = { "RadiusMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathProperties, RadiusMode), Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathRadiusMode, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadiusMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadiusMode_MetaData)) }; // 1297688232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_CornerRadius_MetaData[] = {
		{ "Category", "Path" },
		{ "ClampMax", "999999" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Radius of the corner arcs, as a fraction of path width. This is only available if Rounded Corners is enabled. */" },
		{ "EditCondition", "RadiusMode == EDrawPolyPathRadiusMode::Fixed && bRoundedCorners" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "Radius of the corner arcs, as a fraction of path width. This is only available if Rounded Corners is enabled." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_CornerRadius = { "CornerRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathProperties, CornerRadius), METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_CornerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_CornerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadialSlices_MetaData[] = {
		{ "Category", "Path" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "3" },
		{ "Comment", "/** Number of radial subdivisions for rounded corners */" },
		{ "EditCondition", "bRoundedCorners" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "Number of radial subdivisions for rounded corners" },
		{ "UIMax", "100" },
		{ "UIMin", "3" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadialSlices = { "RadialSlices", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathProperties, RadialSlices), METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadialSlices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadialSlices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bSinglePolyGroup_MetaData[] = {
		{ "Category", "Path" },
		{ "Comment", "/** If true, all quads on the path will belong to the same polygon. If false, each quad gets its own polygon. */" },
		{ "DisplayName", "Single PolyGroup" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "If true, all quads on the path will belong to the same polygon. If false, each quad gets its own polygon." },
	};
#endif
	void Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bSinglePolyGroup_SetBit(void* Obj)
	{
		((UDrawPolyPathProperties*)Obj)->bSinglePolyGroup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bSinglePolyGroup = { "bSinglePolyGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDrawPolyPathProperties), &Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bSinglePolyGroup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bSinglePolyGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bSinglePolyGroup_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeMode_MetaData[] = {
		{ "Category", "Extrude" },
		{ "Comment", "/** If and how the drawn path gets extruded */" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "If and how the drawn path gets extruded" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeMode = { "ExtrudeMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathProperties, ExtrudeMode), Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeMode, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeMode_MetaData)) }; // 1397707903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeHeight_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "-10000" },
		{ "Comment", "/** Extrusion distance when using the Fixed extrude modes; also shows the distance in Interactive extrude modes */" },
		{ "EditCondition", "ExtrudeMode == EDrawPolyPathExtrudeMode::Fixed || ExtrudeMode == EDrawPolyPathExtrudeMode::RampFixed" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "Extrusion distance when using the Fixed extrude modes; also shows the distance in Interactive extrude modes" },
		{ "UIMax", "1000" },
		{ "UIMin", "-1000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeHeight = { "ExtrudeHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathProperties, ExtrudeHeight), METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RampStartRatio_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Height of the start of the ramp as a fraction of the Extrude Height property */" },
		{ "EditCondition", "ExtrudeMode == EDrawPolyPathExtrudeMode::RampFixed || ExtrudeMode == EDrawPolyPathExtrudeMode::RampInteractive" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "Height of the start of the ramp as a fraction of the Extrude Height property" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RampStartRatio = { "RampStartRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathProperties, RampStartRatio), METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RampStartRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RampStartRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawPolyPathProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_WidthMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_WidthMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bRoundedCorners,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadiusMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadiusMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_CornerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RadialSlices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_bSinglePolyGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_ExtrudeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathProperties_Statics::NewProp_RampStartRatio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawPolyPathProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPolyPathProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPolyPathProperties_Statics::ClassParams = {
		&UDrawPolyPathProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDrawPolyPathProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawPolyPathProperties()
	{
		if (!Z_Registration_Info_UClass_UDrawPolyPathProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPolyPathProperties.OuterSingleton, Z_Construct_UClass_UDrawPolyPathProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawPolyPathProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDrawPolyPathProperties>()
	{
		return UDrawPolyPathProperties::StaticClass();
	}
	UDrawPolyPathProperties::UDrawPolyPathProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPolyPathProperties);
	UDrawPolyPathProperties::~UDrawPolyPathProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrawPolyPathExtrudeDirection;
	static UEnum* EDrawPolyPathExtrudeDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDrawPolyPathExtrudeDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDrawPolyPathExtrudeDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDrawPolyPathExtrudeDirection"));
		}
		return Z_Registration_Info_UEnum_EDrawPolyPathExtrudeDirection.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDrawPolyPathExtrudeDirection>()
	{
		return EDrawPolyPathExtrudeDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection_Statics::Enumerators[] = {
		{ "EDrawPolyPathExtrudeDirection::SelectionNormal", (int64)EDrawPolyPathExtrudeDirection::SelectionNormal },
		{ "EDrawPolyPathExtrudeDirection::WorldX", (int64)EDrawPolyPathExtrudeDirection::WorldX },
		{ "EDrawPolyPathExtrudeDirection::WorldY", (int64)EDrawPolyPathExtrudeDirection::WorldY },
		{ "EDrawPolyPathExtrudeDirection::WorldZ", (int64)EDrawPolyPathExtrudeDirection::WorldZ },
		{ "EDrawPolyPathExtrudeDirection::LocalX", (int64)EDrawPolyPathExtrudeDirection::LocalX },
		{ "EDrawPolyPathExtrudeDirection::LocalY", (int64)EDrawPolyPathExtrudeDirection::LocalY },
		{ "EDrawPolyPathExtrudeDirection::LocalZ", (int64)EDrawPolyPathExtrudeDirection::LocalZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection_Statics::Enum_MetaDataParams[] = {
		{ "LocalX.Name", "EDrawPolyPathExtrudeDirection::LocalX" },
		{ "LocalY.Name", "EDrawPolyPathExtrudeDirection::LocalY" },
		{ "LocalZ.Name", "EDrawPolyPathExtrudeDirection::LocalZ" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "SelectionNormal.Name", "EDrawPolyPathExtrudeDirection::SelectionNormal" },
		{ "WorldX.Name", "EDrawPolyPathExtrudeDirection::WorldX" },
		{ "WorldY.Name", "EDrawPolyPathExtrudeDirection::WorldY" },
		{ "WorldZ.Name", "EDrawPolyPathExtrudeDirection::WorldZ" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EDrawPolyPathExtrudeDirection",
		"EDrawPolyPathExtrudeDirection",
		Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection()
	{
		if (!Z_Registration_Info_UEnum_EDrawPolyPathExtrudeDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrawPolyPathExtrudeDirection.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDrawPolyPathExtrudeDirection.InnerSingleton;
	}
	void UDrawPolyPathExtrudeProperties::StaticRegisterNativesUDrawPolyPathExtrudeProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPolyPathExtrudeProperties);
	UClass* Z_Construct_UClass_UDrawPolyPathExtrudeProperties_NoRegister()
	{
		return UDrawPolyPathExtrudeProperties::StaticClass();
	}
	struct Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DrawPolyPathTool.h" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "Extrude" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathExtrudeProperties, Direction), Z_Construct_UEnum_MeshModelingToolsExp_EDrawPolyPathExtrudeDirection, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::NewProp_Direction_MetaData)) }; // 3984719977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::NewProp_Direction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPolyPathExtrudeProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::ClassParams = {
		&UDrawPolyPathExtrudeProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawPolyPathExtrudeProperties()
	{
		if (!Z_Registration_Info_UClass_UDrawPolyPathExtrudeProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPolyPathExtrudeProperties.OuterSingleton, Z_Construct_UClass_UDrawPolyPathExtrudeProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawPolyPathExtrudeProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDrawPolyPathExtrudeProperties>()
	{
		return UDrawPolyPathExtrudeProperties::StaticClass();
	}
	UDrawPolyPathExtrudeProperties::UDrawPolyPathExtrudeProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPolyPathExtrudeProperties);
	UDrawPolyPathExtrudeProperties::~UDrawPolyPathExtrudeProperties() {}
	void UDrawPolyPathTool::StaticRegisterNativesUDrawPolyPathTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawPolyPathTool);
	UClass* Z_Construct_UClass_UDrawPolyPathTool_NoRegister()
	{
		return UDrawPolyPathTool::StaticClass();
	}
	struct Z_Construct_UClass_UDrawPolyPathTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProps_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExtrudeProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditPreview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditPreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrudeHeightMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExtrudeHeightMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveDistMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveDistMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfacePathMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SurfacePathMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawPolyPathTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "DrawPolyPathTool.h" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_OutputTypeProperties_MetaData[] = {
		{ "Comment", "/** Property set for type of output object (StaticMesh, Volume, etc) */" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "Property set for type of output object (StaticMesh, Volume, etc)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_OutputTypeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_OutputTypeProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_TransformProps_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_TransformProps = { "TransformProps", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathTool, TransformProps), Z_Construct_UClass_UDrawPolyPathProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_TransformProps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_TransformProps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_ExtrudeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_ExtrudeProperties = { "ExtrudeProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathTool, ExtrudeProperties), Z_Construct_UClass_UDrawPolyPathExtrudeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_ExtrudeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_ExtrudeProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_MaterialProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathTool, MaterialProperties), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_MaterialProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_MaterialProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_PlaneMechanic_MetaData[] = {
		{ "Comment", "// drawing plane and gizmo\n" },
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
		{ "ToolTip", "drawing plane and gizmo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_PlaneMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_PlaneMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_EditPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_EditPreview = { "EditPreview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathTool, EditPreview), Z_Construct_UClass_UPolyEditPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_EditPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_EditPreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_ExtrudeHeightMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_ExtrudeHeightMechanic = { "ExtrudeHeightMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathTool, ExtrudeHeightMechanic), Z_Construct_UClass_UPlaneDistanceFromHitMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_ExtrudeHeightMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_ExtrudeHeightMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_CurveDistMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_CurveDistMechanic = { "CurveDistMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathTool, CurveDistMechanic), Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_CurveDistMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_CurveDistMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_SurfacePathMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/DrawPolyPathTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_SurfacePathMechanic = { "SurfacePathMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawPolyPathTool, SurfacePathMechanic), Z_Construct_UClass_UCollectSurfacePathMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_SurfacePathMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_SurfacePathMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawPolyPathTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_OutputTypeProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_TransformProps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_ExtrudeProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_MaterialProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_PlaneMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_EditPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_ExtrudeHeightMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_CurveDistMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawPolyPathTool_Statics::NewProp_SurfacePathMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawPolyPathTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawPolyPathTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawPolyPathTool_Statics::ClassParams = {
		&UDrawPolyPathTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDrawPolyPathTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawPolyPathTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawPolyPathTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawPolyPathTool()
	{
		if (!Z_Registration_Info_UClass_UDrawPolyPathTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawPolyPathTool.OuterSingleton, Z_Construct_UClass_UDrawPolyPathTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawPolyPathTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDrawPolyPathTool>()
	{
		return UDrawPolyPathTool::StaticClass();
	}
	UDrawPolyPathTool::UDrawPolyPathTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawPolyPathTool);
	UDrawPolyPathTool::~UDrawPolyPathTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DrawPolyPathTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DrawPolyPathTool_h_Statics::EnumInfo[] = {
		{ EDrawPolyPathWidthMode_StaticEnum, TEXT("EDrawPolyPathWidthMode"), &Z_Registration_Info_UEnum_EDrawPolyPathWidthMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 733560971U) },
		{ EDrawPolyPathRadiusMode_StaticEnum, TEXT("EDrawPolyPathRadiusMode"), &Z_Registration_Info_UEnum_EDrawPolyPathRadiusMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1297688232U) },
		{ EDrawPolyPathExtrudeMode_StaticEnum, TEXT("EDrawPolyPathExtrudeMode"), &Z_Registration_Info_UEnum_EDrawPolyPathExtrudeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1397707903U) },
		{ EDrawPolyPathExtrudeDirection_StaticEnum, TEXT("EDrawPolyPathExtrudeDirection"), &Z_Registration_Info_UEnum_EDrawPolyPathExtrudeDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3984719977U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DrawPolyPathTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDrawPolyPathToolBuilder, UDrawPolyPathToolBuilder::StaticClass, TEXT("UDrawPolyPathToolBuilder"), &Z_Registration_Info_UClass_UDrawPolyPathToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPolyPathToolBuilder), 3593145707U) },
		{ Z_Construct_UClass_UDrawPolyPathProperties, UDrawPolyPathProperties::StaticClass, TEXT("UDrawPolyPathProperties"), &Z_Registration_Info_UClass_UDrawPolyPathProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPolyPathProperties), 3161161889U) },
		{ Z_Construct_UClass_UDrawPolyPathExtrudeProperties, UDrawPolyPathExtrudeProperties::StaticClass, TEXT("UDrawPolyPathExtrudeProperties"), &Z_Registration_Info_UClass_UDrawPolyPathExtrudeProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPolyPathExtrudeProperties), 1406520033U) },
		{ Z_Construct_UClass_UDrawPolyPathTool, UDrawPolyPathTool::StaticClass, TEXT("UDrawPolyPathTool"), &Z_Registration_Info_UClass_UDrawPolyPathTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawPolyPathTool), 1535182926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DrawPolyPathTool_h_3142318160(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DrawPolyPathTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DrawPolyPathTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DrawPolyPathTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DrawPolyPathTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
