// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DirectionalLightGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalLightGizmo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ADirectionalLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AGizmoActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseComponent_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_ADirectionalLightGizmoActor();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_ADirectionalLightGizmoActor_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UDirectionalLightGizmo();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UDirectionalLightGizmo_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UDirectionalLightGizmoBuilder();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UDirectionalLightGizmoBuilder_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UDirectionalLightGizmoInputBehavior();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USubTransformProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LightGizmos();
// End Cross Module References
	void UDirectionalLightGizmoBuilder::StaticRegisterNativesUDirectionalLightGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectionalLightGizmoBuilder);
	UClass* Z_Construct_UClass_UDirectionalLightGizmoBuilder_NoRegister()
	{
		return UDirectionalLightGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UDirectionalLightGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirectionalLightGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectionalLightGizmo.h" },
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirectionalLightGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectionalLightGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectionalLightGizmoBuilder_Statics::ClassParams = {
		&UDirectionalLightGizmoBuilder::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDirectionalLightGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_UDirectionalLightGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectionalLightGizmoBuilder.OuterSingleton, Z_Construct_UClass_UDirectionalLightGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDirectionalLightGizmoBuilder.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<UDirectionalLightGizmoBuilder>()
	{
		return UDirectionalLightGizmoBuilder::StaticClass();
	}
	UDirectionalLightGizmoBuilder::UDirectionalLightGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalLightGizmoBuilder);
	UDirectionalLightGizmoBuilder::~UDirectionalLightGizmoBuilder() {}
	void ADirectionalLightGizmoActor::StaticRegisterNativesADirectionalLightGizmoActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADirectionalLightGizmoActor);
	UClass* Z_Construct_UClass_ADirectionalLightGizmoActor_NoRegister()
	{
		return ADirectionalLightGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_ADirectionalLightGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADirectionalLightGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGizmoActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADirectionalLightGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DirectionalLightGizmo.h" },
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADirectionalLightGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADirectionalLightGizmoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADirectionalLightGizmoActor_Statics::ClassParams = {
		&ADirectionalLightGizmoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADirectionalLightGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADirectionalLightGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADirectionalLightGizmoActor()
	{
		if (!Z_Registration_Info_UClass_ADirectionalLightGizmoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADirectionalLightGizmoActor.OuterSingleton, Z_Construct_UClass_ADirectionalLightGizmoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADirectionalLightGizmoActor.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<ADirectionalLightGizmoActor>()
	{
		return ADirectionalLightGizmoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADirectionalLightGizmoActor);
	ADirectionalLightGizmoActor::~ADirectionalLightGizmoActor() {}
	void UDirectionalLightGizmo::StaticRegisterNativesUDirectionalLightGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectionalLightGizmo);
	UClass* Z_Construct_UClass_UDirectionalLightGizmo_NoRegister()
	{
		return UDirectionalLightGizmo::StaticClass();
	}
	struct Z_Construct_UClass_UDirectionalLightGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoViewContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightActor;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragStartWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragStartWorldPosition;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationPlaneZ_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationPlaneZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HitComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirectionalLightGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDirectionalLightGizmo provides a gizmo to allow for editing directional light properties in viewport\n * Currently supports rotating the light around the world Z axis and its Y Axis\n *\n */" },
		{ "IncludePath", "DirectionalLightGizmo.h" },
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
		{ "ToolTip", "UDirectionalLightGizmo provides a gizmo to allow for editing directional light properties in viewport\nCurrently supports rotating the light around the world Z axis and its Y Axis" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "Comment", "/** A transform proxy of the LightActor */" },
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
		{ "ToolTip", "A transform proxy of the LightActor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, TransformProxy), Z_Construct_UClass_USubTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_GizmoActor_MetaData[] = {
		{ "Comment", "/** The internal actor used by the light gizmo */" },
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
		{ "ToolTip", "The internal actor used by the light gizmo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_GizmoActor = { "GizmoActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, GizmoActor), Z_Construct_UClass_ADirectionalLightGizmoActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_GizmoActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_GizmoActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_GizmoViewContext_MetaData[] = {
		{ "Comment", "/** Used to properly render the handle gizmo. */" },
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
		{ "ToolTip", "Used to properly render the handle gizmo." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_GizmoViewContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_GizmoViewContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_LightActor_MetaData[] = {
		{ "Comment", "/** The current target of the gizmo */" },
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
		{ "ToolTip", "The current target of the gizmo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_LightActor = { "LightActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, LightActor), Z_Construct_UClass_ADirectionalLight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_LightActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_LightActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsHovering_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsHovering_SetBit(void* Obj)
	{
		((UDirectionalLightGizmo*)Obj)->bIsHovering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDirectionalLightGizmo), &Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsHovering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsHovering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsHovering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsDragging_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	void Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsDragging_SetBit(void* Obj)
	{
		((UDirectionalLightGizmo*)Obj)->bIsDragging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsDragging = { "bIsDragging", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDirectionalLightGizmo), &Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsDragging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsDragging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsDragging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_DragStartWorldPosition_MetaData[] = {
		{ "Comment", "/** Parameters used during hit testing */" },
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
		{ "ToolTip", "Parameters used during hit testing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_DragStartWorldPosition = { "DragStartWorldPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, DragStartWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_DragStartWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_DragStartWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_InteractionStartPoint_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_InteractionStartPoint = { "InteractionStartPoint", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, InteractionStartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_InteractionStartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_InteractionStartPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_InteractionStartParameter_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_InteractionStartParameter = { "InteractionStartParameter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, InteractionStartParameter), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_InteractionStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_InteractionStartParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_HitAxis_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_HitAxis = { "HitAxis", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, HitAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_HitAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_HitAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_RotationPlaneX_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_RotationPlaneX = { "RotationPlaneX", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, RotationPlaneX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_RotationPlaneX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_RotationPlaneX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_RotationPlaneZ_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_RotationPlaneZ = { "RotationPlaneZ", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, RotationPlaneZ), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_RotationPlaneZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_RotationPlaneZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, HitComponent), Z_Construct_UClass_UGizmoBaseComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_HitComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_ArrowLength_MetaData[] = {
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_ArrowLength = { "ArrowLength", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDirectionalLightGizmo, ArrowLength), METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_ArrowLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_ArrowLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDirectionalLightGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_GizmoActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_GizmoViewContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_LightActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsHovering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_bIsDragging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_DragStartWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_InteractionStartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_InteractionStartParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_HitAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_RotationPlaneX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_RotationPlaneZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightGizmo_Statics::NewProp_ArrowLength,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirectionalLightGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectionalLightGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectionalLightGizmo_Statics::ClassParams = {
		&UDirectionalLightGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDirectionalLightGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDirectionalLightGizmo()
	{
		if (!Z_Registration_Info_UClass_UDirectionalLightGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectionalLightGizmo.OuterSingleton, Z_Construct_UClass_UDirectionalLightGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDirectionalLightGizmo.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<UDirectionalLightGizmo>()
	{
		return UDirectionalLightGizmo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalLightGizmo);
	UDirectionalLightGizmo::~UDirectionalLightGizmo() {}
	void UDirectionalLightGizmoInputBehavior::StaticRegisterNativesUDirectionalLightGizmoInputBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectionalLightGizmoInputBehavior);
	UClass* Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_NoRegister()
	{
		return UDirectionalLightGizmoInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A behavior that forwards clicking and dragging to the gizmo.\n */" },
		{ "IncludePath", "DirectionalLightGizmo.h" },
		{ "ModuleRelativePath", "Private/DirectionalLightGizmo.h" },
		{ "ToolTip", "A behavior that forwards clicking and dragging to the gizmo." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectionalLightGizmoInputBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_Statics::ClassParams = {
		&UDirectionalLightGizmoInputBehavior::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDirectionalLightGizmoInputBehavior()
	{
		if (!Z_Registration_Info_UClass_UDirectionalLightGizmoInputBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectionalLightGizmoInputBehavior.OuterSingleton, Z_Construct_UClass_UDirectionalLightGizmoInputBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDirectionalLightGizmoInputBehavior.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<UDirectionalLightGizmoInputBehavior>()
	{
		return UDirectionalLightGizmoInputBehavior::StaticClass();
	}
	UDirectionalLightGizmoInputBehavior::UDirectionalLightGizmoInputBehavior() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalLightGizmoInputBehavior);
	UDirectionalLightGizmoInputBehavior::~UDirectionalLightGizmoInputBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDirectionalLightGizmoBuilder, UDirectionalLightGizmoBuilder::StaticClass, TEXT("UDirectionalLightGizmoBuilder"), &Z_Registration_Info_UClass_UDirectionalLightGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectionalLightGizmoBuilder), 965151871U) },
		{ Z_Construct_UClass_ADirectionalLightGizmoActor, ADirectionalLightGizmoActor::StaticClass, TEXT("ADirectionalLightGizmoActor"), &Z_Registration_Info_UClass_ADirectionalLightGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADirectionalLightGizmoActor), 501829823U) },
		{ Z_Construct_UClass_UDirectionalLightGizmo, UDirectionalLightGizmo::StaticClass, TEXT("UDirectionalLightGizmo"), &Z_Registration_Info_UClass_UDirectionalLightGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectionalLightGizmo), 364715588U) },
		{ Z_Construct_UClass_UDirectionalLightGizmoInputBehavior, UDirectionalLightGizmoInputBehavior::StaticClass, TEXT("UDirectionalLightGizmoInputBehavior"), &Z_Registration_Info_UClass_UDirectionalLightGizmoInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectionalLightGizmoInputBehavior), 1868948014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_1024493167(TEXT("/Script/LightGizmos"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_DirectionalLightGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
