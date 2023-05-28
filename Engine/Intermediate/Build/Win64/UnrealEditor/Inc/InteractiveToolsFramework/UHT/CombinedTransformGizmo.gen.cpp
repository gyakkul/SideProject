// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/CombinedTransformGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombinedTransformGizmo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ACombinedTransformGizmoActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ACombinedTransformGizmoActor_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AGizmoActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void ACombinedTransformGizmoActor::StaticRegisterNativesACombinedTransformGizmoActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombinedTransformGizmoActor);
	UClass* Z_Construct_UClass_ACombinedTransformGizmoActor_NoRegister()
	{
		return ACombinedTransformGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_ACombinedTransformGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateYZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateYZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateXZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateXZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslateXY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslateXY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotateZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniformScale_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisScaleX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisScaleX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisScaleY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisScaleY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisScaleZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisScaleZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneScaleYZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneScaleYZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneScaleXZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneScaleXZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneScaleXY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneScaleXY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGizmoActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ACombinedTransformGizmoActor is an Actor type intended to be used with UCombinedTransformGizmo,\n * as the in-scene visual representation of the Gizmo.\n * \n * FCombinedTransformGizmoActorFactory returns an instance of this Actor type (or a subclass), and based on\n * which Translate and Rotate UProperties are initialized, will associate those Components\n * with UInteractiveGizmo's that implement Axis Translation, Plane Translation, and Axis Rotation.\n * \n * If a particular sub-Gizmo is not required, simply set that FProperty to null.\n * \n * The static factory method ::ConstructDefault3AxisGizmo() creates and initializes an \n * Actor suitable for use in a standard 3-axis Transformation Gizmo.\n */" },
		{ "IncludePath", "BaseGizmos/CombinedTransformGizmo.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "ACombinedTransformGizmoActor is an Actor type intended to be used with UCombinedTransformGizmo,\nas the in-scene visual representation of the Gizmo.\n\nFCombinedTransformGizmoActorFactory returns an instance of this Actor type (or a subclass), and based on\nwhich Translate and Rotate UProperties are initialized, will associate those Components\nwith UInteractiveGizmo's that implement Axis Translation, Plane Translation, and Axis Rotation.\n\nIf a particular sub-Gizmo is not required, simply set that FProperty to null.\n\nThe static factory method ::ConstructDefault3AxisGizmo() creates and initializes an\nActor suitable for use in a standard 3-axis Transformation Gizmo." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateX_MetaData[] = {
		{ "Comment", "/** X Axis Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "X Axis Translation Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateX = { "TranslateX", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateX), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateY_MetaData[] = {
		{ "Comment", "/** Y Axis Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Y Axis Translation Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateY = { "TranslateY", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateY), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateZ_MetaData[] = {
		{ "Comment", "/** Z Axis Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z Axis Translation Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateZ = { "TranslateZ", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateYZ_MetaData[] = {
		{ "Comment", "/** YZ Plane Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "YZ Plane Translation Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateYZ = { "TranslateYZ", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateYZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateYZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateYZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXZ_MetaData[] = {
		{ "Comment", "/** XZ Plane Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "XZ Plane Translation Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXZ = { "TranslateXZ", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateXZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXY_MetaData[] = {
		{ "Comment", "/** XY Plane Translation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "XY Plane Translation Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXY = { "TranslateXY", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, TranslateXY), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateX_MetaData[] = {
		{ "Comment", "/** X Axis Rotation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "X Axis Rotation Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateX = { "RotateX", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, RotateX), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateY_MetaData[] = {
		{ "Comment", "/** Y Axis Rotation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Y Axis Rotation Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateY = { "RotateY", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, RotateY), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateZ_MetaData[] = {
		{ "Comment", "/** Z Axis Rotation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z Axis Rotation Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateZ = { "RotateZ", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, RotateZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotationSphere_MetaData[] = {
		{ "Comment", "/** Z Axis Rotation Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z Axis Rotation Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotationSphere = { "RotationSphere", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, RotationSphere), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotationSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotationSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_UniformScale_MetaData[] = {
		{ "Comment", "/** Uniform Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Uniform Scale Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_UniformScale = { "UniformScale", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, UniformScale), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_UniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_UniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleX_MetaData[] = {
		{ "Comment", "/** X Axis Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "X Axis Scale Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleX = { "AxisScaleX", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, AxisScaleX), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleY_MetaData[] = {
		{ "Comment", "/** Y Axis Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Y Axis Scale Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleY = { "AxisScaleY", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, AxisScaleY), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleZ_MetaData[] = {
		{ "Comment", "/** Z Axis Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z Axis Scale Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleZ = { "AxisScaleZ", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, AxisScaleZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleYZ_MetaData[] = {
		{ "Comment", "/** YZ Plane Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "YZ Plane Scale Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleYZ = { "PlaneScaleYZ", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, PlaneScaleYZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleYZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleYZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXZ_MetaData[] = {
		{ "Comment", "/** XZ Plane Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "XZ Plane Scale Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXZ = { "PlaneScaleXZ", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, PlaneScaleXZ), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXY_MetaData[] = {
		{ "Comment", "/** XY Plane Scale Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "XY Plane Scale Component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXY = { "PlaneScaleXY", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACombinedTransformGizmoActor, PlaneScaleXY), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateYZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_TranslateXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotateZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_RotationSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_UniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_AxisScaleZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleYZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::NewProp_PlaneScaleXY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombinedTransformGizmoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::ClassParams = {
		&ACombinedTransformGizmoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::PropPointers),
		0,
		0x019002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACombinedTransformGizmoActor()
	{
		if (!Z_Registration_Info_UClass_ACombinedTransformGizmoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombinedTransformGizmoActor.OuterSingleton, Z_Construct_UClass_ACombinedTransformGizmoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACombinedTransformGizmoActor.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<ACombinedTransformGizmoActor>()
	{
		return ACombinedTransformGizmoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombinedTransformGizmoActor);
	ACombinedTransformGizmoActor::~ACombinedTransformGizmoActor() {}
	void UCombinedTransformGizmoBuilder::StaticRegisterNativesUCombinedTransformGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombinedTransformGizmoBuilder);
	UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder_NoRegister()
	{
		return UCombinedTransformGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/CombinedTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombinedTransformGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::ClassParams = {
		&UCombinedTransformGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.OuterSingleton, Z_Construct_UClass_UCombinedTransformGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UCombinedTransformGizmoBuilder>()
	{
		return UCombinedTransformGizmoBuilder::StaticClass();
	}
	UCombinedTransformGizmoBuilder::UCombinedTransformGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombinedTransformGizmoBuilder);
	UCombinedTransformGizmoBuilder::~UCombinedTransformGizmoBuilder() {}
	void UCombinedTransformGizmo::StaticRegisterNativesUCombinedTransformGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombinedTransformGizmo);
	UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister()
	{
		return UCombinedTransformGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UCombinedTransformGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToWorldGrid_MetaData[];
#endif
		static void NewProp_bSnapToWorldGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToWorldGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGridSizeIsExplicit_MetaData[];
#endif
		static void NewProp_bGridSizeIsExplicit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGridSizeIsExplicit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplicitGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotationGridSizeIsExplicit_MetaData[];
#endif
		static void NewProp_bRotationGridSizeIsExplicit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotationGridSizeIsExplicit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitRotationGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplicitRotationGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToWorldRotGrid_MetaData[];
#endif
		static void NewProp_bSnapToWorldRotGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToWorldRotGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseContextCoordinateSystem_MetaData[];
#endif
		static void NewProp_bUseContextCoordinateSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseContextCoordinateSystem;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentCoordinateSystem_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCoordinateSystem_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentCoordinateSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseContextGizmoMode_MetaData[];
#endif
		static void NewProp_bUseContextGizmoMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseContextGizmoMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActiveGizmoMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmoMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActiveGizmoMode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveComponents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveGizmos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveGizmos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveGizmos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraAxisSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraAxisSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisXSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisXSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisYSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisYSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisZSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AxisZSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitAxisXSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnitAxisXSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitAxisYSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnitAxisYSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitAxisZSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnitAxisZSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombinedTransformGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCombinedTransformGizmo provides standard Transformation Gizmo interactions,\n * applied to a UTransformProxy target object. By default the Gizmo will be\n * a standard XYZ translate/rotate Gizmo (axis and plane translation).\n * \n * The in-scene representation of the Gizmo is a ACombinedTransformGizmoActor (or subclass).\n * This Actor has FProperty members for the various sub-widgets, each as a separate Component.\n * Any particular sub-widget of the Gizmo can be disabled by setting the respective\n * Actor Component to null. \n * \n * So, to create non-standard variants of the Transform Gizmo, set a new GizmoActorBuilder \n * in the UCombinedTransformGizmoBuilder registered with the GizmoManager. Return\n * a suitably-configured GizmoActor and everything else will be handled automatically.\n * \n */" },
		{ "IncludePath", "BaseGizmos/CombinedTransformGizmo.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "UCombinedTransformGizmo provides standard Transformation Gizmo interactions,\napplied to a UTransformProxy target object. By default the Gizmo will be\na standard XYZ translate/rotate Gizmo (axis and plane translation).\n\nThe in-scene representation of the Gizmo is a ACombinedTransformGizmoActor (or subclass).\nThis Actor has FProperty members for the various sub-widgets, each as a separate Component.\nAny particular sub-widget of the Gizmo can be disabled by setting the respective\nActor Component to null.\n\nSo, to create non-standard variants of the Transform Gizmo, set a new GizmoActorBuilder\nin the UCombinedTransformGizmoBuilder registered with the GizmoManager. Return\na suitably-configured GizmoActor and everything else will be handled automatically." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveTarget_MetaData[] = {
		{ "Comment", "/** The active target object for the Gizmo */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "The active target object for the Gizmo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveTarget = { "ActiveTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, ActiveTarget), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid_MetaData[] = {
		{ "Comment", "/**\n\x09 * bSnapToWorldGrid controls whether any position snapping is applied, if possible, for Axis and Plane translations, via the ContextQueriesAPI\n\x09 * Despite the name, this flag controls both world-space grid snapping and relative snapping\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "bSnapToWorldGrid controls whether any position snapping is applied, if possible, for Axis and Plane translations, via the ContextQueriesAPI\nDespite the name, this flag controls both world-space grid snapping and relative snapping" },
	};
#endif
	void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid_SetBit(void* Obj)
	{
		((UCombinedTransformGizmo*)Obj)->bSnapToWorldGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid = { "bSnapToWorldGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional grid size which overrides the Context Grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Optional grid size which overrides the Context Grid" },
	};
#endif
	void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_SetBit(void* Obj)
	{
		((UCombinedTransformGizmo*)Obj)->bGridSizeIsExplicit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit = { "bGridSizeIsExplicit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitGridSize = { "ExplicitGridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, ExplicitGridSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional grid size which overrides the Context Rotation Grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Optional grid size which overrides the Context Rotation Grid" },
	};
#endif
	void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_SetBit(void* Obj)
	{
		((UCombinedTransformGizmo*)Obj)->bRotationGridSizeIsExplicit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit = { "bRotationGridSizeIsExplicit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitRotationGridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitRotationGridSize = { "ExplicitRotationGridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, ExplicitRotationGridSize), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitRotationGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitRotationGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then when using world frame, Axis and Plane translation snap to the world grid via the ContextQueriesAPI (in RotationSnapFunction)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "If true, then when using world frame, Axis and Plane translation snap to the world grid via the ContextQueriesAPI (in RotationSnapFunction)" },
	};
#endif
	void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_SetBit(void* Obj)
	{
		((UCombinedTransformGizmo*)Obj)->bSnapToWorldRotGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid = { "bSnapToWorldRotGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether to use the World/Local coordinate system provided by the context via the ContextyQueriesAPI.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Whether to use the World/Local coordinate system provided by the context via the ContextyQueriesAPI." },
	};
#endif
	void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem_SetBit(void* Obj)
	{
		((UCombinedTransformGizmo*)Obj)->bUseContextCoordinateSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem = { "bUseContextCoordinateSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem_MetaData[] = {
		{ "Comment", "/**\n\x09 * Current coordinate system in use. If bUseContextCoordinateSystem is true, this value will be updated internally every Tick()\n\x09 * by quering the ContextyQueriesAPI, otherwise the default is Local and the client can change it as necessary\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Current coordinate system in use. If bUseContextCoordinateSystem is true, this value will be updated internally every Tick()\nby quering the ContextyQueriesAPI, otherwise the default is Local and the client can change it as necessary" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem = { "CurrentCoordinateSystem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, CurrentCoordinateSystem), Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem_MetaData)) }; // 1958283934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether to use the Gizmo Mode provided by the context via the ContextyQueriesAPI.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Whether to use the Gizmo Mode provided by the context via the ContextyQueriesAPI." },
	};
#endif
	void Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode_SetBit(void* Obj)
	{
		((UCombinedTransformGizmo*)Obj)->bUseContextGizmoMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode = { "bUseContextGizmoMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCombinedTransformGizmo), &Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Current dynamic sub-widget visibility mode to use (eg Translate-Only, Scale-Only, Combined, etc)\n\x09 * If bUseContextGizmoMode is true, this value will be updated internally every Tick()\n\x09 * by quering the ContextyQueriesAPI, otherwise the default is Combined and the client can change it as necessary\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Current dynamic sub-widget visibility mode to use (eg Translate-Only, Scale-Only, Combined, etc)\nIf bUseContextGizmoMode is true, this value will be updated internally every Tick()\nby quering the ContextyQueriesAPI, otherwise the default is Combined and the client can change it as necessary" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode = { "ActiveGizmoMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, ActiveGizmoMode), Z_Construct_UEnum_InteractiveToolsFramework_EToolContextTransformGizmoMode, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode_MetaData)) }; // 318942864
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents_Inner = { "ActiveComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents_MetaData[] = {
		{ "Comment", "/** List of current-active child components */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "List of current-active child components" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents = { "ActiveComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, ActiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos_Inner = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractiveGizmo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos_MetaData[] = {
		{ "Comment", "/** list of currently-active child gizmos */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "list of currently-active child gizmos" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos = { "ActiveGizmos", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, ActiveGizmos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CameraAxisSource_MetaData[] = {
		{ "Comment", "/** Axis that points towards camera, X/Y plane tangents aligned to right/up. Shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Axis that points towards camera, X/Y plane tangents aligned to right/up. Shared across Gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CameraAxisSource = { "CameraAxisSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, CameraAxisSource), Z_Construct_UClass_UGizmoConstantFrameAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CameraAxisSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CameraAxisSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisXSource_MetaData[] = {
		{ "Comment", "/** X-axis source is shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "X-axis source is shared across Gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisXSource = { "AxisXSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, AxisXSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisXSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisXSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisYSource_MetaData[] = {
		{ "Comment", "/** Y-axis source is shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Y-axis source is shared across Gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisYSource = { "AxisYSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, AxisYSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisYSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisYSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisZSource_MetaData[] = {
		{ "Comment", "/** Z-axis source is shared across Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z-axis source is shared across Gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisZSource = { "AxisZSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, AxisZSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisZSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisZSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisXSource_MetaData[] = {
		{ "Comment", "/** Local X-axis source (ie 1,0,0) is shared across Scale Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Local X-axis source (ie 1,0,0) is shared across Scale Gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisXSource = { "UnitAxisXSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, UnitAxisXSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisXSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisXSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisYSource_MetaData[] = {
		{ "Comment", "/** Y-axis source (ie 0,1,0) is shared across Scale Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Y-axis source (ie 0,1,0) is shared across Scale Gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisYSource = { "UnitAxisYSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, UnitAxisYSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisYSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisYSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisZSource_MetaData[] = {
		{ "Comment", "/** Z-axis source (ie 0,0,1) is shared across Scale Gizmos, and created internally during SetActiveTarget() */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "Z-axis source (ie 0,0,1) is shared across Scale Gizmos, and created internally during SetActiveTarget()" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisZSource = { "UnitAxisZSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, UnitAxisZSource), Z_Construct_UClass_UGizmoComponentAxisSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisZSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisZSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_StateTarget_MetaData[] = {
		{ "Comment", "/** \n\x09 * State target is shared across gizmos, and created internally during SetActiveTarget(). \n\x09 * Several FChange providers are registered with this StateTarget, including the UCombinedTransformGizmo\n\x09 * itself (IToolCommandChangeSource implementation above is called)\n\x09 */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/CombinedTransformGizmo.h" },
		{ "ToolTip", "State target is shared across gizmos, and created internally during SetActiveTarget().\nSeveral FChange providers are registered with this StateTarget, including the UCombinedTransformGizmo\nitself (IToolCommandChangeSource implementation above is called)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_StateTarget = { "StateTarget", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombinedTransformGizmo, StateTarget), Z_Construct_UClass_UGizmoTransformChangeStateTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_StateTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_StateTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombinedTransformGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bGridSizeIsExplicit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bRotationGridSizeIsExplicit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ExplicitRotationGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bSnapToWorldRotGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextCoordinateSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CurrentCoordinateSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_bUseContextGizmoMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmoMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_ActiveGizmos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_CameraAxisSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisXSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisYSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_AxisZSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisXSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisYSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_UnitAxisZSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombinedTransformGizmo_Statics::NewProp_StateTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombinedTransformGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombinedTransformGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombinedTransformGizmo_Statics::ClassParams = {
		&UCombinedTransformGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombinedTransformGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCombinedTransformGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombinedTransformGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombinedTransformGizmo()
	{
		if (!Z_Registration_Info_UClass_UCombinedTransformGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombinedTransformGizmo.OuterSingleton, Z_Construct_UClass_UCombinedTransformGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombinedTransformGizmo.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UCombinedTransformGizmo>()
	{
		return UCombinedTransformGizmo::StaticClass();
	}
	UCombinedTransformGizmo::UCombinedTransformGizmo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombinedTransformGizmo);
	UCombinedTransformGizmo::~UCombinedTransformGizmo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACombinedTransformGizmoActor, ACombinedTransformGizmoActor::StaticClass, TEXT("ACombinedTransformGizmoActor"), &Z_Registration_Info_UClass_ACombinedTransformGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombinedTransformGizmoActor), 102000903U) },
		{ Z_Construct_UClass_UCombinedTransformGizmoBuilder, UCombinedTransformGizmoBuilder::StaticClass, TEXT("UCombinedTransformGizmoBuilder"), &Z_Registration_Info_UClass_UCombinedTransformGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombinedTransformGizmoBuilder), 965793785U) },
		{ Z_Construct_UClass_UCombinedTransformGizmo, UCombinedTransformGizmo::StaticClass, TEXT("UCombinedTransformGizmo"), &Z_Registration_Info_UClass_UCombinedTransformGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombinedTransformGizmo), 4056659489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_1158942013(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_CombinedTransformGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
