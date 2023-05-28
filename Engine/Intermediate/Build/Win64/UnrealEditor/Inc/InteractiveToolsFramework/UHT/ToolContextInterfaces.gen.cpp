// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolContextInterfaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolContextInterfaces() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStandardToolContextMaterials;
	static UEnum* EStandardToolContextMaterials_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStandardToolContextMaterials.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStandardToolContextMaterials.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EStandardToolContextMaterials"));
		}
		return Z_Registration_Info_UEnum_EStandardToolContextMaterials.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EStandardToolContextMaterials>()
	{
		return EStandardToolContextMaterials_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Statics::Enumerators[] = {
		{ "EStandardToolContextMaterials::VertexColorMaterial", (int64)EStandardToolContextMaterials::VertexColorMaterial },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Types of standard materials that Tools may request from Context */" },
		{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
		{ "ToolTip", "Types of standard materials that Tools may request from Context" },
		{ "VertexColorMaterial.Comment", "/** White material that displays vertex colors set on mesh */" },
		{ "VertexColorMaterial.Name", "EStandardToolContextMaterials::VertexColorMaterial" },
		{ "VertexColorMaterial.ToolTip", "White material that displays vertex colors set on mesh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EStandardToolContextMaterials",
		"EStandardToolContextMaterials",
		Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials()
	{
		if (!Z_Registration_Info_UEnum_EStandardToolContextMaterials.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStandardToolContextMaterials.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EStandardToolContextMaterials_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStandardToolContextMaterials.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolContextCoordinateSystem;
	static UEnum* EToolContextCoordinateSystem_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EToolContextCoordinateSystem.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EToolContextCoordinateSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolContextCoordinateSystem"));
		}
		return Z_Registration_Info_UEnum_EToolContextCoordinateSystem.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolContextCoordinateSystem>()
	{
		return EToolContextCoordinateSystem_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Statics::Enumerators[] = {
		{ "EToolContextCoordinateSystem::World", (int64)EToolContextCoordinateSystem::World },
		{ "EToolContextCoordinateSystem::Local", (int64)EToolContextCoordinateSystem::Local },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Types of coordinate systems that a Tool/Gizmo might use */" },
		{ "Local.Comment", "/** Local coordinate system */" },
		{ "Local.Name", "EToolContextCoordinateSystem::Local" },
		{ "Local.ToolTip", "Local coordinate system" },
		{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
		{ "ToolTip", "Types of coordinate systems that a Tool/Gizmo might use" },
		{ "World.Comment", "/** World space coordinate system */" },
		{ "World.Name", "EToolContextCoordinateSystem::World" },
		{ "World.ToolTip", "World space coordinate system" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EToolContextCoordinateSystem",
		"EToolContextCoordinateSystem",
		Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem()
	{
		if (!Z_Registration_Info_UEnum_EToolContextCoordinateSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolContextCoordinateSystem.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EToolContextCoordinateSystem.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolContextTransformGizmoMode;
	static UEnum* EToolContextTransformGizmoMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EToolContextTransformGizmoMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EToolContextTransformGizmoMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolContextTransformGizmoMode"));
		}
		return Z_Registration_Info_UEnum_EToolContextTransformGizmoMode.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolContextTransformGizmoMode>()
	{
		return EToolContextTransformGizmoMode_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode_Statics::Enumerators[] = {
		{ "EToolContextTransformGizmoMode::NoGizmo", (int64)EToolContextTransformGizmoMode::NoGizmo },
		{ "EToolContextTransformGizmoMode::Translation", (int64)EToolContextTransformGizmoMode::Translation },
		{ "EToolContextTransformGizmoMode::Rotation", (int64)EToolContextTransformGizmoMode::Rotation },
		{ "EToolContextTransformGizmoMode::Scale", (int64)EToolContextTransformGizmoMode::Scale },
		{ "EToolContextTransformGizmoMode::Combined", (int64)EToolContextTransformGizmoMode::Combined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode_Statics::Enum_MetaDataParams[] = {
		{ "Combined.Comment", "/** Show all available Gizmo sub-elements */" },
		{ "Combined.Name", "EToolContextTransformGizmoMode::Combined" },
		{ "Combined.ToolTip", "Show all available Gizmo sub-elements" },
		{ "Comment", "/** \n * High-level configuration options for a standard 3D translate/rotate/scale Gizmo, like is commonly used in 3D DCC tools, game editors, etc\n * This is meant to be used to convey UI-level settings to Tools/Gizmos, eg like the W/E/R toggles for Rranslate/Rotate/Scale in Maya or UE Editor.\n * More granular control over precise gizmo elements is available through other mechanisms, eg the ETransformGizmoSubElements flags in UCombinedTransformGizmo\n */" },
		{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
		{ "NoGizmo.Comment", "/** Hide all Gizmo sub-elements */" },
		{ "NoGizmo.Name", "EToolContextTransformGizmoMode::NoGizmo" },
		{ "NoGizmo.ToolTip", "Hide all Gizmo sub-elements" },
		{ "Rotation.Comment", "/** Only Show Rotation sub-elements */" },
		{ "Rotation.Name", "EToolContextTransformGizmoMode::Rotation" },
		{ "Rotation.ToolTip", "Only Show Rotation sub-elements" },
		{ "Scale.Comment", "/** Only Show Scale sub-elements */" },
		{ "Scale.Name", "EToolContextTransformGizmoMode::Scale" },
		{ "Scale.ToolTip", "Only Show Scale sub-elements" },
		{ "ToolTip", "High-level configuration options for a standard 3D translate/rotate/scale Gizmo, like is commonly used in 3D DCC tools, game editors, etc\nThis is meant to be used to convey UI-level settings to Tools/Gizmos, eg like the W/E/R toggles for Rranslate/Rotate/Scale in Maya or UE Editor.\nMore granular control over precise gizmo elements is available through other mechanisms, eg the ETransformGizmoSubElements flags in UCombinedTransformGizmo" },
		{ "Translation.Comment", "/** Only Show Translation sub-elements */" },
		{ "Translation.Name", "EToolContextTransformGizmoMode::Translation" },
		{ "Translation.ToolTip", "Only Show Translation sub-elements" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EToolContextTransformGizmoMode",
		"EToolContextTransformGizmoMode",
		Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode()
	{
		if (!Z_Registration_Info_UEnum_EToolContextTransformGizmoMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolContextTransformGizmoMode.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EToolContextTransformGizmoMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolMessageLevel;
	static UEnum* EToolMessageLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EToolMessageLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EToolMessageLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolMessageLevel"));
		}
		return Z_Registration_Info_UEnum_EToolMessageLevel.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolMessageLevel>()
	{
		return EToolMessageLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Statics::Enumerators[] = {
		{ "EToolMessageLevel::Internal", (int64)EToolMessageLevel::Internal },
		{ "EToolMessageLevel::UserMessage", (int64)EToolMessageLevel::UserMessage },
		{ "EToolMessageLevel::UserNotification", (int64)EToolMessageLevel::UserNotification },
		{ "EToolMessageLevel::UserWarning", (int64)EToolMessageLevel::UserWarning },
		{ "EToolMessageLevel::UserError", (int64)EToolMessageLevel::UserError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Level of severity of messages emitted by Tool framework */" },
		{ "Internal.Comment", "/** Development message goes into development log */" },
		{ "Internal.Name", "EToolMessageLevel::Internal" },
		{ "Internal.ToolTip", "Development message goes into development log" },
		{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
		{ "ToolTip", "Level of severity of messages emitted by Tool framework" },
		{ "UserError.Comment", "/** Error message should be shown in a modal notification window */" },
		{ "UserError.Name", "EToolMessageLevel::UserError" },
		{ "UserError.ToolTip", "Error message should be shown in a modal notification window" },
		{ "UserMessage.Comment", "/** User message should appear in user-facing log */" },
		{ "UserMessage.Name", "EToolMessageLevel::UserMessage" },
		{ "UserMessage.ToolTip", "User message should appear in user-facing log" },
		{ "UserNotification.Comment", "/** Notification message should be shown in a non-modal notification window */" },
		{ "UserNotification.Name", "EToolMessageLevel::UserNotification" },
		{ "UserNotification.ToolTip", "Notification message should be shown in a non-modal notification window" },
		{ "UserWarning.Comment", "/** Warning message should be shown in a non-modal notification window with panache */" },
		{ "UserWarning.Name", "EToolMessageLevel::UserWarning" },
		{ "UserWarning.ToolTip", "Warning message should be shown in a non-modal notification window with panache" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EToolMessageLevel",
		"EToolMessageLevel",
		Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel()
	{
		if (!Z_Registration_Info_UEnum_EToolMessageLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolMessageLevel.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EToolMessageLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EToolMessageLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectedObjectsModificationType;
	static UEnum* ESelectedObjectsModificationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelectedObjectsModificationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESelectedObjectsModificationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("ESelectedObjectsModificationType"));
		}
		return Z_Registration_Info_UEnum_ESelectedObjectsModificationType.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ESelectedObjectsModificationType>()
	{
		return ESelectedObjectsModificationType_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Statics::Enumerators[] = {
		{ "ESelectedObjectsModificationType::Replace", (int64)ESelectedObjectsModificationType::Replace },
		{ "ESelectedObjectsModificationType::Add", (int64)ESelectedObjectsModificationType::Add },
		{ "ESelectedObjectsModificationType::Remove", (int64)ESelectedObjectsModificationType::Remove },
		{ "ESelectedObjectsModificationType::Clear", (int64)ESelectedObjectsModificationType::Clear },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "ESelectedObjectsModificationType::Add" },
		{ "Clear.Name", "ESelectedObjectsModificationType::Clear" },
		{ "Comment", "/** Type of change we want to apply to a selection */" },
		{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
		{ "Remove.Name", "ESelectedObjectsModificationType::Remove" },
		{ "Replace.Name", "ESelectedObjectsModificationType::Replace" },
		{ "ToolTip", "Type of change we want to apply to a selection" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"ESelectedObjectsModificationType",
		"ESelectedObjectsModificationType",
		Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType()
	{
		if (!Z_Registration_Info_UEnum_ESelectedObjectsModificationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectedObjectsModificationType.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_ESelectedObjectsModificationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESelectedObjectsModificationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewInteractionState;
	static UEnum* EViewInteractionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViewInteractionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViewInteractionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EViewInteractionState"));
		}
		return Z_Registration_Info_UEnum_EViewInteractionState.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EViewInteractionState>()
	{
		return EViewInteractionState_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState_Statics::Enumerators[] = {
		{ "EViewInteractionState::None", (int64)EViewInteractionState::None },
		{ "EViewInteractionState::Hovered", (int64)EViewInteractionState::Hovered },
		{ "EViewInteractionState::Focused", (int64)EViewInteractionState::Focused },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState_Statics::Enum_MetaDataParams[] = {
		{ "Focused.Name", "EViewInteractionState::Focused" },
		{ "Hovered.Name", "EViewInteractionState::Hovered" },
		{ "ModuleRelativePath", "Public/ToolContextInterfaces.h" },
		{ "None.Name", "EViewInteractionState::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EViewInteractionState",
		"EViewInteractionState",
		Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState()
	{
		if (!Z_Registration_Info_UEnum_EViewInteractionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewInteractionState.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EViewInteractionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViewInteractionState.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_Statics::EnumInfo[] = {
		{ EStandardToolContextMaterials_StaticEnum, TEXT("EStandardToolContextMaterials"), &Z_Registration_Info_UEnum_EStandardToolContextMaterials, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2423063720U) },
		{ EToolContextCoordinateSystem_StaticEnum, TEXT("EToolContextCoordinateSystem"), &Z_Registration_Info_UEnum_EToolContextCoordinateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1958283934U) },
		{ EToolContextTransformGizmoMode_StaticEnum, TEXT("EToolContextTransformGizmoMode"), &Z_Registration_Info_UEnum_EToolContextTransformGizmoMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 318942864U) },
		{ EToolMessageLevel_StaticEnum, TEXT("EToolMessageLevel"), &Z_Registration_Info_UEnum_EToolMessageLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2800738715U) },
		{ ESelectedObjectsModificationType_StaticEnum, TEXT("ESelectedObjectsModificationType"), &Z_Registration_Info_UEnum_ESelectedObjectsModificationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1587992931U) },
		{ EViewInteractionState_StaticEnum, TEXT("EViewInteractionState"), &Z_Registration_Info_UEnum_EViewInteractionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3907693204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_1582874629(TEXT("/Script/InteractiveToolsFramework"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_ToolContextInterfaces_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
