// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigHierarchyDefines() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigSetKey();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigBoneType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlAnimationType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlAxis();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlValueType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigControlVisibility();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigEvent();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigHierarchyNotification();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigMetadataType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlLimitEnabled();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlModifiedContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlValue();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlValueStorage();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigEventContext();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigElementType;
	static UEnum* ERigElementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigElementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigElementType"));
		}
		return Z_Registration_Info_UEnum_ERigElementType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigElementType>()
	{
		return ERigElementType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigElementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigElementType_Statics::Enumerators[] = {
		{ "ERigElementType::None", (int64)ERigElementType::None },
		{ "ERigElementType::Bone", (int64)ERigElementType::Bone },
		{ "ERigElementType::Null", (int64)ERigElementType::Null },
		{ "ERigElementType::Space", (int64)ERigElementType::Space },
		{ "ERigElementType::Control", (int64)ERigElementType::Control },
		{ "ERigElementType::Curve", (int64)ERigElementType::Curve },
		{ "ERigElementType::RigidBody", (int64)ERigElementType::RigidBody },
		{ "ERigElementType::Reference", (int64)ERigElementType::Reference },
		{ "ERigElementType::Last", (int64)ERigElementType::Last },
		{ "ERigElementType::All", (int64)ERigElementType::All },
		{ "ERigElementType::ToResetAfterConstructionEvent", (int64)ERigElementType::ToResetAfterConstructionEvent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigElementType_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "ERigElementType::All" },
		{ "BlueprintType", "true" },
		{ "Bone.Name", "ERigElementType::Bone" },
		{ "Comment", "/* \n * This is rig element types that we support\n * This can be used as a mask so supported as a bitfield\n */" },
		{ "Control.Name", "ERigElementType::Control" },
		{ "Curve.Name", "ERigElementType::Curve" },
		{ "Last.Hidden", "" },
		{ "Last.Name", "ERigElementType::Last" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "None.Name", "ERigElementType::None" },
		{ "Null.Name", "ERigElementType::Null" },
		{ "Reference.Name", "ERigElementType::Reference" },
		{ "RigidBody.Hidden", "" },
		{ "RigidBody.Name", "ERigElementType::RigidBody" },
		{ "Space.Hidden", "" },
		{ "Space.Name", "ERigElementType::Space" },
		{ "ToolTip", "* This is rig element types that we support\n* This can be used as a mask so supported as a bitfield" },
		{ "ToResetAfterConstructionEvent.Hidden", "" },
		{ "ToResetAfterConstructionEvent.Name", "ERigElementType::ToResetAfterConstructionEvent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigElementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigElementType",
		"ERigElementType",
		Z_Construct_UEnum_ControlRig_ERigElementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigElementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigElementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigElementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigElementType()
	{
		if (!Z_Registration_Info_UEnum_ERigElementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigElementType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigElementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigElementType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigBoneType;
	static UEnum* ERigBoneType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigBoneType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigBoneType"));
		}
		return Z_Registration_Info_UEnum_ERigBoneType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigBoneType>()
	{
		return ERigBoneType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigBoneType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::Enumerators[] = {
		{ "ERigBoneType::Imported", (int64)ERigBoneType::Imported },
		{ "ERigBoneType::User", (int64)ERigBoneType::User },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Imported.Name", "ERigBoneType::Imported" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "User.Name", "ERigBoneType::User" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigBoneType",
		"ERigBoneType",
		Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigBoneType()
	{
		if (!Z_Registration_Info_UEnum_ERigBoneType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigBoneType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigBoneType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigBoneType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigMetadataType;
	static UEnum* ERigMetadataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigMetadataType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigMetadataType"));
		}
		return Z_Registration_Info_UEnum_ERigMetadataType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigMetadataType>()
	{
		return ERigMetadataType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::Enumerators[] = {
		{ "ERigMetadataType::Bool", (int64)ERigMetadataType::Bool },
		{ "ERigMetadataType::BoolArray", (int64)ERigMetadataType::BoolArray },
		{ "ERigMetadataType::Float", (int64)ERigMetadataType::Float },
		{ "ERigMetadataType::FloatArray", (int64)ERigMetadataType::FloatArray },
		{ "ERigMetadataType::Int32", (int64)ERigMetadataType::Int32 },
		{ "ERigMetadataType::Int32Array", (int64)ERigMetadataType::Int32Array },
		{ "ERigMetadataType::Name", (int64)ERigMetadataType::Name },
		{ "ERigMetadataType::NameArray", (int64)ERigMetadataType::NameArray },
		{ "ERigMetadataType::Vector", (int64)ERigMetadataType::Vector },
		{ "ERigMetadataType::VectorArray", (int64)ERigMetadataType::VectorArray },
		{ "ERigMetadataType::Rotator", (int64)ERigMetadataType::Rotator },
		{ "ERigMetadataType::RotatorArray", (int64)ERigMetadataType::RotatorArray },
		{ "ERigMetadataType::Quat", (int64)ERigMetadataType::Quat },
		{ "ERigMetadataType::QuatArray", (int64)ERigMetadataType::QuatArray },
		{ "ERigMetadataType::Transform", (int64)ERigMetadataType::Transform },
		{ "ERigMetadataType::TransformArray", (int64)ERigMetadataType::TransformArray },
		{ "ERigMetadataType::LinearColor", (int64)ERigMetadataType::LinearColor },
		{ "ERigMetadataType::LinearColorArray", (int64)ERigMetadataType::LinearColorArray },
		{ "ERigMetadataType::RigElementKey", (int64)ERigMetadataType::RigElementKey },
		{ "ERigMetadataType::RigElementKeyArray", (int64)ERigMetadataType::RigElementKeyArray },
		{ "ERigMetadataType::Invalid", (int64)ERigMetadataType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "ERigMetadataType::Bool" },
		{ "BoolArray.Name", "ERigMetadataType::BoolArray" },
		{ "Comment", "/* \n * The type of meta data stored on an element\n */" },
		{ "Float.Name", "ERigMetadataType::Float" },
		{ "FloatArray.Name", "ERigMetadataType::FloatArray" },
		{ "Int32.Name", "ERigMetadataType::Int32" },
		{ "Int32Array.Name", "ERigMetadataType::Int32Array" },
		{ "Invalid.Comment", "/** MAX - invalid */" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ERigMetadataType::Invalid" },
		{ "Invalid.ToolTip", "MAX - invalid" },
		{ "LinearColor.Name", "ERigMetadataType::LinearColor" },
		{ "LinearColorArray.Name", "ERigMetadataType::LinearColorArray" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "Name.Name", "ERigMetadataType::Name" },
		{ "NameArray.Name", "ERigMetadataType::NameArray" },
		{ "Quat.Name", "ERigMetadataType::Quat" },
		{ "QuatArray.Name", "ERigMetadataType::QuatArray" },
		{ "RigElementKey.Name", "ERigMetadataType::RigElementKey" },
		{ "RigElementKeyArray.Name", "ERigMetadataType::RigElementKeyArray" },
		{ "Rotator.Name", "ERigMetadataType::Rotator" },
		{ "RotatorArray.Name", "ERigMetadataType::RotatorArray" },
		{ "ToolTip", "* The type of meta data stored on an element" },
		{ "Transform.Name", "ERigMetadataType::Transform" },
		{ "TransformArray.Name", "ERigMetadataType::TransformArray" },
		{ "Vector.Name", "ERigMetadataType::Vector" },
		{ "VectorArray.Name", "ERigMetadataType::VectorArray" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigMetadataType",
		"ERigMetadataType",
		Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigMetadataType()
	{
		if (!Z_Registration_Info_UEnum_ERigMetadataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigMetadataType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigMetadataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigMetadataType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigHierarchyNotification;
	static UEnum* ERigHierarchyNotification_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigHierarchyNotification, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigHierarchyNotification"));
		}
		return Z_Registration_Info_UEnum_ERigHierarchyNotification.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigHierarchyNotification>()
	{
		return ERigHierarchyNotification_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::Enumerators[] = {
		{ "ERigHierarchyNotification::ElementAdded", (int64)ERigHierarchyNotification::ElementAdded },
		{ "ERigHierarchyNotification::ElementRemoved", (int64)ERigHierarchyNotification::ElementRemoved },
		{ "ERigHierarchyNotification::ElementRenamed", (int64)ERigHierarchyNotification::ElementRenamed },
		{ "ERigHierarchyNotification::ElementSelected", (int64)ERigHierarchyNotification::ElementSelected },
		{ "ERigHierarchyNotification::ElementDeselected", (int64)ERigHierarchyNotification::ElementDeselected },
		{ "ERigHierarchyNotification::ParentChanged", (int64)ERigHierarchyNotification::ParentChanged },
		{ "ERigHierarchyNotification::HierarchyReset", (int64)ERigHierarchyNotification::HierarchyReset },
		{ "ERigHierarchyNotification::ControlSettingChanged", (int64)ERigHierarchyNotification::ControlSettingChanged },
		{ "ERigHierarchyNotification::ControlVisibilityChanged", (int64)ERigHierarchyNotification::ControlVisibilityChanged },
		{ "ERigHierarchyNotification::ControlDrivenListChanged", (int64)ERigHierarchyNotification::ControlDrivenListChanged },
		{ "ERigHierarchyNotification::ControlShapeTransformChanged", (int64)ERigHierarchyNotification::ControlShapeTransformChanged },
		{ "ERigHierarchyNotification::ParentWeightsChanged", (int64)ERigHierarchyNotification::ParentWeightsChanged },
		{ "ERigHierarchyNotification::InteractionBracketOpened", (int64)ERigHierarchyNotification::InteractionBracketOpened },
		{ "ERigHierarchyNotification::InteractionBracketClosed", (int64)ERigHierarchyNotification::InteractionBracketClosed },
		{ "ERigHierarchyNotification::ElementReordered", (int64)ERigHierarchyNotification::ElementReordered },
		{ "ERigHierarchyNotification::Max", (int64)ERigHierarchyNotification::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::Enum_MetaDataParams[] = {
		{ "ControlDrivenListChanged.Name", "ERigHierarchyNotification::ControlDrivenListChanged" },
		{ "ControlSettingChanged.Name", "ERigHierarchyNotification::ControlSettingChanged" },
		{ "ControlShapeTransformChanged.Name", "ERigHierarchyNotification::ControlShapeTransformChanged" },
		{ "ControlVisibilityChanged.Name", "ERigHierarchyNotification::ControlVisibilityChanged" },
		{ "ElementAdded.Name", "ERigHierarchyNotification::ElementAdded" },
		{ "ElementDeselected.Name", "ERigHierarchyNotification::ElementDeselected" },
		{ "ElementRemoved.Name", "ERigHierarchyNotification::ElementRemoved" },
		{ "ElementRenamed.Name", "ERigHierarchyNotification::ElementRenamed" },
		{ "ElementReordered.Name", "ERigHierarchyNotification::ElementReordered" },
		{ "ElementSelected.Name", "ERigHierarchyNotification::ElementSelected" },
		{ "HierarchyReset.Name", "ERigHierarchyNotification::HierarchyReset" },
		{ "InteractionBracketClosed.Name", "ERigHierarchyNotification::InteractionBracketClosed" },
		{ "InteractionBracketOpened.Name", "ERigHierarchyNotification::InteractionBracketOpened" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigHierarchyNotification::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "ParentChanged.Name", "ERigHierarchyNotification::ParentChanged" },
		{ "ParentWeightsChanged.Name", "ERigHierarchyNotification::ParentWeightsChanged" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigHierarchyNotification",
		"ERigHierarchyNotification",
		Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigHierarchyNotification()
	{
		if (!Z_Registration_Info_UEnum_ERigHierarchyNotification.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigHierarchyNotification.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigHierarchyNotification_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigHierarchyNotification.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigEvent;
	static UEnum* ERigEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigEvent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigEvent"));
		}
		return Z_Registration_Info_UEnum_ERigEvent.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigEvent>()
	{
		return ERigEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigEvent_Statics::Enumerators[] = {
		{ "ERigEvent::None", (int64)ERigEvent::None },
		{ "ERigEvent::RequestAutoKey", (int64)ERigEvent::RequestAutoKey },
		{ "ERigEvent::OpenUndoBracket", (int64)ERigEvent::OpenUndoBracket },
		{ "ERigEvent::CloseUndoBracket", (int64)ERigEvent::CloseUndoBracket },
		{ "ERigEvent::Max", (int64)ERigEvent::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigEvent_Statics::Enum_MetaDataParams[] = {
		{ "CloseUndoBracket.Comment", "/** Request to close an Undo bracket in the client */" },
		{ "CloseUndoBracket.Name", "ERigEvent::CloseUndoBracket" },
		{ "CloseUndoBracket.ToolTip", "Request to close an Undo bracket in the client" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigEvent::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "None.Comment", "/** Invalid event */" },
		{ "None.Name", "ERigEvent::None" },
		{ "None.ToolTip", "Invalid event" },
		{ "OpenUndoBracket.Comment", "/** Request to open an Undo bracket in the client */" },
		{ "OpenUndoBracket.Name", "ERigEvent::OpenUndoBracket" },
		{ "OpenUndoBracket.ToolTip", "Request to open an Undo bracket in the client" },
		{ "RequestAutoKey.Comment", "/** Request to Auto-Key the Control in Sequencer */" },
		{ "RequestAutoKey.Name", "ERigEvent::RequestAutoKey" },
		{ "RequestAutoKey.ToolTip", "Request to Auto-Key the Control in Sequencer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigEvent",
		"ERigEvent",
		Z_Construct_UEnum_ControlRig_ERigEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigEvent()
	{
		if (!Z_Registration_Info_UEnum_ERigEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigEvent.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigEvent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigSetKey;
	static UEnum* EControlRigSetKey_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigSetKey, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigSetKey"));
		}
		return Z_Registration_Info_UEnum_EControlRigSetKey.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigSetKey>()
	{
		return EControlRigSetKey_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::Enumerators[] = {
		{ "EControlRigSetKey::DoNotCare", (int64)EControlRigSetKey::DoNotCare },
		{ "EControlRigSetKey::Always", (int64)EControlRigSetKey::Always },
		{ "EControlRigSetKey::Never", (int64)EControlRigSetKey::Never },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::Enum_MetaDataParams[] = {
		{ "Always.Comment", "//Don't care if a key is set or not, may get set, say if auto key is on somewhere.\n" },
		{ "Always.Name", "EControlRigSetKey::Always" },
		{ "Always.ToolTip", "Don't care if a key is set or not, may get set, say if auto key is on somewhere." },
		{ "Comment", "/** When setting control values what to do with regards to setting key.*/" },
		{ "DoNotCare.Name", "EControlRigSetKey::DoNotCare" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "Never.Comment", "//Always set a key here\n" },
		{ "Never.Name", "EControlRigSetKey::Never" },
		{ "Never.ToolTip", "Always set a key here" },
		{ "ToolTip", "When setting control values what to do with regards to setting key." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigSetKey",
		"EControlRigSetKey",
		Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigSetKey()
	{
		if (!Z_Registration_Info_UEnum_EControlRigSetKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigSetKey.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigSetKey_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigSetKey.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlType;
	static UEnum* ERigControlType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigControlType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigControlType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlType"));
		}
		return Z_Registration_Info_UEnum_ERigControlType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlType>()
	{
		return ERigControlType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigControlType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigControlType_Statics::Enumerators[] = {
		{ "ERigControlType::Bool", (int64)ERigControlType::Bool },
		{ "ERigControlType::Float", (int64)ERigControlType::Float },
		{ "ERigControlType::Integer", (int64)ERigControlType::Integer },
		{ "ERigControlType::Vector2D", (int64)ERigControlType::Vector2D },
		{ "ERigControlType::Position", (int64)ERigControlType::Position },
		{ "ERigControlType::Scale", (int64)ERigControlType::Scale },
		{ "ERigControlType::Rotator", (int64)ERigControlType::Rotator },
		{ "ERigControlType::Transform", (int64)ERigControlType::Transform },
		{ "ERigControlType::TransformNoScale", (int64)ERigControlType::TransformNoScale },
		{ "ERigControlType::EulerTransform", (int64)ERigControlType::EulerTransform },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigControlType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Name", "ERigControlType::Bool" },
		{ "EulerTransform.Name", "ERigControlType::EulerTransform" },
		{ "Float.Name", "ERigControlType::Float" },
		{ "Integer.Name", "ERigControlType::Integer" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "Position.Name", "ERigControlType::Position" },
		{ "Rotator.Name", "ERigControlType::Rotator" },
		{ "Scale.Name", "ERigControlType::Scale" },
		{ "Transform.Hidden", "" },
		{ "Transform.Name", "ERigControlType::Transform" },
		{ "TransformNoScale.Hidden", "" },
		{ "TransformNoScale.Name", "ERigControlType::TransformNoScale" },
		{ "Vector2D.Name", "ERigControlType::Vector2D" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigControlType",
		"ERigControlType",
		Z_Construct_UEnum_ControlRig_ERigControlType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigControlType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigControlType()
	{
		if (!Z_Registration_Info_UEnum_ERigControlType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigControlType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlAnimationType;
	static UEnum* ERigControlAnimationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAnimationType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlAnimationType"));
		}
		return Z_Registration_Info_UEnum_ERigControlAnimationType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlAnimationType>()
	{
		return ERigControlAnimationType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::Enumerators[] = {
		{ "ERigControlAnimationType::AnimationControl", (int64)ERigControlAnimationType::AnimationControl },
		{ "ERigControlAnimationType::AnimationChannel", (int64)ERigControlAnimationType::AnimationChannel },
		{ "ERigControlAnimationType::ProxyControl", (int64)ERigControlAnimationType::ProxyControl },
		{ "ERigControlAnimationType::VisualCue", (int64)ERigControlAnimationType::VisualCue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::Enum_MetaDataParams[] = {
		{ "AnimationChannel.Comment", "// An animation channel without a 3d shape\n" },
		{ "AnimationChannel.Name", "ERigControlAnimationType::AnimationChannel" },
		{ "AnimationChannel.ToolTip", "An animation channel without a 3d shape" },
		{ "AnimationControl.Comment", "// A visible, animatable control.\n" },
		{ "AnimationControl.Name", "ERigControlAnimationType::AnimationControl" },
		{ "AnimationControl.ToolTip", "A visible, animatable control." },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "ProxyControl.Comment", "// A control to drive other controls,\n// not animatable in sequencer.\n" },
		{ "ProxyControl.Name", "ERigControlAnimationType::ProxyControl" },
		{ "ProxyControl.ToolTip", "A control to drive other controls,\nnot animatable in sequencer." },
		{ "VisualCue.Comment", "// Visual feedback only - the control is\n// neither animatable nor selectable.\n" },
		{ "VisualCue.Name", "ERigControlAnimationType::VisualCue" },
		{ "VisualCue.ToolTip", "Visual feedback only - the control is\nneither animatable nor selectable." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigControlAnimationType",
		"ERigControlAnimationType",
		Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigControlAnimationType()
	{
		if (!Z_Registration_Info_UEnum_ERigControlAnimationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlAnimationType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlAnimationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigControlAnimationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlValueType;
	static UEnum* ERigControlValueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlValueType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlValueType"));
		}
		return Z_Registration_Info_UEnum_ERigControlValueType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlValueType>()
	{
		return ERigControlValueType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::Enumerators[] = {
		{ "ERigControlValueType::Initial", (int64)ERigControlValueType::Initial },
		{ "ERigControlValueType::Current", (int64)ERigControlValueType::Current },
		{ "ERigControlValueType::Minimum", (int64)ERigControlValueType::Minimum },
		{ "ERigControlValueType::Maximum", (int64)ERigControlValueType::Maximum },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Current.Name", "ERigControlValueType::Current" },
		{ "Initial.Name", "ERigControlValueType::Initial" },
		{ "Maximum.Name", "ERigControlValueType::Maximum" },
		{ "Minimum.Name", "ERigControlValueType::Minimum" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigControlValueType",
		"ERigControlValueType",
		Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigControlValueType()
	{
		if (!Z_Registration_Info_UEnum_ERigControlValueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlValueType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlValueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigControlValueType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlVisibility;
	static UEnum* ERigControlVisibility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlVisibility, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlVisibility"));
		}
		return Z_Registration_Info_UEnum_ERigControlVisibility.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlVisibility>()
	{
		return ERigControlVisibility_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::Enumerators[] = {
		{ "ERigControlVisibility::UserDefined", (int64)ERigControlVisibility::UserDefined },
		{ "ERigControlVisibility::BasedOnSelection", (int64)ERigControlVisibility::BasedOnSelection },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::Enum_MetaDataParams[] = {
		{ "BasedOnSelection.Comment", "// Visibility Controlled by the selection of driven controls\n" },
		{ "BasedOnSelection.Name", "ERigControlVisibility::BasedOnSelection" },
		{ "BasedOnSelection.ToolTip", "Visibility Controlled by the selection of driven controls" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "UserDefined.Comment", "// Visibility controlled by the graph\n" },
		{ "UserDefined.Name", "ERigControlVisibility::UserDefined" },
		{ "UserDefined.ToolTip", "Visibility controlled by the graph" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigControlVisibility",
		"ERigControlVisibility",
		Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigControlVisibility()
	{
		if (!Z_Registration_Info_UEnum_ERigControlVisibility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlVisibility.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlVisibility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigControlVisibility.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigControlAxis;
	static UEnum* ERigControlAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigControlAxis, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigControlAxis"));
		}
		return Z_Registration_Info_UEnum_ERigControlAxis.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigControlAxis>()
	{
		return ERigControlAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::Enumerators[] = {
		{ "ERigControlAxis::X", (int64)ERigControlAxis::X },
		{ "ERigControlAxis::Y", (int64)ERigControlAxis::Y },
		{ "ERigControlAxis::Z", (int64)ERigControlAxis::Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
		{ "X.Name", "ERigControlAxis::X" },
		{ "Y.Name", "ERigControlAxis::Y" },
		{ "Z.Name", "ERigControlAxis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigControlAxis",
		"ERigControlAxis",
		Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigControlAxis()
	{
		if (!Z_Registration_Info_UEnum_ERigControlAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigControlAxis.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigControlAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigControlAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlLimitEnabled;
class UScriptStruct* FRigControlLimitEnabled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlLimitEnabled, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlLimitEnabled"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlLimitEnabled>()
{
	return FRigControlLimitEnabled::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMinimum_MetaData[];
#endif
		static void NewProp_bMinimum_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaximum_MetaData[];
#endif
		static void NewProp_bMaximum_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaximum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlLimitEnabled>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum_MetaData[] = {
		{ "Category", "Limit" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum_SetBit(void* Obj)
	{
		((FRigControlLimitEnabled*)Obj)->bMinimum = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum = { "bMinimum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlLimitEnabled), &Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum_MetaData[] = {
		{ "Category", "Limit" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum_SetBit(void* Obj)
	{
		((FRigControlLimitEnabled*)Obj)->bMaximum = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum = { "bMaximum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlLimitEnabled), &Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewProp_bMaximum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigControlLimitEnabled",
		sizeof(FRigControlLimitEnabled),
		alignof(FRigControlLimitEnabled),
		Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigControlLimitEnabled()
	{
		if (!Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.InnerSingleton, Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigControlLimitEnabled.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlValueStorage;
class UScriptStruct* FRigControlValueStorage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlValueStorage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlValueStorage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlValueStorage, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlValueStorage"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlValueStorage.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlValueStorage>()
{
	return FRigControlValueStorage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigControlValueStorage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float00_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float00;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float01_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float01;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float02_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float02;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float03_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float03;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float10_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float10;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float11_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float11;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float12_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float12;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float13_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float13;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float20_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float20;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float21_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float21;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float22_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float22;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float23_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float23;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float30_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float30;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float31_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float31;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float32_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float33_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float33;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float00_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float00_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float01_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float01_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float02_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float02_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float03_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float03_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float10_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float10_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float11_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float11_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float12_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float12_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float13_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float13_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float20_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float20_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float21_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float21_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float22_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float22_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float23_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float23_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float30_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float30_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float31_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float31_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float32_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float32_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float33_2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float33_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[];
#endif
		static void NewProp_bValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlValueStorage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00 = { "Float00", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float00), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01 = { "Float01", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float01), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02 = { "Float02", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float02), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03 = { "Float03", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float03), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10 = { "Float10", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float10), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11 = { "Float11", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float11), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12 = { "Float12", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float12), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13 = { "Float13", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float13), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20 = { "Float20", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float20), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21 = { "Float21", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float21), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22 = { "Float22", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float22), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23 = { "Float23", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float23), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30 = { "Float30", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float30), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31 = { "Float31", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float31), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32 = { "Float32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float32), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33 = { "Float33", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float33), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00_2 = { "Float00_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float00_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01_2 = { "Float01_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float01_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02_2 = { "Float02_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float02_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03_2 = { "Float03_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float03_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10_2 = { "Float10_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float10_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11_2 = { "Float11_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float11_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12_2 = { "Float12_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float12_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13_2 = { "Float13_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float13_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20_2 = { "Float20_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float20_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21_2 = { "Float21_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float21_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22_2 = { "Float22_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float22_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23_2 = { "Float23_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float23_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30_2 = { "Float30_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float30_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31_2 = { "Float31_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float31_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32_2 = { "Float32_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float32_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33_2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33_2 = { "Float33_2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValueStorage, Float33_2), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid_SetBit(void* Obj)
	{
		((FRigControlValueStorage*)Obj)->bValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigControlValueStorage), &Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float00_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float01_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float02_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float03_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float10_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float11_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float12_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float13_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float20_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float21_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float22_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float23_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float30_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float31_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float32_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_Float33_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewProp_bValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigControlValueStorage",
		sizeof(FRigControlValueStorage),
		alignof(FRigControlValueStorage),
		Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigControlValueStorage()
	{
		if (!Z_Registration_Info_UScriptStruct_RigControlValueStorage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlValueStorage.InnerSingleton, Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigControlValueStorage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlValue;
class UScriptStruct* FRigControlValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlValue, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlValue"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlValue.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlValue>()
{
	return FRigControlValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigControlValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatStorage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatStorage;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Storage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Storage;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigControlValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_FloatStorage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_FloatStorage = { "FloatStorage", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValue, FloatStorage), Z_Construct_UScriptStruct_FRigControlValueStorage, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_FloatStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_FloatStorage_MetaData)) }; // 4252276270
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_Storage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_Storage = { "Storage", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigControlValue, Storage_DEPRECATED), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_Storage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_Storage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_FloatStorage,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigControlValue_Statics::NewProp_Storage,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigControlValue",
		sizeof(FRigControlValue),
		alignof(FRigControlValue),
		Z_Construct_UScriptStruct_FRigControlValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigControlValue()
	{
		if (!Z_Registration_Info_UScriptStruct_RigControlValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlValue.InnerSingleton, Z_Construct_UScriptStruct_FRigControlValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigControlValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigControlModifiedContext;
class UScriptStruct* FRigControlModifiedContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigControlModifiedContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigControlModifiedContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigControlModifiedContext, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigControlModifiedContext"));
	}
	return Z_Registration_Info_UScriptStruct_RigControlModifiedContext.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigControlModifiedContext>()
{
	return FRigControlModifiedContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigControlModifiedContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigControlModifiedContext",
		sizeof(FRigControlModifiedContext),
		alignof(FRigControlModifiedContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigControlModifiedContext()
	{
		if (!Z_Registration_Info_UScriptStruct_RigControlModifiedContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigControlModifiedContext.InnerSingleton, Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigControlModifiedContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementKey;
class UScriptStruct* FRigElementKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKey, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementKey"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementKey.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementKey>()
{
	return FRigElementKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigElementKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElementKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigElementKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementKey>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigElementKey, Type), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type_MetaData)) }; // 3496922284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "CustomWidget", "ElementName" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigElementKey, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElementKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKey_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigElementKey",
		sizeof(FRigElementKey),
		alignof(FRigElementKey),
		Z_Construct_UScriptStruct_FRigElementKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElementKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey()
	{
		if (!Z_Registration_Info_UScriptStruct_RigElementKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementKey.InnerSingleton, Z_Construct_UScriptStruct_FRigElementKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigElementKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElementKeyCollection;
class UScriptStruct* FRigElementKeyCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElementKeyCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElementKeyCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElementKeyCollection, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElementKeyCollection"));
	}
	return Z_Registration_Info_UScriptStruct_RigElementKeyCollection.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElementKeyCollection>()
{
	return FRigElementKeyCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElementKeyCollection>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Collection" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigElementKeyCollection, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewProp_Keys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigElementKeyCollection",
		sizeof(FRigElementKeyCollection),
		alignof(FRigElementKeyCollection),
		Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_RigElementKeyCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElementKeyCollection.InnerSingleton, Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigElementKeyCollection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigElement;
class UScriptStruct* FRigElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigElement, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigElement"));
	}
	return Z_Registration_Info_UScriptStruct_RigElement.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigElement>()
{
	return FRigElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigElement, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigElement, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigElement_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigElement",
		sizeof(FRigElement),
		alignof(FRigElement),
		Z_Construct_UScriptStruct_FRigElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigElement()
	{
		if (!Z_Registration_Info_UScriptStruct_RigElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigElement.InnerSingleton, Z_Construct_UScriptStruct_FRigElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigEventContext;
class UScriptStruct* FRigEventContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigEventContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigEventContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigEventContext, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigEventContext"));
	}
	return Z_Registration_Info_UScriptStruct_RigEventContext.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigEventContext>()
{
	return FRigEventContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigEventContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigEventContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Rigs/RigHierarchyDefines.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigEventContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigEventContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigEventContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigEventContext",
		sizeof(FRigEventContext),
		alignof(FRigEventContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigEventContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigEventContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigEventContext()
	{
		if (!Z_Registration_Info_UScriptStruct_RigEventContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigEventContext.InnerSingleton, Z_Construct_UScriptStruct_FRigEventContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigEventContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics::EnumInfo[] = {
		{ ERigElementType_StaticEnum, TEXT("ERigElementType"), &Z_Registration_Info_UEnum_ERigElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3496922284U) },
		{ ERigBoneType_StaticEnum, TEXT("ERigBoneType"), &Z_Registration_Info_UEnum_ERigBoneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4276824854U) },
		{ ERigMetadataType_StaticEnum, TEXT("ERigMetadataType"), &Z_Registration_Info_UEnum_ERigMetadataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3385505354U) },
		{ ERigHierarchyNotification_StaticEnum, TEXT("ERigHierarchyNotification"), &Z_Registration_Info_UEnum_ERigHierarchyNotification, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3084097522U) },
		{ ERigEvent_StaticEnum, TEXT("ERigEvent"), &Z_Registration_Info_UEnum_ERigEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4200184063U) },
		{ EControlRigSetKey_StaticEnum, TEXT("EControlRigSetKey"), &Z_Registration_Info_UEnum_EControlRigSetKey, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4206294522U) },
		{ ERigControlType_StaticEnum, TEXT("ERigControlType"), &Z_Registration_Info_UEnum_ERigControlType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1332923376U) },
		{ ERigControlAnimationType_StaticEnum, TEXT("ERigControlAnimationType"), &Z_Registration_Info_UEnum_ERigControlAnimationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1236207984U) },
		{ ERigControlValueType_StaticEnum, TEXT("ERigControlValueType"), &Z_Registration_Info_UEnum_ERigControlValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 334306411U) },
		{ ERigControlVisibility_StaticEnum, TEXT("ERigControlVisibility"), &Z_Registration_Info_UEnum_ERigControlVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4055407710U) },
		{ ERigControlAxis_StaticEnum, TEXT("ERigControlAxis"), &Z_Registration_Info_UEnum_ERigControlAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1900149964U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics::ScriptStructInfo[] = {
		{ FRigControlLimitEnabled::StaticStruct, Z_Construct_UScriptStruct_FRigControlLimitEnabled_Statics::NewStructOps, TEXT("RigControlLimitEnabled"), &Z_Registration_Info_UScriptStruct_RigControlLimitEnabled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlLimitEnabled), 1597237226U) },
		{ FRigControlValueStorage::StaticStruct, Z_Construct_UScriptStruct_FRigControlValueStorage_Statics::NewStructOps, TEXT("RigControlValueStorage"), &Z_Registration_Info_UScriptStruct_RigControlValueStorage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlValueStorage), 4252276270U) },
		{ FRigControlValue::StaticStruct, Z_Construct_UScriptStruct_FRigControlValue_Statics::NewStructOps, TEXT("RigControlValue"), &Z_Registration_Info_UScriptStruct_RigControlValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlValue), 526117509U) },
		{ FRigControlModifiedContext::StaticStruct, Z_Construct_UScriptStruct_FRigControlModifiedContext_Statics::NewStructOps, TEXT("RigControlModifiedContext"), &Z_Registration_Info_UScriptStruct_RigControlModifiedContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigControlModifiedContext), 3830219764U) },
		{ FRigElementKey::StaticStruct, Z_Construct_UScriptStruct_FRigElementKey_Statics::NewStructOps, TEXT("RigElementKey"), &Z_Registration_Info_UScriptStruct_RigElementKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementKey), 2461395651U) },
		{ FRigElementKeyCollection::StaticStruct, Z_Construct_UScriptStruct_FRigElementKeyCollection_Statics::NewStructOps, TEXT("RigElementKeyCollection"), &Z_Registration_Info_UScriptStruct_RigElementKeyCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElementKeyCollection), 2993270268U) },
		{ FRigElement::StaticStruct, Z_Construct_UScriptStruct_FRigElement_Statics::NewStructOps, TEXT("RigElement"), &Z_Registration_Info_UScriptStruct_RigElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigElement), 3765344084U) },
		{ FRigEventContext::StaticStruct, Z_Construct_UScriptStruct_FRigEventContext_Statics::NewStructOps, TEXT("RigEventContext"), &Z_Registration_Info_UScriptStruct_RigEventContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigEventContext), 1422278074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_272846703(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigHierarchyDefines_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
