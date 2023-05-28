// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Lightmass/LightmassImportanceVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightmassImportanceVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALightmassImportanceVolume();
	ENGINE_API UClass* Z_Construct_UClass_ALightmassImportanceVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ALightmassImportanceVolume::StaticRegisterNativesALightmassImportanceVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightmassImportanceVolume);
	UClass* Z_Construct_UClass_ALightmassImportanceVolume_NoRegister()
	{
		return ALightmassImportanceVolume::StaticClass();
	}
	struct Z_Construct_UClass_ALightmassImportanceVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightmassImportanceVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightmassImportanceVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Lightmass/LightmassImportanceVolume.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/LightmassImportanceVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightmassImportanceVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightmassImportanceVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightmassImportanceVolume_Statics::ClassParams = {
		&ALightmassImportanceVolume::StaticClass,
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
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightmassImportanceVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightmassImportanceVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightmassImportanceVolume()
	{
		if (!Z_Registration_Info_UClass_ALightmassImportanceVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightmassImportanceVolume.OuterSingleton, Z_Construct_UClass_ALightmassImportanceVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALightmassImportanceVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ALightmassImportanceVolume>()
	{
		return ALightmassImportanceVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightmassImportanceVolume);
	ALightmassImportanceVolume::~ALightmassImportanceVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALightmassImportanceVolume, ALightmassImportanceVolume::StaticClass, TEXT("ALightmassImportanceVolume"), &Z_Registration_Info_UClass_ALightmassImportanceVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightmassImportanceVolume), 305100496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_3930175730(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Lightmass_LightmassImportanceVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
