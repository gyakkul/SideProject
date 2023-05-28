// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SpotLightGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotLightGizmo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ASpotLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AGizmoActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoViewContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmo();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_ASpotLightGizmoActor();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_ASpotLightGizmoActor_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_UScalableConeGizmo_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USpotLightGizmo();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USpotLightGizmo_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USpotLightGizmoBuilder();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USpotLightGizmoBuilder_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USpotLightGizmoInputBehavior();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USpotLightGizmoInputBehavior_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USubTransformProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LightGizmos();
// End Cross Module References
	void USpotLightGizmoBuilder::StaticRegisterNativesUSpotLightGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpotLightGizmoBuilder);
	UClass* Z_Construct_UClass_USpotLightGizmoBuilder_NoRegister()
	{
		return USpotLightGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USpotLightGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpotLightGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpotLightGizmo.h" },
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpotLightGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpotLightGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpotLightGizmoBuilder_Statics::ClassParams = {
		&USpotLightGizmoBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpotLightGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_USpotLightGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpotLightGizmoBuilder.OuterSingleton, Z_Construct_UClass_USpotLightGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpotLightGizmoBuilder.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<USpotLightGizmoBuilder>()
	{
		return USpotLightGizmoBuilder::StaticClass();
	}
	USpotLightGizmoBuilder::USpotLightGizmoBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpotLightGizmoBuilder);
	USpotLightGizmoBuilder::~USpotLightGizmoBuilder() {}
	void ASpotLightGizmoActor::StaticRegisterNativesASpotLightGizmoActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpotLightGizmoActor);
	UClass* Z_Construct_UClass_ASpotLightGizmoActor_NoRegister()
	{
		return ASpotLightGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_ASpotLightGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpotLightGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGizmoActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpotLightGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpotLightGizmo.h" },
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpotLightGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpotLightGizmoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpotLightGizmoActor_Statics::ClassParams = {
		&ASpotLightGizmoActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpotLightGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLightGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpotLightGizmoActor()
	{
		if (!Z_Registration_Info_UClass_ASpotLightGizmoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpotLightGizmoActor.OuterSingleton, Z_Construct_UClass_ASpotLightGizmoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpotLightGizmoActor.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<ASpotLightGizmoActor>()
	{
		return ASpotLightGizmoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpotLightGizmoActor);
	ASpotLightGizmoActor::~ASpotLightGizmoActor() {}
	void USpotLightGizmo::StaticRegisterNativesUSpotLightGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpotLightGizmo);
	UClass* Z_Construct_UClass_USpotLightGizmo_NoRegister()
	{
		return USpotLightGizmo::StaticClass();
	}
	struct Z_Construct_UClass_USpotLightGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterAngleGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OuterAngleGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerAngleGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InnerAngleGizmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoViewContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoViewContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragStartWorldPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DragStartWorldPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionStartParameter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionStartParameter;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpotLightGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * USpotLightGizmo provides a gizmo to allow for editing spot light properties in viewport\n * Currently supports changing the inner and outer cone angle and scaling the attenuation radius\n *\n */" },
		{ "IncludePath", "SpotLightGizmo.h" },
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
		{ "ToolTip", "USpotLightGizmo provides a gizmo to allow for editing spot light properties in viewport\nCurrently supports changing the inner and outer cone angle and scaling the attenuation radius" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_LightActor_MetaData[] = {
		{ "Comment", "/** The current target light the gizmo is attached to*/" },
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
		{ "ToolTip", "The current target light the gizmo is attached to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_LightActor = { "LightActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightGizmo, LightActor), Z_Construct_UClass_ASpotLight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_LightActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_LightActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightGizmo, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "Comment", "/** A transform proxy to use with other gizmos*/" },
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
		{ "ToolTip", "A transform proxy to use with other gizmos" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightGizmo, TransformProxy), Z_Construct_UClass_USubTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_OuterAngleGizmo_MetaData[] = {
		{ "Comment", "/** The gizmo to change the outer angle of the spotlight */" },
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
		{ "ToolTip", "The gizmo to change the outer angle of the spotlight" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_OuterAngleGizmo = { "OuterAngleGizmo", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightGizmo, OuterAngleGizmo), Z_Construct_UClass_UScalableConeGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_OuterAngleGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_OuterAngleGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_InnerAngleGizmo_MetaData[] = {
		{ "Comment", "/** The gizmo to change the inner angle of the spotlight */" },
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
		{ "ToolTip", "The gizmo to change the inner angle of the spotlight" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_InnerAngleGizmo = { "InnerAngleGizmo", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightGizmo, InnerAngleGizmo), Z_Construct_UClass_UScalableConeGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_InnerAngleGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_InnerAngleGizmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_GizmoActor_MetaData[] = {
		{ "Comment", "/** The internal gizmo actor that is used by the gizmo \n\x09 *  We need a GizmoActor separate from the 2 UScalableConeGizmo's\n\x09 *  so that we can have one handle that scales the attenuation for\n\x09 *  both of them simultaneously\n\x09 */" },
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
		{ "ToolTip", "The internal gizmo actor that is used by the gizmo\nWe need a GizmoActor separate from the 2 UScalableConeGizmo's\nso that we can have one handle that scales the attenuation for\nboth of them simultaneously" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_GizmoActor = { "GizmoActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightGizmo, GizmoActor), Z_Construct_UClass_ASpotLightGizmoActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_GizmoActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_GizmoActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_GizmoViewContext_MetaData[] = {
		{ "Comment", "/** Used to properly render the handle gizmo. */" },
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
		{ "ToolTip", "Used to properly render the handle gizmo." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_GizmoViewContext = { "GizmoViewContext", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightGizmo, GizmoViewContext), Z_Construct_UClass_UGizmoViewContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_GizmoViewContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_GizmoViewContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_DragStartWorldPosition_MetaData[] = {
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_DragStartWorldPosition = { "DragStartWorldPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightGizmo, DragStartWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_DragStartWorldPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_DragStartWorldPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_InteractionStartParameter_MetaData[] = {
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_InteractionStartParameter = { "InteractionStartParameter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpotLightGizmo, InteractionStartParameter), METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_InteractionStartParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_InteractionStartParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsHovering_MetaData[] = {
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
	};
#endif
	void Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsHovering_SetBit(void* Obj)
	{
		((USpotLightGizmo*)Obj)->bIsHovering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USpotLightGizmo), &Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsHovering_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsHovering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsHovering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsDragging_MetaData[] = {
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
	};
#endif
	void Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsDragging_SetBit(void* Obj)
	{
		((USpotLightGizmo*)Obj)->bIsDragging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsDragging = { "bIsDragging", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USpotLightGizmo), &Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsDragging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsDragging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsDragging_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpotLightGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_LightActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_OuterAngleGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_InnerAngleGizmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_GizmoActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_GizmoViewContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_DragStartWorldPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_InteractionStartParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsHovering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpotLightGizmo_Statics::NewProp_bIsDragging,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpotLightGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpotLightGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpotLightGizmo_Statics::ClassParams = {
		&USpotLightGizmo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpotLightGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpotLightGizmo()
	{
		if (!Z_Registration_Info_UClass_USpotLightGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpotLightGizmo.OuterSingleton, Z_Construct_UClass_USpotLightGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpotLightGizmo.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<USpotLightGizmo>()
	{
		return USpotLightGizmo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpotLightGizmo);
	USpotLightGizmo::~USpotLightGizmo() {}
	void USpotLightGizmoInputBehavior::StaticRegisterNativesUSpotLightGizmoInputBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpotLightGizmoInputBehavior);
	UClass* Z_Construct_UClass_USpotLightGizmoInputBehavior_NoRegister()
	{
		return USpotLightGizmoInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_USpotLightGizmoInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpotLightGizmoInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnyButtonInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmoInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A behavior that forwards clicking and dragging to the gizmo.\n */" },
		{ "IncludePath", "SpotLightGizmo.h" },
		{ "ModuleRelativePath", "Private/SpotLightGizmo.h" },
		{ "ToolTip", "A behavior that forwards clicking and dragging to the gizmo." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpotLightGizmoInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpotLightGizmoInputBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpotLightGizmoInputBehavior_Statics::ClassParams = {
		&USpotLightGizmoInputBehavior::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmoInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmoInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpotLightGizmoInputBehavior()
	{
		if (!Z_Registration_Info_UClass_USpotLightGizmoInputBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpotLightGizmoInputBehavior.OuterSingleton, Z_Construct_UClass_USpotLightGizmoInputBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpotLightGizmoInputBehavior.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<USpotLightGizmoInputBehavior>()
	{
		return USpotLightGizmoInputBehavior::StaticClass();
	}
	USpotLightGizmoInputBehavior::USpotLightGizmoInputBehavior() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpotLightGizmoInputBehavior);
	USpotLightGizmoInputBehavior::~USpotLightGizmoInputBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SpotLightGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SpotLightGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpotLightGizmoBuilder, USpotLightGizmoBuilder::StaticClass, TEXT("USpotLightGizmoBuilder"), &Z_Registration_Info_UClass_USpotLightGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpotLightGizmoBuilder), 3536999883U) },
		{ Z_Construct_UClass_ASpotLightGizmoActor, ASpotLightGizmoActor::StaticClass, TEXT("ASpotLightGizmoActor"), &Z_Registration_Info_UClass_ASpotLightGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpotLightGizmoActor), 228577064U) },
		{ Z_Construct_UClass_USpotLightGizmo, USpotLightGizmo::StaticClass, TEXT("USpotLightGizmo"), &Z_Registration_Info_UClass_USpotLightGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpotLightGizmo), 2532067003U) },
		{ Z_Construct_UClass_USpotLightGizmoInputBehavior, USpotLightGizmoInputBehavior::StaticClass, TEXT("USpotLightGizmoInputBehavior"), &Z_Registration_Info_UClass_USpotLightGizmoInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpotLightGizmoInputBehavior), 1479816672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SpotLightGizmo_h_4237587548(TEXT("/Script/LightGizmos"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SpotLightGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Private_SpotLightGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
