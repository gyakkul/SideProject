// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerPlaylistItem.h"
#include "SequencerPlaylist.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerPlaylistItem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem();
	SEQUENCERPLAYLISTS_API UClass* Z_Construct_UClass_USequencerPlaylistItem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SequencerPlaylists();
// End Cross Module References
	void USequencerPlaylistItem::StaticRegisterNativesUSequencerPlaylistItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerPlaylistItem);
	UClass* Z_Construct_UClass_USequencerPlaylistItem_NoRegister()
	{
		return USequencerPlaylistItem::StaticClass();
	}
	struct Z_Construct_UClass_USequencerPlaylistItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrameOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrameOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoldAtFirstFrame_MetaData[];
#endif
		static void NewProp_bHoldAtFirstFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldAtFirstFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumLoops_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoops;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMute_MetaData[];
#endif
		static void NewProp_bMute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerPlaylistItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequencerPlaylists,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SequencerPlaylistItem.h" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_StartFrameOffset_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "Comment", "/** Number of frames by which to clip the in point of sections played from this item. Will also affect the first frame for hold. */" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistItem.h" },
		{ "ToolTip", "Number of frames by which to clip the in point of sections played from this item. Will also affect the first frame for hold." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_StartFrameOffset = { "StartFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylistItem, StartFrameOffset), METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_StartFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_StartFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_EndFrameOffset_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "Comment", "/** Number of frames by which to clip the out point of sections played from this item. */" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistItem.h" },
		{ "ToolTip", "Number of frames by which to clip the out point of sections played from this item." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_EndFrameOffset = { "EndFrameOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylistItem, EndFrameOffset), METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_EndFrameOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_EndFrameOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bHoldAtFirstFrame_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, the sequence will be inserted immediately on recording start and any time Reset()\n\x09 * is called, paused at the first frame indefinitely until subsequently played or stopped.\n\x09 * This is controlled by toggling pause prior to recording/playback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistItem.h" },
		{ "ToolTip", "If true, the sequence will be inserted immediately on recording start and any time Reset()\nis called, paused at the first frame indefinitely until subsequently played or stopped.\nThis is controlled by toggling pause prior to recording/playback." },
	};
#endif
	void Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bHoldAtFirstFrame_SetBit(void* Obj)
	{
		((USequencerPlaylistItem*)Obj)->bHoldAtFirstFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bHoldAtFirstFrame = { "bHoldAtFirstFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerPlaylistItem), &Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bHoldAtFirstFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bHoldAtFirstFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bHoldAtFirstFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_NumLoops_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "Comment", "/** 0 is single playthrough, >= 1 is (n+1) playthroughs. */" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistItem.h" },
		{ "ToolTip", "0 is single playthrough, >= 1 is (n+1) playthroughs." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_NumLoops = { "NumLoops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylistItem, NumLoops), METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_NumLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_NumLoops_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_PlaybackSpeed_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "Comment", "/** Speed multiplier at which to play sections created by this item. A value of 1 will result in playback at the original speed. */" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistItem.h" },
		{ "ToolTip", "Speed multiplier at which to play sections created by this item. A value of 1 will result in playback at the original speed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerPlaylistItem, PlaybackSpeed), METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_PlaybackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_PlaybackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bMute_MetaData[] = {
		{ "Category", "Sequencer Playlists" },
		{ "Comment", "/** Disable playback of this item and prevent it from entering a hold state. */" },
		{ "ModuleRelativePath", "Public/SequencerPlaylistItem.h" },
		{ "ToolTip", "Disable playback of this item and prevent it from entering a hold state." },
	};
#endif
	void Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bMute_SetBit(void* Obj)
	{
		((USequencerPlaylistItem*)Obj)->bMute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bMute = { "bMute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerPlaylistItem), &Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bMute_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bMute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bMute_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerPlaylistItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_StartFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_EndFrameOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bHoldAtFirstFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_NumLoops,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_PlaybackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerPlaylistItem_Statics::NewProp_bMute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerPlaylistItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerPlaylistItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerPlaylistItem_Statics::ClassParams = {
		&USequencerPlaylistItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerPlaylistItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerPlaylistItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerPlaylistItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerPlaylistItem()
	{
		if (!Z_Registration_Info_UClass_USequencerPlaylistItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerPlaylistItem.OuterSingleton, Z_Construct_UClass_USequencerPlaylistItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerPlaylistItem.OuterSingleton;
	}
	template<> SEQUENCERPLAYLISTS_API UClass* StaticClass<USequencerPlaylistItem>()
	{
		return USequencerPlaylistItem::StaticClass();
	}
	USequencerPlaylistItem::USequencerPlaylistItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerPlaylistItem);
	USequencerPlaylistItem::~USequencerPlaylistItem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerPlaylistItem, USequencerPlaylistItem::StaticClass, TEXT("USequencerPlaylistItem"), &Z_Registration_Info_UClass_USequencerPlaylistItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerPlaylistItem), 1250811287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistItem_h_2850420758(TEXT("/Script/SequencerPlaylists"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_SequencerPlaylists_Source_SequencerPlaylists_Public_SequencerPlaylistItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
