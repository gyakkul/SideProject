// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/LightmassPortalComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassPortalComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPortalComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPortalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULightmassPortalComponent::StaticRegisterNativesULightmassPortalComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightmassPortalComponent);
	UClass* Z_Construct_UClass_ULightmassPortalComponent_NoRegister()
	{
		return ULightmassPortalComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULightmassPortalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightmassPortalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassPortalComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LightmassPortalComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LightmassPortalComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightmassPortalComponent_Statics::NewProp_PreviewBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/LightmassPortalComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULightmassPortalComponent_Statics::NewProp_PreviewBox = { "PreviewBox", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightmassPortalComponent, PreviewBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightmassPortalComponent_Statics::NewProp_PreviewBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPortalComponent_Statics::NewProp_PreviewBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightmassPortalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightmassPortalComponent_Statics::NewProp_PreviewBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightmassPortalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightmassPortalComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightmassPortalComponent_Statics::ClassParams = {
		&ULightmassPortalComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightmassPortalComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPortalComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULightmassPortalComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightmassPortalComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightmassPortalComponent()
	{
		if (!Z_Registration_Info_UClass_ULightmassPortalComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightmassPortalComponent.OuterSingleton, Z_Construct_UClass_ULightmassPortalComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightmassPortalComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULightmassPortalComponent>()
	{
		return ULightmassPortalComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightmassPortalComponent);
	ULightmassPortalComponent::~ULightmassPortalComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightmassPortalComponent, ULightmassPortalComponent::StaticClass, TEXT("ULightmassPortalComponent"), &Z_Registration_Info_UClass_ULightmassPortalComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightmassPortalComponent), 1162471604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_1502371187(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
