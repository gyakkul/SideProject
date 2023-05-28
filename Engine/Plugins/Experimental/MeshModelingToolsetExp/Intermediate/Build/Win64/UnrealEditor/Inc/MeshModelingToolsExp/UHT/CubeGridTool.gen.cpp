// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CubeGridTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeGridTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalClickDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalSingleClickInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCubeGridDuringActivityActions();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCubeGridDuringActivityActions_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCubeGridTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCubeGridTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCubeGridToolActions();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCubeGridToolActions_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCubeGridToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCubeGridToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCubeGridToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UCubeGridToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UCubeGridToolBuilder::StaticRegisterNativesUCubeGridToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeGridToolBuilder);
	UClass* Z_Construct_UClass_UCubeGridToolBuilder_NoRegister()
	{
		return UCubeGridToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCubeGridToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeGridToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolWithToolTargetsBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubeGridTool.h" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeGridToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeGridToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeGridToolBuilder_Statics::ClassParams = {
		&UCubeGridToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubeGridToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UCubeGridToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeGridToolBuilder.OuterSingleton, Z_Construct_UClass_UCubeGridToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCubeGridToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UCubeGridToolBuilder>()
	{
		return UCubeGridToolBuilder::StaticClass();
	}
	UCubeGridToolBuilder::UCubeGridToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeGridToolBuilder);
	UCubeGridToolBuilder::~UCubeGridToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECubeGridToolFaceSelectionMode;
	static UEnum* ECubeGridToolFaceSelectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECubeGridToolFaceSelectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECubeGridToolFaceSelectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ECubeGridToolFaceSelectionMode"));
		}
		return Z_Registration_Info_UEnum_ECubeGridToolFaceSelectionMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ECubeGridToolFaceSelectionMode>()
	{
		return ECubeGridToolFaceSelectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode_Statics::Enumerators[] = {
		{ "ECubeGridToolFaceSelectionMode::OutsideBasedOnNormal", (int64)ECubeGridToolFaceSelectionMode::OutsideBasedOnNormal },
		{ "ECubeGridToolFaceSelectionMode::InsideBasedOnNormal", (int64)ECubeGridToolFaceSelectionMode::InsideBasedOnNormal },
		{ "ECubeGridToolFaceSelectionMode::OutsideBasedOnViewRay", (int64)ECubeGridToolFaceSelectionMode::OutsideBasedOnViewRay },
		{ "ECubeGridToolFaceSelectionMode::InsideBasedOnViewRay", (int64)ECubeGridToolFaceSelectionMode::InsideBasedOnViewRay },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode_Statics::Enum_MetaDataParams[] = {
		{ "InsideBasedOnNormal.Comment", "/** Use hit normal to pierce backward through the geometry to pick an inside face of the containing cell. */" },
		{ "InsideBasedOnNormal.Name", "ECubeGridToolFaceSelectionMode::InsideBasedOnNormal" },
		{ "InsideBasedOnNormal.ToolTip", "Use hit normal to pierce backward through the geometry to pick an inside face of the containing cell." },
		{ "InsideBasedOnViewRay.Comment", "/** Use view ray to pierce backward through the geometry to pick an inside face of the containing cell. */" },
		{ "InsideBasedOnViewRay.Name", "ECubeGridToolFaceSelectionMode::InsideBasedOnViewRay" },
		{ "InsideBasedOnViewRay.ToolTip", "Use view ray to pierce backward through the geometry to pick an inside face of the containing cell." },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "OutsideBasedOnNormal.Comment", "/** Use hit normal to pick the outer face of the containing cell. */" },
		{ "OutsideBasedOnNormal.Name", "ECubeGridToolFaceSelectionMode::OutsideBasedOnNormal" },
		{ "OutsideBasedOnNormal.ToolTip", "Use hit normal to pick the outer face of the containing cell." },
		{ "OutsideBasedOnViewRay.Comment", "/** Use view ray to pick the outer face of the containing cell. */" },
		{ "OutsideBasedOnViewRay.Name", "ECubeGridToolFaceSelectionMode::OutsideBasedOnViewRay" },
		{ "OutsideBasedOnViewRay.ToolTip", "Use view ray to pick the outer face of the containing cell." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"ECubeGridToolFaceSelectionMode",
		"ECubeGridToolFaceSelectionMode",
		Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode()
	{
		if (!Z_Registration_Info_UEnum_ECubeGridToolFaceSelectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECubeGridToolFaceSelectionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECubeGridToolFaceSelectionMode.InnerSingleton;
	}
	void UCubeGridToolProperties::StaticRegisterNativesUCubeGridToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeGridToolProperties);
	UClass* Z_Construct_UClass_UCubeGridToolProperties_NoRegister()
	{
		return UCubeGridToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UCubeGridToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridFrameOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridFrameOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridFrameOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridFrameOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGizmo_MetaData[];
#endif
		static void NewProp_bShowGizmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridPower_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GridPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBlockSize_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CurrentBlockSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlocksPerStep_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlocksPerStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPowerOfTwoBlockSizes_MetaData[];
#endif
		static void NewProp_bPowerOfTwoBlockSizes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPowerOfTwoBlockSizes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockBaseSize_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_BlockBaseSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCrosswiseDiagonal_MetaData[];
#endif
		static void NewProp_bCrosswiseDiagonal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrosswiseDiagonal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepSideGroups_MetaData[];
#endif
		static void NewProp_bKeepSideGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepSideGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PlaneTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitUnrelatedGeometry_MetaData[];
#endif
		static void NewProp_bHitUnrelatedGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitUnrelatedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHitGridGroundPlaneIfCloser_MetaData[];
#endif
		static void NewProp_bHitGridGroundPlaneIfCloser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHitGridGroundPlaneIfCloser;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FaceSelectionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceSelectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceSelectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCornerMode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToggleCornerMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PushPull_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PushPull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResizeGrid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResizeGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlideSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlideSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipSelection_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FlipSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GridGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuickShiftGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuickShiftGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AlignGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInCornerMode_MetaData[];
#endif
		static void NewProp_bInCornerMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCornerMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowedToEditGrid_MetaData[];
#endif
		static void NewProp_bAllowedToEditGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowedToEditGrid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeGridToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubeGridTool.h" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridFrameOrigin_MetaData[] = {
		{ "Category", "Options" },
		{ "EditCondition", "bAllowedToEditGrid" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridFrameOrigin = { "GridFrameOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, GridFrameOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridFrameOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridFrameOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridFrameOrientation_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "18000" },
		{ "ClampMin", "-180000" },
		{ "EditCondition", "bAllowedToEditGrid" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridFrameOrientation = { "GridFrameOrientation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, GridFrameOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridFrameOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridFrameOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bShowGizmo_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bShowGizmo_SetBit(void* Obj)
	{
		((UCubeGridToolProperties*)Obj)->bShowGizmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bShowGizmo = { "bShowGizmo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCubeGridToolProperties), &Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bShowGizmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bShowGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bShowGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridPower_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "31" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Determines cube grid scale. Can also be adjusted with Ctrl + E/Q. */" },
		{ "EditCondition", "bAllowedToEditGrid" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Determines cube grid scale. Can also be adjusted with Ctrl + E/Q." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridPower = { "GridPower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, GridPower), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_CurrentBlockSize_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** \n\x09 * Sets the size of a block at the current grid power. This is done by changing the \n\x09 * base block size (i.e. the size at grid power 0) such that the target size is achieved at \n\x09 * the the current value of Grid Power.\n\x09 */" },
		{ "EditCondition", "bAllowedToEditGrid" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Sets the size of a block at the current grid power. This is done by changing the\nbase block size (i.e. the size at grid power 0) such that the target size is achieved at\nthe the current value of Grid Power." },
		{ "UIMax", "1000" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_CurrentBlockSize = { "CurrentBlockSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, CurrentBlockSize), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_CurrentBlockSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_CurrentBlockSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_BlocksPerStep_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How many blocks each push/pull invocation will do at a time.*/" },
		{ "Delta", "1" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "How many blocks each push/pull invocation will do at a time." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_BlocksPerStep = { "BlocksPerStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, BlocksPerStep), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_BlocksPerStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_BlocksPerStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bPowerOfTwoBlockSizes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** \n\x09 * When true, block sizes change by powers of two as grid power is changed. When false, block\n\x09 * sizes change by twos and fives, much like the default editor grid snapping options (for\n\x09 * instance, sizes might increase from 10 to 50 to 100 to 500).\n\x09 * Note that toggling this option will reset Grid Power and Current Block Size to default values.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "When true, block sizes change by powers of two as grid power is changed. When false, block\nsizes change by twos and fives, much like the default editor grid snapping options (for\ninstance, sizes might increase from 10 to 50 to 100 to 500).\nNote that toggling this option will reset Grid Power and Current Block Size to default values." },
	};
#endif
	void Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bPowerOfTwoBlockSizes_SetBit(void* Obj)
	{
		((UCubeGridToolProperties*)Obj)->bPowerOfTwoBlockSizes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bPowerOfTwoBlockSizes = { "bPowerOfTwoBlockSizes", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCubeGridToolProperties), &Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bPowerOfTwoBlockSizes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bPowerOfTwoBlockSizes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bPowerOfTwoBlockSizes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_BlockBaseSize_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Smallest block size to use in the grid. For instance, 3.125 results in\n\x09 blocks that are 100 sized at 5 power of two since 3.125 * 2^5 = 100. */" },
		{ "EditCondition", "bAllowedToEditGrid" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Smallest block size to use in the grid. For instance, 3.125 results in\n       blocks that are 100 sized at 5 power of two since 3.125 * 2^5 = 100." },
		{ "UIMax", "10" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_BlockBaseSize = { "BlockBaseSize", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, BlockBaseSize), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_BlockBaseSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_BlockBaseSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bCrosswiseDiagonal_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When pushing/pulling in a way where the diagonal matters, setting this to true\n\x09 makes the diagonal generally try to lie flat across the face rather than at\n\x09 an incline. */" },
		{ "EditCondition", "bInCornerMode" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "When pushing/pulling in a way where the diagonal matters, setting this to true\n       makes the diagonal generally try to lie flat across the face rather than at\n       an incline." },
	};
#endif
	void Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bCrosswiseDiagonal_SetBit(void* Obj)
	{
		((UCubeGridToolProperties*)Obj)->bCrosswiseDiagonal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bCrosswiseDiagonal = { "bCrosswiseDiagonal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCubeGridToolProperties), &Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bCrosswiseDiagonal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bCrosswiseDiagonal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bCrosswiseDiagonal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bKeepSideGroups_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When performing multiple push/pulls with the same selection, attempt to keep the\n\x09 same group IDs on the sides of the new geometry (ie multiple E/Q presses will not\n\x09 result in different group topology around the sides compared to a single Ctrl+drag). */" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "When performing multiple push/pulls with the same selection, attempt to keep the\n       same group IDs on the sides of the new geometry (ie multiple E/Q presses will not\n       result in different group topology around the sides compared to a single Ctrl+drag)." },
	};
#endif
	void Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bKeepSideGroups_SetBit(void* Obj)
	{
		((UCubeGridToolProperties*)Obj)->bKeepSideGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bKeepSideGroups = { "bKeepSideGroups", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCubeGridToolProperties), &Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bKeepSideGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bKeepSideGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bKeepSideGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_PlaneTolerance_MetaData[] = {
		{ "Comment", "/** When performing selection, the tolerance to use when determining\n\x09 whether things lie in the same plane as a cube face. *///~ This turned out to not be a useful setting, so it is no longer EditAnywhere. The only cases where it\n//~ seems to have a noticeable effect were ones where it was set so high that it broke the selection\n//~ behavior slightly.\n" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "When performing selection, the tolerance to use when determining\n       whether things lie in the same plane as a cube face." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_PlaneTolerance = { "PlaneTolerance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, PlaneTolerance), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_PlaneTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_PlaneTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitUnrelatedGeometry_MetaData[] = {
		{ "Category", "BlockSelection" },
		{ "Comment", "/** When raycasting to find a selected grid face, this determines whether geometry\n\x09 in the scene that is not part of the edited mesh is hit. */" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "When raycasting to find a selected grid face, this determines whether geometry\n       in the scene that is not part of the edited mesh is hit." },
	};
#endif
	void Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitUnrelatedGeometry_SetBit(void* Obj)
	{
		((UCubeGridToolProperties*)Obj)->bHitUnrelatedGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitUnrelatedGeometry = { "bHitUnrelatedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCubeGridToolProperties), &Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitUnrelatedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitUnrelatedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitUnrelatedGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitGridGroundPlaneIfCloser_MetaData[] = {
		{ "Category", "BlockSelection" },
		{ "Comment", "/** When the grid ground plane is above some geometry, whether we should hit that\n\x09 plane or pass through to the other geometry. */" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "When the grid ground plane is above some geometry, whether we should hit that\n       plane or pass through to the other geometry." },
	};
#endif
	void Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitGridGroundPlaneIfCloser_SetBit(void* Obj)
	{
		((UCubeGridToolProperties*)Obj)->bHitGridGroundPlaneIfCloser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitGridGroundPlaneIfCloser = { "bHitGridGroundPlaneIfCloser", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCubeGridToolProperties), &Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitGridGroundPlaneIfCloser_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitGridGroundPlaneIfCloser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitGridGroundPlaneIfCloser_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FaceSelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FaceSelectionMode_MetaData[] = {
		{ "Category", "BlockSelection" },
		{ "Comment", "/** How the selected face is determined. */" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "How the selected face is determined." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FaceSelectionMode = { "FaceSelectionMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, FaceSelectionMode), Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolFaceSelectionMode, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FaceSelectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FaceSelectionMode_MetaData)) }; // 2940177428
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_ToggleCornerMode_MetaData[] = {
		{ "Category", "ShortcutInfo" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_ToggleCornerMode = { "ToggleCornerMode", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, ToggleCornerMode), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_ToggleCornerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_ToggleCornerMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_PushPull_MetaData[] = {
		{ "Category", "ShortcutInfo" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_PushPull = { "PushPull", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, PushPull), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_PushPull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_PushPull_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_ResizeGrid_MetaData[] = {
		{ "Category", "ShortcutInfo" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_ResizeGrid = { "ResizeGrid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, ResizeGrid), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_ResizeGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_ResizeGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_SlideSelection_MetaData[] = {
		{ "Category", "ShortcutInfo" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_SlideSelection = { "SlideSelection", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, SlideSelection), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_SlideSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_SlideSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FlipSelection_MetaData[] = {
		{ "Category", "ShortcutInfo" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FlipSelection = { "FlipSelection", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, FlipSelection), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FlipSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FlipSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridGizmo_MetaData[] = {
		{ "Category", "ShortcutInfo" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridGizmo = { "GridGizmo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, GridGizmo), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_QuickShiftGizmo_MetaData[] = {
		{ "Category", "ShortcutInfo" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_QuickShiftGizmo = { "QuickShiftGizmo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, QuickShiftGizmo), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_QuickShiftGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_QuickShiftGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_AlignGizmo_MetaData[] = {
		{ "Category", "ShortcutInfo" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_AlignGizmo = { "AlignGizmo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolProperties, AlignGizmo), METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_AlignGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_AlignGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bInCornerMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bInCornerMode_SetBit(void* Obj)
	{
		((UCubeGridToolProperties*)Obj)->bInCornerMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bInCornerMode = { "bInCornerMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCubeGridToolProperties), &Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bInCornerMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bInCornerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bInCornerMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bAllowedToEditGrid_MetaData[] = {
		{ "Comment", "//~ Currently unused... Used to disallow it during corner mode, might do so again.\n" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bAllowedToEditGrid_SetBit(void* Obj)
	{
		((UCubeGridToolProperties*)Obj)->bAllowedToEditGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bAllowedToEditGrid = { "bAllowedToEditGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCubeGridToolProperties), &Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bAllowedToEditGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bAllowedToEditGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bAllowedToEditGrid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeGridToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridFrameOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridFrameOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bShowGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_CurrentBlockSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_BlocksPerStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bPowerOfTwoBlockSizes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_BlockBaseSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bCrosswiseDiagonal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bKeepSideGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_PlaneTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitUnrelatedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bHitGridGroundPlaneIfCloser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FaceSelectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FaceSelectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_ToggleCornerMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_PushPull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_ResizeGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_SlideSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_FlipSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_GridGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_QuickShiftGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_AlignGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bInCornerMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolProperties_Statics::NewProp_bAllowedToEditGrid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeGridToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeGridToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeGridToolProperties_Statics::ClassParams = {
		&UCubeGridToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCubeGridToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubeGridToolProperties()
	{
		if (!Z_Registration_Info_UClass_UCubeGridToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeGridToolProperties.OuterSingleton, Z_Construct_UClass_UCubeGridToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCubeGridToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UCubeGridToolProperties>()
	{
		return UCubeGridToolProperties::StaticClass();
	}
	UCubeGridToolProperties::UCubeGridToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeGridToolProperties);
	UCubeGridToolProperties::~UCubeGridToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECubeGridToolAction;
	static UEnum* ECubeGridToolAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECubeGridToolAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECubeGridToolAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ECubeGridToolAction"));
		}
		return Z_Registration_Info_UEnum_ECubeGridToolAction.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ECubeGridToolAction>()
	{
		return ECubeGridToolAction_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction_Statics::Enumerators[] = {
		{ "ECubeGridToolAction::NoAction", (int64)ECubeGridToolAction::NoAction },
		{ "ECubeGridToolAction::Push", (int64)ECubeGridToolAction::Push },
		{ "ECubeGridToolAction::Pull", (int64)ECubeGridToolAction::Pull },
		{ "ECubeGridToolAction::Flip", (int64)ECubeGridToolAction::Flip },
		{ "ECubeGridToolAction::SlideForward", (int64)ECubeGridToolAction::SlideForward },
		{ "ECubeGridToolAction::SlideBack", (int64)ECubeGridToolAction::SlideBack },
		{ "ECubeGridToolAction::DecreaseGridPower", (int64)ECubeGridToolAction::DecreaseGridPower },
		{ "ECubeGridToolAction::IncreaseGridPower", (int64)ECubeGridToolAction::IncreaseGridPower },
		{ "ECubeGridToolAction::CornerMode", (int64)ECubeGridToolAction::CornerMode },
		{ "ECubeGridToolAction::ResetFromActor", (int64)ECubeGridToolAction::ResetFromActor },
		{ "ECubeGridToolAction::Done", (int64)ECubeGridToolAction::Done },
		{ "ECubeGridToolAction::Cancel", (int64)ECubeGridToolAction::Cancel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction_Statics::Enum_MetaDataParams[] = {
		{ "Cancel.Name", "ECubeGridToolAction::Cancel" },
		{ "CornerMode.Name", "ECubeGridToolAction::CornerMode" },
		{ "DecreaseGridPower.Name", "ECubeGridToolAction::DecreaseGridPower" },
		{ "Done.Name", "ECubeGridToolAction::Done" },
		{ "Flip.Name", "ECubeGridToolAction::Flip" },
		{ "IncreaseGridPower.Name", "ECubeGridToolAction::IncreaseGridPower" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "NoAction.Name", "ECubeGridToolAction::NoAction" },
		{ "Pull.Name", "ECubeGridToolAction::Pull" },
		{ "Push.Name", "ECubeGridToolAction::Push" },
		{ "ResetFromActor.Comment", "// FitGrid,\n" },
		{ "ResetFromActor.Name", "ECubeGridToolAction::ResetFromActor" },
		{ "ResetFromActor.ToolTip", "FitGrid," },
		{ "SlideBack.Name", "ECubeGridToolAction::SlideBack" },
		{ "SlideForward.Name", "ECubeGridToolAction::SlideForward" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"ECubeGridToolAction",
		"ECubeGridToolAction",
		Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction()
	{
		if (!Z_Registration_Info_UEnum_ECubeGridToolAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECubeGridToolAction.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ECubeGridToolAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECubeGridToolAction.InnerSingleton;
	}
	DEFINE_FUNCTION(UCubeGridToolActions::execResetGridFromActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetGridFromActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeGridToolActions::execFlip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Flip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeGridToolActions::execCornerMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CornerMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeGridToolActions::execSlideForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SlideForward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeGridToolActions::execSlideBack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SlideBack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeGridToolActions::execPush)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Push();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeGridToolActions::execPull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pull();
		P_NATIVE_END;
	}
	void UCubeGridToolActions::StaticRegisterNativesUCubeGridToolActions()
	{
		UClass* Class = UCubeGridToolActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CornerMode", &UCubeGridToolActions::execCornerMode },
			{ "Flip", &UCubeGridToolActions::execFlip },
			{ "Pull", &UCubeGridToolActions::execPull },
			{ "Push", &UCubeGridToolActions::execPush },
			{ "ResetGridFromActor", &UCubeGridToolActions::execResetGridFromActor },
			{ "SlideBack", &UCubeGridToolActions::execSlideBack },
			{ "SlideForward", &UCubeGridToolActions::execSlideForward },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCubeGridToolActions_CornerMode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeGridToolActions_CornerMode_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Engages a mode where specific corners can be selected to push/pull only\n\x09 those corners. Press Apply to commit the result afterward. Can also be toggled\n\x09 with Z. */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Engages a mode where specific corners can be selected to push/pull only\n       those corners. Press Apply to commit the result afterward. Can also be toggled\n       with Z." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeGridToolActions_CornerMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeGridToolActions, nullptr, "CornerMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCubeGridToolActions_CornerMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeGridToolActions_CornerMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCubeGridToolActions_CornerMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeGridToolActions_CornerMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeGridToolActions_Flip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeGridToolActions_Flip_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Can also be invoked with T. */" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Can also be invoked with T." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeGridToolActions_Flip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeGridToolActions, nullptr, "Flip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCubeGridToolActions_Flip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeGridToolActions_Flip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCubeGridToolActions_Flip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeGridToolActions_Flip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeGridToolActions_Pull_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeGridToolActions_Pull_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Can also be invoked with E. */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Can also be invoked with E." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeGridToolActions_Pull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeGridToolActions, nullptr, "Pull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCubeGridToolActions_Pull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeGridToolActions_Pull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCubeGridToolActions_Pull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeGridToolActions_Pull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeGridToolActions_Push_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeGridToolActions_Push_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Can also be invoked with Q. */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Can also be invoked with Q." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeGridToolActions_Push_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeGridToolActions, nullptr, "Push", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCubeGridToolActions_Push_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeGridToolActions_Push_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCubeGridToolActions_Push()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeGridToolActions_Push_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeGridToolActions_ResetGridFromActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeGridToolActions_ResetGridFromActor_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "GridReinitialization" },
		{ "Comment", "/** \n\x09 * Resets the grid position and orientation based on the actor in Grid Source Actor. This allows \n\x09 * grid positions/orientations to be saved by pasting them into the transform of some actor that\n\x09 * is later used, or by relying on the fact that the tool initializes transforms of newly created\n\x09 * meshes based on the grid used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Resets the grid position and orientation based on the actor in Grid Source Actor. This allows\ngrid positions/orientations to be saved by pasting them into the transform of some actor that\nis later used, or by relying on the fact that the tool initializes transforms of newly created\nmeshes based on the grid used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeGridToolActions_ResetGridFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeGridToolActions, nullptr, "ResetGridFromActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCubeGridToolActions_ResetGridFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeGridToolActions_ResetGridFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCubeGridToolActions_ResetGridFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeGridToolActions_ResetGridFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeGridToolActions_SlideBack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeGridToolActions_SlideBack_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Can also be invoked with Shift + E. */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Can also be invoked with Shift + E." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeGridToolActions_SlideBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeGridToolActions, nullptr, "SlideBack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCubeGridToolActions_SlideBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeGridToolActions_SlideBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCubeGridToolActions_SlideBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeGridToolActions_SlideBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeGridToolActions_SlideForward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeGridToolActions_SlideForward_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Can also be invoked with Shift + Q. */" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Can also be invoked with Shift + Q." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeGridToolActions_SlideForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeGridToolActions, nullptr, "SlideForward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCubeGridToolActions_SlideForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeGridToolActions_SlideForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCubeGridToolActions_SlideForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeGridToolActions_SlideForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeGridToolActions);
	UClass* Z_Construct_UClass_UCubeGridToolActions_NoRegister()
	{
		return UCubeGridToolActions::StaticClass();
	}
	struct Z_Construct_UClass_UCubeGridToolActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridSourceActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeGridToolActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCubeGridToolActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCubeGridToolActions_CornerMode, "CornerMode" }, // 1624486788
		{ &Z_Construct_UFunction_UCubeGridToolActions_Flip, "Flip" }, // 2381715805
		{ &Z_Construct_UFunction_UCubeGridToolActions_Pull, "Pull" }, // 3238965356
		{ &Z_Construct_UFunction_UCubeGridToolActions_Push, "Push" }, // 352793243
		{ &Z_Construct_UFunction_UCubeGridToolActions_ResetGridFromActor, "ResetGridFromActor" }, // 655413652
		{ &Z_Construct_UFunction_UCubeGridToolActions_SlideBack, "SlideBack" }, // 1074859617
		{ &Z_Construct_UFunction_UCubeGridToolActions_SlideForward, "SlideForward" }, // 584439320
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubeGridTool.h" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridToolActions_Statics::NewProp_GridSourceActor_MetaData[] = {
		{ "Category", "GridReinitialization" },
		{ "Comment", "/** Actor whose transform to use when doing Reset Grid From Actor. *///~ For some reason we can't seem to use TWeakObjectPtr here- it becomes unsettable in the tool.\n" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Actor whose transform to use when doing Reset Grid From Actor." },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridToolActions_Statics::NewProp_GridSourceActor = { "GridSourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridToolActions, GridSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolActions_Statics::NewProp_GridSourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolActions_Statics::NewProp_GridSourceActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeGridToolActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridToolActions_Statics::NewProp_GridSourceActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeGridToolActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeGridToolActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeGridToolActions_Statics::ClassParams = {
		&UCubeGridToolActions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCubeGridToolActions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolActions_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCubeGridToolActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridToolActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubeGridToolActions()
	{
		if (!Z_Registration_Info_UClass_UCubeGridToolActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeGridToolActions.OuterSingleton, Z_Construct_UClass_UCubeGridToolActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCubeGridToolActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UCubeGridToolActions>()
	{
		return UCubeGridToolActions::StaticClass();
	}
	UCubeGridToolActions::UCubeGridToolActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeGridToolActions);
	UCubeGridToolActions::~UCubeGridToolActions() {}
	DEFINE_FUNCTION(UCubeGridDuringActivityActions::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCubeGridDuringActivityActions::execDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Done();
		P_NATIVE_END;
	}
	void UCubeGridDuringActivityActions::StaticRegisterNativesUCubeGridDuringActivityActions()
	{
		UClass* Class = UCubeGridDuringActivityActions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cancel", &UCubeGridDuringActivityActions::execCancel },
			{ "Done", &UCubeGridDuringActivityActions::execDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCubeGridDuringActivityActions_Cancel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeGridDuringActivityActions_Cancel_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Cancel and exit current action */" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Cancel and exit current action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeGridDuringActivityActions_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeGridDuringActivityActions, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCubeGridDuringActivityActions_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeGridDuringActivityActions_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCubeGridDuringActivityActions_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeGridDuringActivityActions_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCubeGridDuringActivityActions_Done_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCubeGridDuringActivityActions_Done_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Actions" },
		{ "Comment", "/** Accept and complete current action. */" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Accept and complete current action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCubeGridDuringActivityActions_Done_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCubeGridDuringActivityActions, nullptr, "Done", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCubeGridDuringActivityActions_Done_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCubeGridDuringActivityActions_Done_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCubeGridDuringActivityActions_Done()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCubeGridDuringActivityActions_Done_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeGridDuringActivityActions);
	UClass* Z_Construct_UClass_UCubeGridDuringActivityActions_NoRegister()
	{
		return UCubeGridDuringActivityActions::StaticClass();
	}
	struct Z_Construct_UClass_UCubeGridDuringActivityActions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeGridDuringActivityActions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCubeGridDuringActivityActions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCubeGridDuringActivityActions_Cancel, "Cancel" }, // 3521203344
		{ &Z_Construct_UFunction_UCubeGridDuringActivityActions_Done, "Done" }, // 1651979892
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridDuringActivityActions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubeGridTool.h" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeGridDuringActivityActions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeGridDuringActivityActions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeGridDuringActivityActions_Statics::ClassParams = {
		&UCubeGridDuringActivityActions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCubeGridDuringActivityActions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridDuringActivityActions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubeGridDuringActivityActions()
	{
		if (!Z_Registration_Info_UClass_UCubeGridDuringActivityActions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeGridDuringActivityActions.OuterSingleton, Z_Construct_UClass_UCubeGridDuringActivityActions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCubeGridDuringActivityActions.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UCubeGridDuringActivityActions>()
	{
		return UCubeGridDuringActivityActions::StaticClass();
	}
	UCubeGridDuringActivityActions::UCubeGridDuringActivityActions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeGridDuringActivityActions);
	UCubeGridDuringActivityActions::~UCubeGridDuringActivityActions() {}
	void UCubeGridTool::StaticRegisterNativesUCubeGridTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCubeGridTool);
	UClass* Z_Construct_UClass_UCubeGridTool_NoRegister()
	{
		return UCubeGridTool::StaticClass();
	}
	struct Z_Construct_UClass_UCubeGridTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGizmoAlignmentMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridGizmoAlignmentMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridGizmoTransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GridGizmoTransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineSets_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineSets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickDragBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickDragBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HoverBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CtrlMiddleClickBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CtrlMiddleClickBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MiddleClickDragBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MiddleClickDragBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DuringActivityActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DuringActivityActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputTypeProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCubeGridTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Tool that allows for blocky boolean operations on an orientable power-of-two grid. */" },
		{ "IncludePath", "CubeGridTool.h" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Tool that allows for blocky boolean operations on an orientable power-of-two grid." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmo = { "GridGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, GridGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmoAlignmentMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmoAlignmentMechanic = { "GridGizmoAlignmentMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, GridGizmoAlignmentMechanic), Z_Construct_UClass_UDragAlignmentMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmoAlignmentMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmoAlignmentMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmoTransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmoTransformProxy = { "GridGizmoTransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, GridGizmoTransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmoTransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmoTransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_LineSets_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_LineSets = { "LineSets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, LineSets), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_LineSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_LineSets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_ClickDragBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_ClickDragBehavior = { "ClickDragBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, ClickDragBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_ClickDragBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_ClickDragBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_HoverBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_HoverBehavior = { "HoverBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, HoverBehavior), Z_Construct_UClass_UMouseHoverBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_HoverBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_HoverBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_CtrlMiddleClickBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_CtrlMiddleClickBehavior = { "CtrlMiddleClickBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, CtrlMiddleClickBehavior), Z_Construct_UClass_ULocalSingleClickInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_CtrlMiddleClickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_CtrlMiddleClickBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_MiddleClickDragBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_MiddleClickDragBehavior = { "MiddleClickDragBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, MiddleClickDragBehavior), Z_Construct_UClass_ULocalClickDragInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_MiddleClickDragBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_MiddleClickDragBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "// Properties, etc\n" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Properties, etc" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, Settings), Z_Construct_UClass_UCubeGridToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_ToolActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_ToolActions = { "ToolActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, ToolActions), Z_Construct_UClass_UCubeGridToolActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_ToolActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_ToolActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_DuringActivityActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_DuringActivityActions = { "DuringActivityActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, DuringActivityActions), Z_Construct_UClass_UCubeGridDuringActivityActions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_DuringActivityActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_DuringActivityActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_MaterialProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_MaterialProperties = { "MaterialProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, MaterialProperties), Z_Construct_UClass_UNewMeshMaterialProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_MaterialProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_MaterialProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_OutputTypeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_OutputTypeProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Target_MetaData[] = {
		{ "Comment", "// Existing asset to modify, if one was selected\n" },
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
		{ "ToolTip", "Existing asset to modify, if one was selected" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, Target), Z_Construct_UClass_UToolTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/CubeGridTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCubeGridTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Preview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCubeGridTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmoAlignmentMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_GridGizmoTransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_LineSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_ClickDragBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_HoverBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_CtrlMiddleClickBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_MiddleClickDragBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_ToolActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_DuringActivityActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_MaterialProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_OutputTypeProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCubeGridTool_Statics::NewProp_Preview,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCubeGridTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister, (int32)VTABLE_OFFSET(UCubeGridTool, IInteractiveToolNestedAcceptCancelAPI), false },  // 1745745235
			{ Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister, (int32)VTABLE_OFFSET(UCubeGridTool, IInteractiveToolCameraFocusAPI), false },  // 3998126931
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCubeGridTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCubeGridTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCubeGridTool_Statics::ClassParams = {
		&UCubeGridTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCubeGridTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCubeGridTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCubeGridTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCubeGridTool()
	{
		if (!Z_Registration_Info_UClass_UCubeGridTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCubeGridTool.OuterSingleton, Z_Construct_UClass_UCubeGridTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCubeGridTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UCubeGridTool>()
	{
		return UCubeGridTool::StaticClass();
	}
	UCubeGridTool::UCubeGridTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCubeGridTool);
	UCubeGridTool::~UCubeGridTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_Statics::EnumInfo[] = {
		{ ECubeGridToolFaceSelectionMode_StaticEnum, TEXT("ECubeGridToolFaceSelectionMode"), &Z_Registration_Info_UEnum_ECubeGridToolFaceSelectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2940177428U) },
		{ ECubeGridToolAction_StaticEnum, TEXT("ECubeGridToolAction"), &Z_Registration_Info_UEnum_ECubeGridToolAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3267956518U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCubeGridToolBuilder, UCubeGridToolBuilder::StaticClass, TEXT("UCubeGridToolBuilder"), &Z_Registration_Info_UClass_UCubeGridToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeGridToolBuilder), 1010425772U) },
		{ Z_Construct_UClass_UCubeGridToolProperties, UCubeGridToolProperties::StaticClass, TEXT("UCubeGridToolProperties"), &Z_Registration_Info_UClass_UCubeGridToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeGridToolProperties), 2849411646U) },
		{ Z_Construct_UClass_UCubeGridToolActions, UCubeGridToolActions::StaticClass, TEXT("UCubeGridToolActions"), &Z_Registration_Info_UClass_UCubeGridToolActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeGridToolActions), 3706795579U) },
		{ Z_Construct_UClass_UCubeGridDuringActivityActions, UCubeGridDuringActivityActions::StaticClass, TEXT("UCubeGridDuringActivityActions"), &Z_Registration_Info_UClass_UCubeGridDuringActivityActions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeGridDuringActivityActions), 2244946550U) },
		{ Z_Construct_UClass_UCubeGridTool, UCubeGridTool::StaticClass, TEXT("UCubeGridTool"), &Z_Registration_Info_UClass_UCubeGridTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCubeGridTool), 241653357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_3754241762(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_CubeGridTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
