// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolRadial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolRadial() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureRadialSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureRadialSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolRadial();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolRadial_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolVoronoiCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureTransformGizmoSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureRadialSettings::StaticRegisterNativesUFractureRadialSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureRadialSettings);
	UClass* Z_Construct_UClass_UFractureRadialSettings_NoRegister()
	{
		return UFractureRadialSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureRadialSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPositionedByGizmo_MetaData[];
#endif
		static void NewProp_bPositionedByGizmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositionedByGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AngularSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularNoise_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialSteps_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RadialSteps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialStepExponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialStepExponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialMinStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialMinStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialNoise_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialNoise;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialVariability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialVariability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularVariability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVariability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxialVariability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxialVariability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureRadialSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolRadial.h" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "RadialVoronoi" },
		{ "Comment", "/** Center of generated pattern. Only used when \"Use Gizmo\" is disabled */" },
		{ "EditCondition", "!bPositionedByGizmo" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Center of generated pattern. Only used when \"Use Gizmo\" is disabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "RadialVoronoi" },
		{ "Comment", "/** Normal to plane in which sites are generated. Only used when \"Use Gizmo\" is disabled */" },
		{ "EditCondition", "!bPositionedByGizmo" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Normal to plane in which sites are generated. Only used when \"Use Gizmo\" is disabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_bPositionedByGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
	};
#endif
	void Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_bPositionedByGizmo_SetBit(void* Obj)
	{
		((UFractureRadialSettings*)Obj)->bPositionedByGizmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_bPositionedByGizmo = { "bPositionedByGizmo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureRadialSettings), &Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_bPositionedByGizmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_bPositionedByGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_bPositionedByGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularSteps_MetaData[] = {
		{ "Category", "RadialVoronoi" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of angular steps */" },
		{ "DisplayName", "Angular Steps" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Number of angular steps" },
		{ "UIMax", "50" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularSteps = { "AngularSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, AngularSteps), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngleOffset_MetaData[] = {
		{ "Category", "RadialVoronoi" },
		{ "Comment", "/** Angle offset at each radial step (in degrees) */" },
		{ "DisplayName", "Angle Offset" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Angle offset at each radial step (in degrees)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngleOffset = { "AngleOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, AngleOffset), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngleOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularNoise_MetaData[] = {
		{ "Category", "RadialVoronoi" },
		{ "Comment", "/** Amount of global variation to apply to each angular step (in degrees) */" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Amount of global variation to apply to each angular step (in degrees)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularNoise = { "AngularNoise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, AngularNoise), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularNoise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "RadialVoronoi" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Pattern radius (in cm) */" },
		{ "DisplayName", "Radius" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Pattern radius (in cm)" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, Radius), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialSteps_MetaData[] = {
		{ "Category", "RadialVoronoi" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of radial steps */" },
		{ "DisplayName", "Radial Steps" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Number of radial steps" },
		{ "UIMax", "50" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialSteps = { "RadialSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, RadialSteps), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialSteps_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialStepExponent_MetaData[] = {
		{ "Category", "RadialVoronoi" },
		{ "ClampMax", "20" },
		{ "ClampMin", ".01" },
		{ "Comment", "/** Radial steps will follow a distribution based on this exponent, i.e., Pow(distance from center, RadialStepExponent) */" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Radial steps will follow a distribution based on this exponent, i.e., Pow(distance from center, RadialStepExponent)" },
		{ "UIMax", "10" },
		{ "UIMin", ".01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialStepExponent = { "RadialStepExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, RadialStepExponent), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialStepExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialStepExponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialMinStep_MetaData[] = {
		{ "Category", "RadialVoronoi" },
		{ "ClampMin", ".01" },
		{ "Comment", "/** Minimum radial separation between any two voronoi points (in cm) */" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Minimum radial separation between any two voronoi points (in cm)" },
		{ "UIMin", ".25" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialMinStep = { "RadialMinStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, RadialMinStep), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialMinStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialMinStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialNoise_MetaData[] = {
		{ "Category", "RadialVoronoi" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Amount of global variation to apply to each radial step (in cm) */" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Amount of global variation to apply to each radial step (in cm)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialNoise = { "RadialNoise", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, RadialNoise), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialNoise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialNoise_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialVariability_MetaData[] = {
		{ "Category", "PerPointVariability" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to randomly displace each Voronoi site radially (in cm) */" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Amount to randomly displace each Voronoi site radially (in cm)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialVariability = { "RadialVariability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, RadialVariability), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialVariability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialVariability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularVariability_MetaData[] = {
		{ "Category", "PerPointVariability" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to randomly displace each Voronoi site in angle (in degrees) */" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Amount to randomly displace each Voronoi site in angle (in degrees)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularVariability = { "AngularVariability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, AngularVariability), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularVariability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularVariability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AxialVariability_MetaData[] = {
		{ "Category", "PerPointVariability" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Amount to randomly displace each Voronoi site in the direction of the rotation axis (in cm) */" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Amount to randomly displace each Voronoi site in the direction of the rotation axis (in cm)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AxialVariability = { "AxialVariability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureRadialSettings, AxialVariability), METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AxialVariability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AxialVariability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureRadialSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_bPositionedByGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialStepExponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialMinStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialNoise,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_RadialVariability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AngularVariability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureRadialSettings_Statics::NewProp_AxialVariability,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureRadialSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureRadialSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureRadialSettings_Statics::ClassParams = {
		&UFractureRadialSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureRadialSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureRadialSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureRadialSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureRadialSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureRadialSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureRadialSettings.OuterSingleton, Z_Construct_UClass_UFractureRadialSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureRadialSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureRadialSettings>()
	{
		return UFractureRadialSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureRadialSettings);
	UFractureRadialSettings::~UFractureRadialSettings() {}
	void UFractureToolRadial::StaticRegisterNativesUFractureToolRadial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolRadial);
	UClass* Z_Construct_UClass_UFractureToolRadial_NoRegister()
	{
		return UFractureToolRadial::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolRadial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RadialSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolRadial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolVoronoiCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolRadial_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Radial Voronoi" },
		{ "IncludePath", "FractureToolRadial.h" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolRadial_Statics::NewProp_RadialSettings_MetaData[] = {
		{ "Category", "Uniform" },
		{ "Comment", "// Radial Voronoi Fracture Input Settings\n" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
		{ "ToolTip", "Radial Voronoi Fracture Input Settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolRadial_Statics::NewProp_RadialSettings = { "RadialSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolRadial, RadialSettings), Z_Construct_UClass_UFractureRadialSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolRadial_Statics::NewProp_RadialSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolRadial_Statics::NewProp_RadialSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolRadial_Statics::NewProp_GizmoSettings_MetaData[] = {
		{ "Category", "Uniform" },
		{ "ModuleRelativePath", "Private/FractureToolRadial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolRadial_Statics::NewProp_GizmoSettings = { "GizmoSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolRadial, GizmoSettings), Z_Construct_UClass_UFractureTransformGizmoSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolRadial_Statics::NewProp_GizmoSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolRadial_Statics::NewProp_GizmoSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolRadial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolRadial_Statics::NewProp_RadialSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolRadial_Statics::NewProp_GizmoSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolRadial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolRadial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolRadial_Statics::ClassParams = {
		&UFractureToolRadial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolRadial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolRadial_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolRadial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolRadial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolRadial()
	{
		if (!Z_Registration_Info_UClass_UFractureToolRadial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolRadial.OuterSingleton, Z_Construct_UClass_UFractureToolRadial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolRadial.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolRadial>()
	{
		return UFractureToolRadial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolRadial);
	UFractureToolRadial::~UFractureToolRadial() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolRadial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolRadial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureRadialSettings, UFractureRadialSettings::StaticClass, TEXT("UFractureRadialSettings"), &Z_Registration_Info_UClass_UFractureRadialSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureRadialSettings), 3675800062U) },
		{ Z_Construct_UClass_UFractureToolRadial, UFractureToolRadial::StaticClass, TEXT("UFractureToolRadial"), &Z_Registration_Info_UClass_UFractureToolRadial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolRadial), 886297227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolRadial_h_3105284699(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolRadial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolRadial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
