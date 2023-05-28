// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ITF/XRCreativeITFRenderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativeITFRenderComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeITFRenderComponent();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeITFRenderComponent_NoRegister();
// End Cross Module References
	void UXRCreativeITFRenderComponent::StaticRegisterNativesUXRCreativeITFRenderComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeITFRenderComponent);
	UClass* Z_Construct_UClass_UXRCreativeITFRenderComponent_NoRegister()
	{
		return UXRCreativeITFRenderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeITFRenderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeITFRenderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeITFRenderComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UXRCreativeITFRenderComponent is a helper component that can provide a\n * FPrimitiveDrawInterface API implementation. This PDI can be passed to UInterativeTool::Render()\n * and UInteractiveGizmo::Render() (via a IToolsContextRenderAPI implementation).\n * The UToolsContextRenderComponent will accumulate any DrawLine() and DrawPoint() requests\n * and then pass them to it's SceneProxy for rendering in the next frame.\n *\n * (in the UE Editor, those functions can be passed an Editor PDI that can draw immediately,\n *  but this is not possible at Runtime, so we use this accumulate-and-draw workaround)\n *\n * TODO: lines and points could be drawn via Line/Point Components, which would allow them\n * to be batched, providing much better performance.\n */" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ITF/XRCreativeITFRenderComponent.h" },
		{ "ModuleRelativePath", "Private/ITF/XRCreativeITFRenderComponent.h" },
		{ "ToolTip", "UXRCreativeITFRenderComponent is a helper component that can provide a\nFPrimitiveDrawInterface API implementation. This PDI can be passed to UInterativeTool::Render()\nand UInteractiveGizmo::Render() (via a IToolsContextRenderAPI implementation).\nThe UToolsContextRenderComponent will accumulate any DrawLine() and DrawPoint() requests\nand then pass them to it's SceneProxy for rendering in the next frame.\n\n(in the UE Editor, those functions can be passed an Editor PDI that can draw immediately,\n but this is not possible at Runtime, so we use this accumulate-and-draw workaround)\n\nTODO: lines and points could be drawn via Line/Point Components, which would allow them\nto be batched, providing much better performance." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeITFRenderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeITFRenderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeITFRenderComponent_Statics::ClassParams = {
		&UXRCreativeITFRenderComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeITFRenderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFRenderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeITFRenderComponent()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeITFRenderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeITFRenderComponent.OuterSingleton, Z_Construct_UClass_UXRCreativeITFRenderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeITFRenderComponent.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeITFRenderComponent>()
	{
		return UXRCreativeITFRenderComponent::StaticClass();
	}
	UXRCreativeITFRenderComponent::UXRCreativeITFRenderComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeITFRenderComponent);
	UXRCreativeITFRenderComponent::~UXRCreativeITFRenderComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_XRCreativeITFRenderComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_XRCreativeITFRenderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRCreativeITFRenderComponent, UXRCreativeITFRenderComponent::StaticClass, TEXT("UXRCreativeITFRenderComponent"), &Z_Registration_Info_UClass_UXRCreativeITFRenderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeITFRenderComponent), 4025417098U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_XRCreativeITFRenderComponent_h_3399568198(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_XRCreativeITFRenderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_XRCreativeITFRenderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
