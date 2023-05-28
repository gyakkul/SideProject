// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OculusAudioGeometryLandscape.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusAudioGeometryLandscape() {}
// Cross Module References
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioGeometryLandscape();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioGeometryLandscape_NoRegister();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioMaterialComponent();
	UPackage* Z_Construct_UPackage__Script_OculusAudio();
// End Cross Module References
	void UOculusAudioGeometryLandscape::StaticRegisterNativesUOculusAudioGeometryLandscape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusAudioGeometryLandscape);
	UClass* Z_Construct_UClass_UOculusAudioGeometryLandscape_NoRegister()
	{
		return UOculusAudioGeometryLandscape::StaticClass();
	}
	struct Z_Construct_UClass_UOculusAudioGeometryLandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusAudioGeometryLandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOculusAudioMaterialComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioGeometryLandscape_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "HideCategories", "Activation Collision Cooking Activation Collision Cooking" },
		{ "IncludePath", "OculusAudioGeometryLandscape.h" },
		{ "ModuleRelativePath", "Private/OculusAudioGeometryLandscape.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusAudioGeometryLandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusAudioGeometryLandscape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusAudioGeometryLandscape_Statics::ClassParams = {
		&UOculusAudioGeometryLandscape::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusAudioGeometryLandscape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioGeometryLandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusAudioGeometryLandscape()
	{
		if (!Z_Registration_Info_UClass_UOculusAudioGeometryLandscape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusAudioGeometryLandscape.OuterSingleton, Z_Construct_UClass_UOculusAudioGeometryLandscape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusAudioGeometryLandscape.OuterSingleton;
	}
	template<> OCULUSAUDIO_API UClass* StaticClass<UOculusAudioGeometryLandscape>()
	{
		return UOculusAudioGeometryLandscape::StaticClass();
	}
	UOculusAudioGeometryLandscape::UOculusAudioGeometryLandscape() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusAudioGeometryLandscape);
	UOculusAudioGeometryLandscape::~UOculusAudioGeometryLandscape() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOculusAudioGeometryLandscape)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioGeometryLandscape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioGeometryLandscape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusAudioGeometryLandscape, UOculusAudioGeometryLandscape::StaticClass, TEXT("UOculusAudioGeometryLandscape"), &Z_Registration_Info_UClass_UOculusAudioGeometryLandscape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusAudioGeometryLandscape), 2284531151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioGeometryLandscape_h_1152402278(TEXT("/Script/OculusAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioGeometryLandscape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioGeometryLandscape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
