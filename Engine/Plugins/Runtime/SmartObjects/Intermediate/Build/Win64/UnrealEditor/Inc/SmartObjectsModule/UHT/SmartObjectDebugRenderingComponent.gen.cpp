// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectDebugRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectDebugRenderingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDebugRenderingComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDebugRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void USmartObjectDebugRenderingComponent::StaticRegisterNativesUSmartObjectDebugRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectDebugRenderingComponent);
	UClass* Z_Construct_UClass_USmartObjectDebugRenderingComponent_NoRegister()
	{
		return USmartObjectDebugRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectDebugRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectDebugRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectDebugRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Debug" },
		{ "Comment", "/**\n * Simple UDebugDrawComponent to inherit from to use a FSmartObjectDebugSceneProxy.\n * Derived classes can set ViewFlagName at construction to control relevancy.\n */" },
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SmartObjectDebugRenderingComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SmartObjectDebugRenderingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simple UDebugDrawComponent to inherit from to use a FSmartObjectDebugSceneProxy.\nDerived classes can set ViewFlagName at construction to control relevancy." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectDebugRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectDebugRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectDebugRenderingComponent_Statics::ClassParams = {
		&USmartObjectDebugRenderingComponent::StaticClass,
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
		0x00B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectDebugRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectDebugRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectDebugRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_USmartObjectDebugRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectDebugRenderingComponent.OuterSingleton, Z_Construct_UClass_USmartObjectDebugRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectDebugRenderingComponent.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectDebugRenderingComponent>()
	{
		return USmartObjectDebugRenderingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectDebugRenderingComponent);
	USmartObjectDebugRenderingComponent::~USmartObjectDebugRenderingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDebugRenderingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDebugRenderingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectDebugRenderingComponent, USmartObjectDebugRenderingComponent::StaticClass, TEXT("USmartObjectDebugRenderingComponent"), &Z_Registration_Info_UClass_USmartObjectDebugRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectDebugRenderingComponent), 2700143078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDebugRenderingComponent_h_1156121989(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDebugRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectDebugRenderingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
