// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureCube::StaticRegisterNativesUTextureCube()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureCube);
	UClass* Z_Construct_UClass_UTextureCube_NoRegister()
	{
		return UTextureCube::StaticClass();
	}
	struct Z_Construct_UClass_UTextureCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureCube_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/TextureCube.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureCube.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureCube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureCube_Statics::ClassParams = {
		&UTextureCube::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextureCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureCube()
	{
		if (!Z_Registration_Info_UClass_UTextureCube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureCube.OuterSingleton, Z_Construct_UClass_UTextureCube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureCube.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureCube>()
	{
		return UTextureCube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureCube);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureCube)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureCube, UTextureCube::StaticClass, TEXT("UTextureCube"), &Z_Registration_Info_UClass_UTextureCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureCube), 3571929590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_1787337715(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureCube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
