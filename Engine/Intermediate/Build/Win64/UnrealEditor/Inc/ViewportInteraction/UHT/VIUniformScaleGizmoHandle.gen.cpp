// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Gizmo/VIUniformScaleGizmoHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIUniformScaleGizmoHandle() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UUniformScaleGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UUniformScaleGizmoHandleGroup_NoRegister();
// End Cross Module References
	void UUniformScaleGizmoHandleGroup::StaticRegisterNativesUUniformScaleGizmoHandleGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniformScaleGizmoHandleGroup);
	UClass* Z_Construct_UClass_UUniformScaleGizmoHandleGroup_NoRegister()
	{
		return UUniformScaleGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Gizmo handle for uniform scaling\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIUniformScaleGizmoHandle.h" },
		{ "ModuleRelativePath", "Gizmo/VIUniformScaleGizmoHandle.h" },
		{ "ToolTip", "Gizmo handle for uniform scaling" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformScaleGizmoHandleGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::ClassParams = {
		&UUniformScaleGizmoHandleGroup::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniformScaleGizmoHandleGroup()
	{
		if (!Z_Registration_Info_UClass_UUniformScaleGizmoHandleGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniformScaleGizmoHandleGroup.OuterSingleton, Z_Construct_UClass_UUniformScaleGizmoHandleGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUniformScaleGizmoHandleGroup.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UUniformScaleGizmoHandleGroup>()
	{
		return UUniformScaleGizmoHandleGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformScaleGizmoHandleGroup);
	UUniformScaleGizmoHandleGroup::~UUniformScaleGizmoHandleGroup() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIUniformScaleGizmoHandle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIUniformScaleGizmoHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUniformScaleGizmoHandleGroup, UUniformScaleGizmoHandleGroup::StaticClass, TEXT("UUniformScaleGizmoHandleGroup"), &Z_Registration_Info_UClass_UUniformScaleGizmoHandleGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniformScaleGizmoHandleGroup), 3923255561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIUniformScaleGizmoHandle_h_2055993329(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIUniformScaleGizmoHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIUniformScaleGizmoHandle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
