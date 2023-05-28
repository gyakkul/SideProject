// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequenceRecorderSettings.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimationRecordingSettings.h"
#include "SequenceRecorderActorFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceRecorderSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationRecordingSettings();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderSettings();
	SEQUENCERECORDER_API UClass* Z_Construct_UClass_USequenceRecorderSettings_NoRegister();
	SEQUENCERECORDER_API UEnum* Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FPropertiesToRecordForClass();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceRecorderActorFilter();
	SEQUENCERECORDER_API UScriptStruct* Z_Construct_UScriptStruct_FSettingsForActorClass();
	UPackage* Z_Construct_UPackage__Script_SequenceRecorder();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAudioRecordingMode;
	static UEnum* EAudioRecordingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAudioRecordingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAudioRecordingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode, (UObject*)Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("EAudioRecordingMode"));
		}
		return Z_Registration_Info_UEnum_EAudioRecordingMode.OuterSingleton;
	}
	template<> SEQUENCERECORDER_API UEnum* StaticEnum<EAudioRecordingMode>()
	{
		return EAudioRecordingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Statics::Enumerators[] = {
		{ "EAudioRecordingMode::None", (int64)EAudioRecordingMode::None },
		{ "EAudioRecordingMode::AudioTrack", (int64)EAudioRecordingMode::AudioTrack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Statics::Enum_MetaDataParams[] = {
		{ "AudioTrack.DisplayName", "Into Audio Track" },
		{ "AudioTrack.Name", "EAudioRecordingMode::AudioTrack" },
		{ "Comment", "/** Enum denoting if (and how) to record audio */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "None.DisplayName", "Don't Record Audio" },
		{ "None.Name", "EAudioRecordingMode::None" },
		{ "ToolTip", "Enum denoting if (and how) to record audio" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		"EAudioRecordingMode",
		"EAudioRecordingMode",
		Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode()
	{
		if (!Z_Registration_Info_UEnum_EAudioRecordingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAudioRecordingMode.InnerSingleton, Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAudioRecordingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertiesToRecordForActorClass;
class UScriptStruct* FPropertiesToRecordForActorClass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertiesToRecordForActorClass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertiesToRecordForActorClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass, (UObject*)Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("PropertiesToRecordForActorClass"));
	}
	return Z_Registration_Info_UScriptStruct_PropertiesToRecordForActorClass.OuterSingleton;
}
template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<FPropertiesToRecordForActorClass>()
{
	return FPropertiesToRecordForActorClass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertiesToRecordForActorClass>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** The class of the actor we can record */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The class of the actor we can record" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertiesToRecordForActorClass, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** List of properties we want to record for this class */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "List of properties we want to record for this class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertiesToRecordForActorClass, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewProp_Properties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		&NewStructOps,
		"PropertiesToRecordForActorClass",
		sizeof(FPropertiesToRecordForActorClass),
		alignof(FPropertiesToRecordForActorClass),
		Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertiesToRecordForActorClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertiesToRecordForActorClass.InnerSingleton, Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertiesToRecordForActorClass.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertiesToRecordForClass;
class UScriptStruct* FPropertiesToRecordForClass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertiesToRecordForClass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertiesToRecordForClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertiesToRecordForClass, (UObject*)Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("PropertiesToRecordForClass"));
	}
	return Z_Registration_Info_UScriptStruct_PropertiesToRecordForClass.OuterSingleton;
}
template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<FPropertiesToRecordForClass>()
{
	return FPropertiesToRecordForClass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertiesToRecordForClass>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** The class of the object we can record */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The class of the object we can record" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertiesToRecordForClass, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** List of properties we want to record for this class */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "List of properties we want to record for this class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertiesToRecordForClass, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewProp_Properties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		&NewStructOps,
		"PropertiesToRecordForClass",
		sizeof(FPropertiesToRecordForClass),
		alignof(FPropertiesToRecordForClass),
		Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertiesToRecordForClass()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertiesToRecordForClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertiesToRecordForClass.InnerSingleton, Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertiesToRecordForClass.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SettingsForActorClass;
class UScriptStruct* FSettingsForActorClass::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SettingsForActorClass.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SettingsForActorClass.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSettingsForActorClass, (UObject*)Z_Construct_UPackage__Script_SequenceRecorder(), TEXT("SettingsForActorClass"));
	}
	return Z_Registration_Info_UScriptStruct_SettingsForActorClass.OuterSingleton;
}
template<> SEQUENCERECORDER_API UScriptStruct* StaticStruct<FSettingsForActorClass>()
{
	return FSettingsForActorClass::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSettingsForActorClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordToPossessable_MetaData[];
#endif
		static void NewProp_bRecordToPossessable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordToPossessable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSettingsForActorClass>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** The class of the actor we want to record */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The class of the actor we want to record" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014040000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSettingsForActorClass, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Whether to record to 'possessable' (i.e. level-owned) or 'spawnable' (i.e. sequence-owned) actors. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to record to 'possessable' (i.e. level-owned) or 'spawnable' (i.e. sequence-owned) actors." },
	};
#endif
	void Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable_SetBit(void* Obj)
	{
		((FSettingsForActorClass*)Obj)->bRecordToPossessable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable = { "bRecordToPossessable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSettingsForActorClass), &Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewProp_bRecordToPossessable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
		nullptr,
		&NewStructOps,
		"SettingsForActorClass",
		sizeof(FSettingsForActorClass),
		alignof(FSettingsForActorClass),
		Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSettingsForActorClass()
	{
		if (!Z_Registration_Info_UScriptStruct_SettingsForActorClass.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SettingsForActorClass.InnerSingleton, Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SettingsForActorClass.InnerSingleton;
	}
	void USequenceRecorderSettings::StaticRegisterNativesUSequenceRecorderSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceRecorderSettings);
	UClass* Z_Construct_UClass_USequenceRecorderSettings_NoRegister()
	{
		return USequenceRecorderSettings::StaticClass();
	}
	struct Z_Construct_UClass_USequenceRecorderSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateLevelSequence_MetaData[];
#endif
		static void NewProp_bCreateLevelSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateLevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImmersiveMode_MetaData[];
#endif
		static void NewProp_bImmersiveMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmersiveMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordingDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecordingDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowLooping_MetaData[];
#endif
		static void NewProp_bAllowLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTimeDilation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSubDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationSubDirectory;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RecordAudio_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordAudio_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RecordAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioGain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AudioGain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData[];
#endif
		static void NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplitAudioChannelsIntoSeparateTracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceRecordedAudio_MetaData[];
#endif
		static void NewProp_bReplaceRecordedAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceRecordedAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioTrackName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_AudioTrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioSubDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AudioSubDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordNearbySpawnedActors_MetaData[];
#endif
		static void NewProp_bRecordNearbySpawnedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordNearbySpawnedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearbyActorRecordingProximity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearbyActorRecordingProximity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordWorldSettingsActor_MetaData[];
#endif
		static void NewProp_bRecordWorldSettingsActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordWorldSettingsActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReduceKeys_MetaData[];
#endif
		static void NewProp_bReduceKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReduceKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoSaveAsset_MetaData[];
#endif
		static void NewProp_bAutoSaveAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoSaveAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorFilter;
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_LevelSequenceActorsToTrigger_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActorsToTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelSequenceActorsToTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAnimationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultAnimationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordSequencerSpawnedActors_MetaData[];
#endif
		static void NewProp_bRecordSequencerSpawnedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordSequencerSpawnedActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassesAndPropertiesToRecord_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassesAndPropertiesToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassesAndPropertiesToRecord;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorsAndPropertiesToRecord_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsAndPropertiesToRecord_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsAndPropertiesToRecord;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerActorSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerActorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerActorSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceRecorderSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SequenceRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SequenceRecorderSettings.h" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Whether to create a level sequence when recording. Actors and animations will be inserted into this sequence */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to create a level sequence when recording. Actors and animations will be inserted into this sequence" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bCreateLevelSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence = { "bCreateLevelSequence", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Whether to maximize the viewport when recording */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to maximize the viewport when recording" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bImmersiveMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode = { "bImmersiveMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_SequenceLength_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The length of the recorded sequence */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The length of the recorded sequence" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_SequenceLength = { "SequenceLength", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, SequenceLength), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_SequenceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_SequenceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordingDelay_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ClampMax", "9.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Delay that we will use before starting recording */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Delay that we will use before starting recording" },
		{ "UIMax", "9.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordingDelay = { "RecordingDelay", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, RecordingDelay), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordingDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordingDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Allow the recording to be looped. Subsequence recorded assets will be saved to unique filenames. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Allow the recording to be looped. Subsequence recorded assets will be saved to unique filenames." },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bAllowLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping = { "bAllowLooping", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_GlobalTimeDilation_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Global Time dilation to set the world to when recording starts. Useful for playing back a scene in slow motion. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Global Time dilation to set the world to when recording starts. Useful for playing back a scene in slow motion." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_GlobalTimeDilation = { "GlobalTimeDilation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, GlobalTimeDilation), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_GlobalTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_GlobalTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Should Sequence Recorder ignore global time dilation? If true recorded animations will only be as long as they would have been without global time dilation. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Should Sequence Recorder ignore global time dilation? If true recorded animations will only be as long as they would have been without global time dilation." },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AnimationSubDirectory_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** The name of the subdirectory animations will be placed in. Leave this empty to place into the same directory as the sequence base path */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The name of the subdirectory animations will be placed in. Leave this empty to place into the same directory as the sequence base path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AnimationSubDirectory = { "AnimationSubDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, AnimationSubDirectory), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AnimationSubDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AnimationSubDirectory_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "Comment", "/** Whether to record audio alongside animation or not */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to record audio alongside animation or not" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio = { "RecordAudio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, RecordAudio), Z_Construct_UEnum_SequenceRecorder_EAudioRecordingMode, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio_MetaData)) }; // 4000765849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioGain_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Gain in decibels to apply to recorded audio */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Gain in decibels to apply to recorded audio" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioGain = { "AudioGain", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, AudioGain), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioGain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "Comment", "/** Whether or not to split mic channels into separate audio tracks. If not true, a max of 2 input channels is supported. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether or not to split mic channels into separate audio tracks. If not true, a max of 2 input channels is supported." },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bSplitAudioChannelsIntoSeparateTracks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks = { "bSplitAudioChannelsIntoSeparateTracks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "Comment", "/** Replace existing recorded audio with any newly recorded audio */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Replace existing recorded audio with any newly recorded audio" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bReplaceRecordedAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio = { "bReplaceRecordedAudio", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioTrackName_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "Comment", "/** Name of the recorded audio track name */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Name of the recorded audio track name" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioTrackName = { "AudioTrackName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, AudioTrackName), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioTrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioTrackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioSubDirectory_MetaData[] = {
		{ "Category", "Audio Recording" },
		{ "Comment", "/** The name of the subdirectory audio will be placed in. Leave this empty to place into the same directory as the sequence base path */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The name of the subdirectory audio will be placed in. Leave this empty to place into the same directory as the sequence base path" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioSubDirectory = { "AudioSubDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, AudioSubDirectory), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioSubDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioSubDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Whether to record nearby spawned actors. If an actor matches a class in the ActorFilter, this state will be bypassed. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to record nearby spawned actors. If an actor matches a class in the ActorFilter, this state will be bypassed." },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bRecordNearbySpawnedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors = { "bRecordNearbySpawnedActors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_NearbyActorRecordingProximity_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Proximity to currently recorded actors to record newly spawned actors. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Proximity to currently recorded actors to record newly spawned actors." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_NearbyActorRecordingProximity = { "NearbyActorRecordingProximity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, NearbyActorRecordingProximity), METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_NearbyActorRecordingProximity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_NearbyActorRecordingProximity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Whether to record the world settings actor in the sequence (some games use this to attach world SFX) */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to record the world settings actor in the sequence (some games use this to attach world SFX)" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bRecordWorldSettingsActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor = { "bRecordWorldSettingsActor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Whether to remove keyframes within a tolerance from the recorded tracks */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to remove keyframes within a tolerance from the recorded tracks" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bReduceKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys = { "bReduceKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Whether to auto-save asset when recording is completed. Defaults to false */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to auto-save asset when recording is completed. Defaults to false" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bAutoSaveAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset = { "bAutoSaveAsset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorFilter_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Filter to check spawned actors against to see if they should be recorded */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Filter to check spawned actors against to see if they should be recorded" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorFilter = { "ActorFilter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, ActorFilter), Z_Construct_UScriptStruct_FSequenceRecorderActorFilter, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorFilter_MetaData)) }; // 653848120
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger_Inner = { "LevelSequenceActorsToTrigger", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Sequence actors to trigger playback on when recording starts (e.g. for recording synchronized sequences) */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Sequence actors to trigger playback on when recording starts (e.g. for recording synchronized sequences)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger = { "LevelSequenceActorsToTrigger", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, LevelSequenceActorsToTrigger), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_DefaultAnimationSettings_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Default animation settings which are used to initialize all new actor recording's animation settings */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Default animation settings which are used to initialize all new actor recording's animation settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_DefaultAnimationSettings = { "DefaultAnimationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, DefaultAnimationSettings), Z_Construct_UScriptStruct_FAnimationRecordingSettings, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_DefaultAnimationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_DefaultAnimationSettings_MetaData)) }; // 776846529
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Whether to record actors that are spawned by sequencer itself (this is usually disabled as results can be unexpected) */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Whether to record actors that are spawned by sequencer itself (this is usually disabled as results can be unexpected)" },
	};
#endif
	void Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors_SetBit(void* Obj)
	{
		((USequenceRecorderSettings*)Obj)->bRecordSequencerSpawnedActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors = { "bRecordSequencerSpawnedActors", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USequenceRecorderSettings), &Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord_Inner = { "ClassesAndPropertiesToRecord", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertiesToRecordForClass, METADATA_PARAMS(nullptr, 0) }; // 2336783719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** The properties to record for specified classes. Component classes specified here will be recorded. If an actor does not contain one of these classes it will be ignored. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The properties to record for specified classes. Component classes specified here will be recorded. If an actor does not contain one of these classes it will be ignored." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord = { "ClassesAndPropertiesToRecord", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, ClassesAndPropertiesToRecord), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord_MetaData)) }; // 2336783719
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord_Inner = { "ActorsAndPropertiesToRecord", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass, METADATA_PARAMS(nullptr, 0) }; // 2255348263
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** The properties to record for specified actors. Actor classes specified here will be recorded. If an actor does not contain one of these properties it will be ignored. */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "The properties to record for specified actors. Actor classes specified here will be recorded. If an actor does not contain one of these properties it will be ignored." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord = { "ActorsAndPropertiesToRecord", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, ActorsAndPropertiesToRecord), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord_MetaData)) }; // 2255348263
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings_Inner = { "PerActorSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSettingsForActorClass, METADATA_PARAMS(nullptr, 0) }; // 4100743349
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings_MetaData[] = {
		{ "Category", "Sequence Recording" },
		{ "Comment", "/** Settings applied to actors of a specified class */" },
		{ "ModuleRelativePath", "Public/SequenceRecorderSettings.h" },
		{ "ToolTip", "Settings applied to actors of a specified class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings = { "PerActorSettings", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USequenceRecorderSettings, PerActorSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings_MetaData)) }; // 4100743349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USequenceRecorderSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bCreateLevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bImmersiveMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_SequenceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordingDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAllowLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_GlobalTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bIgnoreTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AnimationSubDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_RecordAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioGain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bSplitAudioChannelsIntoSeparateTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReplaceRecordedAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioTrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_AudioSubDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordNearbySpawnedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_NearbyActorRecordingProximity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordWorldSettingsActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bReduceKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bAutoSaveAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_LevelSequenceActorsToTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_DefaultAnimationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_bRecordSequencerSpawnedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ClassesAndPropertiesToRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_ActorsAndPropertiesToRecord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USequenceRecorderSettings_Statics::NewProp_PerActorSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceRecorderSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceRecorderSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceRecorderSettings_Statics::ClassParams = {
		&USequenceRecorderSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USequenceRecorderSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USequenceRecorderSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceRecorderSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceRecorderSettings()
	{
		if (!Z_Registration_Info_UClass_USequenceRecorderSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceRecorderSettings.OuterSingleton, Z_Construct_UClass_USequenceRecorderSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequenceRecorderSettings.OuterSingleton;
	}
	template<> SEQUENCERECORDER_API UClass* StaticClass<USequenceRecorderSettings>()
	{
		return USequenceRecorderSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceRecorderSettings);
	USequenceRecorderSettings::~USequenceRecorderSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_Statics::EnumInfo[] = {
		{ EAudioRecordingMode_StaticEnum, TEXT("EAudioRecordingMode"), &Z_Registration_Info_UEnum_EAudioRecordingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4000765849U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_Statics::ScriptStructInfo[] = {
		{ FPropertiesToRecordForActorClass::StaticStruct, Z_Construct_UScriptStruct_FPropertiesToRecordForActorClass_Statics::NewStructOps, TEXT("PropertiesToRecordForActorClass"), &Z_Registration_Info_UScriptStruct_PropertiesToRecordForActorClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertiesToRecordForActorClass), 2255348263U) },
		{ FPropertiesToRecordForClass::StaticStruct, Z_Construct_UScriptStruct_FPropertiesToRecordForClass_Statics::NewStructOps, TEXT("PropertiesToRecordForClass"), &Z_Registration_Info_UScriptStruct_PropertiesToRecordForClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertiesToRecordForClass), 2336783719U) },
		{ FSettingsForActorClass::StaticStruct, Z_Construct_UScriptStruct_FSettingsForActorClass_Statics::NewStructOps, TEXT("SettingsForActorClass"), &Z_Registration_Info_UScriptStruct_SettingsForActorClass, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSettingsForActorClass), 4100743349U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequenceRecorderSettings, USequenceRecorderSettings::StaticClass, TEXT("USequenceRecorderSettings"), &Z_Registration_Info_UClass_USequenceRecorderSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceRecorderSettings), 3440550880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_2850584387(TEXT("/Script/SequenceRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SequenceRecorder_Public_SequenceRecorderSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
