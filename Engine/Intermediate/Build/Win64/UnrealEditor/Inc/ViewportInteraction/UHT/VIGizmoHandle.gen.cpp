// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VIGizmoHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIGizmoHandle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UAxisGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UAxisGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperationComponent_NoRegister();
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoHandle();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoHandle;
class UScriptStruct* FGizmoHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoHandle, (UObject*)Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("GizmoHandle"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoHandle.OuterSingleton;
}
template<> VIEWPORTINTERACTION_API UScriptStruct* StaticStruct<FGizmoHandle>()
{
	return FGizmoHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGizmoHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGizmoHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		&NewStructOps,
		"GizmoHandle",
		sizeof(FGizmoHandle),
		alignof(FGizmoHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_GizmoHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoHandle.InnerSingleton, Z_Construct_UScriptStruct_FGizmoHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GizmoHandle.InnerSingleton;
	}
	void UGizmoHandleGroup::StaticRegisterNativesUGizmoHandleGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoHandleGroup);
	UClass* Z_Construct_UClass_UGizmoHandleGroup_NoRegister()
	{
		return UGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentGizmoMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslucentGizmoMaterial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Handles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningTransformGizmoActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningTransformGizmoActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragOperationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DragOperationComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for gizmo handles\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VIGizmoHandle.h" },
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "Base class for gizmo handles" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_GizmoMaterial_MetaData[] = {
		{ "Comment", "/** Gizmo material (opaque) */" },
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "Gizmo material (opaque)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_GizmoMaterial = { "GizmoMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoHandleGroup, GizmoMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_GizmoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_GizmoMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_TranslucentGizmoMaterial_MetaData[] = {
		{ "Comment", "/** Gizmo material (translucent) */" },
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "Gizmo material (translucent)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_TranslucentGizmoMaterial = { "TranslucentGizmoMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoHandleGroup, TranslucentGizmoMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_TranslucentGizmoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_TranslucentGizmoMaterial_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles_Inner = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGizmoHandle, METADATA_PARAMS(nullptr, 0) }; // 2869136748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles_MetaData[] = {
		{ "Comment", "/** All the StaticMeshes for this handle type */" },
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "All the StaticMeshes for this handle type" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoHandleGroup, Handles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles_MetaData)) }; // 2869136748
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_OwningTransformGizmoActor_MetaData[] = {
		{ "Comment", "/** The actor transform gizmo owning this handlegroup */" },
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "The actor transform gizmo owning this handlegroup" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_OwningTransformGizmoActor = { "OwningTransformGizmoActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoHandleGroup, OwningTransformGizmoActor), Z_Construct_UClass_ABaseTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_OwningTransformGizmoActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_OwningTransformGizmoActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_DragOperationComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_DragOperationComponent = { "DragOperationComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoHandleGroup, DragOperationComponent), Z_Construct_UClass_UViewportDragOperationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_DragOperationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_DragOperationComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoHandleGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_GizmoMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_TranslucentGizmoMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_Handles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_OwningTransformGizmoActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoHandleGroup_Statics::NewProp_DragOperationComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoHandleGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoHandleGroup_Statics::ClassParams = {
		&UGizmoHandleGroup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoHandleGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoHandleGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoHandleGroup()
	{
		if (!Z_Registration_Info_UClass_UGizmoHandleGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoHandleGroup.OuterSingleton, Z_Construct_UClass_UGizmoHandleGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoHandleGroup.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UGizmoHandleGroup>()
	{
		return UGizmoHandleGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoHandleGroup);
	UGizmoHandleGroup::~UGizmoHandleGroup() {}
	void UAxisGizmoHandleGroup::StaticRegisterNativesUAxisGizmoHandleGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAxisGizmoHandleGroup);
	UClass* Z_Construct_UClass_UAxisGizmoHandleGroup_NoRegister()
	{
		return UAxisGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UAxisGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for gizmo handles on axis\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VIGizmoHandle.h" },
		{ "ModuleRelativePath", "Public/VIGizmoHandle.h" },
		{ "ToolTip", "Base class for gizmo handles on axis" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisGizmoHandleGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::ClassParams = {
		&UAxisGizmoHandleGroup::StaticClass,
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
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisGizmoHandleGroup()
	{
		if (!Z_Registration_Info_UClass_UAxisGizmoHandleGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAxisGizmoHandleGroup.OuterSingleton, Z_Construct_UClass_UAxisGizmoHandleGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAxisGizmoHandleGroup.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UAxisGizmoHandleGroup>()
	{
		return UAxisGizmoHandleGroup::StaticClass();
	}
	UAxisGizmoHandleGroup::UAxisGizmoHandleGroup() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisGizmoHandleGroup);
	UAxisGizmoHandleGroup::~UAxisGizmoHandleGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_Statics::ScriptStructInfo[] = {
		{ FGizmoHandle::StaticStruct, Z_Construct_UScriptStruct_FGizmoHandle_Statics::NewStructOps, TEXT("GizmoHandle"), &Z_Registration_Info_UScriptStruct_GizmoHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoHandle), 2869136748U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoHandleGroup, UGizmoHandleGroup::StaticClass, TEXT("UGizmoHandleGroup"), &Z_Registration_Info_UClass_UGizmoHandleGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoHandleGroup), 3951140209U) },
		{ Z_Construct_UClass_UAxisGizmoHandleGroup, UAxisGizmoHandleGroup::StaticClass, TEXT("UAxisGizmoHandleGroup"), &Z_Registration_Info_UClass_UAxisGizmoHandleGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAxisGizmoHandleGroup), 655855157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_945235730(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_VIGizmoHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
