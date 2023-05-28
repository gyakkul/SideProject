// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolMeshCut.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolMeshCut() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureMeshCutSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureMeshCutSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolMeshCut();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolMeshCut_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EMeshCutDistribution();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshCutDistribution;
	static UEnum* EMeshCutDistribution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshCutDistribution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshCutDistribution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EMeshCutDistribution, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EMeshCutDistribution"));
		}
		return Z_Registration_Info_UEnum_EMeshCutDistribution.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EMeshCutDistribution>()
	{
		return EMeshCutDistribution_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EMeshCutDistribution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EMeshCutDistribution_Statics::Enumerators[] = {
		{ "EMeshCutDistribution::SingleCut", (int64)EMeshCutDistribution::SingleCut },
		{ "EMeshCutDistribution::UniformRandom", (int64)EMeshCutDistribution::UniformRandom },
		{ "EMeshCutDistribution::Grid", (int64)EMeshCutDistribution::Grid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EMeshCutDistribution_Statics::Enum_MetaDataParams[] = {
		{ "Grid.Comment", "// Arrange the cutting mesh in a regular grid pattern\n" },
		{ "Grid.Name", "EMeshCutDistribution::Grid" },
		{ "Grid.ToolTip", "Arrange the cutting mesh in a regular grid pattern" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "SingleCut.Comment", "// Cut only once, at the cutting mesh's current location in the level\n" },
		{ "SingleCut.Name", "EMeshCutDistribution::SingleCut" },
		{ "SingleCut.ToolTip", "Cut only once, at the cutting mesh's current location in the level" },
		{ "UniformRandom.Comment", "// Scatter the cutting mesh in a uniform random distribution around the geometry bounding box\n" },
		{ "UniformRandom.Name", "EMeshCutDistribution::UniformRandom" },
		{ "UniformRandom.ToolTip", "Scatter the cutting mesh in a uniform random distribution around the geometry bounding box" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EMeshCutDistribution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EMeshCutDistribution",
		"EMeshCutDistribution",
		Z_Construct_UEnum_FractureEditor_EMeshCutDistribution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EMeshCutDistribution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EMeshCutDistribution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EMeshCutDistribution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EMeshCutDistribution()
	{
		if (!Z_Registration_Info_UEnum_EMeshCutDistribution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshCutDistribution.InnerSingleton, Z_Construct_UEnum_FractureEditor_EMeshCutDistribution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshCutDistribution.InnerSingleton;
	}
	void UFractureMeshCutSettings::StaticRegisterNativesUFractureMeshCutSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureMeshCutSettings);
	UClass* Z_Construct_UClass_UFractureMeshCutSettings_NoRegister()
	{
		return UFractureMeshCutSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureMeshCutSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CuttingActor_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_CuttingActor;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CutDistribution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CutDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CutDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberToScatter_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberToScatter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Variability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRandomOrientation_MetaData[];
#endif
		static void NewProp_bRandomOrientation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RollRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureMeshCutSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolMeshCut.h" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CuttingActor_MetaData[] = {
		{ "Category", "MeshCut" },
		{ "Comment", "/** Static Mesh Actor to be used as a cutting surface. For best results, use a closed, watertight mesh */" },
		{ "DisplayName", "Cutting Actor" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Static Mesh Actor to be used as a cutting surface. For best results, use a closed, watertight mesh" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CuttingActor = { "CuttingActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, CuttingActor), Z_Construct_UClass_AStaticMeshActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CuttingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CuttingActor_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CutDistribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CutDistribution_MetaData[] = {
		{ "Category", "Distribution" },
		{ "Comment", "/** How to arrange the mesh cuts in space */" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "How to arrange the mesh cuts in space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CutDistribution = { "CutDistribution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, CutDistribution), Z_Construct_UEnum_FractureEditor_EMeshCutDistribution, METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CutDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CutDistribution_MetaData)) }; // 3136763848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_NumberToScatter_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of meshes to random scatter */" },
		{ "EditCondition", "CutDistribution == EMeshCutDistribution::UniformRandom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Number of meshes to random scatter" },
		{ "UIMax", "5000" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_NumberToScatter = { "NumberToScatter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, NumberToScatter), METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_NumberToScatter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_NumberToScatter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridX_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of meshes to add to grid in X */" },
		{ "DisplayName", "Grid Width" },
		{ "EditCondition", "CutDistribution == EMeshCutDistribution::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Number of meshes to add to grid in X" },
		{ "UIMax", "100" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridX = { "GridX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, GridX), METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridY_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of meshes to add to grid in Y */" },
		{ "DisplayName", "Grid Depth" },
		{ "EditCondition", "CutDistribution == EMeshCutDistribution::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Number of meshes to add to grid in Y" },
		{ "UIMax", "100" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridY = { "GridY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, GridY), METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridZ_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "5000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of meshes to add to grid in Z */" },
		{ "DisplayName", "Grid Height" },
		{ "EditCondition", "CutDistribution == EMeshCutDistribution::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Number of meshes to add to grid in Z" },
		{ "UIMax", "100" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridZ = { "GridZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, GridZ), METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_Variability_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Magnitude of random displacement to cutting meshes */" },
		{ "DisplayName", "Variability" },
		{ "EditCondition", "CutDistribution == EMeshCutDistribution::Grid" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Magnitude of random displacement to cutting meshes" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_Variability = { "Variability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, Variability), METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_Variability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_Variability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_MinScaleFactor_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Minimum scale factor to apply to cutting meshes. A random scale will be chosen between Min and Max */" },
		{ "EditCondition", "CutDistribution != EMeshCutDistribution::SingleCut" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Minimum scale factor to apply to cutting meshes. A random scale will be chosen between Min and Max" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_MinScaleFactor = { "MinScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, MinScaleFactor), METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_MinScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_MinScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_MaxScaleFactor_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Maximum scale factor to apply to cutting meshes. A random scale will be chosen between Min and Max */" },
		{ "EditCondition", "CutDistribution != EMeshCutDistribution::SingleCut" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Maximum scale factor to apply to cutting meshes. A random scale will be chosen between Min and Max" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_MaxScaleFactor = { "MaxScaleFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, MaxScaleFactor), METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_MaxScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_MaxScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_bRandomOrientation_MetaData[] = {
		{ "Category", "Distribution" },
		{ "Comment", "/** Whether to randomly vary the orientation of the cutting meshes */" },
		{ "EditCondition", "CutDistribution != EMeshCutDistribution::SingleCut" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Whether to randomly vary the orientation of the cutting meshes" },
	};
#endif
	void Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_bRandomOrientation_SetBit(void* Obj)
	{
		((UFractureMeshCutSettings*)Obj)->bRandomOrientation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_bRandomOrientation = { "bRandomOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureMeshCutSettings), &Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_bRandomOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_bRandomOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_bRandomOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_RollRange_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Roll will be chosen between -Range and +Range */" },
		{ "DisplayName", "+/- Roll Range" },
		{ "EditCondition", "CutDistribution != EMeshCutDistribution::SingleCut && bRandomOrientation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Roll will be chosen between -Range and +Range" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_RollRange = { "RollRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, RollRange), METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_RollRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_RollRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_PitchRange_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Pitch will be chosen between -Range and +Range */" },
		{ "DisplayName", "+/- Pitch Range" },
		{ "EditCondition", "CutDistribution != EMeshCutDistribution::SingleCut && bRandomOrientation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Pitch will be chosen between -Range and +Range" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, PitchRange), METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_PitchRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_PitchRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_YawRange_MetaData[] = {
		{ "Category", "Distribution" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Yaw will be chosen between -Range and +Range */" },
		{ "DisplayName", "+/- Yaw Range" },
		{ "EditCondition", "CutDistribution != EMeshCutDistribution::SingleCut && bRandomOrientation" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Yaw will be chosen between -Range and +Range" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_YawRange = { "YawRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureMeshCutSettings, YawRange), METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_YawRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_YawRange_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureMeshCutSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CuttingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CutDistribution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_CutDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_NumberToScatter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_GridZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_Variability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_MinScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_MaxScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_bRandomOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_RollRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_PitchRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureMeshCutSettings_Statics::NewProp_YawRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureMeshCutSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureMeshCutSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureMeshCutSettings_Statics::ClassParams = {
		&UFractureMeshCutSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureMeshCutSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureMeshCutSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureMeshCutSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureMeshCutSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureMeshCutSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureMeshCutSettings.OuterSingleton, Z_Construct_UClass_UFractureMeshCutSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureMeshCutSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureMeshCutSettings>()
	{
		return UFractureMeshCutSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureMeshCutSettings);
	UFractureMeshCutSettings::~UFractureMeshCutSettings() {}
	void UFractureToolMeshCut::StaticRegisterNativesUFractureToolMeshCut()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolMeshCut);
	UClass* Z_Construct_UClass_UFractureToolMeshCut_NoRegister()
	{
		return UFractureToolMeshCut::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolMeshCut_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshCutSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshCutSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolMeshCut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolMeshCut_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Mesh Cut Tool" },
		{ "IncludePath", "FractureToolMeshCut.h" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolMeshCut_Statics::NewProp_MeshCutSettings_MetaData[] = {
		{ "Category", "Slicing" },
		{ "Comment", "// Slicing\n" },
		{ "ModuleRelativePath", "Private/FractureToolMeshCut.h" },
		{ "ToolTip", "Slicing" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolMeshCut_Statics::NewProp_MeshCutSettings = { "MeshCutSettings", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolMeshCut, MeshCutSettings), Z_Construct_UClass_UFractureMeshCutSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolMeshCut_Statics::NewProp_MeshCutSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMeshCut_Statics::NewProp_MeshCutSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolMeshCut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolMeshCut_Statics::NewProp_MeshCutSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolMeshCut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolMeshCut>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolMeshCut_Statics::ClassParams = {
		&UFractureToolMeshCut::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolMeshCut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMeshCut_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolMeshCut_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMeshCut_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolMeshCut()
	{
		if (!Z_Registration_Info_UClass_UFractureToolMeshCut.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolMeshCut.OuterSingleton, Z_Construct_UClass_UFractureToolMeshCut_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolMeshCut.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolMeshCut>()
	{
		return UFractureToolMeshCut::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolMeshCut);
	UFractureToolMeshCut::~UFractureToolMeshCut() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_Statics::EnumInfo[] = {
		{ EMeshCutDistribution_StaticEnum, TEXT("EMeshCutDistribution"), &Z_Registration_Info_UEnum_EMeshCutDistribution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3136763848U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureMeshCutSettings, UFractureMeshCutSettings::StaticClass, TEXT("UFractureMeshCutSettings"), &Z_Registration_Info_UClass_UFractureMeshCutSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureMeshCutSettings), 2583576358U) },
		{ Z_Construct_UClass_UFractureToolMeshCut, UFractureToolMeshCut::StaticClass, TEXT("UFractureToolMeshCut"), &Z_Registration_Info_UClass_UFractureToolMeshCut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolMeshCut), 2230302395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_584725905(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolMeshCut_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
