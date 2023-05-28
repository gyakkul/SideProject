// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScalableConeGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScalableConeGizmo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UScalableConeGizmo();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UScalableConeGizmo_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UScalableConeGizmoBuilder();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UScalableConeGizmoBuilder_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UScalableConeGizmoInputBehavior();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UScalableConeGizmoInputBehavior_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LightGizmos();
// End Cross Module References
	void UScalableConeGizmoBuilder::StaticRegisterNativesUScalableConeGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalableConeGizmoBuilder);
	UClass* Z_Construct_UClass_UScalableConeGizmoBuilder_NoRegister()
	{
		return UScalableConeGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UScalableConeGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScalableConeGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ScalableConeGizmo.h" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScalableConeGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalableConeGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalableConeGizmoBuilder_Statics::ClassParams = {
		&UScalableConeGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScalableConeGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_UScalableConeGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalableConeGizmoBuilder.OuterSingleton, Z_Construct_UClass_UScalableConeGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScalableConeGizmoBuilder.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<UScalableConeGizmoBuilder>()
	{
		return UScalableConeGizmoBuilder::StaticClass();
	}
	UScalableConeGizmoBuilder::UScalableConeGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScalableConeGizmoBuilder);
	UScalableConeGizmoBuilder::~UScalableConeGizmoBuilder() {}
	void UScalableConeGizmo::StaticRegisterNativesUScalableConeGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalableConeGizmo);
	UClass* Z_Construct_UClass_UScalableConeGizmo_NoRegister()
	{
		return UScalableConeGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UScalableConeGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitErrorThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitErrorThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransactionDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TransactionDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHovering_MetaData[];
#endif
		static void NewProp_bIsHovering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDragging_MetaData[];
#endif
		static void NewProp_bIsDragging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDragging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragStartWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragStartWorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCurrentPositionProjected_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragCurrentPositionProjected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionStartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartParameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionStartParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationPlaneX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationPlaneX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationPlaneY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationPlaneY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScalableConeGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UScalableConeGizmo provides a cone that can be scaled (changing its angle)\n * by dragging the base of the cone outwards/inwards\n */" },
		{ "IncludePath", "ScalableConeGizmo.h" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "UScalableConeGizmo provides a cone that can be scaled (changing its angle)\nby dragging the base of the cone outwards/inwards" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_MaxAngle_MetaData[] = {
		{ "Comment", "// The maximum angle the cone can be stretched to\n" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "The maximum angle the cone can be stretched to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, MaxAngle), METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_MaxAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_MaxAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_MinAngle_MetaData[] = {
		{ "Comment", "// The minimum angle the cone can be stretched to\n" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "The minimum angle the cone can be stretched to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, MinAngle), METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_MinAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_MinAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_ConeColor_MetaData[] = {
		{ "Comment", "// The color of the cone\n" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "The color of the cone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_ConeColor = { "ConeColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, ConeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_ConeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_ConeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_HitErrorThreshold_MetaData[] = {
		{ "Comment", "// The error threshold for hit detection with the cone\n" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "The error threshold for hit detection with the cone" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_HitErrorThreshold = { "HitErrorThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, HitErrorThreshold), METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_HitErrorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_HitErrorThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_TransactionDescription_MetaData[] = {
		{ "Comment", "// The text that will be used as the transaction description for undo/redo\n" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "The text that will be used as the transaction description for undo/redo" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_TransactionDescription = { "TransactionDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, TransactionDescription), METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_TransactionDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_TransactionDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_Length_MetaData[] = {
		{ "Comment", "// The ConeLength\n" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "The ConeLength" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, Length), METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_Angle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, Angle), METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_Angle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsHovering_MetaData[] = {
		{ "Comment", "/** Whether the gizmo is being hovered over */" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "Whether the gizmo is being hovered over" },
	};
#endif
	void Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsHovering_SetBit(void* Obj)
	{
		((UScalableConeGizmo*)Obj)->bIsHovering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UScalableConeGizmo), &Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsHovering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsHovering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsHovering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsDragging_MetaData[] = {
		{ "Comment", "/** Whether the gizmo is being dragged */" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "Whether the gizmo is being dragged" },
	};
#endif
	void Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsDragging_SetBit(void* Obj)
	{
		((UScalableConeGizmo*)Obj)->bIsDragging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsDragging = { "bIsDragging", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UScalableConeGizmo), &Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsDragging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsDragging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsDragging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_ActiveTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_ActiveTarget = { "ActiveTarget", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, ActiveTarget), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_ActiveTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_ActiveTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_DragStartWorldPosition_MetaData[] = {
		{ "Comment", "/** Used for calculations when moving the handles*/" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "Used for calculations when moving the handles" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_DragStartWorldPosition = { "DragStartWorldPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, DragStartWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_DragStartWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_DragStartWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_DragCurrentPositionProjected_MetaData[] = {
		{ "Comment", "// The position the drag is on currently (projected onto the line it is being dragged along)\n" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "The position the drag is on currently (projected onto the line it is being dragged along)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_DragCurrentPositionProjected = { "DragCurrentPositionProjected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, DragCurrentPositionProjected), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_DragCurrentPositionProjected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_DragCurrentPositionProjected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_InteractionStartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_InteractionStartPoint = { "InteractionStartPoint", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, InteractionStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_InteractionStartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_InteractionStartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_InteractionStartParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_InteractionStartParameter = { "InteractionStartParameter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, InteractionStartParameter), METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_InteractionStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_InteractionStartParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_HitAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_HitAxis = { "HitAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, HitAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_HitAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_HitAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_RotationPlaneX_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_RotationPlaneX = { "RotationPlaneX", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, RotationPlaneX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_RotationPlaneX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_RotationPlaneX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_RotationPlaneY_MetaData[] = {
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_RotationPlaneY = { "RotationPlaneY", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScalableConeGizmo, RotationPlaneY), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_RotationPlaneY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_RotationPlaneY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScalableConeGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_MaxAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_MinAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_ConeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_HitErrorThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_TransactionDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_Length,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_Angle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsHovering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_bIsDragging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_ActiveTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_DragStartWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_DragCurrentPositionProjected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_InteractionStartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_InteractionStartParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_HitAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_RotationPlaneX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScalableConeGizmo_Statics::NewProp_RotationPlaneY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScalableConeGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalableConeGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalableConeGizmo_Statics::ClassParams = {
		&UScalableConeGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScalableConeGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScalableConeGizmo()
	{
		if (!Z_Registration_Info_UClass_UScalableConeGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalableConeGizmo.OuterSingleton, Z_Construct_UClass_UScalableConeGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScalableConeGizmo.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<UScalableConeGizmo>()
	{
		return UScalableConeGizmo::StaticClass();
	}
	UScalableConeGizmo::UScalableConeGizmo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScalableConeGizmo);
	UScalableConeGizmo::~UScalableConeGizmo() {}
	void UScalableConeGizmoInputBehavior::StaticRegisterNativesUScalableConeGizmoInputBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScalableConeGizmoInputBehavior);
	UClass* Z_Construct_UClass_UScalableConeGizmoInputBehavior_NoRegister()
	{
		return UScalableConeGizmoInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UScalableConeGizmoInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScalableConeGizmoInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScalableConeGizmoInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A behavior that forwards clicking and dragging to the gizmo.\n */" },
		{ "IncludePath", "ScalableConeGizmo.h" },
		{ "ModuleRelativePath", "Public/ScalableConeGizmo.h" },
		{ "ToolTip", "A behavior that forwards clicking and dragging to the gizmo." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScalableConeGizmoInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScalableConeGizmoInputBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScalableConeGizmoInputBehavior_Statics::ClassParams = {
		&UScalableConeGizmoInputBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UScalableConeGizmoInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScalableConeGizmoInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScalableConeGizmoInputBehavior()
	{
		if (!Z_Registration_Info_UClass_UScalableConeGizmoInputBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScalableConeGizmoInputBehavior.OuterSingleton, Z_Construct_UClass_UScalableConeGizmoInputBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScalableConeGizmoInputBehavior.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<UScalableConeGizmoInputBehavior>()
	{
		return UScalableConeGizmoInputBehavior::StaticClass();
	}
	UScalableConeGizmoInputBehavior::UScalableConeGizmoInputBehavior() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScalableConeGizmoInputBehavior);
	UScalableConeGizmoInputBehavior::~UScalableConeGizmoInputBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_ScalableConeGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_ScalableConeGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScalableConeGizmoBuilder, UScalableConeGizmoBuilder::StaticClass, TEXT("UScalableConeGizmoBuilder"), &Z_Registration_Info_UClass_UScalableConeGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalableConeGizmoBuilder), 3320066243U) },
		{ Z_Construct_UClass_UScalableConeGizmo, UScalableConeGizmo::StaticClass, TEXT("UScalableConeGizmo"), &Z_Registration_Info_UClass_UScalableConeGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalableConeGizmo), 102046710U) },
		{ Z_Construct_UClass_UScalableConeGizmoInputBehavior, UScalableConeGizmoInputBehavior::StaticClass, TEXT("UScalableConeGizmoInputBehavior"), &Z_Registration_Info_UClass_UScalableConeGizmoInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScalableConeGizmoInputBehavior), 1500019981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_ScalableConeGizmo_h_3835526723(TEXT("/Script/LightGizmos"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_ScalableConeGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_ScalableConeGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
