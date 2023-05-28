// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Gizmo/VIPivotTransformGizmo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIPivotTransformGizmo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_APivotTransformGizmo();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_APivotTransformGizmo_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UAxisGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotRotationGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotRotationGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotScaleGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotScaleGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotTranslationGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UUniformScaleGizmoHandleGroup_NoRegister();
// End Cross Module References
	void APivotTransformGizmo::StaticRegisterNativesAPivotTransformGizmo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APivotTransformGizmo);
	UClass* Z_Construct_UClass_APivotTransformGizmo_NoRegister()
	{
		return APivotTransformGizmo::StaticClass();
	}
	struct Z_Construct_UClass_APivotTransformGizmo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniformScaleGizmoHandleGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UniformScaleGizmoHandleGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationGizmoHandleGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslationGizmoHandleGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleGizmoHandleGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScaleGizmoHandleGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTranslationGizmoHandleGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaneTranslationGizmoHandleGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationGizmoHandleGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationGizmoHandleGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchGizmoHandleGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StretchGizmoHandleGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDraggingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastDraggingHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APivotTransformGizmo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseTransformGizmo,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A transform gizmo on the pivot that allows you to interact with selected objects by moving, scaling and rotating.\n */" },
		{ "IncludePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "A transform gizmo on the pivot that allows you to interact with selected objects by moving, scaling and rotating." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_UniformScaleGizmoHandleGroup_MetaData[] = {
		{ "Comment", "/** Uniform scale handle group component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Uniform scale handle group component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_UniformScaleGizmoHandleGroup = { "UniformScaleGizmoHandleGroup", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotTransformGizmo, UniformScaleGizmoHandleGroup), Z_Construct_UClass_UUniformScaleGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_UniformScaleGizmoHandleGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_UniformScaleGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_TranslationGizmoHandleGroup_MetaData[] = {
		{ "Comment", "/** Translation handle group component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Translation handle group component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_TranslationGizmoHandleGroup = { "TranslationGizmoHandleGroup", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotTransformGizmo, TranslationGizmoHandleGroup), Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_TranslationGizmoHandleGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_TranslationGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_ScaleGizmoHandleGroup_MetaData[] = {
		{ "Comment", "/** Scale handle group component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Scale handle group component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_ScaleGizmoHandleGroup = { "ScaleGizmoHandleGroup", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotTransformGizmo, ScaleGizmoHandleGroup), Z_Construct_UClass_UPivotScaleGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_ScaleGizmoHandleGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_ScaleGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_PlaneTranslationGizmoHandleGroup_MetaData[] = {
		{ "Comment", "/** Plane translation handle group component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Plane translation handle group component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_PlaneTranslationGizmoHandleGroup = { "PlaneTranslationGizmoHandleGroup", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotTransformGizmo, PlaneTranslationGizmoHandleGroup), Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_PlaneTranslationGizmoHandleGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_PlaneTranslationGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_RotationGizmoHandleGroup_MetaData[] = {
		{ "Comment", "/** Rotation handle group component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Rotation handle group component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_RotationGizmoHandleGroup = { "RotationGizmoHandleGroup", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotTransformGizmo, RotationGizmoHandleGroup), Z_Construct_UClass_UPivotRotationGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_RotationGizmoHandleGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_RotationGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_StretchGizmoHandleGroup_MetaData[] = {
		{ "Comment", "/** Stretch handle group component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Stretch handle group component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_StretchGizmoHandleGroup = { "StretchGizmoHandleGroup", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotTransformGizmo, StretchGizmoHandleGroup), Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_StretchGizmoHandleGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_StretchGizmoHandleGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_LastDraggingHandle_MetaData[] = {
		{ "Comment", "/** Handle from previous tick that was dragged */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Handle from previous tick that was dragged" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_LastDraggingHandle = { "LastDraggingHandle", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APivotTransformGizmo, LastDraggingHandle), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_LastDraggingHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_LastDraggingHandle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APivotTransformGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_UniformScaleGizmoHandleGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_TranslationGizmoHandleGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_ScaleGizmoHandleGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_PlaneTranslationGizmoHandleGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_RotationGizmoHandleGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_StretchGizmoHandleGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APivotTransformGizmo_Statics::NewProp_LastDraggingHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APivotTransformGizmo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APivotTransformGizmo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APivotTransformGizmo_Statics::ClassParams = {
		&APivotTransformGizmo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APivotTransformGizmo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APivotTransformGizmo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APivotTransformGizmo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APivotTransformGizmo()
	{
		if (!Z_Registration_Info_UClass_APivotTransformGizmo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APivotTransformGizmo.OuterSingleton, Z_Construct_UClass_APivotTransformGizmo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APivotTransformGizmo.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<APivotTransformGizmo>()
	{
		return APivotTransformGizmo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APivotTransformGizmo);
	APivotTransformGizmo::~APivotTransformGizmo() {}
	void UPivotTranslationGizmoHandleGroup::StaticRegisterNativesUPivotTranslationGizmoHandleGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPivotTranslationGizmoHandleGroup);
	UClass* Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_NoRegister()
	{
		return UPivotTranslationGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxisGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Axis Gizmo handle for translating\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Axis Gizmo handle for translating" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotTranslationGizmoHandleGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::ClassParams = {
		&UPivotTranslationGizmoHandleGroup::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotTranslationGizmoHandleGroup()
	{
		if (!Z_Registration_Info_UClass_UPivotTranslationGizmoHandleGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPivotTranslationGizmoHandleGroup.OuterSingleton, Z_Construct_UClass_UPivotTranslationGizmoHandleGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPivotTranslationGizmoHandleGroup.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UPivotTranslationGizmoHandleGroup>()
	{
		return UPivotTranslationGizmoHandleGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotTranslationGizmoHandleGroup);
	UPivotTranslationGizmoHandleGroup::~UPivotTranslationGizmoHandleGroup() {}
	void UPivotScaleGizmoHandleGroup::StaticRegisterNativesUPivotScaleGizmoHandleGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPivotScaleGizmoHandleGroup);
	UClass* Z_Construct_UClass_UPivotScaleGizmoHandleGroup_NoRegister()
	{
		return UPivotScaleGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxisGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Axis Gizmo handle for scaling\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Axis Gizmo handle for scaling" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotScaleGizmoHandleGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::ClassParams = {
		&UPivotScaleGizmoHandleGroup::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotScaleGizmoHandleGroup()
	{
		if (!Z_Registration_Info_UClass_UPivotScaleGizmoHandleGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPivotScaleGizmoHandleGroup.OuterSingleton, Z_Construct_UClass_UPivotScaleGizmoHandleGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPivotScaleGizmoHandleGroup.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UPivotScaleGizmoHandleGroup>()
	{
		return UPivotScaleGizmoHandleGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotScaleGizmoHandleGroup);
	UPivotScaleGizmoHandleGroup::~UPivotScaleGizmoHandleGroup() {}
	void UPivotPlaneTranslationGizmoHandleGroup::StaticRegisterNativesUPivotPlaneTranslationGizmoHandleGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPivotPlaneTranslationGizmoHandleGroup);
	UClass* Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_NoRegister()
	{
		return UPivotPlaneTranslationGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxisGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Axis Gizmo handle for plane translation\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Axis Gizmo handle for plane translation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotPlaneTranslationGizmoHandleGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::ClassParams = {
		&UPivotPlaneTranslationGizmoHandleGroup::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup()
	{
		if (!Z_Registration_Info_UClass_UPivotPlaneTranslationGizmoHandleGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPivotPlaneTranslationGizmoHandleGroup.OuterSingleton, Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPivotPlaneTranslationGizmoHandleGroup.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UPivotPlaneTranslationGizmoHandleGroup>()
	{
		return UPivotPlaneTranslationGizmoHandleGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotPlaneTranslationGizmoHandleGroup);
	UPivotPlaneTranslationGizmoHandleGroup::~UPivotPlaneTranslationGizmoHandleGroup() {}
	void UPivotRotationGizmoHandleGroup::StaticRegisterNativesUPivotRotationGizmoHandleGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPivotRotationGizmoHandleGroup);
	UClass* Z_Construct_UClass_UPivotRotationGizmoHandleGroup_NoRegister()
	{
		return UPivotRotationGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootFullRotationHandleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootFullRotationHandleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullRotationHandleMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FullRotationHandleMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRotationIndicatorMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StartRotationIndicatorMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootStartRotationIdicatorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootStartRotationIdicatorComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRotationIndicatorMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeltaRotationIndicatorMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootDeltaRotationIndicatorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootDeltaRotationIndicatorComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAxisGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Axis Gizmo handle for rotation\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Axis Gizmo handle for rotation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootFullRotationHandleComponent_MetaData[] = {
		{ "Comment", "/** Root component of all the mesh components that are used to visualize the rotation when dragging */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "Root component of all the mesh components that are used to visualize the rotation when dragging" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootFullRotationHandleComponent = { "RootFullRotationHandleComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, RootFullRotationHandleComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootFullRotationHandleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootFullRotationHandleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_FullRotationHandleMeshComponent_MetaData[] = {
		{ "Comment", "/** When dragging a rotation handle the full rotation circle appears */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "When dragging a rotation handle the full rotation circle appears" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_FullRotationHandleMeshComponent = { "FullRotationHandleMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, FullRotationHandleMeshComponent), Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_FullRotationHandleMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_FullRotationHandleMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_StartRotationIndicatorMeshComponent_MetaData[] = {
		{ "Comment", "/** The mesh that indicated the start rotation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "The mesh that indicated the start rotation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_StartRotationIndicatorMeshComponent = { "StartRotationIndicatorMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, StartRotationIndicatorMeshComponent), Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_StartRotationIndicatorMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_StartRotationIndicatorMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootStartRotationIdicatorComponent_MetaData[] = {
		{ "Comment", "/** The root component of the start rotation indicator */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "The root component of the start rotation indicator" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootStartRotationIdicatorComponent = { "RootStartRotationIdicatorComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, RootStartRotationIdicatorComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootStartRotationIdicatorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootStartRotationIdicatorComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_DeltaRotationIndicatorMeshComponent_MetaData[] = {
		{ "Comment", "/** The mesh that indicated the delta rotation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "The mesh that indicated the delta rotation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_DeltaRotationIndicatorMeshComponent = { "DeltaRotationIndicatorMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, DeltaRotationIndicatorMeshComponent), Z_Construct_UClass_UGizmoHandleMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_DeltaRotationIndicatorMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_DeltaRotationIndicatorMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootDeltaRotationIndicatorComponent_MetaData[] = {
		{ "Comment", "/** The root component of the delta rotation indicator */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gizmo/VIPivotTransformGizmo.h" },
		{ "ToolTip", "The root component of the delta rotation indicator" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootDeltaRotationIndicatorComponent = { "RootDeltaRotationIndicatorComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPivotRotationGizmoHandleGroup, RootDeltaRotationIndicatorComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootDeltaRotationIndicatorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootDeltaRotationIndicatorComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootFullRotationHandleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_FullRotationHandleMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_StartRotationIndicatorMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootStartRotationIdicatorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_DeltaRotationIndicatorMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::NewProp_RootDeltaRotationIndicatorComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPivotRotationGizmoHandleGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::ClassParams = {
		&UPivotRotationGizmoHandleGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPivotRotationGizmoHandleGroup()
	{
		if (!Z_Registration_Info_UClass_UPivotRotationGizmoHandleGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPivotRotationGizmoHandleGroup.OuterSingleton, Z_Construct_UClass_UPivotRotationGizmoHandleGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPivotRotationGizmoHandleGroup.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UPivotRotationGizmoHandleGroup>()
	{
		return UPivotRotationGizmoHandleGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPivotRotationGizmoHandleGroup);
	UPivotRotationGizmoHandleGroup::~UPivotRotationGizmoHandleGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APivotTransformGizmo, APivotTransformGizmo::StaticClass, TEXT("APivotTransformGizmo"), &Z_Registration_Info_UClass_APivotTransformGizmo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APivotTransformGizmo), 984752698U) },
		{ Z_Construct_UClass_UPivotTranslationGizmoHandleGroup, UPivotTranslationGizmoHandleGroup::StaticClass, TEXT("UPivotTranslationGizmoHandleGroup"), &Z_Registration_Info_UClass_UPivotTranslationGizmoHandleGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPivotTranslationGizmoHandleGroup), 1073174176U) },
		{ Z_Construct_UClass_UPivotScaleGizmoHandleGroup, UPivotScaleGizmoHandleGroup::StaticClass, TEXT("UPivotScaleGizmoHandleGroup"), &Z_Registration_Info_UClass_UPivotScaleGizmoHandleGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPivotScaleGizmoHandleGroup), 1008431118U) },
		{ Z_Construct_UClass_UPivotPlaneTranslationGizmoHandleGroup, UPivotPlaneTranslationGizmoHandleGroup::StaticClass, TEXT("UPivotPlaneTranslationGizmoHandleGroup"), &Z_Registration_Info_UClass_UPivotPlaneTranslationGizmoHandleGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPivotPlaneTranslationGizmoHandleGroup), 2085723527U) },
		{ Z_Construct_UClass_UPivotRotationGizmoHandleGroup, UPivotRotationGizmoHandleGroup::StaticClass, TEXT("UPivotRotationGizmoHandleGroup"), &Z_Registration_Info_UClass_UPivotRotationGizmoHandleGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPivotRotationGizmoHandleGroup), 2927338146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_2771440040(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIPivotTransformGizmo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
