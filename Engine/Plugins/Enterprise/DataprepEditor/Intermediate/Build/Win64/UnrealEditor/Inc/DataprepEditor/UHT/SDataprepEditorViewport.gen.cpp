// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Widgets/SDataprepEditorViewport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDataprepEditorViewport() {}
// Cross Module References
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UCustomStaticMeshComponent();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UCustomStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_DataprepEditor();
// End Cross Module References
	void UCustomStaticMeshComponent::StaticRegisterNativesUCustomStaticMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomStaticMeshComponent);
	UClass* Z_Construct_UClass_UCustomStaticMeshComponent_NoRegister()
	{
		return UCustomStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom class deriving from UStaticMeshComponent to allow the display of individual meshes in wireframe\n * @note: This technique was inspired from USkinnedMeshComponent\n */" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Widgets/SDataprepEditorViewport.h" },
		{ "ModuleRelativePath", "Private/Widgets/SDataprepEditorViewport.h" },
		{ "ToolTip", "Custom class deriving from UStaticMeshComponent to allow the display of individual meshes in wireframe\n@note: This technique was inspired from USkinnedMeshComponent" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomStaticMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomStaticMeshComponent_Statics::ClassParams = {
		&UCustomStaticMeshComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomStaticMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UCustomStaticMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UCustomStaticMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomStaticMeshComponent.OuterSingleton;
	}
	template<> DATAPREPEDITOR_API UClass* StaticClass<UCustomStaticMeshComponent>()
	{
		return UCustomStaticMeshComponent::StaticClass();
	}
	UCustomStaticMeshComponent::UCustomStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomStaticMeshComponent);
	UCustomStaticMeshComponent::~UCustomStaticMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_Widgets_SDataprepEditorViewport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_Widgets_SDataprepEditorViewport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomStaticMeshComponent, UCustomStaticMeshComponent::StaticClass, TEXT("UCustomStaticMeshComponent"), &Z_Registration_Info_UClass_UCustomStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomStaticMeshComponent), 4073480465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_Widgets_SDataprepEditorViewport_h_3350209574(TEXT("/Script/DataprepEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_Widgets_SDataprepEditorViewport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_Widgets_SDataprepEditorViewport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
