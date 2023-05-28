// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../PhysicsAssetEditor/Private/PhysicsAssetEditorSkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetEditorSkeletalMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
// End Cross Module References
	void UPhysicsAssetEditorSkeletalMeshComponent::StaticRegisterNativesUPhysicsAssetEditorSkeletalMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetEditorSkeletalMeshComponent);
	UClass* Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_NoRegister()
	{
		return UPhysicsAssetEditorSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElemSelectedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ElemSelectedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneUnselectedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoneUnselectedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNoCollisionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoneNoCollisionMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneMaterialHit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoneMaterialHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugSkelMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "PhysicsAssetEditorSkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_ElemSelectedMaterial_MetaData[] = {
		{ "Comment", "// Materials\n" },
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
		{ "ToolTip", "Materials" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_ElemSelectedMaterial = { "ElemSelectedMaterial", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorSkeletalMeshComponent, ElemSelectedMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_ElemSelectedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_ElemSelectedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneUnselectedMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneUnselectedMaterial = { "BoneUnselectedMaterial", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorSkeletalMeshComponent, BoneUnselectedMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneUnselectedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneUnselectedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneNoCollisionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneNoCollisionMaterial = { "BoneNoCollisionMaterial", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorSkeletalMeshComponent, BoneNoCollisionMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneNoCollisionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneNoCollisionMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneMaterialHit_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorSkeletalMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneMaterialHit = { "BoneMaterialHit", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetEditorSkeletalMeshComponent, BoneMaterialHit), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneMaterialHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneMaterialHit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_ElemSelectedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneUnselectedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneNoCollisionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::NewProp_BoneMaterialHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetEditorSkeletalMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::ClassParams = {
		&UPhysicsAssetEditorSkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::PropPointers),
		0,
		0x00A010ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetEditorSkeletalMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetEditorSkeletalMeshComponent.OuterSingleton, Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetEditorSkeletalMeshComponent.OuterSingleton;
	}
	template<> PHYSICSASSETEDITOR_API UClass* StaticClass<UPhysicsAssetEditorSkeletalMeshComponent>()
	{
		return UPhysicsAssetEditorSkeletalMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetEditorSkeletalMeshComponent);
	UPhysicsAssetEditorSkeletalMeshComponent::~UPhysicsAssetEditorSkeletalMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetEditorSkeletalMeshComponent, UPhysicsAssetEditorSkeletalMeshComponent::StaticClass, TEXT("UPhysicsAssetEditorSkeletalMeshComponent"), &Z_Registration_Info_UClass_UPhysicsAssetEditorSkeletalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetEditorSkeletalMeshComponent), 2894115112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_3973105768(TEXT("/Script/PhysicsAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorSkeletalMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
