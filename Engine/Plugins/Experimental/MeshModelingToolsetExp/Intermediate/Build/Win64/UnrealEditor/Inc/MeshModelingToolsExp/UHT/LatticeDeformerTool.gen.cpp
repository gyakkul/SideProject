// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LatticeDeformerTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLatticeDeformerTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerOperatorFactory();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerOperatorFactory_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_ULatticeDeformerToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void ULatticeDeformerToolBuilder::StaticRegisterNativesULatticeDeformerToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatticeDeformerToolBuilder);
	UClass* Z_Construct_UClass_ULatticeDeformerToolBuilder_NoRegister()
	{
		return ULatticeDeformerToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LatticeDeformerTool.h" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatticeDeformerToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::ClassParams = {
		&ULatticeDeformerToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULatticeDeformerToolBuilder()
	{
		if (!Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.OuterSingleton, Z_Construct_UClass_ULatticeDeformerToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULatticeDeformerToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<ULatticeDeformerToolBuilder>()
	{
		return ULatticeDeformerToolBuilder::StaticClass();
	}
	ULatticeDeformerToolBuilder::ULatticeDeformerToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULatticeDeformerToolBuilder);
	ULatticeDeformerToolBuilder::~ULatticeDeformerToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELatticeInterpolationType;
	static UEnum* ELatticeInterpolationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELatticeInterpolationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELatticeInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ELatticeInterpolationType"));
		}
		return Z_Registration_Info_UEnum_ELatticeInterpolationType.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ELatticeInterpolationType>()
	{
		return ELatticeInterpolationType_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::Enumerators[] = {
		{ "ELatticeInterpolationType::Linear", (int64)ELatticeInterpolationType::Linear },
		{ "ELatticeInterpolationType::Cubic", (int64)ELatticeInterpolationType::Cubic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::Enum_MetaDataParams[] = {
		{ "Cubic.Comment", "/** Use tricubic interpolation to get new mesh vertex positions from the lattice */" },
		{ "Cubic.DisplayName", "Cubic" },
		{ "Cubic.Name", "ELatticeInterpolationType::Cubic" },
		{ "Cubic.ToolTip", "Use tricubic interpolation to get new mesh vertex positions from the lattice" },
		{ "Linear.Comment", "/** Use trilinear interpolation to get new mesh vertex positions from the lattice */" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "ELatticeInterpolationType::Linear" },
		{ "Linear.ToolTip", "Use trilinear interpolation to get new mesh vertex positions from the lattice" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"ELatticeInterpolationType",
		"ELatticeInterpolationType",
		Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType()
	{
		if (!Z_Registration_Info_UEnum_ELatticeInterpolationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELatticeInterpolationType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELatticeInterpolationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELatticeDeformerToolAction;
	static UEnum* ELatticeDeformerToolAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELatticeDeformerToolAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELatticeDeformerToolAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("ELatticeDeformerToolAction"));
		}
		return Z_Registration_Info_UEnum_ELatticeDeformerToolAction.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ELatticeDeformerToolAction>()
	{
		return ELatticeDeformerToolAction_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::Enumerators[] = {
		{ "ELatticeDeformerToolAction::NoAction", (int64)ELatticeDeformerToolAction::NoAction },
		{ "ELatticeDeformerToolAction::Constrain", (int64)ELatticeDeformerToolAction::Constrain },
		{ "ELatticeDeformerToolAction::ClearConstraints", (int64)ELatticeDeformerToolAction::ClearConstraints },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::Enum_MetaDataParams[] = {
		{ "ClearConstraints.Name", "ELatticeDeformerToolAction::ClearConstraints" },
		{ "Constrain.Name", "ELatticeDeformerToolAction::Constrain" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "NoAction.Name", "ELatticeDeformerToolAction::NoAction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"ELatticeDeformerToolAction",
		"ELatticeDeformerToolAction",
		Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction()
	{
		if (!Z_Registration_Info_UEnum_ELatticeDeformerToolAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELatticeDeformerToolAction.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_ELatticeDeformerToolAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELatticeDeformerToolAction.InnerSingleton;
	}
	DEFINE_FUNCTION(ULatticeDeformerToolProperties::execClearConstraints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearConstraints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULatticeDeformerToolProperties::execConstrain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Constrain();
		P_NATIVE_END;
	}
	void ULatticeDeformerToolProperties::StaticRegisterNativesULatticeDeformerToolProperties()
	{
		UClass* Class = ULatticeDeformerToolProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearConstraints", &ULatticeDeformerToolProperties::execClearConstraints },
			{ "Constrain", &ULatticeDeformerToolProperties::execConstrain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Deformation" },
		{ "Comment", "/** Clear all constrained lattice points */" },
		{ "DisplayName", "Clear Constraints" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Clear all constrained lattice points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULatticeDeformerToolProperties, nullptr, "ClearConstraints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Deformation" },
		{ "Comment", "/** Constrain selected lattice points */" },
		{ "DisplayName", "Constrain" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Constrain selected lattice points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULatticeDeformerToolProperties, nullptr, "Constrain", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatticeDeformerToolProperties);
	UClass* Z_Construct_UClass_ULatticeDeformerToolProperties_NoRegister()
	{
		return ULatticeDeformerToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_ULatticeDeformerToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAxisResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_XAxisResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YAxisResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_YAxisResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZAxisResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ZAxisResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Padding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InterpolationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeformNormals_MetaData[];
#endif
		static void NewProp_bDeformNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeformNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanChangeResolution_MetaData[];
#endif
		static void NewProp_bCanChangeResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanChangeResolution;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GizmoCoordinateSystem_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoCoordinateSystem_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GizmoCoordinateSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetPivotMode_MetaData[];
#endif
		static void NewProp_bSetPivotMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetPivotMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSoftDeformation_MetaData[];
#endif
		static void NewProp_bSoftDeformation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftDeformation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULatticeDeformerToolProperties_ClearConstraints, "ClearConstraints" }, // 2669073770
		{ &Z_Construct_UFunction_ULatticeDeformerToolProperties_Constrain, "Constrain" }, // 800504654
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LatticeDeformerTool.h" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_XAxisResolution_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "40" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Number of lattice vertices along the X axis */" },
		{ "EditCondition", "bCanChangeResolution" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Number of lattice vertices along the X axis" },
		{ "UIMax", "25" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_XAxisResolution = { "XAxisResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeDeformerToolProperties, XAxisResolution), METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_XAxisResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_XAxisResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_YAxisResolution_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "40" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Number of lattice vertices along the Y axis */" },
		{ "EditCondition", "bCanChangeResolution" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Number of lattice vertices along the Y axis" },
		{ "UIMax", "25" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_YAxisResolution = { "YAxisResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeDeformerToolProperties, YAxisResolution), METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_YAxisResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_YAxisResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_ZAxisResolution_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "40" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Number of lattice vertices along the Z axis */" },
		{ "EditCondition", "bCanChangeResolution" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Number of lattice vertices along the Z axis" },
		{ "UIMax", "25" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_ZAxisResolution = { "ZAxisResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeDeformerToolProperties, ZAxisResolution), METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_ZAxisResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_ZAxisResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/** Relative distance the lattice extends from the mesh */" },
		{ "EditCondition", "bCanChangeResolution" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Relative distance the lattice extends from the mesh" },
		{ "UIMax", "2" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeDeformerToolProperties, Padding), METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_Padding_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Whether to use linear or cubic interpolation to get new mesh vertex positions from the lattice */" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Whether to use linear or cubic interpolation to get new mesh vertex positions from the lattice" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeDeformerToolProperties, InterpolationType), Z_Construct_UEnum_MeshModelingToolsExp_ELatticeInterpolationType, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType_MetaData)) }; // 3557447079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals_MetaData[] = {
		{ "Category", "Interpolation" },
		{ "Comment", "/** Whether to use approximate new vertex normals using the deformer */" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Whether to use approximate new vertex normals using the deformer" },
	};
#endif
	void Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals_SetBit(void* Obj)
	{
		((ULatticeDeformerToolProperties*)Obj)->bDeformNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals = { "bDeformNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULatticeDeformerToolProperties), &Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution_MetaData[] = {
		{ "Comment", "// Not user visible - used to disallow changing the lattice resolution after deformation\n" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Not user visible - used to disallow changing the lattice resolution after deformation" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution_SetBit(void* Obj)
	{
		((ULatticeDeformerToolProperties*)Obj)->bCanChangeResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution = { "bCanChangeResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULatticeDeformerToolProperties), &Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** Whether the gizmo's axes remain aligned with world axes or rotate as the gizmo is transformed */" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Whether the gizmo's axes remain aligned with world axes or rotate as the gizmo is transformed" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem = { "GizmoCoordinateSystem", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeDeformerToolProperties, GizmoCoordinateSystem), Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem_MetaData)) }; // 1958283934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode_MetaData[] = {
		{ "Category", "Gizmo" },
		{ "Comment", "/** If Set Pivot Mode is active, the gizmo can be repositioned without moving the selected lattice points */" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "If Set Pivot Mode is active, the gizmo can be repositioned without moving the selected lattice points" },
	};
#endif
	void Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode_SetBit(void* Obj)
	{
		((ULatticeDeformerToolProperties*)Obj)->bSetPivotMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode = { "bSetPivotMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULatticeDeformerToolProperties), &Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation_MetaData[] = {
		{ "Category", "Deformation" },
		{ "Comment", "/** Whether to use soft deformation of the lattice */" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Whether to use soft deformation of the lattice" },
	};
#endif
	void Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation_SetBit(void* Obj)
	{
		((ULatticeDeformerToolProperties*)Obj)->bSoftDeformation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation = { "bSoftDeformation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULatticeDeformerToolProperties), &Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_XAxisResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_YAxisResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_ZAxisResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_InterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bDeformNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bCanChangeResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_GizmoCoordinateSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSetPivotMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::NewProp_bSoftDeformation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatticeDeformerToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::ClassParams = {
		&ULatticeDeformerToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULatticeDeformerToolProperties()
	{
		if (!Z_Registration_Info_UClass_ULatticeDeformerToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatticeDeformerToolProperties.OuterSingleton, Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULatticeDeformerToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<ULatticeDeformerToolProperties>()
	{
		return ULatticeDeformerToolProperties::StaticClass();
	}
	ULatticeDeformerToolProperties::ULatticeDeformerToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULatticeDeformerToolProperties);
	ULatticeDeformerToolProperties::~ULatticeDeformerToolProperties() {}
	void ULatticeDeformerOperatorFactory::StaticRegisterNativesULatticeDeformerOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatticeDeformerOperatorFactory);
	UClass* Z_Construct_UClass_ULatticeDeformerOperatorFactory_NoRegister()
	{
		return ULatticeDeformerOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatticeDeformerTool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LatticeDeformerTool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LatticeDeformerTool.h" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::NewProp_LatticeDeformerTool_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::NewProp_LatticeDeformerTool = { "LatticeDeformerTool", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeDeformerOperatorFactory, LatticeDeformerTool), Z_Construct_UClass_ULatticeDeformerTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::NewProp_LatticeDeformerTool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::NewProp_LatticeDeformerTool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::NewProp_LatticeDeformerTool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatticeDeformerOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::ClassParams = {
		&ULatticeDeformerOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULatticeDeformerOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.OuterSingleton, Z_Construct_UClass_ULatticeDeformerOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<ULatticeDeformerOperatorFactory>()
	{
		return ULatticeDeformerOperatorFactory::StaticClass();
	}
	ULatticeDeformerOperatorFactory::ULatticeDeformerOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULatticeDeformerOperatorFactory);
	ULatticeDeformerOperatorFactory::~ULatticeDeformerOperatorFactory() {}
	void ULatticeDeformerTool::StaticRegisterNativesULatticeDeformerTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULatticeDeformerTool);
	UClass* Z_Construct_UClass_ULatticeDeformerTool_NoRegister()
	{
		return ULatticeDeformerTool::StaticClass();
	}
	struct Z_Construct_UClass_ULatticeDeformerTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLatticeDeformed_MetaData[];
#endif
		static void NewProp_bLatticeDeformed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLatticeDeformed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULatticeDeformerTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Deform a mesh using a regular hexahedral lattice */" },
		{ "IncludePath", "LatticeDeformerTool.h" },
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
		{ "ToolTip", "Deform a mesh using a regular hexahedral lattice" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_ControlPointsMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_ControlPointsMechanic = { "ControlPointsMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeDeformerTool, ControlPointsMechanic), Z_Construct_UClass_ULatticeControlPointsMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_ControlPointsMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_ControlPointsMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeDeformerTool, Settings), Z_Construct_UClass_ULatticeDeformerToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULatticeDeformerTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Preview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed_MetaData[] = {
		{ "ModuleRelativePath", "Public/LatticeDeformerTool.h" },
	};
#endif
	void Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed_SetBit(void* Obj)
	{
		((ULatticeDeformerTool*)Obj)->bLatticeDeformed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed = { "bLatticeDeformed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULatticeDeformerTool), &Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULatticeDeformerTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_ControlPointsMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_Preview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULatticeDeformerTool_Statics::NewProp_bLatticeDeformed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULatticeDeformerTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatticeDeformerTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULatticeDeformerTool_Statics::ClassParams = {
		&ULatticeDeformerTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULatticeDeformerTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULatticeDeformerTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULatticeDeformerTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULatticeDeformerTool()
	{
		if (!Z_Registration_Info_UClass_ULatticeDeformerTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULatticeDeformerTool.OuterSingleton, Z_Construct_UClass_ULatticeDeformerTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULatticeDeformerTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<ULatticeDeformerTool>()
	{
		return ULatticeDeformerTool::StaticClass();
	}
	ULatticeDeformerTool::ULatticeDeformerTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULatticeDeformerTool);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics::EnumInfo[] = {
		{ ELatticeInterpolationType_StaticEnum, TEXT("ELatticeInterpolationType"), &Z_Registration_Info_UEnum_ELatticeInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3557447079U) },
		{ ELatticeDeformerToolAction_StaticEnum, TEXT("ELatticeDeformerToolAction"), &Z_Registration_Info_UEnum_ELatticeDeformerToolAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3534027606U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULatticeDeformerToolBuilder, ULatticeDeformerToolBuilder::StaticClass, TEXT("ULatticeDeformerToolBuilder"), &Z_Registration_Info_UClass_ULatticeDeformerToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatticeDeformerToolBuilder), 283381570U) },
		{ Z_Construct_UClass_ULatticeDeformerToolProperties, ULatticeDeformerToolProperties::StaticClass, TEXT("ULatticeDeformerToolProperties"), &Z_Registration_Info_UClass_ULatticeDeformerToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatticeDeformerToolProperties), 3810002350U) },
		{ Z_Construct_UClass_ULatticeDeformerOperatorFactory, ULatticeDeformerOperatorFactory::StaticClass, TEXT("ULatticeDeformerOperatorFactory"), &Z_Registration_Info_UClass_ULatticeDeformerOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatticeDeformerOperatorFactory), 2732767948U) },
		{ Z_Construct_UClass_ULatticeDeformerTool, ULatticeDeformerTool::StaticClass, TEXT("ULatticeDeformerTool"), &Z_Registration_Info_UClass_ULatticeDeformerTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULatticeDeformerTool), 348118447U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_1813627689(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_LatticeDeformerTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
