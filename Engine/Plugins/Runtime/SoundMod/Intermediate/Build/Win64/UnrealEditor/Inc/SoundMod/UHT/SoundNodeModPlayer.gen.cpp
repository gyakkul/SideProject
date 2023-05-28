// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/SoundNodeModPlayer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeModPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAssetReferencer();
	SOUNDMOD_API UClass* Z_Construct_UClass_USoundMod_NoRegister();
	SOUNDMOD_API UClass* Z_Construct_UClass_USoundNodeModPlayer();
	SOUNDMOD_API UClass* Z_Construct_UClass_USoundNodeModPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoundMod();
// End Cross Module References
	void USoundNodeModPlayer::StaticRegisterNativesUSoundNodeModPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeModPlayer);
	UClass* Z_Construct_UClass_USoundNodeModPlayer_NoRegister()
	{
		return USoundNodeModPlayer::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeModPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundModAssetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoundModAssetPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundMod_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundMod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeModPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNodeAssetReferencer,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundMod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Sound node that contains a reference to the mod file to be played\n */" },
		{ "DisplayName", "Mod Player" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "SoundNodeModPlayer.h" },
		{ "ModuleRelativePath", "Public/SoundNodeModPlayer.h" },
		{ "ToolTip", "Sound node that contains a reference to the mod file to be played" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_SoundModAssetPtr_MetaData[] = {
		{ "Category", "ModPlayer" },
		{ "DisplayName", "Sound Mod" },
		{ "ModuleRelativePath", "Public/SoundNodeModPlayer.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_SoundModAssetPtr = { "SoundModAssetPtr", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeModPlayer, SoundModAssetPtr), Z_Construct_UClass_USoundMod_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_SoundModAssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_SoundModAssetPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_SoundMod_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundNodeModPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_SoundMod = { "SoundMod", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeModPlayer, SoundMod), Z_Construct_UClass_USoundMod_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_SoundMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_SoundMod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "ModPlayer" },
		{ "ModuleRelativePath", "Public/SoundNodeModPlayer.h" },
	};
#endif
	void Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((USoundNodeModPlayer*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeModPlayer), &Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_bLooping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeModPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_SoundModAssetPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_SoundMod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeModPlayer_Statics::NewProp_bLooping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeModPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeModPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeModPlayer_Statics::ClassParams = {
		&USoundNodeModPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeModPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModPlayer_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeModPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeModPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeModPlayer()
	{
		if (!Z_Registration_Info_UClass_USoundNodeModPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeModPlayer.OuterSingleton, Z_Construct_UClass_USoundNodeModPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeModPlayer.OuterSingleton;
	}
	template<> SOUNDMOD_API UClass* StaticClass<USoundNodeModPlayer>()
	{
		return USoundNodeModPlayer::StaticClass();
	}
	USoundNodeModPlayer::USoundNodeModPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeModPlayer);
	USoundNodeModPlayer::~USoundNodeModPlayer() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeModPlayer)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeModPlayer, USoundNodeModPlayer::StaticClass, TEXT("USoundNodeModPlayer"), &Z_Registration_Info_UClass_USoundNodeModPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeModPlayer), 777505188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_419655823(TEXT("/Script/SoundMod"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundMod_Source_SoundMod_Public_SoundNodeModPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
