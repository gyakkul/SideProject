// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderLiveLinkSource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_ULiveLinkSubjectProperties();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_ULiveLinkSubjectProperties_NoRegister();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_NoRegister();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UTakeRecorderLiveLinkSource();
	LIVELINKSEQUENCER_API UClass* Z_Construct_UClass_UTakeRecorderLiveLinkSource_NoRegister();
	LIVELINKSEQUENCER_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectProperty();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	UPackage* Z_Construct_UPackage__Script_LiveLinkSequencer();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubjectProperty;
class UScriptStruct* FLiveLinkSubjectProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubjectProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectProperty, (UObject*)Z_Construct_UPackage__Script_LiveLinkSequencer(), TEXT("LiveLinkSubjectProperty"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectProperty.OuterSingleton;
}
template<> LIVELINKSEQUENCER_API UScriptStruct* StaticStruct<FLiveLinkSubjectProperty>()
{
	return FLiveLinkSubjectProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Subjects" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectProperty, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_SubjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Subjects" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FLiveLinkSubjectProperty*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkSubjectProperty), &Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkSequencer,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectProperty",
		sizeof(FLiveLinkSubjectProperty),
		alignof(FLiveLinkSubjectProperty),
		Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubjectProperty.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSubjectProperty.InnerSingleton;
	}
	void ULiveLinkSubjectProperties::StaticRegisterNativesULiveLinkSubjectProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSubjectProperties);
	UClass* Z_Construct_UClass_ULiveLinkSubjectProperties_NoRegister()
	{
		return ULiveLinkSubjectProperties::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSubjectProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkSequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkSubjectProperty, METADATA_PARAMS(nullptr, 0) }; // 216312137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Subjects" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSubjectProperties, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::NewProp_Properties_MetaData)) }; // 216312137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSubjectProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::ClassParams = {
		&ULiveLinkSubjectProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSubjectProperties()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkSubjectProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSubjectProperties.OuterSingleton, Z_Construct_UClass_ULiveLinkSubjectProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkSubjectProperties.OuterSingleton;
	}
	template<> LIVELINKSEQUENCER_API UClass* StaticClass<ULiveLinkSubjectProperties>()
	{
		return ULiveLinkSubjectProperties::StaticClass();
	}
	ULiveLinkSubjectProperties::ULiveLinkSubjectProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSubjectProperties);
	ULiveLinkSubjectProperties::~ULiveLinkSubjectProperties() {}
	void UTakeRecorderLiveLinkSource::StaticRegisterNativesUTakeRecorderLiveLinkSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderLiveLinkSource);
	UClass* Z_Construct_UClass_UTakeRecorderLiveLinkSource_NoRegister()
	{
		return UTakeRecorderLiveLinkSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReduceKeys_MetaData[];
#endif
		static void NewProp_bReduceKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReduceKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveSubjectSettings_MetaData[];
#endif
		static void NewProp_bSaveSubjectSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveSubjectSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSourceTimecode_MetaData[];
#endif
		static void NewProp_bUseSourceTimecode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSourceTimecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardSamplesBeforeStart_MetaData[];
#endif
		static void NewProp_bDiscardSamplesBeforeStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardSamplesBeforeStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackRecorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackRecorder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkSequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/** A recording source that records LiveLink */" },
		{ "IncludePath", "TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "Live Link" },
		{ "ToolTip", "A recording source that records LiveLink" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bReduceKeys_MetaData[] = {
		{ "Category", "Live Link Source" },
		{ "Comment", "/** Whether to perform key-reduction algorithms as part of the recording */" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
		{ "ToolTip", "Whether to perform key-reduction algorithms as part of the recording" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bReduceKeys_SetBit(void* Obj)
	{
		((UTakeRecorderLiveLinkSource*)Obj)->bReduceKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bReduceKeys = { "bReduceKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderLiveLinkSource), &Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bReduceKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bReduceKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bReduceKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Subjects" },
		{ "Comment", "/** Name of the subject to record */" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
		{ "ToolTip", "Name of the subject to record" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderLiveLinkSource, SubjectName), METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_SubjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bSaveSubjectSettings_MetaData[] = {
		{ "Category", "Subjects" },
		{ "Comment", "/** Whether we should save subject settings in the the live link section. If not, we'll create one with subject information with no settings */" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
		{ "ToolTip", "Whether we should save subject settings in the the live link section. If not, we'll create one with subject information with no settings" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bSaveSubjectSettings_SetBit(void* Obj)
	{
		((UTakeRecorderLiveLinkSource*)Obj)->bSaveSubjectSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bSaveSubjectSettings = { "bSaveSubjectSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderLiveLinkSource), &Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bSaveSubjectSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bSaveSubjectSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bSaveSubjectSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bUseSourceTimecode_MetaData[] = {
		{ "Category", "Subjects" },
		{ "Comment", "/** If true we use timecode even if not synchronized, else we use world time*/" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
		{ "ToolTip", "If true we use timecode even if not synchronized, else we use world time" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bUseSourceTimecode_SetBit(void* Obj)
	{
		((UTakeRecorderLiveLinkSource*)Obj)->bUseSourceTimecode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bUseSourceTimecode = { "bUseSourceTimecode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderLiveLinkSource), &Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bUseSourceTimecode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bUseSourceTimecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bUseSourceTimecode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bDiscardSamplesBeforeStart_MetaData[] = {
		{ "Category", "Subjects" },
		{ "Comment", "/** If true discard livelink samples with timecode that occurs before the start of recording*/" },
		{ "EditCondition", "bUseSourceTimecode" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
		{ "ToolTip", "If true discard livelink samples with timecode that occurs before the start of recording" },
	};
#endif
	void Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bDiscardSamplesBeforeStart_SetBit(void* Obj)
	{
		((UTakeRecorderLiveLinkSource*)Obj)->bDiscardSamplesBeforeStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bDiscardSamplesBeforeStart = { "bDiscardSamplesBeforeStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTakeRecorderLiveLinkSource), &Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bDiscardSamplesBeforeStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bDiscardSamplesBeforeStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bDiscardSamplesBeforeStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_TrackRecorder_MetaData[] = {
		{ "Comment", "/**\n\x09* The track recorder we created.\n\x09*/" },
		{ "ModuleRelativePath", "Private/TakeRecorderSource/TakeRecorderLiveLinkSource.h" },
		{ "ToolTip", "The track recorder we created." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_TrackRecorder = { "TrackRecorder", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderLiveLinkSource, TrackRecorder), Z_Construct_UClass_UMovieSceneLiveLinkTrackRecorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_TrackRecorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_TrackRecorder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bReduceKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bSaveSubjectSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bUseSourceTimecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_bDiscardSamplesBeforeStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::NewProp_TrackRecorder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderLiveLinkSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::ClassParams = {
		&UTakeRecorderLiveLinkSource::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderLiveLinkSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderLiveLinkSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderLiveLinkSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderLiveLinkSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderLiveLinkSource.OuterSingleton;
	}
	template<> LIVELINKSEQUENCER_API UClass* StaticClass<UTakeRecorderLiveLinkSource>()
	{
		return UTakeRecorderLiveLinkSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderLiveLinkSource);
	UTakeRecorderLiveLinkSource::~UTakeRecorderLiveLinkSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkSubjectProperty::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectProperty_Statics::NewStructOps, TEXT("LiveLinkSubjectProperty"), &Z_Registration_Info_UScriptStruct_LiveLinkSubjectProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubjectProperty), 216312137U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkSubjectProperties, ULiveLinkSubjectProperties::StaticClass, TEXT("ULiveLinkSubjectProperties"), &Z_Registration_Info_UClass_ULiveLinkSubjectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSubjectProperties), 3492501189U) },
		{ Z_Construct_UClass_UTakeRecorderLiveLinkSource, UTakeRecorderLiveLinkSource::StaticClass, TEXT("UTakeRecorderLiveLinkSource"), &Z_Registration_Info_UClass_UTakeRecorderLiveLinkSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderLiveLinkSource), 3852292017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_1690865348(TEXT("/Script/LiveLinkSequencer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkSequencer_Private_TakeRecorderSource_TakeRecorderLiveLinkSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
