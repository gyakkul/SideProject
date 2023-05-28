// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Gizmo/VIStretchGizmoHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVIStretchGizmoHandle() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleDragOperation();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleDragOperation_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleGroup();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportDragOperation();
// End Cross Module References
	void UStretchGizmoHandleGroup::StaticRegisterNativesUStretchGizmoHandleGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStretchGizmoHandleGroup);
	UClass* Z_Construct_UClass_UStretchGizmoHandleGroup_NoRegister()
	{
		return UStretchGizmoHandleGroup::StaticClass();
	}
	struct Z_Construct_UClass_UStretchGizmoHandleGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoHandleGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Gizmo handle for stretching/scaling\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Gizmo/VIStretchGizmoHandle.h" },
		{ "ModuleRelativePath", "Gizmo/VIStretchGizmoHandle.h" },
		{ "ToolTip", "Gizmo handle for stretching/scaling" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStretchGizmoHandleGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::ClassParams = {
		&UStretchGizmoHandleGroup::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStretchGizmoHandleGroup()
	{
		if (!Z_Registration_Info_UClass_UStretchGizmoHandleGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStretchGizmoHandleGroup.OuterSingleton, Z_Construct_UClass_UStretchGizmoHandleGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStretchGizmoHandleGroup.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UStretchGizmoHandleGroup>()
	{
		return UStretchGizmoHandleGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStretchGizmoHandleGroup);
	UStretchGizmoHandleGroup::~UStretchGizmoHandleGroup() {}
	void UStretchGizmoHandleDragOperation::StaticRegisterNativesUStretchGizmoHandleDragOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStretchGizmoHandleDragOperation);
	UClass* Z_Construct_UClass_UStretchGizmoHandleDragOperation_NoRegister()
	{
		return UStretchGizmoHandleDragOperation::StaticClass();
	}
	struct Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UViewportDragOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gizmo/VIStretchGizmoHandle.h" },
		{ "ModuleRelativePath", "Gizmo/VIStretchGizmoHandle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStretchGizmoHandleDragOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::ClassParams = {
		&UStretchGizmoHandleDragOperation::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStretchGizmoHandleDragOperation()
	{
		if (!Z_Registration_Info_UClass_UStretchGizmoHandleDragOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStretchGizmoHandleDragOperation.OuterSingleton, Z_Construct_UClass_UStretchGizmoHandleDragOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStretchGizmoHandleDragOperation.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UStretchGizmoHandleDragOperation>()
	{
		return UStretchGizmoHandleDragOperation::StaticClass();
	}
	UStretchGizmoHandleDragOperation::UStretchGizmoHandleDragOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStretchGizmoHandleDragOperation);
	UStretchGizmoHandleDragOperation::~UStretchGizmoHandleDragOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIStretchGizmoHandle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIStretchGizmoHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStretchGizmoHandleGroup, UStretchGizmoHandleGroup::StaticClass, TEXT("UStretchGizmoHandleGroup"), &Z_Registration_Info_UClass_UStretchGizmoHandleGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStretchGizmoHandleGroup), 4283837980U) },
		{ Z_Construct_UClass_UStretchGizmoHandleDragOperation, UStretchGizmoHandleDragOperation::StaticClass, TEXT("UStretchGizmoHandleDragOperation"), &Z_Registration_Info_UClass_UStretchGizmoHandleDragOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStretchGizmoHandleDragOperation), 3053504200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIStretchGizmoHandle_h_3894170239(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIStretchGizmoHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Gizmo_VIStretchGizmoHandle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
