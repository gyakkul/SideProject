// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectRenderingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectRenderingComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectRenderingComponent();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void USmartObjectRenderingComponent::StaticRegisterNativesUSmartObjectRenderingComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectRenderingComponent);
	UClass* Z_Construct_UClass_USmartObjectRenderingComponent_NoRegister()
	{
		return USmartObjectRenderingComponent::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectRenderingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectRenderingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectRenderingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Object LOD Lighting VirtualTexture Transform HLOD Collision TextureStreaming Mobile Physics Tags AssetUserData Activation Cooking Rendering Mobility VirtualTexture Trigger" },
		{ "IncludePath", "SmartObjectRenderingComponent.h" },
		{ "ModuleRelativePath", "Public/SmartObjectRenderingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectRenderingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectRenderingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectRenderingComponent_Statics::ClassParams = {
		&USmartObjectRenderingComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectRenderingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectRenderingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectRenderingComponent()
	{
		if (!Z_Registration_Info_UClass_USmartObjectRenderingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectRenderingComponent.OuterSingleton, Z_Construct_UClass_USmartObjectRenderingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectRenderingComponent.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectRenderingComponent>()
	{
		return USmartObjectRenderingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectRenderingComponent);
	USmartObjectRenderingComponent::~USmartObjectRenderingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectRenderingComponent, USmartObjectRenderingComponent::StaticClass, TEXT("USmartObjectRenderingComponent"), &Z_Registration_Info_UClass_USmartObjectRenderingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectRenderingComponent), 126080910U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_1646699694(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectRenderingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
