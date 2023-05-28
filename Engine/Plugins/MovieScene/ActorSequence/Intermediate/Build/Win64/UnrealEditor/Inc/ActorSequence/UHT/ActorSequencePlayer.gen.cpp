// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorSequencePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSequencePlayer() {}
// Cross Module References
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequencePlayer();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequencePlayer_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	UPackage* Z_Construct_UPackage__Script_ActorSequence();
// End Cross Module References
	void UActorSequencePlayer::StaticRegisterNativesUActorSequencePlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorSequencePlayer);
	UClass* Z_Construct_UClass_UActorSequencePlayer_NoRegister()
	{
		return UActorSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UActorSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequencePlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UActorSequencePlayer is used to actually \"play\" an actor sequence asset at runtime.\n */" },
		{ "IncludePath", "ActorSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/ActorSequencePlayer.h" },
		{ "ToolTip", "UActorSequencePlayer is used to actually \"play\" an actor sequence asset at runtime." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSequencePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorSequencePlayer_Statics::ClassParams = {
		&UActorSequencePlayer::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSequencePlayer()
	{
		if (!Z_Registration_Info_UClass_UActorSequencePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorSequencePlayer.OuterSingleton, Z_Construct_UClass_UActorSequencePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorSequencePlayer.OuterSingleton;
	}
	template<> ACTORSEQUENCE_API UClass* StaticClass<UActorSequencePlayer>()
	{
		return UActorSequencePlayer::StaticClass();
	}
	UActorSequencePlayer::UActorSequencePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSequencePlayer);
	UActorSequencePlayer::~UActorSequencePlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorSequencePlayer, UActorSequencePlayer::StaticClass, TEXT("UActorSequencePlayer"), &Z_Registration_Info_UClass_UActorSequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorSequencePlayer), 3308356679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_791246080(TEXT("/Script/ActorSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequencePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
