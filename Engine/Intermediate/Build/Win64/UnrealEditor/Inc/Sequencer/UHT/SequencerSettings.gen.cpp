// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerSettings();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerSettings_NoRegister();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerSettingsContainer();
	SEQUENCER_API UClass* Z_Construct_UClass_USequencerSettingsContainer_NoRegister();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EAllowEditsMode();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EAutoChangeMode();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_EKeyGroupMode();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_ESequencerLoopMode();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition();
	SEQUENCER_API UEnum* Z_Construct_UEnum_Sequencer_ESequencerZoomPosition();
	TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESequencerSpawnPosition;
	static UEnum* ESequencerSpawnPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESequencerSpawnPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESequencerSpawnPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("ESequencerSpawnPosition"));
		}
		return Z_Registration_Info_UEnum_ESequencerSpawnPosition.OuterSingleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<ESequencerSpawnPosition>()
	{
		return ESequencerSpawnPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Statics::Enumerators[] = {
		{ "SSP_Origin", (int64)SSP_Origin },
		{ "SSP_PlaceInFrontOfCamera", (int64)SSP_PlaceInFrontOfCamera },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "SSP_Origin.Comment", "/** Origin. */" },
		{ "SSP_Origin.DisplayName", "Origin" },
		{ "SSP_Origin.Name", "SSP_Origin" },
		{ "SSP_Origin.ToolTip", "Origin." },
		{ "SSP_PlaceInFrontOfCamera.Comment", "/** Place in Front of Camera. */" },
		{ "SSP_PlaceInFrontOfCamera.DisplayName", "Place in Front of Camera" },
		{ "SSP_PlaceInFrontOfCamera.Name", "SSP_PlaceInFrontOfCamera" },
		{ "SSP_PlaceInFrontOfCamera.ToolTip", "Place in Front of Camera." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		"ESequencerSpawnPosition",
		"ESequencerSpawnPosition",
		Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition()
	{
		if (!Z_Registration_Info_UEnum_ESequencerSpawnPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESequencerSpawnPosition.InnerSingleton, Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESequencerSpawnPosition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESequencerZoomPosition;
	static UEnum* ESequencerZoomPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESequencerZoomPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESequencerZoomPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_ESequencerZoomPosition, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("ESequencerZoomPosition"));
		}
		return Z_Registration_Info_UEnum_ESequencerZoomPosition.OuterSingleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<ESequencerZoomPosition>()
	{
		return ESequencerZoomPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Statics::Enumerators[] = {
		{ "SZP_CurrentTime", (int64)SZP_CurrentTime },
		{ "SZP_MousePosition", (int64)SZP_MousePosition },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "SZP_CurrentTime.Comment", "/** Current Time. */" },
		{ "SZP_CurrentTime.DisplayName", "Playhead" },
		{ "SZP_CurrentTime.Name", "SZP_CurrentTime" },
		{ "SZP_CurrentTime.ToolTip", "Current Time." },
		{ "SZP_MousePosition.Comment", "/** Mouse Position. */" },
		{ "SZP_MousePosition.DisplayName", "Mouse Position" },
		{ "SZP_MousePosition.Name", "SZP_MousePosition" },
		{ "SZP_MousePosition.ToolTip", "Mouse Position." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		"ESequencerZoomPosition",
		"ESequencerZoomPosition",
		Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Sequencer_ESequencerZoomPosition()
	{
		if (!Z_Registration_Info_UEnum_ESequencerZoomPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESequencerZoomPosition.InnerSingleton, Z_Construct_UEnum_Sequencer_ESequencerZoomPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESequencerZoomPosition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESequencerLoopMode;
	static UEnum* ESequencerLoopMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESequencerLoopMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESequencerLoopMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Sequencer_ESequencerLoopMode, (UObject*)Z_Construct_UPackage__Script_Sequencer(), TEXT("ESequencerLoopMode"));
		}
		return Z_Registration_Info_UEnum_ESequencerLoopMode.OuterSingleton;
	}
	template<> SEQUENCER_API UEnum* StaticEnum<ESequencerLoopMode>()
	{
		return ESequencerLoopMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Statics::Enumerators[] = {
		{ "SLM_NoLoop", (int64)SLM_NoLoop },
		{ "SLM_Loop", (int64)SLM_Loop },
		{ "SLM_LoopSelectionRange", (int64)SLM_LoopSelectionRange },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "SLM_Loop.Comment", "/** Loop Playback Range. */" },
		{ "SLM_Loop.DisplayName", "Loop" },
		{ "SLM_Loop.Name", "SLM_Loop" },
		{ "SLM_Loop.ToolTip", "Loop Playback Range." },
		{ "SLM_LoopSelectionRange.Comment", "/** Loop Selection Range. */" },
		{ "SLM_LoopSelectionRange.DisplayName", "Loop Selection Range" },
		{ "SLM_LoopSelectionRange.Name", "SLM_LoopSelectionRange" },
		{ "SLM_LoopSelectionRange.ToolTip", "Loop Selection Range." },
		{ "SLM_NoLoop.Comment", "/** No Looping. */" },
		{ "SLM_NoLoop.DisplayName", "No Looping" },
		{ "SLM_NoLoop.Name", "SLM_NoLoop" },
		{ "SLM_NoLoop.ToolTip", "No Looping." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Sequencer,
		nullptr,
		"ESequencerLoopMode",
		"ESequencerLoopMode",
		Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Sequencer_ESequencerLoopMode()
	{
		if (!Z_Registration_Info_UEnum_ESequencerLoopMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESequencerLoopMode.InnerSingleton, Z_Construct_UEnum_Sequencer_ESequencerLoopMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESequencerLoopMode.InnerSingleton;
	}
	void USequencerSettingsContainer::StaticRegisterNativesUSequencerSettingsContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerSettingsContainer);
	UClass* Z_Construct_UClass_USequencerSettingsContainer_NoRegister()
	{
		return USequencerSettingsContainer::StaticClass();
	}
	struct Z_Construct_UClass_USequencerSettingsContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerSettingsContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettingsContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Empty class used to house multiple named USequencerSettings */" },
		{ "IncludePath", "SequencerSettings.h" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Empty class used to house multiple named USequencerSettings" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerSettingsContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerSettingsContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerSettingsContainer_Statics::ClassParams = {
		&USequencerSettingsContainer::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerSettingsContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettingsContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerSettingsContainer()
	{
		if (!Z_Registration_Info_UClass_USequencerSettingsContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerSettingsContainer.OuterSingleton, Z_Construct_UClass_USequencerSettingsContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerSettingsContainer.OuterSingleton;
	}
	template<> SEQUENCER_API UClass* StaticClass<USequencerSettingsContainer>()
	{
		return USequencerSettingsContainer::StaticClass();
	}
	USequencerSettingsContainer::USequencerSettingsContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerSettingsContainer);
	USequencerSettingsContainer::~USequencerSettingsContainer() {}
	void USequencerSettings::StaticRegisterNativesUSequencerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerSettings);
	UClass* Z_Construct_UClass_USequencerSettings_NoRegister()
	{
		return USequencerSettings::StaticClass();
	}
	struct Z_Construct_UClass_USequencerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoChangeMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoChangeMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoChangeMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllowEditsMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowEditsMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllowEditsMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyGroupMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyGroupMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyGroupMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeyInterpolation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyInterpolation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSetTrackDefaults_MetaData[];
#endif
		static void NewProp_bAutoSetTrackDefaults_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSetTrackDefaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPosition_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateSpawnableCameras_MetaData[];
#endif
		static void NewProp_bCreateSpawnableCameras_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateSpawnableCameras;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRangeSlider_MetaData[];
#endif
		static void NewProp_bShowRangeSlider_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRangeSlider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSnapEnabled_MetaData[];
#endif
		static void NewProp_bIsSnapEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSnapEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapKeyTimesToInterval_MetaData[];
#endif
		static void NewProp_bSnapKeyTimesToInterval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapKeyTimesToInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapKeyTimesToKeys_MetaData[];
#endif
		static void NewProp_bSnapKeyTimesToKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapKeyTimesToKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapSectionTimesToInterval_MetaData[];
#endif
		static void NewProp_bSnapSectionTimesToInterval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapSectionTimesToInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapSectionTimesToSections_MetaData[];
#endif
		static void NewProp_bSnapSectionTimesToSections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapSectionTimesToSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapKeysAndSectionsToPlayRange_MetaData[];
#endif
		static void NewProp_bSnapKeysAndSectionsToPlayRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapKeysAndSectionsToPlayRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPlayTimeToKeys_MetaData[];
#endif
		static void NewProp_bSnapPlayTimeToKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPlayTimeToKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPlayTimeToSections_MetaData[];
#endif
		static void NewProp_bSnapPlayTimeToSections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPlayTimeToSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPlayTimeToMarkers_MetaData[];
#endif
		static void NewProp_bSnapPlayTimeToMarkers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPlayTimeToMarkers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPlayTimeToInterval_MetaData[];
#endif
		static void NewProp_bSnapPlayTimeToInterval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPlayTimeToInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPlayTimeToPressedKey_MetaData[];
#endif
		static void NewProp_bSnapPlayTimeToPressedKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPlayTimeToPressedKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPlayTimeToDraggedKey_MetaData[];
#endif
		static void NewProp_bSnapPlayTimeToDraggedKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPlayTimeToDraggedKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapCurveValueToInterval_MetaData[];
#endif
		static void NewProp_bSnapCurveValueToInterval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapCurveValueToInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSelectedNodesOnly_MetaData[];
#endif
		static void NewProp_bShowSelectedNodesOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSelectedNodesOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRewindOnRecord_MetaData[];
#endif
		static void NewProp_bRewindOnRecord_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRewindOnRecord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLeftMouseDragDoesMarquee_MetaData[];
#endif
		static void NewProp_bLeftMouseDragDoesMarquee_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeftMouseDragDoesMarquee;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomPosition_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ZoomPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoScrollEnabled_MetaData[];
#endif
		static void NewProp_bAutoScrollEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoScrollEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinkCurveEditorTimeRange_MetaData[];
#endif
		static void NewProp_bLinkCurveEditorTimeRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinkCurveEditorTimeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSynchronizeCurveEditorSelection_MetaData[];
#endif
		static void NewProp_bSynchronizeCurveEditorSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSynchronizeCurveEditorSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsolateCurveEditorToSelection_MetaData[];
#endif
		static void NewProp_bIsolateCurveEditorToSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsolateCurveEditorToSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LoopMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetPlayheadWhenNavigating_MetaData[];
#endif
		static void NewProp_bResetPlayheadWhenNavigating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetPlayheadWhenNavigating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepCursorInPlayRangeWhileScrubbing_MetaData[];
#endif
		static void NewProp_bKeepCursorInPlayRangeWhileScrubbing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepCursorInPlayRangeWhileScrubbing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepPlayRangeInSectionBounds_MetaData[];
#endif
		static void NewProp_bKeepPlayRangeInSectionBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepPlayRangeInSectionBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZeroPadFrames_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ZeroPadFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpFrameIncrement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpFrameIncrement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLayerBars_MetaData[];
#endif
		static void NewProp_bShowLayerBars_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLayerBars;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowKeyBars_MetaData[];
#endif
		static void NewProp_bShowKeyBars_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowKeyBars;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInfiniteKeyAreas_MetaData[];
#endif
		static void NewProp_bInfiniteKeyAreas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInfiniteKeyAreas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowChannelColors_MetaData[];
#endif
		static void NewProp_bShowChannelColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowChannelColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowStatusBar_MetaData[];
#endif
		static void NewProp_bShowStatusBar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowStatusBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTickLines_MetaData[];
#endif
		static void NewProp_bShowTickLines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTickLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSequencerToolbar_MetaData[];
#endif
		static void NewProp_bShowSequencerToolbar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSequencerToolbar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyAreaCurveExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyAreaCurveExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyAreaHeightWithCurves_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyAreaHeightWithCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReduceKeysTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReduceKeysTolerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteKeysWhenTrimming_MetaData[];
#endif
		static void NewProp_bDeleteKeysWhenTrimming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteKeysWhenTrimming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSectionsAfterBaking_MetaData[];
#endif
		static void NewProp_bDisableSectionsAfterBaking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSectionsAfterBaking;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionColorTints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionColorTints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionColorTints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCleanPlaybackMode_MetaData[];
#endif
		static void NewProp_bCleanPlaybackMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCleanPlaybackMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateRealtimeViewports_MetaData[];
#endif
		static void NewProp_bActivateRealtimeViewports_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateRealtimeViewports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateSubSequencesInIsolation_MetaData[];
#endif
		static void NewProp_bEvaluateSubSequencesInIsolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateSubSequencesInIsolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRerunConstructionScripts_MetaData[];
#endif
		static void NewProp_bRerunConstructionScripts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRerunConstructionScripts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugVisualization_MetaData[];
#endif
		static void NewProp_bShowDebugVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizePreAndPostRoll_MetaData[];
#endif
		static void NewProp_bVisualizePreAndPostRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizePreAndPostRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompileDirectorOnEvaluate_MetaData[];
#endif
		static void NewProp_bCompileDirectorOnEvaluate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompileDirectorOnEvaluate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryPathCap_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TrajectoryPathCap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrameNumberDisplayFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameNumberDisplayFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FrameNumberDisplayFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieRendererName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MovieRendererName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoExpandNodesOnSelection_MetaData[];
#endif
		static void NewProp_bAutoExpandNodesOnSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoExpandNodesOnSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreeViewWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TreeViewWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Serializable options for sequencer. */" },
		{ "IncludePath", "SequencerSettings.h" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Serializable options for sequencer." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "Comment", "/** The auto change mode (auto-key, auto-track or none). */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The auto change mode (auto-key, auto-track or none)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode = { "AutoChangeMode", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, AutoChangeMode), Z_Construct_UEnum_Sequencer_EAutoChangeMode, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode_MetaData)) }; // 3299965310
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "Comment", "/** Allow edits mode. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Allow edits mode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode = { "AllowEditsMode", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, AllowEditsMode), Z_Construct_UEnum_Sequencer_EAllowEditsMode, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode_MetaData)) }; // 4036249572
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "Comment", "/**Key group mode. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Key group mode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode = { "KeyGroupMode", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, KeyGroupMode), Z_Construct_UEnum_Sequencer_EKeyGroupMode, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode_MetaData)) }; // 524750773
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "Comment", "/** The interpolation type for newly created keyframes */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The interpolation type for newly created keyframes" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation = { "KeyInterpolation", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, KeyInterpolation), Z_Construct_UEnum_MovieScene_EMovieSceneKeyInterpolation, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation_MetaData)) }; // 1916605723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults_MetaData[] = {
		{ "Category", "Keyframing" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When setting keys on properties and transforms automatically update the track default values used when there are no keys." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bAutoSetTrackDefaults = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults = { "bAutoSetTrackDefaults", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_SpawnPosition_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The default location of a spawnable when it is first dragged into the viewport from the content browser. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The default location of a spawnable when it is first dragged into the viewport from the content browser." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_SpawnPosition = { "SpawnPosition", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, SpawnPosition), Z_Construct_UEnum_Sequencer_ESequencerSpawnPosition, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_SpawnPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_SpawnPosition_MetaData)) }; // 269865780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Enable or disable creating of spawnable cameras whenever cameras are created. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable creating of spawnable cameras whenever cameras are created." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bCreateSpawnableCameras = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras = { "bCreateSpawnableCameras", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Show the in/out range in the timeline with respect to the start/end range. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Show the in/out range in the timeline with respect to the start/end range." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowRangeSlider = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider = { "bShowRangeSlider", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping in the timeline. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping in the timeline." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bIsSnapEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled = { "bIsSnapEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping keys to the time snapping interval. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping keys to the time snapping interval." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapKeyTimesToInterval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval = { "bSnapKeyTimesToInterval", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping keys to other keys. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping keys to other keys." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapKeyTimesToKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys = { "bSnapKeyTimesToKeys", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping sections to the time snapping interval. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping sections to the time snapping interval." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapSectionTimesToInterval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval = { "bSnapSectionTimesToInterval", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping sections to other sections. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping sections to other sections." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapSectionTimesToSections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections = { "bSnapSectionTimesToSections", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeysAndSectionsToPlayRange_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable keeping keys and sections in the playback range. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable keeping keys and sections in the playback range." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeysAndSectionsToPlayRange_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapKeysAndSectionsToPlayRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeysAndSectionsToPlayRange = { "bSnapKeysAndSectionsToPlayRange", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeysAndSectionsToPlayRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeysAndSectionsToPlayRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeysAndSectionsToPlayRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping the playhead to keys while scrubbing. */" },
		{ "DisplayName", "Snap Playhead to Keys" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the playhead to keys while scrubbing." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapPlayTimeToKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys = { "bSnapPlayTimeToKeys", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToSections_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping the playhead to section bounds while scrubbing. */" },
		{ "DisplayName", "Snap Playhead to Sections" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the playhead to section bounds while scrubbing." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToSections_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapPlayTimeToSections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToSections = { "bSnapPlayTimeToSections", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToSections_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToMarkers_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping the playhead to markers while scrubbing. */" },
		{ "DisplayName", "Snap Playhead to Markers" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the playhead to markers while scrubbing." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToMarkers_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapPlayTimeToMarkers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToMarkers = { "bSnapPlayTimeToMarkers", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToMarkers_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToMarkers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping the playhead to the time snapping interval while scrubbing. */" },
		{ "DisplayName", "Snap Playhead to Interval" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the playhead to the time snapping interval while scrubbing." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapPlayTimeToInterval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval = { "bSnapPlayTimeToInterval", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping the playhead to the pressed key. */" },
		{ "DisplayName", "Snap Playhead to Pressed Key" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the playhead to the pressed key." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapPlayTimeToPressedKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey = { "bSnapPlayTimeToPressedKey", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping the playhead to the dragged key. */" },
		{ "DisplayName", "Snap Playhead to Dragged Key" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the playhead to the dragged key." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapPlayTimeToDraggedKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey = { "bSnapPlayTimeToDraggedKey", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval_MetaData[] = {
		{ "Category", "Snapping" },
		{ "Comment", "/** Enable or disable snapping the curve value to the curve value interval. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable snapping the curve value to the curve value interval." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSnapCurveValueToInterval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval = { "bSnapCurveValueToInterval", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Only show selected nodes in the tree view. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Only show selected nodes in the tree view." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowSelectedNodesOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly = { "bShowSelectedNodesOnly", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Defines whether to jump back to the start of the sequence when a recording is started */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Defines whether to jump back to the start of the sequence when a recording is started" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bRewindOnRecord = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord = { "bRewindOnRecord", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLeftMouseDragDoesMarquee_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Defines whether left mouse drag does marquee select instead of camera orbit */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Defines whether left mouse drag does marquee select instead of camera orbit" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLeftMouseDragDoesMarquee_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bLeftMouseDragDoesMarquee = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLeftMouseDragDoesMarquee = { "bLeftMouseDragDoesMarquee", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLeftMouseDragDoesMarquee_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLeftMouseDragDoesMarquee_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLeftMouseDragDoesMarquee_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZoomPosition_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Whether to zoom in on the current position or the current time in the timeline. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Whether to zoom in on the current position or the current time in the timeline." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZoomPosition = { "ZoomPosition", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, ZoomPosition), Z_Construct_UEnum_Sequencer_ESequencerZoomPosition, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZoomPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZoomPosition_MetaData)) }; // 1536843372
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable auto scroll in the timeline when playing. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable auto scroll in the timeline when playing." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bAutoScrollEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled = { "bAutoScrollEnabled", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange_MetaData[] = {
		{ "Category", "CurveEditor" },
		{ "Comment", "/** Enable or disable linking the curve editor time range to the sequencer timeline's time range. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable linking the curve editor time range to the sequencer timeline's time range." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bLinkCurveEditorTimeRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange = { "bLinkCurveEditorTimeRange", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSynchronizeCurveEditorSelection_MetaData[] = {
		{ "Category", "CurveEditor" },
		{ "Comment", "/** When enabled, changing the sequencer tree selection will also select the relevant nodes in the curve editor tree if possible. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When enabled, changing the sequencer tree selection will also select the relevant nodes in the curve editor tree if possible." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSynchronizeCurveEditorSelection_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bSynchronizeCurveEditorSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSynchronizeCurveEditorSelection = { "bSynchronizeCurveEditorSelection", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSynchronizeCurveEditorSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSynchronizeCurveEditorSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSynchronizeCurveEditorSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsolateCurveEditorToSelection_MetaData[] = {
		{ "Category", "CurveEditor" },
		{ "Comment", "/** When enabled, changing the sequencer tree selection will isolate (auto-filter) the selected nodes in the curve editor. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When enabled, changing the sequencer tree selection will isolate (auto-filter) the selected nodes in the curve editor." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsolateCurveEditorToSelection_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bIsolateCurveEditorToSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsolateCurveEditorToSelection = { "bIsolateCurveEditorToSelection", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsolateCurveEditorToSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsolateCurveEditorToSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsolateCurveEditorToSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_LoopMode_MetaData[] = {
		{ "Comment", "/** The loop mode of the playback in timeline. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The loop mode of the playback in timeline." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_LoopMode = { "LoopMode", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, LoopMode), Z_Construct_UEnum_Sequencer_ESequencerLoopMode, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_LoopMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_LoopMode_MetaData)) }; // 3621150255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bResetPlayheadWhenNavigating_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable resetting the playhead when navigating in and out of subsequences. */" },
		{ "DisplayName", "Reset Playhead When Navigating" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable resetting the playhead when navigating in and out of subsequences." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bResetPlayheadWhenNavigating_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bResetPlayheadWhenNavigating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bResetPlayheadWhenNavigating = { "bResetPlayheadWhenNavigating", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bResetPlayheadWhenNavigating_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bResetPlayheadWhenNavigating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bResetPlayheadWhenNavigating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable keeping the playhead in the current playback range while scrubbing. */" },
		{ "DisplayName", "Keep Playhead in Play Range While Scrubbing" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable keeping the playhead in the current playback range while scrubbing." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bKeepCursorInPlayRangeWhileScrubbing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing = { "bKeepCursorInPlayRangeWhileScrubbing", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable keeping the playback range constrained to the section bounds. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable keeping the playback range constrained to the section bounds." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bKeepPlayRangeInSectionBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds = { "bKeepPlayRangeInSectionBounds", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZeroPadFrames_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** The number of zeros to pad the frame numbers by. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The number of zeros to pad the frame numbers by." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZeroPadFrames = { "ZeroPadFrames", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, ZeroPadFrames), nullptr, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZeroPadFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZeroPadFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_JumpFrameIncrement_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** The number of frames to jump by when jumping forward or backwards. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The number of frames to jump by when jumping forward or backwards." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_JumpFrameIncrement = { "JumpFrameIncrement", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, JumpFrameIncrement), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_JumpFrameIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_JumpFrameIncrement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowLayerBars_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable the layer bars to edit keyframes in bulk. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable the layer bars to edit keyframes in bulk." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowLayerBars_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowLayerBars = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowLayerBars = { "bShowLayerBars", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowLayerBars_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowLayerBars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowLayerBars_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowKeyBars_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable key bar connections. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable key bar connections." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowKeyBars_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowKeyBars = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowKeyBars = { "bShowKeyBars", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowKeyBars_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowKeyBars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowKeyBars_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable setting key area sections as infinite by default. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable setting key area sections as infinite by default." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bInfiniteKeyAreas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas = { "bInfiniteKeyAreas", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable displaying channel bar colors for the key bars. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable displaying channel bar colors for the key bars." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowChannelColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors = { "bShowChannelColors", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowStatusBar_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable displaying the status bar for number of items. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable displaying the status bar for number of items." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowStatusBar_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowStatusBar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowStatusBar = { "bShowStatusBar", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowStatusBar_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowStatusBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowStatusBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowTickLines_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable displaying the tick lines. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable displaying the tick lines." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowTickLines_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowTickLines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowTickLines = { "bShowTickLines", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowTickLines_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowTickLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowTickLines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSequencerToolbar_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable displaying the sequencer toolbar. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable displaying the sequencer toolbar." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSequencerToolbar_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowSequencerToolbar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSequencerToolbar = { "bShowSequencerToolbar", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSequencerToolbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSequencerToolbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSequencerToolbar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyAreaCurveExtents_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** The key area curve extents, stored per channel name */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The key area curve extents, stored per channel name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyAreaCurveExtents = { "KeyAreaCurveExtents", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, KeyAreaCurveExtents), METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyAreaCurveExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyAreaCurveExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyAreaHeightWithCurves_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** The key area height when showing curves */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The key area height when showing curves" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyAreaHeightWithCurves = { "KeyAreaHeightWithCurves", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, KeyAreaHeightWithCurves), METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyAreaHeightWithCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyAreaHeightWithCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_ReduceKeysTolerance_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** The tolerance to use when reducing keys */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The tolerance to use when reducing keys" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_ReduceKeysTolerance = { "ReduceKeysTolerance", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, ReduceKeysTolerance), METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_ReduceKeysTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_ReduceKeysTolerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDeleteKeysWhenTrimming_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Enable or disable deleting keys that fall beyond the section range when trimming. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable deleting keys that fall beyond the section range when trimming." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDeleteKeysWhenTrimming_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bDeleteKeysWhenTrimming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDeleteKeysWhenTrimming = { "bDeleteKeysWhenTrimming", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDeleteKeysWhenTrimming_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDeleteKeysWhenTrimming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDeleteKeysWhenTrimming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDisableSectionsAfterBaking_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** Whether to disable sections after baking as opposed to deleting. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Whether to disable sections after baking as opposed to deleting." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDisableSectionsAfterBaking_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bDisableSectionsAfterBaking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDisableSectionsAfterBaking = { "bDisableSectionsAfterBaking", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDisableSectionsAfterBaking_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDisableSectionsAfterBaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDisableSectionsAfterBaking_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_SectionColorTints_Inner = { "SectionColorTints", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_SectionColorTints_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Section color tints */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Section color tints" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_SectionColorTints = { "SectionColorTints", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, SectionColorTints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_SectionColorTints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_SectionColorTints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCleanPlaybackMode_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** When enabled, sequencer will playback in clean mode (game view, hide viewport UI) */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When enabled, sequencer will playback in clean mode (game view, hide viewport UI)" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCleanPlaybackMode_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bCleanPlaybackMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCleanPlaybackMode = { "bCleanPlaybackMode", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCleanPlaybackMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCleanPlaybackMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCleanPlaybackMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** When enabled, sequencer will activate 'Realtime' in viewports */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When enabled, sequencer will activate 'Realtime' in viewports" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bActivateRealtimeViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports = { "bActivateRealtimeViewports", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** When enabled, entering a sub sequence will evaluate that sub sequence in isolation, rather than from the root sequence */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When enabled, entering a sub sequence will evaluate that sub sequence in isolation, rather than from the root sequence" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bEvaluateSubSequencesInIsolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation = { "bEvaluateSubSequencesInIsolation", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** When enabled, construction scripts will be rerun on bound actors for every frame */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "When enabled, construction scripts will be rerun on bound actors for every frame" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bRerunConstructionScripts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts = { "bRerunConstructionScripts", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Enable or disable showing of debug visualization. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable showing of debug visualization." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bShowDebugVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization = { "bShowDebugVisualization", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Enable or disable showing of pre and post roll visualization. */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Enable or disable showing of pre and post roll visualization." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bVisualizePreAndPostRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll = { "bVisualizePreAndPostRoll", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to recompile the director blueprint when the sequence is evaluated (if one exists) */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Whether to recompile the director blueprint when the sequence is evaluated (if one exists)" },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bCompileDirectorOnEvaluate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate = { "bCompileDirectorOnEvaluate", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_TrajectoryPathCap_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Specifies the maximum number of keys to draw when rendering trajectories in viewports */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Specifies the maximum number of keys to draw when rendering trajectories in viewports" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_TrajectoryPathCap = { "TrajectoryPathCap", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, TrajectoryPathCap), METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_TrajectoryPathCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_TrajectoryPathCap_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** What format do we display time in to the user? */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "What format do we display time in to the user?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat = { "FrameNumberDisplayFormat", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, FrameNumberDisplayFormat), Z_Construct_UEnum_TimeManagement_EFrameNumberDisplayFormats, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat_MetaData)) }; // 161162794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_MovieRendererName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Which movie renderer to use */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Which movie renderer to use" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_MovieRendererName = { "MovieRendererName", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, MovieRendererName), METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_MovieRendererName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_MovieRendererName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoExpandNodesOnSelection_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to expand the sequencer tree view when a child element is selected (from outside of the tree view). */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "Whether to expand the sequencer tree view when a child element is selected (from outside of the tree view)." },
	};
#endif
	void Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoExpandNodesOnSelection_SetBit(void* Obj)
	{
		((USequencerSettings*)Obj)->bAutoExpandNodesOnSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoExpandNodesOnSelection = { "bAutoExpandNodesOnSelection", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequencerSettings), &Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoExpandNodesOnSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoExpandNodesOnSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoExpandNodesOnSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSettings_Statics::NewProp_TreeViewWidth_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The tree view width percentage */" },
		{ "ModuleRelativePath", "Public/SequencerSettings.h" },
		{ "ToolTip", "The tree view width percentage" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequencerSettings_Statics::NewProp_TreeViewWidth = { "TreeViewWidth", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequencerSettings, TreeViewWidth), METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::NewProp_TreeViewWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::NewProp_TreeViewWidth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequencerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_AutoChangeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_AllowEditsMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyGroupMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoSetTrackDefaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_SpawnPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCreateSpawnableCameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowRangeSlider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsSnapEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeyTimesToKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapSectionTimesToSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapKeysAndSectionsToPlayRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToMarkers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToPressedKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapPlayTimeToDraggedKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSnapCurveValueToInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSelectedNodesOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRewindOnRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLeftMouseDragDoesMarquee,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZoomPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoScrollEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bLinkCurveEditorTimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bSynchronizeCurveEditorSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bIsolateCurveEditorToSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_LoopMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bResetPlayheadWhenNavigating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepCursorInPlayRangeWhileScrubbing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bKeepPlayRangeInSectionBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_ZeroPadFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_JumpFrameIncrement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowLayerBars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowKeyBars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bInfiniteKeyAreas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowChannelColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowStatusBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowTickLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowSequencerToolbar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyAreaCurveExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_KeyAreaHeightWithCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_ReduceKeysTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDeleteKeysWhenTrimming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bDisableSectionsAfterBaking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_SectionColorTints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_SectionColorTints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCleanPlaybackMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bActivateRealtimeViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bEvaluateSubSequencesInIsolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bRerunConstructionScripts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bShowDebugVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bVisualizePreAndPostRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bCompileDirectorOnEvaluate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_TrajectoryPathCap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_FrameNumberDisplayFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_MovieRendererName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_bAutoExpandNodesOnSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequencerSettings_Statics::NewProp_TreeViewWidth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerSettings_Statics::ClassParams = {
		&USequencerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequencerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerSettings()
	{
		if (!Z_Registration_Info_UClass_USequencerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerSettings.OuterSingleton, Z_Construct_UClass_USequencerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerSettings.OuterSingleton;
	}
	template<> SEQUENCER_API UClass* StaticClass<USequencerSettings>()
	{
		return USequencerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerSettings);
	USequencerSettings::~USequencerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_Statics::EnumInfo[] = {
		{ ESequencerSpawnPosition_StaticEnum, TEXT("ESequencerSpawnPosition"), &Z_Registration_Info_UEnum_ESequencerSpawnPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 269865780U) },
		{ ESequencerZoomPosition_StaticEnum, TEXT("ESequencerZoomPosition"), &Z_Registration_Info_UEnum_ESequencerZoomPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1536843372U) },
		{ ESequencerLoopMode_StaticEnum, TEXT("ESequencerLoopMode"), &Z_Registration_Info_UEnum_ESequencerLoopMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3621150255U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerSettingsContainer, USequencerSettingsContainer::StaticClass, TEXT("USequencerSettingsContainer"), &Z_Registration_Info_UClass_USequencerSettingsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerSettingsContainer), 1850561829U) },
		{ Z_Construct_UClass_USequencerSettings, USequencerSettings::StaticClass, TEXT("USequencerSettings"), &Z_Registration_Info_UClass_USequencerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerSettings), 4184267934U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_2853085587(TEXT("/Script/Sequencer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Public_SequencerSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
