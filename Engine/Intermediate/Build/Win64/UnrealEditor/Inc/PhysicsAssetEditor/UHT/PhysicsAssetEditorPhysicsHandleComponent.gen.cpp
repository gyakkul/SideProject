// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../PhysicsAssetEditor/Private/PhysicsAssetEditorPhysicsHandleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetEditorPhysicsHandleComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
// End Cross Module References
	void UPhysicsAssetEditorPhysicsHandleComponent::StaticRegisterNativesUPhysicsAssetEditorPhysicsHandleComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetEditorPhysicsHandleComponent);
	UClass* Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_NoRegister()
	{
		return UPhysicsAssetEditorPhysicsHandleComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicsHandleComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Extend the Physics Handle for PhAt. This adds support for manipulating the physics\n * if it is running in a RigidBody AnimNode (which is always is with Chaos at the moment).\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsAssetEditorPhysicsHandleComponent.h" },
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorPhysicsHandleComponent.h" },
		{ "ToolTip", "Extend the Physics Handle for PhAt. This adds support for manipulating the physics\nif it is running in a RigidBody AnimNode (which is always is with Chaos at the moment)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetEditorPhysicsHandleComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_Statics::ClassParams = {
		&UPhysicsAssetEditorPhysicsHandleComponent::StaticClass,
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
		0x00A020A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetEditorPhysicsHandleComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetEditorPhysicsHandleComponent.OuterSingleton, Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetEditorPhysicsHandleComponent.OuterSingleton;
	}
	template<> PHYSICSASSETEDITOR_API UClass* StaticClass<UPhysicsAssetEditorPhysicsHandleComponent>()
	{
		return UPhysicsAssetEditorPhysicsHandleComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetEditorPhysicsHandleComponent);
	UPhysicsAssetEditorPhysicsHandleComponent::~UPhysicsAssetEditorPhysicsHandleComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetEditorPhysicsHandleComponent, UPhysicsAssetEditorPhysicsHandleComponent::StaticClass, TEXT("UPhysicsAssetEditorPhysicsHandleComponent"), &Z_Registration_Info_UClass_UPhysicsAssetEditorPhysicsHandleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetEditorPhysicsHandleComponent), 1518364614U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_4147739352(TEXT("/Script/PhysicsAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorPhysicsHandleComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
