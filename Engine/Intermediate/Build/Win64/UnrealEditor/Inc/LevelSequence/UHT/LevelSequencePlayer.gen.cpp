// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequenceID.h"
#include "MovieSceneSequencePlaybackSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequencePlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UFunction* Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequenceID();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics
	{
		struct _Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms
		{
			UCameraComponent* CameraComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::NewProp_CameraComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LevelSequence, nullptr, "OnLevelSequencePlayerCameraCutEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms), Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLevelSequencePlayerCameraCutEvent_DelegateWrapper(const FMulticastScriptDelegate& OnLevelSequencePlayerCameraCutEvent, UCameraComponent* CameraComponent)
{
	struct _Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms
	{
		UCameraComponent* CameraComponent;
	};
	_Script_LevelSequence_eventOnLevelSequencePlayerCameraCutEvent_Parms Parms;
	Parms.CameraComponent=CameraComponent;
	OnLevelSequencePlayerCameraCutEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceSnapshotSettings;
class UScriptStruct* FLevelSequenceSnapshotSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceSnapshotSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceSnapshotSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceSnapshotSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceSnapshotSettings.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceSnapshotSettings>()
{
	return FLevelSequenceSnapshotSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceSnapshotSettings>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceSnapshotSettings",
		sizeof(FLevelSequenceSnapshotSettings),
		alignof(FLevelSequenceSnapshotSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceSnapshotSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceSnapshotSettings.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceSnapshotSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequencePlayerSnapshot;
class UScriptStruct* FLevelSequencePlayerSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequencePlayerSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequencePlayerSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequencePlayerSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequencePlayerSnapshot.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequencePlayerSnapshot>()
{
	return FLevelSequencePlayerSnapshot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RootName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentShotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShotLocalTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentShotLocalTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShotSourceTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentShotSourceTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTimecode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SourceTimecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveShot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MasterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MasterTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Frame snapshot information for a level sequence\n */" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Frame snapshot information for a level sequence" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequencePlayerSnapshot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_RootName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_RootName = { "RootName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, RootName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_RootName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_RootName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_RootTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_RootTime = { "RootTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, RootTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_RootTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_RootTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime = { "SourceTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, SourceTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName = { "CurrentShotName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime = { "CurrentShotLocalTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotLocalTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime = { "CurrentShotSourceTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CurrentShotSourceTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode = { "SourceTimecode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, SourceTimecode), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ActiveShot_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ActiveShot = { "ActiveShot", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, ActiveShot), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ActiveShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ActiveShot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID = { "ShotID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, ShotID), Z_Construct_UScriptStruct_FMovieSceneSequenceID, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID_MetaData)) }; // 3213602762
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName = { "MasterName", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, MasterName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime = { "MasterTime", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePlayerSnapshot, MasterTime_DEPRECATED), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_RootName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_RootTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotLocalTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CurrentShotSourceTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_SourceTimecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ActiveShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_ShotID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewProp_MasterTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequencePlayerSnapshot",
		sizeof(FLevelSequencePlayerSnapshot),
		alignof(FLevelSequencePlayerSnapshot),
		Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequencePlayerSnapshot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequencePlayerSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequencePlayerSnapshot.InnerSingleton;
	}
	DEFINE_FUNCTION(ULevelSequencePlayer::execGetActiveCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetActiveCameraComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSequencePlayer::execCreateLevelSequencePlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ULevelSequence,Z_Param_LevelSequence);
		P_GET_STRUCT(FMovieSceneSequencePlaybackSettings,Z_Param_Settings);
		P_GET_OBJECT_REF(ALevelSequenceActor,Z_Param_Out_OutActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequencePlayer**)Z_Param__Result=ULevelSequencePlayer::CreateLevelSequencePlayer(Z_Param_WorldContextObject,Z_Param_LevelSequence,Z_Param_Settings,Z_Param_Out_OutActor);
		P_NATIVE_END;
	}
	void ULevelSequencePlayer::StaticRegisterNativesULevelSequencePlayer()
	{
		UClass* Class = ULevelSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLevelSequencePlayer", &ULevelSequencePlayer::execCreateLevelSequencePlayer },
			{ "GetActiveCameraComponent", &ULevelSequencePlayer::execGetActiveCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics
	{
		struct LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms
		{
			UObject* WorldContextObject;
			ULevelSequence* LevelSequence;
			FMovieSceneSequencePlaybackSettings Settings;
			ALevelSequenceActor* OutActor;
			ULevelSequencePlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, Settings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(nullptr, 0) }; // 2544210146
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, OutActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_OutActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/**\n\x09 * Create a new level sequence player.\n\x09 *\n\x09 * @param WorldContextObject Context object from which to retrieve a UWorld.\n\x09 * @param LevelSequence The level sequence to play.\n\x09 * @param Settings The desired playback settings\n\x09 * @param OutActor The level sequence actor created to play this sequence.\n\x09 */" },
		{ "DynamicOutputParam", "OutActor" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Create a new level sequence player.\n\n@param WorldContextObject Context object from which to retrieve a UWorld.\n@param LevelSequence The level sequence to play.\n@param Settings The desired playback settings\n@param OutActor The level sequence actor created to play this sequence." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlayer, nullptr, "CreateLevelSequencePlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::LevelSequencePlayer_eventCreateLevelSequencePlayer_Parms), Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics
	{
		struct LevelSequencePlayer_eventGetActiveCameraComponent_Parms
		{
			UCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequencePlayer_eventGetActiveCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Get the active camera cut camera */" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Get the active camera cut camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequencePlayer, nullptr, "GetActiveCameraComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::LevelSequencePlayer_eventGetActiveCameraComponent_Parms), Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequencePlayer);
	UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister()
	{
		return ULevelSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraCut_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraCut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequencePlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequencePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequencePlayer_CreateLevelSequencePlayer, "CreateLevelSequencePlayer" }, // 1197004180
		{ &Z_Construct_UFunction_ULevelSequencePlayer_GetActiveCameraComponent, "GetActiveCameraComponent" }, // 2040734932
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * ULevelSequencePlayer is used to actually \"play\" an level sequence asset at runtime.\n *\n * This class keeps track of playback state and provides functions for manipulating\n * an level sequence while its playing.\n */" },
		{ "IncludePath", "LevelSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "ULevelSequencePlayer is used to actually \"play\" an level sequence asset at runtime.\n\nThis class keeps track of playback state and provides functions for manipulating\nan level sequence while its playing." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut_MetaData[] = {
		{ "Category", "Sequencer|Player" },
		{ "Comment", "/** Event triggered when there is a camera cut */" },
		{ "ModuleRelativePath", "Public/LevelSequencePlayer.h" },
		{ "ToolTip", "Event triggered when there is a camera cut" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut = { "OnCameraCut", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequencePlayer, OnCameraCut), Z_Construct_UDelegateFunction_LevelSequence_OnLevelSequencePlayerCameraCutEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut_MetaData)) }; // 1764199777
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequencePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequencePlayer_Statics::NewProp_OnCameraCut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequencePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequencePlayer_Statics::ClassParams = {
		&ULevelSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequencePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequencePlayer()
	{
		if (!Z_Registration_Info_UClass_ULevelSequencePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequencePlayer.OuterSingleton, Z_Construct_UClass_ULevelSequencePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequencePlayer.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequencePlayer>()
	{
		return ULevelSequencePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequencePlayer);
	ULevelSequencePlayer::~ULevelSequencePlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_Statics::ScriptStructInfo[] = {
		{ FLevelSequenceSnapshotSettings::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceSnapshotSettings_Statics::NewStructOps, TEXT("LevelSequenceSnapshotSettings"), &Z_Registration_Info_UScriptStruct_LevelSequenceSnapshotSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceSnapshotSettings), 2178351415U) },
		{ FLevelSequencePlayerSnapshot::StaticStruct, Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot_Statics::NewStructOps, TEXT("LevelSequencePlayerSnapshot"), &Z_Registration_Info_UScriptStruct_LevelSequencePlayerSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequencePlayerSnapshot), 1129801625U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequencePlayer, ULevelSequencePlayer::StaticClass, TEXT("ULevelSequencePlayer"), &Z_Registration_Info_UClass_ULevelSequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequencePlayer), 2651567043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_1239909699(TEXT("/Script/LevelSequence"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequencePlayer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
