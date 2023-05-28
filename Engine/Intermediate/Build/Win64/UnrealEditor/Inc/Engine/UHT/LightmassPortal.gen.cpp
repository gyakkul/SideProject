// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Lightmass/LightmassPortal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassPortal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ALightmassPortal();
	ENGINE_API UClass* Z_Construct_UClass_ALightmassPortal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightmassPortalComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ALightmassPortal::StaticRegisterNativesALightmassPortal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightmassPortal);
	UClass* Z_Construct_UClass_ALightmassPortal_NoRegister()
	{
		return ALightmassPortal::StaticClass();
	}
	struct Z_Construct_UClass_ALightmassPortal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PortalComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightmassPortal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightmassPortal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor" },
		{ "IncludePath", "Lightmass/LightmassPortal.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPortal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightmassPortal_Statics::NewProp_PortalComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Portal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPortal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALightmassPortal_Statics::NewProp_PortalComponent = { "PortalComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightmassPortal, PortalComponent), Z_Construct_UClass_ULightmassPortalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightmassPortal_Statics::NewProp_PortalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightmassPortal_Statics::NewProp_PortalComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightmassPortal_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassPortal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALightmassPortal_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALightmassPortal, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALightmassPortal_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALightmassPortal_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightmassPortal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightmassPortal_Statics::NewProp_PortalComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightmassPortal_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightmassPortal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightmassPortal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightmassPortal_Statics::ClassParams = {
		&ALightmassPortal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALightmassPortal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightmassPortal_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightmassPortal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightmassPortal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightmassPortal()
	{
		if (!Z_Registration_Info_UClass_ALightmassPortal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightmassPortal.OuterSingleton, Z_Construct_UClass_ALightmassPortal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALightmassPortal.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALightmassPortal>()
	{
		return ALightmassPortal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightmassPortal);
	ALightmassPortal::~ALightmassPortal() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALightmassPortal, ALightmassPortal::StaticClass, TEXT("ALightmassPortal"), &Z_Registration_Info_UClass_ALightmassPortal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightmassPortal), 92738352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_4196956055(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassPortal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
