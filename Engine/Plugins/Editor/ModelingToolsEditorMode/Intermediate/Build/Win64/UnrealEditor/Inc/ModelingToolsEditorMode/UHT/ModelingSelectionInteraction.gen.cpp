// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingSelectionInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelingSelectionInteraction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UKeyAsModifierInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentInteraction_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionManager_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeInteraction_NoRegister();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingSelectionInteraction();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingSelectionInteraction_NoRegister();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UPathSelectionInteraction();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UPathSelectionInteraction_NoRegister();
	MODELINGTOOLSEDITORMODE_API UEnum* Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode();
	UPackage* Z_Construct_UPackage__Script_ModelingToolsEditorMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModelingSelectionInteraction_DragMode;
	static UEnum* EModelingSelectionInteraction_DragMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModelingSelectionInteraction_DragMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModelingSelectionInteraction_DragMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode, (UObject*)Z_Construct_UPackage__Script_ModelingToolsEditorMode(), TEXT("EModelingSelectionInteraction_DragMode"));
		}
		return Z_Registration_Info_UEnum_EModelingSelectionInteraction_DragMode.OuterSingleton;
	}
	template<> MODELINGTOOLSEDITORMODE_API UEnum* StaticEnum<EModelingSelectionInteraction_DragMode>()
	{
		return EModelingSelectionInteraction_DragMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode_Statics::Enumerators[] = {
		{ "EModelingSelectionInteraction_DragMode::NoDragInteraction", (int64)EModelingSelectionInteraction_DragMode::NoDragInteraction },
		{ "EModelingSelectionInteraction_DragMode::PathInteraction", (int64)EModelingSelectionInteraction_DragMode::PathInteraction },
		{ "EModelingSelectionInteraction_DragMode::RectangleMarqueeInteraction", (int64)EModelingSelectionInteraction_DragMode::RectangleMarqueeInteraction },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
		{ "NoDragInteraction.Name", "EModelingSelectionInteraction_DragMode::NoDragInteraction" },
		{ "PathInteraction.Name", "EModelingSelectionInteraction_DragMode::PathInteraction" },
		{ "RectangleMarqueeInteraction.Name", "EModelingSelectionInteraction_DragMode::RectangleMarqueeInteraction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
		nullptr,
		"EModelingSelectionInteraction_DragMode",
		"EModelingSelectionInteraction_DragMode",
		Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode()
	{
		if (!Z_Registration_Info_UEnum_EModelingSelectionInteraction_DragMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModelingSelectionInteraction_DragMode.InnerSingleton, Z_Construct_UEnum_ModelingToolsEditorMode_EModelingSelectionInteraction_DragMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModelingSelectionInteraction_DragMode.InnerSingleton;
	}
	void UModelingSelectionInteraction::StaticRegisterNativesUModelingSelectionInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingSelectionInteraction);
	UClass* Z_Construct_UClass_UModelingSelectionInteraction_NoRegister()
	{
		return UModelingSelectionInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UModelingSelectionInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickOrDragBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickOrDragBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HoverBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BehaviorSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragAlignmentInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragAlignmentToggleBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragAlignmentToggleBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RectangleMarqueeInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RectangleMarqueeInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathSelectionInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PathSelectionInteraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelingSelectionInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UModelingSelectionInteraction provides element-level selection behavior (ie mesh triangles/edges/vertices)\n * via the UGeometrySelectionManager. The Interaction doesn't actually know about the meshes or interact\n * with them at all, it simply \"operates\" the SelectionManager based on user input. \n * \n * In addition to handling selection/deselection behaviors based on user input, the UModelingSelectionInteraction\n * also creates a Gizmo for the active selection if it is transformable, and forwards gizmo transformations\n * to the SelectionManager.\n * \n * Currently some desired Selection-related interactions require a slightly convoluted path through the code,\n * because (for example) we want the standard UE editor gizmo to have \"click precedence\" over our selection\n * click behaviors. However we will get the input event first, so we need to be able to check if the gizmo is\n * hit via a callback function provided by the EdMode owning the ToolsContext this Interaction will be registered in.\n * Similarly we need to be able to filter out hits if a closer visible object is hit, because there is\n * no higher-level Behavior that will do that for us. (This may be improved in future, if more of the existing\n * Editor interaction behaviors are re-implemented as InputBehaviors)\n * \n */" },
		{ "IncludePath", "ModelingSelectionInteraction.h" },
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
		{ "ToolTip", "UModelingSelectionInteraction provides element-level selection behavior (ie mesh triangles/edges/vertices)\nvia the UGeometrySelectionManager. The Interaction doesn't actually know about the meshes or interact\nwith them at all, it simply \"operates\" the SelectionManager based on user input.\n\nIn addition to handling selection/deselection behaviors based on user input, the UModelingSelectionInteraction\nalso creates a Gizmo for the active selection if it is transformable, and forwards gizmo transformations\nto the SelectionManager.\n\nCurrently some desired Selection-related interactions require a slightly convoluted path through the code,\nbecause (for example) we want the standard UE editor gizmo to have \"click precedence\" over our selection\nclick behaviors. However we will get the input event first, so we need to be able to check if the gizmo is\nhit via a callback function provided by the EdMode owning the ToolsContext this Interaction will be registered in.\nSimilarly we need to be able to filter out hits if a closer visible object is hit, because there is\nno higher-level Behavior that will do that for us. (This may be improved in future, if more of the existing\nEditor interaction behaviors are re-implemented as InputBehaviors)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_ClickOrDragBehavior_MetaData[] = {
		{ "Comment", "// click-to-select behavior, various drag behaviors\n" },
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
		{ "ToolTip", "click-to-select behavior, various drag behaviors" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_ClickOrDragBehavior = { "ClickOrDragBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSelectionInteraction, ClickOrDragBehavior), Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_ClickOrDragBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_ClickOrDragBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_HoverBehavior_MetaData[] = {
		{ "Comment", "// mouse hover behavior\n" },
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
		{ "ToolTip", "mouse hover behavior" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_HoverBehavior = { "HoverBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSelectionInteraction, HoverBehavior), Z_Construct_UClass_UMouseHoverBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_HoverBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_HoverBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_BehaviorSet_MetaData[] = {
		{ "Comment", "// set of all behaviors, will be passed up to UInputRouter\n" },
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
		{ "ToolTip", "set of all behaviors, will be passed up to UInputRouter" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_BehaviorSet = { "BehaviorSet", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSelectionInteraction, BehaviorSet), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_BehaviorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_BehaviorSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_SelectionManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_SelectionManager = { "SelectionManager", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSelectionInteraction, SelectionManager), Z_Construct_UClass_UGeometrySelectionManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_SelectionManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_SelectionManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSelectionInteraction, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSelectionInteraction, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_TransformGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_DragAlignmentInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_DragAlignmentInteraction = { "DragAlignmentInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSelectionInteraction, DragAlignmentInteraction), Z_Construct_UClass_UDragAlignmentInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_DragAlignmentInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_DragAlignmentInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_DragAlignmentToggleBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_DragAlignmentToggleBehavior = { "DragAlignmentToggleBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSelectionInteraction, DragAlignmentToggleBehavior), Z_Construct_UClass_UKeyAsModifierInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_DragAlignmentToggleBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_DragAlignmentToggleBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_RectangleMarqueeInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_RectangleMarqueeInteraction = { "RectangleMarqueeInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSelectionInteraction, RectangleMarqueeInteraction), Z_Construct_UClass_URectangleMarqueeInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_RectangleMarqueeInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_RectangleMarqueeInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_PathSelectionInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_PathSelectionInteraction = { "PathSelectionInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingSelectionInteraction, PathSelectionInteraction), Z_Construct_UClass_UPathSelectionInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_PathSelectionInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_PathSelectionInteraction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelingSelectionInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_ClickOrDragBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_HoverBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_BehaviorSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_SelectionManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_TransformGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_DragAlignmentInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_DragAlignmentToggleBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_RectangleMarqueeInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingSelectionInteraction_Statics::NewProp_PathSelectionInteraction,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInputBehaviorSource_NoRegister, (int32)VTABLE_OFFSET(UModelingSelectionInteraction, IInputBehaviorSource), false },  // 4222810999
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelingSelectionInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingSelectionInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingSelectionInteraction_Statics::ClassParams = {
		&UModelingSelectionInteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModelingSelectionInteraction_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UModelingSelectionInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingSelectionInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelingSelectionInteraction()
	{
		if (!Z_Registration_Info_UClass_UModelingSelectionInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingSelectionInteraction.OuterSingleton, Z_Construct_UClass_UModelingSelectionInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelingSelectionInteraction.OuterSingleton;
	}
	template<> MODELINGTOOLSEDITORMODE_API UClass* StaticClass<UModelingSelectionInteraction>()
	{
		return UModelingSelectionInteraction::StaticClass();
	}
	UModelingSelectionInteraction::UModelingSelectionInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelingSelectionInteraction);
	UModelingSelectionInteraction::~UModelingSelectionInteraction() {}
	void UPathSelectionInteraction::StaticRegisterNativesUPathSelectionInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPathSelectionInteraction);
	UClass* Z_Construct_UClass_UPathSelectionInteraction_NoRegister()
	{
		return UPathSelectionInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UPathSelectionInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SelectionInteraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathSelectionInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathSelectionInteraction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPathSelectionInteraction is a simple drag-interaction for Selection, which essentially just\n * selects/deselects any element hit by the cursor. \n * \n * Currently no attempt is made to (eg) subsample, so a fast-moving cursor will skip over some faces.\n */" },
		{ "IncludePath", "ModelingSelectionInteraction.h" },
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
		{ "ToolTip", "UPathSelectionInteraction is a simple drag-interaction for Selection, which essentially just\nselects/deselects any element hit by the cursor.\n\nCurrently no attempt is made to (eg) subsample, so a fast-moving cursor will skip over some faces." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathSelectionInteraction_Statics::NewProp_SelectionInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingSelectionInteraction.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPathSelectionInteraction_Statics::NewProp_SelectionInteraction = { "SelectionInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPathSelectionInteraction, SelectionInteraction), Z_Construct_UClass_UModelingSelectionInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathSelectionInteraction_Statics::NewProp_SelectionInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathSelectionInteraction_Statics::NewProp_SelectionInteraction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathSelectionInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathSelectionInteraction_Statics::NewProp_SelectionInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathSelectionInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathSelectionInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathSelectionInteraction_Statics::ClassParams = {
		&UPathSelectionInteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPathSelectionInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathSelectionInteraction_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPathSelectionInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathSelectionInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathSelectionInteraction()
	{
		if (!Z_Registration_Info_UClass_UPathSelectionInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathSelectionInteraction.OuterSingleton, Z_Construct_UClass_UPathSelectionInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPathSelectionInteraction.OuterSingleton;
	}
	template<> MODELINGTOOLSEDITORMODE_API UClass* StaticClass<UPathSelectionInteraction>()
	{
		return UPathSelectionInteraction::StaticClass();
	}
	UPathSelectionInteraction::UPathSelectionInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathSelectionInteraction);
	UPathSelectionInteraction::~UPathSelectionInteraction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_Statics::EnumInfo[] = {
		{ EModelingSelectionInteraction_DragMode_StaticEnum, TEXT("EModelingSelectionInteraction_DragMode"), &Z_Registration_Info_UEnum_EModelingSelectionInteraction_DragMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2442145972U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModelingSelectionInteraction, UModelingSelectionInteraction::StaticClass, TEXT("UModelingSelectionInteraction"), &Z_Registration_Info_UClass_UModelingSelectionInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingSelectionInteraction), 1022929522U) },
		{ Z_Construct_UClass_UPathSelectionInteraction, UPathSelectionInteraction::StaticClass, TEXT("UPathSelectionInteraction"), &Z_Registration_Info_UClass_UPathSelectionInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathSelectionInteraction), 3969081905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_286268133(TEXT("/Script/ModelingToolsEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingSelectionInteraction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
