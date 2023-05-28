// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseTools/BaseCreateFromSelectedTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCreateFromSelectedTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedTool_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTransformInputsToolProperties();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UTransformInputsToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UBaseCreateFromSelectedToolBuilder::StaticRegisterNativesUBaseCreateFromSelectedToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCreateFromSelectedToolBuilder);
	UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder_NoRegister()
	{
		return UBaseCreateFromSelectedToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ToolBuilder for UBaseCreateFromSelectedTool\n */" },
		{ "IncludePath", "BaseTools/BaseCreateFromSelectedTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
		{ "ToolTip", "ToolBuilder for UBaseCreateFromSelectedTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCreateFromSelectedToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder_Statics::ClassParams = {
		&UBaseCreateFromSelectedToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UBaseCreateFromSelectedToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCreateFromSelectedToolBuilder.OuterSingleton, Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseCreateFromSelectedToolBuilder.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UBaseCreateFromSelectedToolBuilder>()
	{
		return UBaseCreateFromSelectedToolBuilder::StaticClass();
	}
	UBaseCreateFromSelectedToolBuilder::UBaseCreateFromSelectedToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCreateFromSelectedToolBuilder);
	UBaseCreateFromSelectedToolBuilder::~UBaseCreateFromSelectedToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBaseCreateFromSelectedTargetType;
	static UEnum* EBaseCreateFromSelectedTargetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBaseCreateFromSelectedTargetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBaseCreateFromSelectedTargetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType, (UObject*)Z_Construct_UPackage__Script_ModelingComponents(), TEXT("EBaseCreateFromSelectedTargetType"));
		}
		return Z_Registration_Info_UEnum_EBaseCreateFromSelectedTargetType.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EBaseCreateFromSelectedTargetType>()
	{
		return EBaseCreateFromSelectedTargetType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType_Statics::Enumerators[] = {
		{ "EBaseCreateFromSelectedTargetType::NewObject", (int64)EBaseCreateFromSelectedTargetType::NewObject },
		{ "EBaseCreateFromSelectedTargetType::FirstInputObject", (int64)EBaseCreateFromSelectedTargetType::FirstInputObject },
		{ "EBaseCreateFromSelectedTargetType::LastInputObject", (int64)EBaseCreateFromSelectedTargetType::LastInputObject },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType_Statics::Enum_MetaDataParams[] = {
		{ "FirstInputObject.Comment", "/** Write to the first object in the input selection. */" },
		{ "FirstInputObject.Name", "EBaseCreateFromSelectedTargetType::FirstInputObject" },
		{ "FirstInputObject.ToolTip", "Write to the first object in the input selection." },
		{ "LastInputObject.Comment", "/** Write to the last object in the input selection. */" },
		{ "LastInputObject.Name", "EBaseCreateFromSelectedTargetType::LastInputObject" },
		{ "LastInputObject.ToolTip", "Write to the last object in the input selection." },
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
		{ "NewObject.Comment", "/** Create and write to a new object with a given name. */" },
		{ "NewObject.Name", "EBaseCreateFromSelectedTargetType::NewObject" },
		{ "NewObject.ToolTip", "Create and write to a new object with a given name." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingComponents,
		nullptr,
		"EBaseCreateFromSelectedTargetType",
		"EBaseCreateFromSelectedTargetType",
		Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType()
	{
		if (!Z_Registration_Info_UEnum_EBaseCreateFromSelectedTargetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBaseCreateFromSelectedTargetType.InnerSingleton, Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBaseCreateFromSelectedTargetType.InnerSingleton;
	}
	void UBaseCreateFromSelectedHandleSourceProperties::StaticRegisterNativesUBaseCreateFromSelectedHandleSourceProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCreateFromSelectedHandleSourceProperties);
	UClass* Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_NoRegister()
	{
		return UBaseCreateFromSelectedHandleSourceProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OutputWriteTo_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputWriteTo_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputWriteTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputNewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNewName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputExistingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputExistingName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnAcceptHandleSourcesProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseTools/BaseCreateFromSelectedTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputWriteTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputWriteTo_MetaData[] = {
		{ "Category", "OutputObject" },
		{ "Comment", "/** Defines the object the tool output is written to. */" },
		{ "DisplayName", "Write To" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Defines the object the tool output is written to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputWriteTo = { "OutputWriteTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCreateFromSelectedHandleSourceProperties, OutputWriteTo), Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType, METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputWriteTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputWriteTo_MetaData)) }; // 468756563
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputNewName_MetaData[] = {
		{ "Category", "OutputObject" },
		{ "Comment", "/** Base name of the newly generated object to which the output is written to. */" },
		{ "DisplayName", "Name" },
		{ "EditCondition", "OutputWriteTo == EBaseCreateFromSelectedTargetType::NewObject" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Base name of the newly generated object to which the output is written to." },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputNewName = { "OutputNewName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCreateFromSelectedHandleSourceProperties, OutputNewName), METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputNewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputNewName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputExistingName_MetaData[] = {
		{ "Category", "OutputObject" },
		{ "Comment", "/** Name of the existing object to which the output is written to. */" },
		{ "DisplayName", "Name" },
		{ "EditCondition", "OutputWriteTo != EBaseCreateFromSelectedTargetType::NewObject" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Name of the existing object to which the output is written to." },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputExistingName = { "OutputExistingName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCreateFromSelectedHandleSourceProperties, OutputExistingName), METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputExistingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputExistingName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputWriteTo_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputWriteTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputNewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::NewProp_OutputExistingName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCreateFromSelectedHandleSourceProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::ClassParams = {
		&UBaseCreateFromSelectedHandleSourceProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties()
	{
		if (!Z_Registration_Info_UClass_UBaseCreateFromSelectedHandleSourceProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCreateFromSelectedHandleSourceProperties.OuterSingleton, Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseCreateFromSelectedHandleSourceProperties.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UBaseCreateFromSelectedHandleSourceProperties>()
	{
		return UBaseCreateFromSelectedHandleSourceProperties::StaticClass();
	}
	UBaseCreateFromSelectedHandleSourceProperties::UBaseCreateFromSelectedHandleSourceProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCreateFromSelectedHandleSourceProperties);
	UBaseCreateFromSelectedHandleSourceProperties::~UBaseCreateFromSelectedHandleSourceProperties() {}
	void UTransformInputsToolProperties::StaticRegisterNativesUTransformInputsToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransformInputsToolProperties);
	UClass* Z_Construct_UClass_UTransformInputsToolProperties_NoRegister()
	{
		return UTransformInputsToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UTransformInputsToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransformGizmo_MetaData[];
#endif
		static void NewProp_bShowTransformGizmo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransformGizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransformInputsToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformInputsToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Properties of UI to adjust input meshes\n */" },
		{ "IncludePath", "BaseTools/BaseCreateFromSelectedTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
		{ "ToolTip", "Properties of UI to adjust input meshes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransformInputsToolProperties_Statics::NewProp_bShowTransformGizmo_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** Show transform gizmo in the viewport to allow changing translation, rotation and scale of input meshes. */" },
		{ "DisplayName", "Show Gizmo" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
		{ "ToolTip", "Show transform gizmo in the viewport to allow changing translation, rotation and scale of input meshes." },
	};
#endif
	void Z_Construct_UClass_UTransformInputsToolProperties_Statics::NewProp_bShowTransformGizmo_SetBit(void* Obj)
	{
		((UTransformInputsToolProperties*)Obj)->bShowTransformGizmo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTransformInputsToolProperties_Statics::NewProp_bShowTransformGizmo = { "bShowTransformGizmo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTransformInputsToolProperties), &Z_Construct_UClass_UTransformInputsToolProperties_Statics::NewProp_bShowTransformGizmo_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTransformInputsToolProperties_Statics::NewProp_bShowTransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformInputsToolProperties_Statics::NewProp_bShowTransformGizmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTransformInputsToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTransformInputsToolProperties_Statics::NewProp_bShowTransformGizmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransformInputsToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransformInputsToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransformInputsToolProperties_Statics::ClassParams = {
		&UTransformInputsToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTransformInputsToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTransformInputsToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTransformInputsToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransformInputsToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransformInputsToolProperties()
	{
		if (!Z_Registration_Info_UClass_UTransformInputsToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransformInputsToolProperties.OuterSingleton, Z_Construct_UClass_UTransformInputsToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransformInputsToolProperties.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UTransformInputsToolProperties>()
	{
		return UTransformInputsToolProperties::StaticClass();
	}
	UTransformInputsToolProperties::UTransformInputsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransformInputsToolProperties);
	UTransformInputsToolProperties::~UTransformInputsToolProperties() {}
	void UBaseCreateFromSelectedTool::StaticRegisterNativesUBaseCreateFromSelectedTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCreateFromSelectedTool);
	UClass* Z_Construct_UClass_UBaseCreateFromSelectedTool_NoRegister()
	{
		return UBaseCreateFromSelectedTool::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputTypeProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleSourcesProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandleSourcesProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Preview;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformProxies;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformGizmos;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UBaseCreateFromSelectedTool is a base Tool (must be subclassed) \n * that provides support for common functionality in tools that create a new mesh from a selection of one or more existing meshes\n */" },
		{ "IncludePath", "BaseTools/BaseCreateFromSelectedTool.h" },
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
		{ "ToolTip", "UBaseCreateFromSelectedTool is a base Tool (must be subclassed)\nthat provides support for common functionality in tools that create a new mesh from a selection of one or more existing meshes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProperties = { "TransformProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCreateFromSelectedTool, TransformProperties), Z_Construct_UClass_UTransformInputsToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCreateFromSelectedTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_OutputTypeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_OutputTypeProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_HandleSourcesProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_HandleSourcesProperties = { "HandleSourcesProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCreateFromSelectedTool, HandleSourcesProperties), Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_HandleSourcesProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_HandleSourcesProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_Preview_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCreateFromSelectedTool, Preview), Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_Preview_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProxies_Inner = { "TransformProxies", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProxies_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProxies = { "TransformProxies", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCreateFromSelectedTool, TransformProxies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProxies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProxies_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformGizmos_Inner = { "TransformGizmos", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformGizmos_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseTools/BaseCreateFromSelectedTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformGizmos = { "TransformGizmos", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseCreateFromSelectedTool, TransformGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformGizmos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformGizmos_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_OutputTypeProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_HandleSourcesProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_Preview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProxies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformProxies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformGizmos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::NewProp_TransformGizmos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCreateFromSelectedTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::ClassParams = {
		&UBaseCreateFromSelectedTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCreateFromSelectedTool()
	{
		if (!Z_Registration_Info_UClass_UBaseCreateFromSelectedTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCreateFromSelectedTool.OuterSingleton, Z_Construct_UClass_UBaseCreateFromSelectedTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseCreateFromSelectedTool.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UBaseCreateFromSelectedTool>()
	{
		return UBaseCreateFromSelectedTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCreateFromSelectedTool);
	UBaseCreateFromSelectedTool::~UBaseCreateFromSelectedTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseCreateFromSelectedTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseCreateFromSelectedTool_h_Statics::EnumInfo[] = {
		{ EBaseCreateFromSelectedTargetType_StaticEnum, TEXT("EBaseCreateFromSelectedTargetType"), &Z_Registration_Info_UEnum_EBaseCreateFromSelectedTargetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 468756563U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseCreateFromSelectedTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCreateFromSelectedToolBuilder, UBaseCreateFromSelectedToolBuilder::StaticClass, TEXT("UBaseCreateFromSelectedToolBuilder"), &Z_Registration_Info_UClass_UBaseCreateFromSelectedToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCreateFromSelectedToolBuilder), 1881859663U) },
		{ Z_Construct_UClass_UBaseCreateFromSelectedHandleSourceProperties, UBaseCreateFromSelectedHandleSourceProperties::StaticClass, TEXT("UBaseCreateFromSelectedHandleSourceProperties"), &Z_Registration_Info_UClass_UBaseCreateFromSelectedHandleSourceProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCreateFromSelectedHandleSourceProperties), 4125529805U) },
		{ Z_Construct_UClass_UTransformInputsToolProperties, UTransformInputsToolProperties::StaticClass, TEXT("UTransformInputsToolProperties"), &Z_Registration_Info_UClass_UTransformInputsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransformInputsToolProperties), 3103154574U) },
		{ Z_Construct_UClass_UBaseCreateFromSelectedTool, UBaseCreateFromSelectedTool::StaticClass, TEXT("UBaseCreateFromSelectedTool"), &Z_Registration_Info_UClass_UBaseCreateFromSelectedTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCreateFromSelectedTool), 3145517702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseCreateFromSelectedTool_h_848560496(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseCreateFromSelectedTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseCreateFromSelectedTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseCreateFromSelectedTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_BaseTools_BaseCreateFromSelectedTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
