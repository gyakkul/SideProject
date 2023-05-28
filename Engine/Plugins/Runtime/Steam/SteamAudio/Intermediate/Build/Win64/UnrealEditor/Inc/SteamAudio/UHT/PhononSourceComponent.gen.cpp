// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhononSourceComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononSourceComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononSourceComponent();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononSourceComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	void UPhononSourceComponent::StaticRegisterNativesUPhononSourceComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhononSourceComponent);
	UClass* Z_Construct_UClass_UPhononSourceComponent_NoRegister()
	{
		return UPhononSourceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhononSourceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakingRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BakingRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UniqueIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhononSourceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononSourceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "Comment", "/**\n * Phonon Source Components can be placed alongside statically positioned Audio Components in order to bake impulse response data\n * to be applied at runtime.\n */" },
		{ "HideCategories", "Activation Collision Tags Rendering Physics LOD Mobility Cooking AssetUserData Trigger PhysicsVolume" },
		{ "IncludePath", "PhononSourceComponent.h" },
		{ "ModuleRelativePath", "Private/PhononSourceComponent.h" },
		{ "ToolTip", "Phonon Source Components can be placed alongside statically positioned Audio Components in order to bake impulse response data\nto be applied at runtime." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononSourceComponent_Statics::NewProp_BakingRadius_MetaData[] = {
		{ "Category", "Baking" },
		{ "Comment", "// Any Phonon probes that lie within the baking radius will be used to produce baked impulse response data for this source location.\n" },
		{ "ModuleRelativePath", "Private/PhononSourceComponent.h" },
		{ "ToolTip", "Any Phonon probes that lie within the baking radius will be used to produce baked impulse response data for this source location." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhononSourceComponent_Statics::NewProp_BakingRadius = { "BakingRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononSourceComponent, BakingRadius), METADATA_PARAMS(Z_Construct_UClass_UPhononSourceComponent_Statics::NewProp_BakingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononSourceComponent_Statics::NewProp_BakingRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhononSourceComponent_Statics::NewProp_UniqueIdentifier_MetaData[] = {
		{ "Category", "Baking" },
		{ "Comment", "// Users must specify a unique identifier for baked data lookup at runtime.\n" },
		{ "ModuleRelativePath", "Private/PhononSourceComponent.h" },
		{ "ToolTip", "Users must specify a unique identifier for baked data lookup at runtime." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPhononSourceComponent_Statics::NewProp_UniqueIdentifier = { "UniqueIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhononSourceComponent, UniqueIdentifier), METADATA_PARAMS(Z_Construct_UClass_UPhononSourceComponent_Statics::NewProp_UniqueIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononSourceComponent_Statics::NewProp_UniqueIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhononSourceComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononSourceComponent_Statics::NewProp_BakingRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhononSourceComponent_Statics::NewProp_UniqueIdentifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhononSourceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhononSourceComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhononSourceComponent_Statics::ClassParams = {
		&UPhononSourceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhononSourceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhononSourceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhononSourceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhononSourceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhononSourceComponent()
	{
		if (!Z_Registration_Info_UClass_UPhononSourceComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhononSourceComponent.OuterSingleton, Z_Construct_UClass_UPhononSourceComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhononSourceComponent.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<UPhononSourceComponent>()
	{
		return UPhononSourceComponent::StaticClass();
	}
	UPhononSourceComponent::UPhononSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhononSourceComponent);
	UPhononSourceComponent::~UPhononSourceComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononSourceComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononSourceComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhononSourceComponent, UPhononSourceComponent::StaticClass, TEXT("UPhononSourceComponent"), &Z_Registration_Info_UClass_UPhononSourceComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhononSourceComponent), 2246862099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononSourceComponent_h_3213794511(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononSourceComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononSourceComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
