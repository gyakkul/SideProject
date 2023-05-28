// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SequencerPlaylistItem_Sequence.h"
#include "SequencerPlaylist.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerPlaylistItem_Sequence() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem_Sequence();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem_Sequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerPlaylists();
// End Cross Module References
	void USequencerPlaylistItem_Sequence::StaticRegisterNativesUSequencerPlaylistItem_Sequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerPlaylistItem_Sequence);
	UClass* Z_Construct_UClass_USequencerPlaylistItem_Sequence_NoRegister()
	{
		return USequencerPlaylistItem_Sequence::StaticClass();
	}
	struct Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USequencerPlaylistItem,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerPlaylists,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SequencerPlaylistItem_Sequence.h" },
		{ "ModuleRelativePath", "Private/SequencerPlaylistItem_Sequence.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "ModuleRelativePath", "Private/SequencerPlaylistItem_Sequence.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylistItem_Sequence, Sequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::NewProp_Sequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::NewProp_Sequence,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerPlaylistItem_Sequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::ClassParams = {
		&USequencerPlaylistItem_Sequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerPlaylistItem_Sequence()
	{
		if (!Z_Registration_Info_UClass_USequencerPlaylistItem_Sequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerPlaylistItem_Sequence.OuterSingleton, Z_Construct_UClass_USequencerPlaylistItem_Sequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerPlaylistItem_Sequence.OuterSingleton;
	}
	template<> SEQUENCERPLAYLISTS_API UClass* StaticClass<USequencerPlaylistItem_Sequence>()
	{
		return USequencerPlaylistItem_Sequence::StaticClass();
	}
	USequencerPlaylistItem_Sequence::USequencerPlaylistItem_Sequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerPlaylistItem_Sequence);
	USequencerPlaylistItem_Sequence::~USequencerPlaylistItem_Sequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerPlaylistItem_Sequence, USequencerPlaylistItem_Sequence::StaticClass, TEXT("USequencerPlaylistItem_Sequence"), &Z_Registration_Info_UClass_USequencerPlaylistItem_Sequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerPlaylistItem_Sequence), 2741576536U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_2606330814(TEXT("/Script/SequencerPlaylists"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Private_SequencerPlaylistItem_Sequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
