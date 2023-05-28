// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Editor/ControlRigSkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSkeletalMeshComponent() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigSkeletalMeshComponent();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigSkeletalMeshComponent_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigSkeletalMeshComponent::StaticRegisterNativesUControlRigSkeletalMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigSkeletalMeshComponent);
	UClass* Z_Construct_UClass_UControlRigSkeletalMeshComponent_NoRegister()
	{
		return UControlRigSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugSkelMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "Editor/ControlRigSkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Private/Editor/ControlRigSkeletalMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigSkeletalMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigSkeletalMeshComponent_Statics::ClassParams = {
		&UControlRigSkeletalMeshComponent::StaticClass,
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
		0x00A810ACu,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigSkeletalMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UControlRigSkeletalMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigSkeletalMeshComponent.OuterSingleton, Z_Construct_UClass_UControlRigSkeletalMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigSkeletalMeshComponent.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigSkeletalMeshComponent>()
	{
		return UControlRigSkeletalMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigSkeletalMeshComponent);
	UControlRigSkeletalMeshComponent::~UControlRigSkeletalMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigSkeletalMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigSkeletalMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigSkeletalMeshComponent, UControlRigSkeletalMeshComponent::StaticClass, TEXT("UControlRigSkeletalMeshComponent"), &Z_Registration_Info_UClass_UControlRigSkeletalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigSkeletalMeshComponent), 3211594753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigSkeletalMeshComponent_h_3755464572(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigSkeletalMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigSkeletalMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
