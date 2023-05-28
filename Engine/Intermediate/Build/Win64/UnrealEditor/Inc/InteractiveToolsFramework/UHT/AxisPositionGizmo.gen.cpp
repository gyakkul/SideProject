// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/AxisPositionGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisPositionGizmo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoClickTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UAxisPositionGizmoBuilder::StaticRegisterNativesUAxisPositionGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxisPositionGizmoBuilder);
	UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder_NoRegister()
	{
		return UAxisPositionGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/AxisPositionGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisPositionGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::ClassParams = {
		&UAxisPositionGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisPositionGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_UAxisPositionGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxisPositionGizmoBuilder.OuterSingleton, Z_Construct_UClass_UAxisPositionGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxisPositionGizmoBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAxisPositionGizmoBuilder>()
	{
		return UAxisPositionGizmoBuilder::StaticClass();
	}
	UAxisPositionGizmoBuilder::UAxisPositionGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisPositionGizmoBuilder);
	UAxisPositionGizmoBuilder::~UAxisPositionGizmoBuilder() {}
	void UAxisPositionGizmo::StaticRegisterNativesUAxisPositionGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxisPositionGizmo);
	UClass* Z_Construct_UClass_UAxisPositionGizmo_NoRegister()
	{
		return UAxisPositionGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UAxisPositionGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisSource_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_AxisSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterSource_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ParameterSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoViewContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_HitTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_StateTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MouseBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSignedAxis_MetaData[];
#endif
		static void NewProp_bEnableSignedAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSignedAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInInteraction_MetaData[];
#endif
		static void NewProp_bInInteraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionStartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCurPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionCurPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartParameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionStartParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionCurParameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionCurParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterSign_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterSign;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisPositionGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAxisPositionGizmo implements a gizmo interaction where 1D parameter value is manipulated\n * by dragging a point on a 3D line/axis in space. The 3D point is converted to the axis parameter at\n * the nearest point, giving us the 1D parameter value.\n *\n * As with other base gizmos, this class only implements the interaction. The visual aspect of the\n * gizmo, the axis, and the parameter storage are all provided externally.\n *\n * The axis direction+origin is provided by an IGizmoAxisSource. \n *\n * The interaction target (ie the thing you have to click on to start the dragging interaction) is provided by an IGizmoClickTarget.\n *\n * The new 1D parameter value is sent to an IGizmoFloatParameterSource\n *\n * Internally a UClickDragInputBehavior is used to handle mouse input, configured in ::Setup()\n */" },
		{ "IncludePath", "BaseGizmos/AxisPositionGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "UAxisPositionGizmo implements a gizmo interaction where 1D parameter value is manipulated\nby dragging a point on a 3D line/axis in space. The 3D point is converted to the axis parameter at\nthe nearest point, giving us the 1D parameter value.\n\nAs with other base gizmos, this class only implements the interaction. The visual aspect of the\ngizmo, the axis, and the parameter storage are all provided externally.\n\nThe axis direction+origin is provided by an IGizmoAxisSource.\n\nThe interaction target (ie the thing you have to click on to start the dragging interaction) is provided by an IGizmoClickTarget.\n\nThe new 1D parameter value is sent to an IGizmoFloatParameterSource\n\nInternally a UClickDragInputBehavior is used to handle mouse input, configured in ::Setup()" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource_MetaData[] = {
		{ "Comment", "/** AxisSource provides the 3D line on which the interaction happens */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "AxisSource provides the 3D line on which the interaction happens" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource = { "AxisSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, AxisSource), Z_Construct_UClass_UGizmoAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource_MetaData[] = {
		{ "Comment", "/** The 3D line-nearest-point is converted to a 1D coordinate along the line, and the change in value is sent to this ParameterSource */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The 3D line-nearest-point is converted to a 1D coordinate along the line, and the change in value is sent to this ParameterSource" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource = { "ParameterSource", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, ParameterSource), Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_GizmoViewContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_GizmoViewContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_GizmoViewContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget_MetaData[] = {
		{ "Comment", "/** The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The HitTarget provides a hit-test against some 3D element (presumably a visual widget) that controls when interaction can start" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, HitTarget), Z_Construct_UClass_UGizmoClickTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget_MetaData[] = {
		{ "Comment", "/** StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "StateTarget is notified when interaction starts and ends, so that things like undo/redo can be handled externally." },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, StateTarget), Z_Construct_UClass_UGizmoStateTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_MouseBehavior_MetaData[] = {
		{ "Comment", "/** The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys. */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The mouse click behavior of the gizmo is accessible so that it can be modified to use different mouse keys." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_MouseBehavior = { "MouseBehavior", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, MouseBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_MouseBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_MouseBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_MetaData[] = {
		{ "Comment", "/** If enabled, then the sign on the parameter delta is always \"increasing\" when moving away from the origin point, rather than just being a projection onto the axis */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "If enabled, then the sign on the parameter delta is always \"increasing\" when moving away from the origin point, rather than just being a projection onto the axis" },
	};
#endif
	void Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit(void* Obj)
	{
		((UAxisPositionGizmo*)Obj)->bEnableSignedAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis = { "bEnableSignedAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAxisPositionGizmo), &Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_MetaData[] = {
		{ "Comment", "/** If true, we are in an active click+drag interaction, otherwise we are not */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "If true, we are in an active click+drag interaction, otherwise we are not" },
	};
#endif
	void Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_SetBit(void* Obj)
	{
		((UAxisPositionGizmo*)Obj)->bInInteraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction = { "bInInteraction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAxisPositionGizmo), &Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin_MetaData[] = {
		{ "Comment", "//\n// The values below are used in the context of a single click-drag interaction, ie if bInInteraction = true\n// They otherwise should be considered uninitialized\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
		{ "ToolTip", "The values below are used in the context of a single click-drag interaction, ie if bInInteraction = true\nThey otherwise should be considered uninitialized" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin = { "InteractionOrigin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, InteractionOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis = { "InteractionAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, InteractionAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint = { "InteractionStartPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, InteractionStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint = { "InteractionCurPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, InteractionCurPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter = { "InteractionStartParameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, InteractionStartParameter), METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter = { "InteractionCurParameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, InteractionCurParameter), METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/AxisPositionGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign = { "ParameterSign", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAxisPositionGizmo, ParameterSign), METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxisPositionGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_AxisSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_GizmoViewContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_HitTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_StateTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_MouseBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bEnableSignedAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_bInInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionStartParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_InteractionCurParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisPositionGizmo_Statics::NewProp_ParameterSign,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisPositionGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisPositionGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxisPositionGizmo_Statics::ClassParams = {
		&UAxisPositionGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxisPositionGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAxisPositionGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisPositionGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisPositionGizmo()
	{
		if (!Z_Registration_Info_UClass_UAxisPositionGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxisPositionGizmo.OuterSingleton, Z_Construct_UClass_UAxisPositionGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxisPositionGizmo.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAxisPositionGizmo>()
	{
		return UAxisPositionGizmo::StaticClass();
	}
	UAxisPositionGizmo::UAxisPositionGizmo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisPositionGizmo);
	UAxisPositionGizmo::~UAxisPositionGizmo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisPositionGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisPositionGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAxisPositionGizmoBuilder, UAxisPositionGizmoBuilder::StaticClass, TEXT("UAxisPositionGizmoBuilder"), &Z_Registration_Info_UClass_UAxisPositionGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxisPositionGizmoBuilder), 2653224568U) },
		{ Z_Construct_UClass_UAxisPositionGizmo, UAxisPositionGizmo::StaticClass, TEXT("UAxisPositionGizmo"), &Z_Registration_Info_UClass_UAxisPositionGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxisPositionGizmo), 3549049789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisPositionGizmo_h_933430841(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisPositionGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_AxisPositionGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
