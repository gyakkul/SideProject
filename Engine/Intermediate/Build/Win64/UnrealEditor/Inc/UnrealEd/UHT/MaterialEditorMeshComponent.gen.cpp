// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/MaterialEditorMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorMeshComponent();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialEditorMeshComponent::StaticRegisterNativesUMaterialEditorMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialEditorMeshComponent);
	UClass* Z_Construct_UClass_UMaterialEditorMeshComponent_NoRegister()
	{
		return UMaterialEditorMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "MaterialEditor/MaterialEditorMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/MaterialEditorMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::ClassParams = {
		&UMaterialEditorMeshComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UMaterialEditorMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialEditorMeshComponent.OuterSingleton, Z_Construct_UClass_UMaterialEditorMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialEditorMeshComponent.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialEditorMeshComponent>()
	{
		return UMaterialEditorMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorMeshComponent);
	UMaterialEditorMeshComponent::~UMaterialEditorMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialEditorMeshComponent, UMaterialEditorMeshComponent::StaticClass, TEXT("UMaterialEditorMeshComponent"), &Z_Registration_Info_UClass_UMaterialEditorMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialEditorMeshComponent), 1118607799U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_2746329162(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_MaterialEditorMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
