// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MirrorTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorOperatorFactory();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorOperatorFactory_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolActionPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolActionPropertySet_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMirrorToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UMirrorToolBuilder::StaticRegisterNativesUMirrorToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorToolBuilder);
	UClass* Z_Construct_UClass_UMirrorToolBuilder_NoRegister()
	{
		return UMirrorToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MirrorTool.h" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorToolBuilder_Statics::ClassParams = {
		&UMirrorToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMirrorToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UMirrorToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorToolBuilder.OuterSingleton, Z_Construct_UClass_UMirrorToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirrorToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMirrorToolBuilder>()
	{
		return UMirrorToolBuilder::StaticClass();
	}
	UMirrorToolBuilder::UMirrorToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorToolBuilder);
	UMirrorToolBuilder::~UMirrorToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorSaveMode;
	static UEnum* EMirrorSaveMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMirrorSaveMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMirrorSaveMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMirrorSaveMode"));
		}
		return Z_Registration_Info_UEnum_EMirrorSaveMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMirrorSaveMode>()
	{
		return EMirrorSaveMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::Enumerators[] = {
		{ "EMirrorSaveMode::UpdateAssets", (int64)EMirrorSaveMode::UpdateAssets },
		{ "EMirrorSaveMode::CreateNewAssets", (int64)EMirrorSaveMode::CreateNewAssets },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::Enum_MetaDataParams[] = {
		{ "CreateNewAssets.Comment", "/** Save the results as new assets. */" },
		{ "CreateNewAssets.Name", "EMirrorSaveMode::CreateNewAssets" },
		{ "CreateNewAssets.ToolTip", "Save the results as new assets." },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "UpdateAssets.Comment", "/**  Save the results in place of the original assets. */" },
		{ "UpdateAssets.Name", "EMirrorSaveMode::UpdateAssets" },
		{ "UpdateAssets.ToolTip", "Save the results in place of the original assets." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMirrorSaveMode",
		"EMirrorSaveMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode()
	{
		if (!Z_Registration_Info_UEnum_EMirrorSaveMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorSaveMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMirrorSaveMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorOperationMode;
	static UEnum* EMirrorOperationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMirrorOperationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMirrorOperationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMirrorOperationMode"));
		}
		return Z_Registration_Info_UEnum_EMirrorOperationMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMirrorOperationMode>()
	{
		return EMirrorOperationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::Enumerators[] = {
		{ "EMirrorOperationMode::MirrorAndAppend", (int64)EMirrorOperationMode::MirrorAndAppend },
		{ "EMirrorOperationMode::MirrorExisting", (int64)EMirrorOperationMode::MirrorExisting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::Enum_MetaDataParams[] = {
		{ "MirrorAndAppend.Comment", "/**  Append a mirrored version of the mesh to itself. */" },
		{ "MirrorAndAppend.Name", "EMirrorOperationMode::MirrorAndAppend" },
		{ "MirrorAndAppend.ToolTip", "Append a mirrored version of the mesh to itself." },
		{ "MirrorExisting.Comment", "/** Mirror the existing mesh. */" },
		{ "MirrorExisting.Name", "EMirrorOperationMode::MirrorExisting" },
		{ "MirrorExisting.ToolTip", "Mirror the existing mesh." },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMirrorOperationMode",
		"EMirrorOperationMode",
		Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode()
	{
		if (!Z_Registration_Info_UEnum_EMirrorOperationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorOperationMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMirrorOperationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorCtrlClickBehavior;
	static UEnum* EMirrorCtrlClickBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMirrorCtrlClickBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMirrorCtrlClickBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMirrorCtrlClickBehavior"));
		}
		return Z_Registration_Info_UEnum_EMirrorCtrlClickBehavior.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMirrorCtrlClickBehavior>()
	{
		return EMirrorCtrlClickBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior_Statics::Enumerators[] = {
		{ "EMirrorCtrlClickBehavior::Reposition", (int64)EMirrorCtrlClickBehavior::Reposition },
		{ "EMirrorCtrlClickBehavior::RepositionAndReorient", (int64)EMirrorCtrlClickBehavior::RepositionAndReorient },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "Reposition.Comment", "/** Move the mirror plane to clicked location without adjusting its normal. */" },
		{ "Reposition.Name", "EMirrorCtrlClickBehavior::Reposition" },
		{ "Reposition.ToolTip", "Move the mirror plane to clicked location without adjusting its normal." },
		{ "RepositionAndReorient.Comment", "/** Move the mirror plane and adjust its normal according to click location. */" },
		{ "RepositionAndReorient.Name", "EMirrorCtrlClickBehavior::RepositionAndReorient" },
		{ "RepositionAndReorient.ToolTip", "Move the mirror plane and adjust its normal according to click location." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMirrorCtrlClickBehavior",
		"EMirrorCtrlClickBehavior",
		Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior()
	{
		if (!Z_Registration_Info_UEnum_EMirrorCtrlClickBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorCtrlClickBehavior.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMirrorCtrlClickBehavior.InnerSingleton;
	}
	void UMirrorToolProperties::StaticRegisterNativesUMirrorToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorToolProperties);
	UClass* Z_Construct_UClass_UMirrorToolProperties_NoRegister()
	{
		return UMirrorToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OperationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCropAlongMirrorPlaneFirst_MetaData[];
#endif
		static void NewProp_bCropAlongMirrorPlaneFirst_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCropAlongMirrorPlaneFirst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWeldVerticesOnMirrorPlane_MetaData[];
#endif
		static void NewProp_bWeldVerticesOnMirrorPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWeldVerticesOnMirrorPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PlaneTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowBowtieVertexCreation_MetaData[];
#endif
		static void NewProp_bAllowBowtieVertexCreation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBowtieVertexCreation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CtrlClickBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CtrlClickBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CtrlClickBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bButtonsOnlyChangeOrientation_MetaData[];
#endif
		static void NewProp_bButtonsOnlyChangeOrientation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bButtonsOnlyChangeOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreview_MetaData[];
#endif
		static void NewProp_bShowPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreview;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SaveMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SaveMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MirrorTool.h" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Mode of operation. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Mode of operation." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode = { "OperationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorToolProperties, OperationMode), Z_Construct_UEnum_MeshModelingToolsExp_EMirrorOperationMode, METADATA_PARAMS(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode_MetaData)) }; // 1570582427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Cut off everything on the back side of the mirror plane before mirroring. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Cut off everything on the back side of the mirror plane before mirroring." },
	};
#endif
	void Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst_SetBit(void* Obj)
	{
		((UMirrorToolProperties*)Obj)->bCropAlongMirrorPlaneFirst = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst = { "bCropAlongMirrorPlaneFirst", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMirrorToolProperties), &Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Weld vertices that lie on the mirror plane. Vertices will not be welded if doing so would give an edge more than two faces, or if they are part of a face in the plane. */" },
		{ "EditCondition", "OperationMode == EMirrorOperationMode::MirrorAndAppend" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Weld vertices that lie on the mirror plane. Vertices will not be welded if doing so would give an edge more than two faces, or if they are part of a face in the plane." },
	};
#endif
	void Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane_SetBit(void* Obj)
	{
		((UMirrorToolProperties*)Obj)->bWeldVerticesOnMirrorPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane = { "bWeldVerticesOnMirrorPlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMirrorToolProperties), &Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_PlaneTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Distance (in unscaled mesh space) to allow a point to be from the plane and still consider it \"on the mirror plane\". */" },
		{ "EditCondition", "OperationMode == EMirrorOperationMode::MirrorAndAppend && bWeldVerticesOnMirrorPlane" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Distance (in unscaled mesh space) to allow a point to be from the plane and still consider it \"on the mirror plane\"." },
		{ "UIMax", "0.010000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_PlaneTolerance = { "PlaneTolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorToolProperties, PlaneTolerance), METADATA_PARAMS(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_PlaneTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_PlaneTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When welding, whether to allow bowtie vertices to be created, or to duplicate the vertex. */" },
		{ "EditCondition", "bWeldVerticesOnMirrorPlane && OperationMode == EMirrorOperationMode::MirrorAndAppend" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "When welding, whether to allow bowtie vertices to be created, or to duplicate the vertex." },
	};
#endif
	void Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation_SetBit(void* Obj)
	{
		((UMirrorToolProperties*)Obj)->bAllowBowtieVertexCreation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation = { "bAllowBowtieVertexCreation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMirrorToolProperties), &Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_CtrlClickBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_CtrlClickBehavior_MetaData[] = {
		{ "Category", "RepositionOptions" },
		{ "Comment", "/** What Ctrl + clicking does to the mirror plane. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "What Ctrl + clicking does to the mirror plane." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_CtrlClickBehavior = { "CtrlClickBehavior", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorToolProperties, CtrlClickBehavior), Z_Construct_UEnum_MeshModelingToolsExp_EMirrorCtrlClickBehavior, METADATA_PARAMS(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_CtrlClickBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_CtrlClickBehavior_MetaData)) }; // 3271933248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bButtonsOnlyChangeOrientation_MetaData[] = {
		{ "Category", "RepositionOptions" },
		{ "Comment", "/** If true the \"Preset Mirror Directions\" buttons only change the plane orientation, not location. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "If true the \"Preset Mirror Directions\" buttons only change the plane orientation, not location." },
	};
#endif
	void Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bButtonsOnlyChangeOrientation_SetBit(void* Obj)
	{
		((UMirrorToolProperties*)Obj)->bButtonsOnlyChangeOrientation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bButtonsOnlyChangeOrientation = { "bButtonsOnlyChangeOrientation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMirrorToolProperties), &Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bButtonsOnlyChangeOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bButtonsOnlyChangeOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bButtonsOnlyChangeOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to show the preview. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Whether to show the preview." },
	};
#endif
	void Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview_SetBit(void* Obj)
	{
		((UMirrorToolProperties*)Obj)->bShowPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview = { "bShowPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMirrorToolProperties), &Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_SaveMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_SaveMode_MetaData[] = {
		{ "Category", "ToolOutputOptions" },
		{ "Comment", "/** How to save the result. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "How to save the result." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_SaveMode = { "SaveMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorToolProperties, SaveMode), Z_Construct_UEnum_MeshModelingToolsExp_EMirrorSaveMode, METADATA_PARAMS(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_SaveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_SaveMode_MetaData)) }; // 1265088285
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_OperationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bCropAlongMirrorPlaneFirst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bWeldVerticesOnMirrorPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_PlaneTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bAllowBowtieVertexCreation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_CtrlClickBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_CtrlClickBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bButtonsOnlyChangeOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_bShowPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_SaveMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorToolProperties_Statics::NewProp_SaveMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorToolProperties_Statics::ClassParams = {
		&UMirrorToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMirrorToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMirrorToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorToolProperties()
	{
		if (!Z_Registration_Info_UClass_UMirrorToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorToolProperties.OuterSingleton, Z_Construct_UClass_UMirrorToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirrorToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMirrorToolProperties>()
	{
		return UMirrorToolProperties::StaticClass();
	}
	UMirrorToolProperties::UMirrorToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorToolProperties);
	UMirrorToolProperties::~UMirrorToolProperties() {}
	void UMirrorOperatorFactory::StaticRegisterNativesUMirrorOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorOperatorFactory);
	UClass* Z_Construct_UClass_UMirrorOperatorFactory_NoRegister()
	{
		return UMirrorOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MirrorTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MirrorTool.h" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorOperatorFactory_Statics::NewProp_MirrorTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMirrorOperatorFactory_Statics::NewProp_MirrorTool = { "MirrorTool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorOperatorFactory, MirrorTool), Z_Construct_UClass_UMirrorTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMirrorOperatorFactory_Statics::NewProp_MirrorTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorOperatorFactory_Statics::NewProp_MirrorTool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorOperatorFactory_Statics::NewProp_MirrorTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorOperatorFactory_Statics::ClassParams = {
		&UMirrorOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMirrorOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMirrorOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_UMirrorOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorOperatorFactory.OuterSingleton, Z_Construct_UClass_UMirrorOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirrorOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMirrorOperatorFactory>()
	{
		return UMirrorOperatorFactory::StaticClass();
	}
	UMirrorOperatorFactory::UMirrorOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorOperatorFactory);
	UMirrorOperatorFactory::~UMirrorOperatorFactory() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMirrorToolAction;
	static UEnum* EMirrorToolAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMirrorToolAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMirrorToolAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EMirrorToolAction"));
		}
		return Z_Registration_Info_UEnum_EMirrorToolAction.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EMirrorToolAction>()
	{
		return EMirrorToolAction_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::Enumerators[] = {
		{ "EMirrorToolAction::NoAction", (int64)EMirrorToolAction::NoAction },
		{ "EMirrorToolAction::ShiftToCenter", (int64)EMirrorToolAction::ShiftToCenter },
		{ "EMirrorToolAction::Left", (int64)EMirrorToolAction::Left },
		{ "EMirrorToolAction::Right", (int64)EMirrorToolAction::Right },
		{ "EMirrorToolAction::Up", (int64)EMirrorToolAction::Up },
		{ "EMirrorToolAction::Down", (int64)EMirrorToolAction::Down },
		{ "EMirrorToolAction::Forward", (int64)EMirrorToolAction::Forward },
		{ "EMirrorToolAction::Backward", (int64)EMirrorToolAction::Backward },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::Enum_MetaDataParams[] = {
		{ "Backward.Name", "EMirrorToolAction::Backward" },
		{ "Down.Name", "EMirrorToolAction::Down" },
		{ "Forward.Name", "EMirrorToolAction::Forward" },
		{ "Left.Name", "EMirrorToolAction::Left" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "NoAction.Name", "EMirrorToolAction::NoAction" },
		{ "Right.Name", "EMirrorToolAction::Right" },
		{ "ShiftToCenter.Name", "EMirrorToolAction::ShiftToCenter" },
		{ "Up.Name", "EMirrorToolAction::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EMirrorToolAction",
		"EMirrorToolAction",
		Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction()
	{
		if (!Z_Registration_Info_UEnum_EMirrorToolAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMirrorToolAction.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EMirrorToolAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMirrorToolAction.InnerSingleton;
	}
	DEFINE_FUNCTION(UMirrorToolActionPropertySet::execBackward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Backward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirrorToolActionPropertySet::execForward)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Forward();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirrorToolActionPropertySet::execDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Down();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirrorToolActionPropertySet::execUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Up();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirrorToolActionPropertySet::execRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Right();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirrorToolActionPropertySet::execLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Left();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMirrorToolActionPropertySet::execShiftToCenter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShiftToCenter();
		P_NATIVE_END;
	}
	void UMirrorToolActionPropertySet::StaticRegisterNativesUMirrorToolActionPropertySet()
	{
		UClass* Class = UMirrorToolActionPropertySet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Backward", &UMirrorToolActionPropertySet::execBackward },
			{ "Down", &UMirrorToolActionPropertySet::execDown },
			{ "Forward", &UMirrorToolActionPropertySet::execForward },
			{ "Left", &UMirrorToolActionPropertySet::execLeft },
			{ "Right", &UMirrorToolActionPropertySet::execRight },
			{ "ShiftToCenter", &UMirrorToolActionPropertySet::execShiftToCenter },
			{ "Up", &UMirrorToolActionPropertySet::execUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection backward. */" },
		{ "DisplayPriority", "6" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection backward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Backward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection downward. */" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection downward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Down", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Down()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Down_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection forward. */" },
		{ "DisplayPriority", "5" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection forward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Forward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection leftward. */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection leftward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Left", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Left()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Left_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection rightward. */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection rightward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Right", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Right()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Right_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "RepositionPlane" },
		{ "Comment", "/** Move the mirror plane to center of bounding box without changing its normal. */" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane to center of bounding box without changing its normal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "ShiftToCenter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "PresetMirrorDirections" },
		{ "Comment", "/** Move the mirror plane and adjust its normal to mirror entire selection upward. */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Move the mirror plane and adjust its normal to mirror entire selection upward." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMirrorToolActionPropertySet, nullptr, "Up", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMirrorToolActionPropertySet_Up()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMirrorToolActionPropertySet_Up_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorToolActionPropertySet);
	UClass* Z_Construct_UClass_UMirrorToolActionPropertySet_NoRegister()
	{
		return UMirrorToolActionPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorToolActionPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Backward, "Backward" }, // 4031284750
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Down, "Down" }, // 1798631951
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Forward, "Forward" }, // 3396787123
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Left, "Left" }, // 2002873389
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Right, "Right" }, // 1418812049
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_ShiftToCenter, "ShiftToCenter" }, // 779994703
		{ &Z_Construct_UFunction_UMirrorToolActionPropertySet_Up, "Up" }, // 1200720693
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MirrorTool.h" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorToolActionPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::ClassParams = {
		&UMirrorToolActionPropertySet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorToolActionPropertySet()
	{
		if (!Z_Registration_Info_UClass_UMirrorToolActionPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UMirrorToolActionPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirrorToolActionPropertySet.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMirrorToolActionPropertySet>()
	{
		return UMirrorToolActionPropertySet::StaticClass();
	}
	UMirrorToolActionPropertySet::UMirrorToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorToolActionPropertySet);
	UMirrorToolActionPropertySet::~UMirrorToolActionPropertySet() {}
	void UMirrorTool::StaticRegisterNativesUMirrorTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorTool);
	UClass* Z_Construct_UClass_UMirrorTool_NoRegister()
	{
		return UMirrorTool::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolActions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshesToMirror_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshesToMirror_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshesToMirror;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Previews_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Previews_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Previews;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneMechanic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Tool for mirroring one or more meshes across a plane. */" },
		{ "IncludePath", "MirrorTool.h" },
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
		{ "ToolTip", "Tool for mirroring one or more meshes across a plane." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorTool, Settings), Z_Construct_UClass_UMirrorToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMirrorTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorTool_Statics::NewProp_ToolActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_ToolActions = { "ToolActions", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorTool, ToolActions), Z_Construct_UClass_UMirrorToolActionPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMirrorTool_Statics::NewProp_ToolActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::NewProp_ToolActions_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror_Inner = { "MeshesToMirror", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror = { "MeshesToMirror", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorTool, MeshesToMirror), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews_Inner = { "Previews", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews = { "Previews", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorTool, Previews), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorTool_Statics::NewProp_PlaneMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/MirrorTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMirrorTool_Statics::NewProp_PlaneMechanic = { "PlaneMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorTool, PlaneMechanic), Z_Construct_UClass_UConstructionPlaneMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMirrorTool_Statics::NewProp_PlaneMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::NewProp_PlaneMechanic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_ToolActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_MeshesToMirror,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_Previews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTool_Statics::NewProp_PlaneMechanic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorTool_Statics::ClassParams = {
		&UMirrorTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMirrorTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMirrorTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorTool()
	{
		if (!Z_Registration_Info_UClass_UMirrorTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorTool.OuterSingleton, Z_Construct_UClass_UMirrorTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirrorTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UMirrorTool>()
	{
		return UMirrorTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorTool);
	UMirrorTool::~UMirrorTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics::EnumInfo[] = {
		{ EMirrorSaveMode_StaticEnum, TEXT("EMirrorSaveMode"), &Z_Registration_Info_UEnum_EMirrorSaveMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1265088285U) },
		{ EMirrorOperationMode_StaticEnum, TEXT("EMirrorOperationMode"), &Z_Registration_Info_UEnum_EMirrorOperationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1570582427U) },
		{ EMirrorCtrlClickBehavior_StaticEnum, TEXT("EMirrorCtrlClickBehavior"), &Z_Registration_Info_UEnum_EMirrorCtrlClickBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3271933248U) },
		{ EMirrorToolAction_StaticEnum, TEXT("EMirrorToolAction"), &Z_Registration_Info_UEnum_EMirrorToolAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3333743780U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMirrorToolBuilder, UMirrorToolBuilder::StaticClass, TEXT("UMirrorToolBuilder"), &Z_Registration_Info_UClass_UMirrorToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorToolBuilder), 4053694088U) },
		{ Z_Construct_UClass_UMirrorToolProperties, UMirrorToolProperties::StaticClass, TEXT("UMirrorToolProperties"), &Z_Registration_Info_UClass_UMirrorToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorToolProperties), 3436898634U) },
		{ Z_Construct_UClass_UMirrorOperatorFactory, UMirrorOperatorFactory::StaticClass, TEXT("UMirrorOperatorFactory"), &Z_Registration_Info_UClass_UMirrorOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorOperatorFactory), 2729423650U) },
		{ Z_Construct_UClass_UMirrorToolActionPropertySet, UMirrorToolActionPropertySet::StaticClass, TEXT("UMirrorToolActionPropertySet"), &Z_Registration_Info_UClass_UMirrorToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorToolActionPropertySet), 3677682705U) },
		{ Z_Construct_UClass_UMirrorTool, UMirrorTool::StaticClass, TEXT("UMirrorTool"), &Z_Registration_Info_UClass_UMirrorTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorTool), 4001795656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_2709461959(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_MirrorTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
