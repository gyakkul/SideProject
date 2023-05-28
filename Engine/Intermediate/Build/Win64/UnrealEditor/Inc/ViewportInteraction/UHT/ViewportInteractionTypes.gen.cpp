// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteractionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportInteractionTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UEnum* Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode();
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement();
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FViewportActionKeyInput();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ViewportActionKeyInput;
class UScriptStruct* FViewportActionKeyInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ViewportActionKeyInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ViewportActionKeyInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewportActionKeyInput, (UObject*)Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("ViewportActionKeyInput"));
	}
	return Z_Registration_Info_UScriptStruct_ViewportActionKeyInput.OuterSingleton;
}
template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<FViewportActionKeyInput>()
{
	return FViewportActionKeyInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Event;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInputCaptured_MetaData[];
#endif
		static void NewProp_bIsInputCaptured_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInputCaptured;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAxis_MetaData[];
#endif
		static void NewProp_bIsAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a generic action\n*/" },
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "ToolTip", "Represents a generic action" },
	};
#endif
	void* Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewportActionKeyInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_ActionType_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/** The name of this action */" },
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "ToolTip", "The name of this action" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportActionKeyInput, ActionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_ActionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_ActionType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/** Input event */" },
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "ToolTip", "Input event" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportActionKeyInput, Event), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_Event_MetaData)) }; // 1054153585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured_MetaData[] = {
		{ "Comment", "/** True if this action owned by an interactor is \"captured\" for each possible action type, meaning that only the active captor should \n\x09handle input events until it is no longer captured.  It's the captors responsibility to set this using OnVRAction(), or clear it when finished with capturing. */" },
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "ToolTip", "True if this action owned by an interactor is \"captured\" for each possible action type, meaning that only the active captor should\n      handle input events until it is no longer captured.  It's the captors responsibility to set this using OnVRAction(), or clear it when finished with capturing." },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured_SetBit(void* Obj)
	{
		((FViewportActionKeyInput*)Obj)->bIsInputCaptured = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured = { "bIsInputCaptured", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FViewportActionKeyInput), &Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsAxis_SetBit(void* Obj)
	{
		((FViewportActionKeyInput*)Obj)->bIsAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsAxis = { "bIsAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FViewportActionKeyInput), &Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsAxis_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_ActionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsInputCaptured,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewProp_bIsAxis,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		&NewStructOps,
		"ViewportActionKeyInput",
		sizeof(FViewportActionKeyInput),
		alignof(FViewportActionKeyInput),
		Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FViewportActionKeyInput()
	{
		if (!Z_Registration_Info_UScriptStruct_ViewportActionKeyInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ViewportActionKeyInput.InnerSingleton, Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ViewportActionKeyInput.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewportInteractionDraggingMode;
	static UEnum* EViewportInteractionDraggingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViewportInteractionDraggingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViewportInteractionDraggingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode, (UObject*)Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("EViewportInteractionDraggingMode"));
		}
		return Z_Registration_Info_UEnum_EViewportInteractionDraggingMode.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EViewportInteractionDraggingMode>()
	{
		return EViewportInteractionDraggingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Statics::Enumerators[] = {
		{ "EViewportInteractionDraggingMode::Nothing", (int64)EViewportInteractionDraggingMode::Nothing },
		{ "EViewportInteractionDraggingMode::TransformablesWithGizmo", (int64)EViewportInteractionDraggingMode::TransformablesWithGizmo },
		{ "EViewportInteractionDraggingMode::TransformablesAtLaserImpact", (int64)EViewportInteractionDraggingMode::TransformablesAtLaserImpact },
		{ "EViewportInteractionDraggingMode::AssistingDrag", (int64)EViewportInteractionDraggingMode::AssistingDrag },
		{ "EViewportInteractionDraggingMode::TransformablesFreely", (int64)EViewportInteractionDraggingMode::TransformablesFreely },
		{ "EViewportInteractionDraggingMode::World", (int64)EViewportInteractionDraggingMode::World },
		{ "EViewportInteractionDraggingMode::Interactable", (int64)EViewportInteractionDraggingMode::Interactable },
		{ "EViewportInteractionDraggingMode::Material", (int64)EViewportInteractionDraggingMode::Material },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Statics::Enum_MetaDataParams[] = {
		{ "AssistingDrag.Comment", "/** We're grabbing an object (or the world) that was already grabbed by the other hand */" },
		{ "AssistingDrag.Name", "EViewportInteractionDraggingMode::AssistingDrag" },
		{ "AssistingDrag.ToolTip", "We're grabbing an object (or the world) that was already grabbed by the other hand" },
		{ "Comment", "/** Methods of dragging objects around in VR */" },
		{ "Interactable.Comment", "/** Moving a custom interactable */" },
		{ "Interactable.Name", "EViewportInteractionDraggingMode::Interactable" },
		{ "Interactable.ToolTip", "Moving a custom interactable" },
		{ "Material.Comment", "/** Dragging a material */" },
		{ "Material.Name", "EViewportInteractionDraggingMode::Material" },
		{ "Material.ToolTip", "Dragging a material" },
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "Nothing.Comment", "/** Not dragging right now with this hand */" },
		{ "Nothing.Name", "EViewportInteractionDraggingMode::Nothing" },
		{ "Nothing.ToolTip", "Not dragging right now with this hand" },
		{ "ToolTip", "Methods of dragging objects around in VR" },
		{ "TransformablesAtLaserImpact.Comment", "/** Transformables locked to the impact point under the laser */" },
		{ "TransformablesAtLaserImpact.Name", "EViewportInteractionDraggingMode::TransformablesAtLaserImpact" },
		{ "TransformablesAtLaserImpact.ToolTip", "Transformables locked to the impact point under the laser" },
		{ "TransformablesFreely.Comment", "/** Freely moving, rotating and scaling transformables with one or two hands */" },
		{ "TransformablesFreely.Name", "EViewportInteractionDraggingMode::TransformablesFreely" },
		{ "TransformablesFreely.ToolTip", "Freely moving, rotating and scaling transformables with one or two hands" },
		{ "TransformablesWithGizmo.Comment", "/** Dragging transformables (e.g. actors, components, geometry elements) around using the transform gizmo */" },
		{ "TransformablesWithGizmo.Name", "EViewportInteractionDraggingMode::TransformablesWithGizmo" },
		{ "TransformablesWithGizmo.ToolTip", "Dragging transformables (e.g. actors, components, geometry elements) around using the transform gizmo" },
		{ "World.Comment", "/** Moving the world itself around (actually, moving the camera in such a way that it feels like you're moving the world) */" },
		{ "World.Name", "EViewportInteractionDraggingMode::World" },
		{ "World.ToolTip", "Moving the world itself around (actually, moving the camera in such a way that it feels like you're moving the world)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		"EViewportInteractionDraggingMode",
		"EViewportInteractionDraggingMode",
		Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode()
	{
		if (!Z_Registration_Info_UEnum_EViewportInteractionDraggingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewportInteractionDraggingMode.InnerSingleton, Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViewportInteractionDraggingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformGizmoHandlePlacement;
class UScriptStruct* FTransformGizmoHandlePlacement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformGizmoHandlePlacement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformGizmoHandlePlacement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement, (UObject*)Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("TransformGizmoHandlePlacement"));
	}
	return Z_Registration_Info_UScriptStruct_TransformGizmoHandlePlacement.OuterSingleton;
}
template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<FTransformGizmoHandlePlacement>()
{
	return FTransformGizmoHandlePlacement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Placement of a handle in pivot space */" },
		{ "ModuleRelativePath", "Public/ViewportInteractionTypes.h" },
		{ "ToolTip", "Placement of a handle in pivot space" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformGizmoHandlePlacement>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		&NewStructOps,
		"TransformGizmoHandlePlacement",
		sizeof(FTransformGizmoHandlePlacement),
		alignof(FTransformGizmoHandlePlacement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformGizmoHandlePlacement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformGizmoHandlePlacement.InnerSingleton, Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformGizmoHandlePlacement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_Statics::EnumInfo[] = {
		{ EViewportInteractionDraggingMode_StaticEnum, TEXT("EViewportInteractionDraggingMode"), &Z_Registration_Info_UEnum_EViewportInteractionDraggingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3911229373U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_Statics::ScriptStructInfo[] = {
		{ FViewportActionKeyInput::StaticStruct, Z_Construct_UScriptStruct_FViewportActionKeyInput_Statics::NewStructOps, TEXT("ViewportActionKeyInput"), &Z_Registration_Info_UScriptStruct_ViewportActionKeyInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FViewportActionKeyInput), 2644214563U) },
		{ FTransformGizmoHandlePlacement::StaticStruct, Z_Construct_UScriptStruct_FTransformGizmoHandlePlacement_Statics::NewStructOps, TEXT("TransformGizmoHandlePlacement"), &Z_Registration_Info_UScriptStruct_TransformGizmoHandlePlacement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformGizmoHandlePlacement), 2381649223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_4196538934(TEXT("/Script/ViewportInteraction"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
