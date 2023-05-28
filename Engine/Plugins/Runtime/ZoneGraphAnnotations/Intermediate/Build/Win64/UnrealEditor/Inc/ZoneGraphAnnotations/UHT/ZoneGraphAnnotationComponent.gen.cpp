// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraphAnnotations/Source/ZoneGraphAnnotations/Public/ZoneGraphAnnotationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphAnnotationComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDebugDrawComponent();
	UPackage* Z_Construct_UPackage__Script_ZoneGraphAnnotations();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationComponent();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationComponent_NoRegister();
// End Cross Module References
	void UZoneGraphAnnotationComponent::StaticRegisterNativesUZoneGraphAnnotationComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphAnnotationComponent);
	UClass* Z_Construct_UClass_UZoneGraphAnnotationComponent_NoRegister()
	{
		return UZoneGraphAnnotationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDrawing_MetaData[];
#endif
		static void NewProp_bEnableDebugDrawing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDrawing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDebugDrawComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraphAnnotations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation AssetUserData Collision Cooking HLOD Lighting LOD Mobile Navigation Physics RayTracing Rendering Tags TextureStreaming Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ZoneGraphAnnotationComponent.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::NewProp_bEnableDebugDrawing_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/ZoneGraphAnnotationComponent.h" },
	};
#endif
	void Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::NewProp_bEnableDebugDrawing_SetBit(void* Obj)
	{
		((UZoneGraphAnnotationComponent*)Obj)->bEnableDebugDrawing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::NewProp_bEnableDebugDrawing = { "bEnableDebugDrawing", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UZoneGraphAnnotationComponent), &Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::NewProp_bEnableDebugDrawing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::NewProp_bEnableDebugDrawing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::NewProp_bEnableDebugDrawing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::NewProp_bEnableDebugDrawing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphAnnotationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::ClassParams = {
		&UZoneGraphAnnotationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphAnnotationComponent()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphAnnotationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphAnnotationComponent.OuterSingleton, Z_Construct_UClass_UZoneGraphAnnotationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphAnnotationComponent.OuterSingleton;
	}
	template<> ZONEGRAPHANNOTATIONS_API UClass* StaticClass<UZoneGraphAnnotationComponent>()
	{
		return UZoneGraphAnnotationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphAnnotationComponent);
	UZoneGraphAnnotationComponent::~UZoneGraphAnnotationComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneGraphAnnotationComponent, UZoneGraphAnnotationComponent::StaticClass, TEXT("UZoneGraphAnnotationComponent"), &Z_Registration_Info_UClass_UZoneGraphAnnotationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphAnnotationComponent), 851929347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_2179060978(TEXT("/Script/ZoneGraphAnnotations"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraphAnnotations_Source_ZoneGraphAnnotations_Public_ZoneGraphAnnotationComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
