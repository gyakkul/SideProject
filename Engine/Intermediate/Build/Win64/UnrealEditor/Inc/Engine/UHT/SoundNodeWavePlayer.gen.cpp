// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/SoundNodeWavePlayer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundNodeWavePlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeAssetReferencer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWavePlayer();
	ENGINE_API UClass* Z_Construct_UClass_USoundNodeWavePlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USoundNodeWavePlayer::StaticRegisterNativesUSoundNodeWavePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundNodeWavePlayer);
	UClass* Z_Construct_UClass_USoundNodeWavePlayer_NoRegister()
	{
		return USoundNodeWavePlayer::StaticClass();
	}
	struct Z_Construct_UClass_USoundNodeWavePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWaveAssetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoundWaveAssetPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundNodeWavePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundNodeAssetReferencer,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWavePlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Sound node that contains a reference to the raw wave file to be played\n */" },
		{ "DisplayName", "Wave Player" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Sound/SoundNodeWavePlayer.h" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
		{ "ToolTip", "Sound node that contains a reference to the raw wave file to be played" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWaveAssetPtr_MetaData[] = {
		{ "Category", "WavePlayer" },
		{ "DisplayName", "Sound Wave" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWaveAssetPtr = { "SoundWaveAssetPtr", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeWavePlayer, SoundWaveAssetPtr), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWaveAssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWaveAssetPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWave_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundNodeWavePlayer, SoundWave), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "WavePlayer" },
		{ "ModuleRelativePath", "Classes/Sound/SoundNodeWavePlayer.h" },
	};
#endif
	void Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((USoundNodeWavePlayer*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USoundNodeWavePlayer), &Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundNodeWavePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWaveAssetPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_SoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundNodeWavePlayer_Statics::NewProp_bLooping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundNodeWavePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundNodeWavePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundNodeWavePlayer_Statics::ClassParams = {
		&USoundNodeWavePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundNodeWavePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeWavePlayer_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundNodeWavePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundNodeWavePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundNodeWavePlayer()
	{
		if (!Z_Registration_Info_UClass_USoundNodeWavePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundNodeWavePlayer.OuterSingleton, Z_Construct_UClass_USoundNodeWavePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundNodeWavePlayer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundNodeWavePlayer>()
	{
		return USoundNodeWavePlayer::StaticClass();
	}
	USoundNodeWavePlayer::USoundNodeWavePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundNodeWavePlayer);
	USoundNodeWavePlayer::~USoundNodeWavePlayer() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNodeWavePlayer)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundNodeWavePlayer, USoundNodeWavePlayer::StaticClass, TEXT("USoundNodeWavePlayer"), &Z_Registration_Info_UClass_USoundNodeWavePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundNodeWavePlayer), 1495060709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_4161853433(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNodeWavePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
