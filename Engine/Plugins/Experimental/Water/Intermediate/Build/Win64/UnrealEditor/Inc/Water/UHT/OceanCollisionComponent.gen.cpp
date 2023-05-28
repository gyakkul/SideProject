// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OceanCollisionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOceanCollisionComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UOceanBoxCollisionComponent();
	WATER_API UClass* Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UOceanCollisionComponent();
	WATER_API UClass* Z_Construct_UClass_UOceanCollisionComponent_NoRegister();
// End Cross Module References
	void UOceanCollisionComponent::StaticRegisterNativesUOceanCollisionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanCollisionComponent);
	UClass* Z_Construct_UClass_UOceanCollisionComponent_NoRegister()
	{
		return UOceanCollisionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOceanCollisionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedBodySetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOceanCollisionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOceanCollisionComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "OceanCollisionComponent.h" },
		{ "ModuleRelativePath", "Public/OceanCollisionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOceanCollisionComponent_Statics::NewProp_CachedBodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/OceanCollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOceanCollisionComponent_Statics::NewProp_CachedBodySetup = { "CachedBodySetup", nullptr, (EPropertyFlags)0x0044800000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOceanCollisionComponent, CachedBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOceanCollisionComponent_Statics::NewProp_CachedBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOceanCollisionComponent_Statics::NewProp_CachedBodySetup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOceanCollisionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOceanCollisionComponent_Statics::NewProp_CachedBodySetup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOceanCollisionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanCollisionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanCollisionComponent_Statics::ClassParams = {
		&UOceanCollisionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOceanCollisionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOceanCollisionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOceanCollisionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOceanCollisionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOceanCollisionComponent()
	{
		if (!Z_Registration_Info_UClass_UOceanCollisionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanCollisionComponent.OuterSingleton, Z_Construct_UClass_UOceanCollisionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOceanCollisionComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UOceanCollisionComponent>()
	{
		return UOceanCollisionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanCollisionComponent);
	UOceanCollisionComponent::~UOceanCollisionComponent() {}
	void UOceanBoxCollisionComponent::StaticRegisterNativesUOceanBoxCollisionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOceanBoxCollisionComponent);
	UClass* Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister()
	{
		return UOceanBoxCollisionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOceanBoxCollisionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOceanBoxCollisionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOceanBoxCollisionComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "OceanCollisionComponent.h" },
		{ "ModuleRelativePath", "Public/OceanCollisionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOceanBoxCollisionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOceanBoxCollisionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOceanBoxCollisionComponent_Statics::ClassParams = {
		&UOceanBoxCollisionComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOceanBoxCollisionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOceanBoxCollisionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOceanBoxCollisionComponent()
	{
		if (!Z_Registration_Info_UClass_UOceanBoxCollisionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOceanBoxCollisionComponent.OuterSingleton, Z_Construct_UClass_UOceanBoxCollisionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOceanBoxCollisionComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UOceanBoxCollisionComponent>()
	{
		return UOceanBoxCollisionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOceanBoxCollisionComponent);
	UOceanBoxCollisionComponent::~UOceanBoxCollisionComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOceanCollisionComponent, UOceanCollisionComponent::StaticClass, TEXT("UOceanCollisionComponent"), &Z_Registration_Info_UClass_UOceanCollisionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanCollisionComponent), 947734261U) },
		{ Z_Construct_UClass_UOceanBoxCollisionComponent, UOceanBoxCollisionComponent::StaticClass, TEXT("UOceanBoxCollisionComponent"), &Z_Registration_Info_UClass_UOceanBoxCollisionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOceanBoxCollisionComponent), 383897293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_3644144593(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_OceanCollisionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
