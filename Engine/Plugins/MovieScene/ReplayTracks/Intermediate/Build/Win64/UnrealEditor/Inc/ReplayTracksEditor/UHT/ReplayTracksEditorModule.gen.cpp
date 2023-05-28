// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReplayTracksEditorModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplayTracksEditorModule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	REPLAYTRACKSEDITOR_API UClass* Z_Construct_UClass_UReplayTracksCameraModifier();
	REPLAYTRACKSEDITOR_API UClass* Z_Construct_UClass_UReplayTracksCameraModifier_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReplayTracksEditor();
// End Cross Module References
	void UReplayTracksCameraModifier::StaticRegisterNativesUReplayTracksCameraModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplayTracksCameraModifier);
	UClass* Z_Construct_UClass_UReplayTracksCameraModifier_NoRegister()
	{
		return UReplayTracksCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UReplayTracksCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplayTracksCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_ReplayTracksEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplayTracksCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Camera modifier that lets us set the correct FOV and post-process settings on the spectator pawn\n * when we want to lock into a camera.\n */" },
		{ "IncludePath", "ReplayTracksEditorModule.h" },
		{ "ModuleRelativePath", "Private/ReplayTracksEditorModule.h" },
		{ "ToolTip", "Camera modifier that lets us set the correct FOV and post-process settings on the spectator pawn\nwhen we want to lock into a camera." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplayTracksCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplayTracksCameraModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplayTracksCameraModifier_Statics::ClassParams = {
		&UReplayTracksCameraModifier::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReplayTracksCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplayTracksCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplayTracksCameraModifier()
	{
		if (!Z_Registration_Info_UClass_UReplayTracksCameraModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplayTracksCameraModifier.OuterSingleton, Z_Construct_UClass_UReplayTracksCameraModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplayTracksCameraModifier.OuterSingleton;
	}
	template<> REPLAYTRACKSEDITOR_API UClass* StaticClass<UReplayTracksCameraModifier>()
	{
		return UReplayTracksCameraModifier::StaticClass();
	}
	UReplayTracksCameraModifier::UReplayTracksCameraModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplayTracksCameraModifier);
	UReplayTracksCameraModifier::~UReplayTracksCameraModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplayTracksCameraModifier, UReplayTracksCameraModifier::StaticClass, TEXT("UReplayTracksCameraModifier"), &Z_Registration_Info_UClass_UReplayTracksCameraModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplayTracksCameraModifier), 4214128601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_203736578(TEXT("/Script/ReplayTracksEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_ReplayTracks_Source_ReplayTracksEditor_Private_ReplayTracksEditorModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
