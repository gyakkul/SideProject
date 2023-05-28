// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../PhysicsAssetEditor/Private/PhysicsAssetEditorAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetEditorAnimInstance() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorAnimInstance();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
// End Cross Module References
	void UPhysicsAssetEditorAnimInstance::StaticRegisterNativesUPhysicsAssetEditorAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetEditorAnimInstance);
	UClass* Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_NoRegister()
	{
		return UPhysicsAssetEditorAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimPreviewInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PhysicsAssetEditorAnimInstance.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetEditorAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics::ClassParams = {
		&UPhysicsAssetEditorAnimInstance::StaticClass,
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
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetEditorAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetEditorAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetEditorAnimInstance.OuterSingleton, Z_Construct_UClass_UPhysicsAssetEditorAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetEditorAnimInstance.OuterSingleton;
	}
	template<> PHYSICSASSETEDITOR_API UClass* StaticClass<UPhysicsAssetEditorAnimInstance>()
	{
		return UPhysicsAssetEditorAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetEditorAnimInstance);
	UPhysicsAssetEditorAnimInstance::~UPhysicsAssetEditorAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetEditorAnimInstance, UPhysicsAssetEditorAnimInstance::StaticClass, TEXT("UPhysicsAssetEditorAnimInstance"), &Z_Registration_Info_UClass_UPhysicsAssetEditorAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetEditorAnimInstance), 2298414860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_641609225(TEXT("/Script/PhysicsAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
