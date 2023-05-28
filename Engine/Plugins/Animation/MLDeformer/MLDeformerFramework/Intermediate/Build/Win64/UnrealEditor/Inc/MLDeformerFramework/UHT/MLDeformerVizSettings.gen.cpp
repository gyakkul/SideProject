// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerVizSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerVizSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshDeformer_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerVizSettings();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerVizSettings_NoRegister();
	MLDEFORMERFRAMEWORK_API UEnum* Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode();
	MLDEFORMERFRAMEWORK_API UEnum* Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMLDeformerVizMode;
	static UEnum* EMLDeformerVizMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMLDeformerVizMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMLDeformerVizMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode, (UObject*)Z_Construct_UPackage__Script_MLDeformerFramework(), TEXT("EMLDeformerVizMode"));
		}
		return Z_Registration_Info_UEnum_EMLDeformerVizMode.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UEnum* StaticEnum<EMLDeformerVizMode>()
	{
		return EMLDeformerVizMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode_Statics::Enumerators[] = {
		{ "EMLDeformerVizMode::TrainingData", (int64)EMLDeformerVizMode::TrainingData },
		{ "EMLDeformerVizMode::TestData", (int64)EMLDeformerVizMode::TestData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The visualization mode, which selects whether you want to view the training data, or test your already trained model. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "TestData.Comment", "/** Preview testing data, used on trained models. */" },
		{ "TestData.Name", "EMLDeformerVizMode::TestData" },
		{ "TestData.ToolTip", "Preview testing data, used on trained models." },
		{ "ToolTip", "The visualization mode, which selects whether you want to view the training data, or test your already trained model." },
		{ "TrainingData.Comment", "/** Preview the training data. */" },
		{ "TrainingData.Name", "EMLDeformerVizMode::TrainingData" },
		{ "TrainingData.ToolTip", "Preview the training data." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MLDeformerFramework,
		nullptr,
		"EMLDeformerVizMode",
		"EMLDeformerVizMode",
		Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode()
	{
		if (!Z_Registration_Info_UEnum_EMLDeformerVizMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMLDeformerVizMode.InnerSingleton, Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMLDeformerVizMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMLDeformerHeatMapMode;
	static UEnum* EMLDeformerHeatMapMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMLDeformerHeatMapMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMLDeformerHeatMapMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode, (UObject*)Z_Construct_UPackage__Script_MLDeformerFramework(), TEXT("EMLDeformerHeatMapMode"));
		}
		return Z_Registration_Info_UEnum_EMLDeformerHeatMapMode.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UEnum* StaticEnum<EMLDeformerHeatMapMode>()
	{
		return EMLDeformerHeatMapMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode_Statics::Enumerators[] = {
		{ "EMLDeformerHeatMapMode::Activations", (int64)EMLDeformerHeatMapMode::Activations },
		{ "EMLDeformerHeatMapMode::GroundTruth", (int64)EMLDeformerHeatMapMode::GroundTruth },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode_Statics::Enum_MetaDataParams[] = {
		{ "Activations.Comment", "/** Visualize areas where the deformer is applying corrections. The color represents the size of the correction it applies. */" },
		{ "Activations.Name", "EMLDeformerHeatMapMode::Activations" },
		{ "Activations.ToolTip", "Visualize areas where the deformer is applying corrections. The color represents the size of the correction it applies." },
		{ "Comment", "/** The heat map mode which selects what the colors of the heatmap represent. */" },
		{ "GroundTruth.Comment", "/** Visualize the error versus the ground truth model. Requires a ground truth model to be setup. */" },
		{ "GroundTruth.Name", "EMLDeformerHeatMapMode::GroundTruth" },
		{ "GroundTruth.ToolTip", "Visualize the error versus the ground truth model. Requires a ground truth model to be setup." },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The heat map mode which selects what the colors of the heatmap represent." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MLDeformerFramework,
		nullptr,
		"EMLDeformerHeatMapMode",
		"EMLDeformerHeatMapMode",
		Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode()
	{
		if (!Z_Registration_Info_UEnum_EMLDeformerHeatMapMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMLDeformerHeatMapMode.InnerSingleton, Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMLDeformerHeatMapMode.InnerSingleton;
	}
	void UMLDeformerVizSettings::StaticRegisterNativesUMLDeformerVizSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerVizSettings);
	UClass* Z_Construct_UClass_UMLDeformerVizSettings_NoRegister()
	{
		return UMLDeformerVizSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerVizSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisualizationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualizationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VisualizationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestAnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TestAnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformerGraph_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DeformerGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPlaySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPlaySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrainingFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrainingFrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLabels_MetaData[];
#endif
		static void NewProp_bDrawLabels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLabels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LabelHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LabelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestingFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TestingFrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QualityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_QualityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowHeatMap_MetaData[];
#endif
		static void NewProp_bShowHeatMap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowHeatMap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HeatMapMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeatMapMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HeatMapMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeatMapMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeatMapMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundTruthLerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundTruthLerp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLinearSkinnedActor_MetaData[];
#endif
		static void NewProp_bDrawLinearSkinnedActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLinearSkinnedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMLDeformedActor_MetaData[];
#endif
		static void NewProp_bDrawMLDeformedActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMLDeformedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawGroundTruthActor_MetaData[];
#endif
		static void NewProp_bDrawGroundTruthActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawGroundTruthActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDeltas_MetaData[];
#endif
		static void NewProp_bDrawDeltas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDeltas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bXRayDeltas_MetaData[];
#endif
		static void NewProp_bXRayDeltas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bXRayDeltas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerVizSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The vizualization settings.\n */" },
		{ "IncludePath", "MLDeformerVizSettings.h" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The vizualization settings." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_VisualizationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_VisualizationMode_MetaData[] = {
		{ "Comment", "/** The data to visualize. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The data to visualize." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_VisualizationMode = { "VisualizationMode", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, VisualizationMode), Z_Construct_UEnum_MLDeformerFramework_EMLDeformerVizMode, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_VisualizationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_VisualizationMode_MetaData)) }; // 4155754463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TestAnimSequence_MetaData[] = {
		{ "Category", "Test Assets" },
		{ "Comment", "/** The animation sequence to play on the skeletal mesh. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The animation sequence to play on the skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TestAnimSequence = { "TestAnimSequence", nullptr, (EPropertyFlags)0x0024080800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, TestAnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TestAnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TestAnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_DeformerGraph_MetaData[] = {
		{ "Category", "Test Assets" },
		{ "Comment", "/** The deformer graph to use on the asset editor's deformed test actor. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The deformer graph to use on the asset editor's deformed test actor." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_DeformerGraph = { "DeformerGraph", nullptr, (EPropertyFlags)0x0024080800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, DeformerGraph), Z_Construct_UClass_UMeshDeformer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_DeformerGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_DeformerGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_AnimPlaySpeed_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "ClampMax", "2.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The play speed factor of the test anim sequence. */" },
		{ "ForceUnits", "Multiplier" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The play speed factor of the test anim sequence." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_AnimPlaySpeed = { "AnimPlaySpeed", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, AnimPlaySpeed), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_AnimPlaySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_AnimPlaySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TrainingFrameNumber_MetaData[] = {
		{ "Category", "Training Meshes" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The frame number of the training data to visualize. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The frame number of the training data to visualize." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TrainingFrameNumber = { "TrainingFrameNumber", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, TrainingFrameNumber), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TrainingFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TrainingFrameNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLabels_MetaData[] = {
		{ "Category", "Shared Settings" },
		{ "Comment", "/** Specifies whether we should draw the labels, such as \"Linear Skinned\" and \"ML Deformed\" or not. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "Specifies whether we should draw the labels, such as \"Linear Skinned\" and \"ML Deformed\" or not." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLabels_SetBit(void* Obj)
	{
		((UMLDeformerVizSettings*)Obj)->bDrawLabels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLabels = { "bDrawLabels", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerVizSettings), &Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLabels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLabels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_LabelHeight_MetaData[] = {
		{ "Category", "Shared Settings" },
		{ "Comment", "/** The height in units to draw the labels at. */" },
		{ "EditCondition", "bDrawLabels" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The height in units to draw the labels at." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_LabelHeight = { "LabelHeight", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, LabelHeight), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_LabelHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_LabelHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_LabelScale_MetaData[] = {
		{ "Category", "Shared Settings" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** The scale of the label text. */" },
		{ "EditCondition", "bDrawLabels" },
		{ "ForceUnits", "Multiplier" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The scale of the label text." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_LabelScale = { "LabelScale", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, LabelScale), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_LabelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_LabelScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_MeshSpacing_MetaData[] = {
		{ "Category", "Shared Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The spacing between meshes. */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The spacing between meshes." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_MeshSpacing = { "MeshSpacing", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, MeshSpacing), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_MeshSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_MeshSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TestingFrameNumber_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The frame number of the test data to visualize. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The frame number of the test data to visualize." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TestingFrameNumber = { "TestingFrameNumber", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, TestingFrameNumber), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TestingFrameNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TestingFrameNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_QualityLevel_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/*\n\x09 * The ML Deformer LOD value. This is a continuous value between 0 and 1, where 0 means maximum quality and 1 means the lowest quality.\n\x09 * Morph based models will disable certain morph targets when increasing this value, which will lead to lower quality, but better GPU performance.\n\x09 * Each model can decide how to use this value. Some models might not support this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "* The ML Deformer LOD value. This is a continuous value between 0 and 1, where 0 means maximum quality and 1 means the lowest quality.\n* Morph based models will disable certain morph targets when increasing this value, which will lead to lower quality, but better GPU performance.\n* Each model can decide how to use this value. Some models might not support this." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_QualityLevel = { "QualityLevel", nullptr, (EPropertyFlags)0x0020080800002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, QualityLevel), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_QualityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_QualityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bShowHeatMap_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "Comment", "/** Specify whether the heatmap is enabled or not. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "Specify whether the heatmap is enabled or not." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bShowHeatMap_SetBit(void* Obj)
	{
		((UMLDeformerVizSettings*)Obj)->bShowHeatMap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bShowHeatMap = { "bShowHeatMap", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerVizSettings), &Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bShowHeatMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bShowHeatMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bShowHeatMap_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMode_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "Comment", "/** Specifies what the heatmap colors should represent. */" },
		{ "EditCondition", "bShowHeatMap" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "Specifies what the heatmap colors should represent." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMode = { "HeatMapMode", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, HeatMapMode), Z_Construct_UEnum_MLDeformerFramework_EMLDeformerHeatMapMode, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMode_MetaData)) }; // 2343143239
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMax_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/**\n\x09 * Specifies how many centimeters the most intense color of the heatmap represents.\n\x09 * For example when set to 3, it means that everything that is red, is 3 cm or more.\n\x09 * In Activations heat map mode this means that everything is red for all vertices with a delta longer than 3 cm, so with a corrective delta longer than 3 cm.\n\x09 * In Ground Truth heat map mode this means that everything is red for all vertices where the difference between the ground truth and the ML Deformed\n\x09 * model is larger than 3 cm.\n\x09 */" },
		{ "EditCondition", "bShowHeatMap" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "Specifies how many centimeters the most intense color of the heatmap represents.\nFor example when set to 3, it means that everything that is red, is 3 cm or more.\nIn Activations heat map mode this means that everything is red for all vertices with a delta longer than 3 cm, so with a corrective delta longer than 3 cm.\nIn Ground Truth heat map mode this means that everything is red for all vertices where the difference between the ground truth and the ML Deformed\nmodel is larger than 3 cm." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMax = { "HeatMapMax", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, HeatMapMax), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_GroundTruthLerp_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * The Lerp factor from ML deformed model to ground truth model when in heat map mode. \n\x09 * A value of 0 means that we look exactly the same as the ML Deformed output, while a value of 1 means\n\x09 * the output is exactly the same as the ground truth. This is the blend factor between those two.\n\x09 */" },
		{ "EditCondition", "HeatMapMode==EMLDeformerHeatMapMode::GroundTruth && bShowHeatMap" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The Lerp factor from ML deformed model to ground truth model when in heat map mode.\nA value of 0 means that we look exactly the same as the ML Deformed output, while a value of 1 means\nthe output is exactly the same as the ground truth. This is the blend factor between those two." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_GroundTruthLerp = { "GroundTruthLerp", nullptr, (EPropertyFlags)0x0020080800002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, GroundTruthLerp), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_GroundTruthLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_GroundTruthLerp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLinearSkinnedActor_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "Comment", "/** Specifies whether we draw the linear skinned model or not. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "Specifies whether we draw the linear skinned model or not." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLinearSkinnedActor_SetBit(void* Obj)
	{
		((UMLDeformerVizSettings*)Obj)->bDrawLinearSkinnedActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLinearSkinnedActor = { "bDrawLinearSkinnedActor", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerVizSettings), &Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLinearSkinnedActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLinearSkinnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLinearSkinnedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawMLDeformedActor_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "Comment", "/** Specifies whether we draw the ML Deformed model or not. */" },
		{ "DisplayName", "Draw ML Deformed Actor" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "Specifies whether we draw the ML Deformed model or not." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawMLDeformedActor_SetBit(void* Obj)
	{
		((UMLDeformerVizSettings*)Obj)->bDrawMLDeformedActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawMLDeformedActor = { "bDrawMLDeformedActor", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerVizSettings), &Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawMLDeformedActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawMLDeformedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawMLDeformedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawGroundTruthActor_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "Comment", "/** Specifies whether we draw the ground truth model or not. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "Specifies whether we draw the ground truth model or not." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawGroundTruthActor_SetBit(void* Obj)
	{
		((UMLDeformerVizSettings*)Obj)->bDrawGroundTruthActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawGroundTruthActor = { "bDrawGroundTruthActor", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerVizSettings), &Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawGroundTruthActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawGroundTruthActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawGroundTruthActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Live Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The scale factor of the ML deformer deltas being applied on top of the linear skinned results. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "The scale factor of the ML deformer deltas being applied on top of the linear skinned results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0020080800002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerVizSettings, Weight), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawDeltas_MetaData[] = {
		{ "Category", "Training Meshes" },
		{ "Comment", "/** Specifiy whether we want to draw the vertex deltas or not. */" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "Specifiy whether we want to draw the vertex deltas or not." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawDeltas_SetBit(void* Obj)
	{
		((UMLDeformerVizSettings*)Obj)->bDrawDeltas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawDeltas = { "bDrawDeltas", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerVizSettings), &Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawDeltas_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawDeltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawDeltas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bXRayDeltas_MetaData[] = {
		{ "Category", "Training Meshes" },
		{ "Comment", "/** Specify whether the vertex deltas are rendered, even if they are behind the current mesh. */" },
		{ "EditCondition", "bDrawDeltas" },
		{ "ModuleRelativePath", "Public/MLDeformerVizSettings.h" },
		{ "ToolTip", "Specify whether the vertex deltas are rendered, even if they are behind the current mesh." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bXRayDeltas_SetBit(void* Obj)
	{
		((UMLDeformerVizSettings*)Obj)->bXRayDeltas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bXRayDeltas = { "bXRayDeltas", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerVizSettings), &Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bXRayDeltas_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bXRayDeltas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bXRayDeltas_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerVizSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_VisualizationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_VisualizationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TestAnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_DeformerGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_AnimPlaySpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TrainingFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLabels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_LabelHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_LabelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_MeshSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_TestingFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_QualityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bShowHeatMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_HeatMapMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_GroundTruthLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawLinearSkinnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawMLDeformedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawGroundTruthActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bDrawDeltas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerVizSettings_Statics::NewProp_bXRayDeltas,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerVizSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerVizSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerVizSettings_Statics::ClassParams = {
		&UMLDeformerVizSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UMLDeformerVizSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerVizSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerVizSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerVizSettings()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerVizSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerVizSettings.OuterSingleton, Z_Construct_UClass_UMLDeformerVizSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerVizSettings.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerVizSettings>()
	{
		return UMLDeformerVizSettings::StaticClass();
	}
	UMLDeformerVizSettings::UMLDeformerVizSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerVizSettings);
	UMLDeformerVizSettings::~UMLDeformerVizSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_Statics::EnumInfo[] = {
		{ EMLDeformerVizMode_StaticEnum, TEXT("EMLDeformerVizMode"), &Z_Registration_Info_UEnum_EMLDeformerVizMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4155754463U) },
		{ EMLDeformerHeatMapMode_StaticEnum, TEXT("EMLDeformerHeatMapMode"), &Z_Registration_Info_UEnum_EMLDeformerHeatMapMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2343143239U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerVizSettings, UMLDeformerVizSettings::StaticClass, TEXT("UMLDeformerVizSettings"), &Z_Registration_Info_UClass_UMLDeformerVizSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerVizSettings), 2308367890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_3965836184(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerVizSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
