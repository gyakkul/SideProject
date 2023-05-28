// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhononProbeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononProbeComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononProbeComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononProbeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void UPhononProbeComponent::StaticRegisterNativesUPhononProbeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhononProbeComponent);
	UClass* Z_Construct_UClass_UPhononProbeComponent_NoRegister()
	{
		return UPhononProbeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhononProbeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProbeLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProbeLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProbeLocations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhononProbeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononProbeComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Audio" },
		{ "HideCategories", "Activation Collision Trigger PhysicsVolume" },
		{ "IncludePath", "PhononProbeComponent.h" },
		{ "ModuleRelativePath", "Private/PhononProbeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhononProbeComponent_Statics::NewProp_ProbeLocations_Inner = { "ProbeLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononProbeComponent_Statics::NewProp_ProbeLocations_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhononProbeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPhononProbeComponent_Statics::NewProp_ProbeLocations = { "ProbeLocations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononProbeComponent, ProbeLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPhononProbeComponent_Statics::NewProp_ProbeLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononProbeComponent_Statics::NewProp_ProbeLocations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhononProbeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononProbeComponent_Statics::NewProp_ProbeLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononProbeComponent_Statics::NewProp_ProbeLocations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhononProbeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhononProbeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhononProbeComponent_Statics::ClassParams = {
		&UPhononProbeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhononProbeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhononProbeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhononProbeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononProbeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhononProbeComponent()
	{
		if (!Z_Registration_Info_UClass_UPhononProbeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhononProbeComponent.OuterSingleton, Z_Construct_UClass_UPhononProbeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhononProbeComponent.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<UPhononProbeComponent>()
	{
		return UPhononProbeComponent::StaticClass();
	}
	UPhononProbeComponent::UPhononProbeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhononProbeComponent);
	UPhononProbeComponent::~UPhononProbeComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhononProbeComponent, UPhononProbeComponent::StaticClass, TEXT("UPhononProbeComponent"), &Z_Registration_Info_UClass_UPhononProbeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhononProbeComponent), 1754691907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeComponent_h_1491973866(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
