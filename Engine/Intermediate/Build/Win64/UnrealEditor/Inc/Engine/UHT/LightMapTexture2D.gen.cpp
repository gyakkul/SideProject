// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LightMapTexture2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightMapTexture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULightMapTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_ULightMapTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULightMapTexture2D::StaticRegisterNativesULightMapTexture2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightMapTexture2D);
	UClass* Z_Construct_UClass_ULightMapTexture2D_NoRegister()
	{
		return ULightMapTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_ULightMapTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightMapTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMapTexture2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/LightMapTexture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/LightMapTexture2D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightMapTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMapTexture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightMapTexture2D_Statics::ClassParams = {
		&ULightMapTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightMapTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightMapTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightMapTexture2D()
	{
		if (!Z_Registration_Info_UClass_ULightMapTexture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightMapTexture2D.OuterSingleton, Z_Construct_UClass_ULightMapTexture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightMapTexture2D.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULightMapTexture2D>()
	{
		return ULightMapTexture2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMapTexture2D);
	ULightMapTexture2D::~ULightMapTexture2D() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULightMapTexture2D)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightMapTexture2D, ULightMapTexture2D::StaticClass, TEXT("ULightMapTexture2D"), &Z_Registration_Info_UClass_ULightMapTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightMapTexture2D), 943888696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_3524807896(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LightMapTexture2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
