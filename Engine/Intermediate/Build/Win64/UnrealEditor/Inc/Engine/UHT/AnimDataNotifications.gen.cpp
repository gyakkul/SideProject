// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/AnimDataNotifications.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/AttributeIdentifier.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/CurveIdentifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimDataNotifications() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModelNotifiesExtensions();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimDataModelNotifyType();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationAttributeIdentifier();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveIdentifier();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationTrackAddedPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationTrackPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimDataModelNotifPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAttributePayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBracketPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveFlagsChangedPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurvePayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveRenamedPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveScaledPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEmptyPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRateChangedPayload();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceLengthChangedPayload();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimDataModelNotifyType;
	static UEnum* EAnimDataModelNotifyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimDataModelNotifyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimDataModelNotifyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimDataModelNotifyType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimDataModelNotifyType"));
		}
		return Z_Registration_Info_UEnum_EAnimDataModelNotifyType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimDataModelNotifyType>()
	{
		return EAnimDataModelNotifyType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimDataModelNotifyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimDataModelNotifyType_Statics::Enumerators[] = {
		{ "EAnimDataModelNotifyType::BracketOpened", (int64)EAnimDataModelNotifyType::BracketOpened },
		{ "EAnimDataModelNotifyType::BracketClosed", (int64)EAnimDataModelNotifyType::BracketClosed },
		{ "EAnimDataModelNotifyType::TrackAdded", (int64)EAnimDataModelNotifyType::TrackAdded },
		{ "EAnimDataModelNotifyType::TrackChanged", (int64)EAnimDataModelNotifyType::TrackChanged },
		{ "EAnimDataModelNotifyType::TrackRemoved", (int64)EAnimDataModelNotifyType::TrackRemoved },
		{ "EAnimDataModelNotifyType::SequenceLengthChanged", (int64)EAnimDataModelNotifyType::SequenceLengthChanged },
		{ "EAnimDataModelNotifyType::FrameRateChanged", (int64)EAnimDataModelNotifyType::FrameRateChanged },
		{ "EAnimDataModelNotifyType::CurveAdded", (int64)EAnimDataModelNotifyType::CurveAdded },
		{ "EAnimDataModelNotifyType::CurveChanged", (int64)EAnimDataModelNotifyType::CurveChanged },
		{ "EAnimDataModelNotifyType::CurveRemoved", (int64)EAnimDataModelNotifyType::CurveRemoved },
		{ "EAnimDataModelNotifyType::CurveFlagsChanged", (int64)EAnimDataModelNotifyType::CurveFlagsChanged },
		{ "EAnimDataModelNotifyType::CurveRenamed", (int64)EAnimDataModelNotifyType::CurveRenamed },
		{ "EAnimDataModelNotifyType::CurveScaled", (int64)EAnimDataModelNotifyType::CurveScaled },
		{ "EAnimDataModelNotifyType::CurveColorChanged", (int64)EAnimDataModelNotifyType::CurveColorChanged },
		{ "EAnimDataModelNotifyType::AttributeAdded", (int64)EAnimDataModelNotifyType::AttributeAdded },
		{ "EAnimDataModelNotifyType::AttributeRemoved", (int64)EAnimDataModelNotifyType::AttributeRemoved },
		{ "EAnimDataModelNotifyType::AttributeChanged", (int64)EAnimDataModelNotifyType::AttributeChanged },
		{ "EAnimDataModelNotifyType::Populated", (int64)EAnimDataModelNotifyType::Populated },
		{ "EAnimDataModelNotifyType::Reset", (int64)EAnimDataModelNotifyType::Reset },
		{ "EAnimDataModelNotifyType::Invalid", (int64)EAnimDataModelNotifyType::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimDataModelNotifyType_Statics::Enum_MetaDataParams[] = {
		{ "AttributeAdded.Comment", "/** Indicates a new attribute has been added. Type of payload: FAttributeAddedPayload */" },
		{ "AttributeAdded.Name", "EAnimDataModelNotifyType::AttributeAdded" },
		{ "AttributeAdded.ToolTip", "Indicates a new attribute has been added. Type of payload: FAttributeAddedPayload" },
		{ "AttributeChanged.Comment", "/** Indicates an attribute has been changed. Type of payload: FAttributeChangedPayload */" },
		{ "AttributeChanged.Name", "EAnimDataModelNotifyType::AttributeChanged" },
		{ "AttributeChanged.ToolTip", "Indicates an attribute has been changed. Type of payload: FAttributeChangedPayload" },
		{ "AttributeRemoved.Comment", "/** Indicates a new attribute has been removed. Type of payload: FAttributeRemovedPayload */" },
		{ "AttributeRemoved.Name", "EAnimDataModelNotifyType::AttributeRemoved" },
		{ "AttributeRemoved.ToolTip", "Indicates a new attribute has been removed. Type of payload: FAttributeRemovedPayload" },
		{ "BlueprintType", "true" },
		{ "BracketClosed.Comment", "/** Indicates a bracket has been closed. Type of payload: FEmptyPayload */" },
		{ "BracketClosed.Name", "EAnimDataModelNotifyType::BracketClosed" },
		{ "BracketClosed.ToolTip", "Indicates a bracket has been closed. Type of payload: FEmptyPayload" },
		{ "BracketOpened.Comment", "/** Indicates a bracket has been opened. Type of payload: FBracketPayload */" },
		{ "BracketOpened.Name", "EAnimDataModelNotifyType::BracketOpened" },
		{ "BracketOpened.ToolTip", "Indicates a bracket has been opened. Type of payload: FBracketPayload" },
		{ "CurveAdded.Comment", "/** Indicates a new curve has been added. Type of payload: FCurveAddedPayload */" },
		{ "CurveAdded.Name", "EAnimDataModelNotifyType::CurveAdded" },
		{ "CurveAdded.ToolTip", "Indicates a new curve has been added. Type of payload: FCurveAddedPayload" },
		{ "CurveChanged.Comment", "/** Indicates a curve its data has been changed. Type of payload: FCurveChangedPayload */" },
		{ "CurveChanged.Name", "EAnimDataModelNotifyType::CurveChanged" },
		{ "CurveChanged.ToolTip", "Indicates a curve its data has been changed. Type of payload: FCurveChangedPayload" },
		{ "CurveColorChanged.Comment", "/** Indicates a curve its color has changed. Type of payload: FCurveChangedPayload */" },
		{ "CurveColorChanged.Name", "EAnimDataModelNotifyType::CurveColorChanged" },
		{ "CurveColorChanged.ToolTip", "Indicates a curve its color has changed. Type of payload: FCurveChangedPayload" },
		{ "CurveFlagsChanged.Comment", "/** Indicates a curve its flags have changed. Type of payload: FCurveFlagsChangedPayload */" },
		{ "CurveFlagsChanged.Name", "EAnimDataModelNotifyType::CurveFlagsChanged" },
		{ "CurveFlagsChanged.ToolTip", "Indicates a curve its flags have changed. Type of payload: FCurveFlagsChangedPayload" },
		{ "CurveRemoved.Comment", "/** Indicates a curve has been removed. Type of payload: FCurveRemovedPayload */" },
		{ "CurveRemoved.Name", "EAnimDataModelNotifyType::CurveRemoved" },
		{ "CurveRemoved.ToolTip", "Indicates a curve has been removed. Type of payload: FCurveRemovedPayload" },
		{ "CurveRenamed.Comment", "/** Indicates a curve has been renamed. Type of payload: FCurveRenamedPayload */" },
		{ "CurveRenamed.Name", "EAnimDataModelNotifyType::CurveRenamed" },
		{ "CurveRenamed.ToolTip", "Indicates a curve has been renamed. Type of payload: FCurveRenamedPayload" },
		{ "CurveScaled.Comment", "/** Indicates a curve has been scaled. Type of payload: FCurveScaledPayload */" },
		{ "CurveScaled.Name", "EAnimDataModelNotifyType::CurveScaled" },
		{ "CurveScaled.ToolTip", "Indicates a curve has been scaled. Type of payload: FCurveScaledPayload" },
		{ "FrameRateChanged.Comment", "/** Indicates the sampling rate of the animated data has changed. Type of payload: FFrameRateChangedPayload */" },
		{ "FrameRateChanged.Name", "EAnimDataModelNotifyType::FrameRateChanged" },
		{ "FrameRateChanged.ToolTip", "Indicates the sampling rate of the animated data has changed. Type of payload: FFrameRateChangedPayload" },
		{ "Invalid.Name", "EAnimDataModelNotifyType::Invalid" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "Populated.Comment", "/** Indicates the data model has been populated from the source UAnimSequence. Type of payload: FEmptyPayload */" },
		{ "Populated.Name", "EAnimDataModelNotifyType::Populated" },
		{ "Populated.ToolTip", "Indicates the data model has been populated from the source UAnimSequence. Type of payload: FEmptyPayload" },
		{ "Reset.Comment", "/** Indicates all data stored on the model has been reset. Type of payload: FEmptyPayload */" },
		{ "Reset.Name", "EAnimDataModelNotifyType::Reset" },
		{ "Reset.ToolTip", "Indicates all data stored on the model has been reset. Type of payload: FEmptyPayload" },
		{ "SequenceLengthChanged.Comment", "/** Indicates the play length of the animated data has changed. Type of payload: FSequenceLengthChangedPayload */" },
		{ "SequenceLengthChanged.Name", "EAnimDataModelNotifyType::SequenceLengthChanged" },
		{ "SequenceLengthChanged.ToolTip", "Indicates the play length of the animated data has changed. Type of payload: FSequenceLengthChangedPayload" },
		{ "TrackAdded.Comment", "/** Indicates a new bone track has been added. Type of payload: FAnimationTrackAddedPayload */" },
		{ "TrackAdded.Name", "EAnimDataModelNotifyType::TrackAdded" },
		{ "TrackAdded.ToolTip", "Indicates a new bone track has been added. Type of payload: FAnimationTrackAddedPayload" },
		{ "TrackChanged.Comment", "/** Indicates the keys of a bone track have been changed. Type of payload: FAnimationTrackChangedPayload */" },
		{ "TrackChanged.Name", "EAnimDataModelNotifyType::TrackChanged" },
		{ "TrackChanged.ToolTip", "Indicates the keys of a bone track have been changed. Type of payload: FAnimationTrackChangedPayload" },
		{ "TrackRemoved.Comment", "/** Indicates a bone track has been removed. Type of payload: FAnimationTrackRemovedPayload */" },
		{ "TrackRemoved.Name", "EAnimDataModelNotifyType::TrackRemoved" },
		{ "TrackRemoved.ToolTip", "Indicates a bone track has been removed. Type of payload: FAnimationTrackRemovedPayload" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimDataModelNotifyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimDataModelNotifyType",
		"EAnimDataModelNotifyType",
		Z_Construct_UEnum_Engine_EAnimDataModelNotifyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimDataModelNotifyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimDataModelNotifyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimDataModelNotifyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimDataModelNotifyType()
	{
		if (!Z_Registration_Info_UEnum_EAnimDataModelNotifyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimDataModelNotifyType.InnerSingleton, Z_Construct_UEnum_Engine_EAnimDataModelNotifyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimDataModelNotifyType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EmptyPayload;
class UScriptStruct* FEmptyPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EmptyPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EmptyPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmptyPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EmptyPayload"));
	}
	return Z_Registration_Info_UScriptStruct_EmptyPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FEmptyPayload>()
{
	return FEmptyPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEmptyPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmptyPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmptyPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmptyPayload>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmptyPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"EmptyPayload",
		sizeof(FEmptyPayload),
		alignof(FEmptyPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmptyPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmptyPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmptyPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_EmptyPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EmptyPayload.InnerSingleton, Z_Construct_UScriptStruct_FEmptyPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EmptyPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBracketPayload>() == std::is_polymorphic<FEmptyPayload>(), "USTRUCT FBracketPayload cannot be polymorphic unless super FEmptyPayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BracketPayload;
class UScriptStruct* FBracketPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BracketPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BracketPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBracketPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BracketPayload"));
	}
	return Z_Registration_Info_UScriptStruct_BracketPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBracketPayload>()
{
	return FBracketPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBracketPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBracketPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBracketPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBracketPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBracketPayload_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Description of bracket-ed operation applied to the model */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Description of bracket-ed operation applied to the model" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBracketPayload_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBracketPayload, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FBracketPayload_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBracketPayload_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBracketPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBracketPayload_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBracketPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FEmptyPayload,
		&NewStructOps,
		"BracketPayload",
		sizeof(FBracketPayload),
		alignof(FBracketPayload),
		Z_Construct_UScriptStruct_FBracketPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBracketPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBracketPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBracketPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBracketPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_BracketPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BracketPayload.InnerSingleton, Z_Construct_UScriptStruct_FBracketPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BracketPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimationTrackPayload>() == std::is_polymorphic<FEmptyPayload>(), "USTRUCT FAnimationTrackPayload cannot be polymorphic unless super FEmptyPayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationTrackPayload;
class UScriptStruct* FAnimationTrackPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationTrackPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationTrackPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationTrackPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationTrackPayload"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationTrackPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationTrackPayload>()
{
	return FAnimationTrackPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationTrackPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Name of the track (bone) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Name of the track (bone)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTrackPayload, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FEmptyPayload,
		&NewStructOps,
		"AnimationTrackPayload",
		sizeof(FAnimationTrackPayload),
		alignof(FAnimationTrackPayload),
		Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationTrackPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationTrackPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationTrackPayload.InnerSingleton, Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationTrackPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimationTrackAddedPayload>() == std::is_polymorphic<FAnimationTrackPayload>(), "USTRUCT FAnimationTrackAddedPayload cannot be polymorphic unless super FAnimationTrackPayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationTrackAddedPayload;
class UScriptStruct* FAnimationTrackAddedPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationTrackAddedPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationTrackAddedPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationTrackAddedPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationTrackAddedPayload"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationTrackAddedPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationTrackAddedPayload>()
{
	return FAnimationTrackAddedPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationTrackAddedPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::NewProp_TrackIndex_MetaData[] = {
		{ "Category", "Payload" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationTrackAddedPayload, TrackIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::NewProp_TrackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::NewProp_TrackIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::NewProp_TrackIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimationTrackPayload,
		&NewStructOps,
		"AnimationTrackAddedPayload",
		sizeof(FAnimationTrackAddedPayload),
		alignof(FAnimationTrackAddedPayload),
		Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationTrackAddedPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationTrackAddedPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationTrackAddedPayload.InnerSingleton, Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationTrackAddedPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSequenceLengthChangedPayload>() == std::is_polymorphic<FEmptyPayload>(), "USTRUCT FSequenceLengthChangedPayload cannot be polymorphic unless super FEmptyPayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequenceLengthChangedPayload;
class UScriptStruct* FSequenceLengthChangedPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceLengthChangedPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequenceLengthChangedPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SequenceLengthChangedPayload"));
	}
	return Z_Registration_Info_UScriptStruct_SequenceLengthChangedPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSequenceLengthChangedPayload>()
{
	return FSequenceLengthChangedPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviousLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T0_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_T0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_T1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_T1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousNumberOfFrames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousNumberOfFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frame1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frame1;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceLengthChangedPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_PreviousLength_MetaData[] = {
		{ "Category", "Payload" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_PreviousLength = { "PreviousLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceLengthChangedPayload, PreviousLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_PreviousLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_PreviousLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_T0_MetaData[] = {
		{ "Category", "Payload" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_T0 = { "T0", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceLengthChangedPayload, T0), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_T0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_T0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_T1_MetaData[] = {
		{ "Category", "Payload" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_T1 = { "T1", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceLengthChangedPayload, T1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_T1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_T1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_PreviousNumberOfFrames_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Previous playable number of frames for the Model */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Previous playable number of frames for the Model" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_PreviousNumberOfFrames = { "PreviousNumberOfFrames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceLengthChangedPayload, PreviousNumberOfFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_PreviousNumberOfFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_PreviousNumberOfFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_Frame0_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Frame number at which the change in frames has been made */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Frame number at which the change in frames has been made" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_Frame0 = { "Frame0", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceLengthChangedPayload, Frame0), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_Frame0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_Frame0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_Frame1_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Amount of frames which is inserted or removed starting at Frame0 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Amount of frames which is inserted or removed starting at Frame0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_Frame1 = { "Frame1", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceLengthChangedPayload, Frame1), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_Frame1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_Frame1_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_PreviousLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_T0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_T1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_PreviousNumberOfFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_Frame0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewProp_Frame1,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FEmptyPayload,
		&NewStructOps,
		"SequenceLengthChangedPayload",
		sizeof(FSequenceLengthChangedPayload),
		alignof(FSequenceLengthChangedPayload),
		Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequenceLengthChangedPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_SequenceLengthChangedPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequenceLengthChangedPayload.InnerSingleton, Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequenceLengthChangedPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFrameRateChangedPayload>() == std::is_polymorphic<FEmptyPayload>(), "USTRUCT FFrameRateChangedPayload cannot be polymorphic unless super FEmptyPayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FrameRateChangedPayload;
class UScriptStruct* FFrameRateChangedPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FrameRateChangedPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FrameRateChangedPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFrameRateChangedPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FrameRateChangedPayload"));
	}
	return Z_Registration_Info_UScriptStruct_FrameRateChangedPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFrameRateChangedPayload>()
{
	return FFrameRateChangedPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousFrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFrameRateChangedPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::NewProp_PreviousFrameRate_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Previous sampling rate for the Model */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Previous sampling rate for the Model" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::NewProp_PreviousFrameRate = { "PreviousFrameRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFrameRateChangedPayload, PreviousFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::NewProp_PreviousFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::NewProp_PreviousFrameRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::NewProp_PreviousFrameRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FEmptyPayload,
		&NewStructOps,
		"FrameRateChangedPayload",
		sizeof(FFrameRateChangedPayload),
		alignof(FFrameRateChangedPayload),
		Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFrameRateChangedPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_FrameRateChangedPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FrameRateChangedPayload.InnerSingleton, Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FrameRateChangedPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCurvePayload>() == std::is_polymorphic<FEmptyPayload>(), "USTRUCT FCurvePayload cannot be polymorphic unless super FEmptyPayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurvePayload;
class UScriptStruct* FCurvePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurvePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurvePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurvePayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurvePayload"));
	}
	return Z_Registration_Info_UScriptStruct_CurvePayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurvePayload>()
{
	return FCurvePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurvePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurvePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurvePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurvePayload_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Identifier of the curve */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Identifier of the curve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurvePayload_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurvePayload, Identifier), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvePayload_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvePayload_Statics::NewProp_Identifier_MetaData)) }; // 385993389
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurvePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurvePayload_Statics::NewProp_Identifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurvePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FEmptyPayload,
		&NewStructOps,
		"CurvePayload",
		sizeof(FCurvePayload),
		alignof(FCurvePayload),
		Z_Construct_UScriptStruct_FCurvePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurvePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurvePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurvePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_CurvePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurvePayload.InnerSingleton, Z_Construct_UScriptStruct_FCurvePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurvePayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCurveScaledPayload>() == std::is_polymorphic<FCurvePayload>(), "USTRUCT FCurveScaledPayload cannot be polymorphic unless super FCurvePayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveScaledPayload;
class UScriptStruct* FCurveScaledPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveScaledPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveScaledPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveScaledPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveScaledPayload"));
	}
	return Z_Registration_Info_UScriptStruct_CurveScaledPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveScaledPayload>()
{
	return FCurveScaledPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveScaledPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Factor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveScaledPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewProp_Factor_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Factor with which the curve was scaled */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Factor with which the curve was scaled" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveScaledPayload, Factor), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewProp_Factor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewProp_Factor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewProp_Origin_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Time used as the origin when scaling the curve */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Time used as the origin when scaling the curve" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveScaledPayload, Origin), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewProp_Origin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewProp_Factor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewProp_Origin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCurvePayload,
		&NewStructOps,
		"CurveScaledPayload",
		sizeof(FCurveScaledPayload),
		alignof(FCurveScaledPayload),
		Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveScaledPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveScaledPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveScaledPayload.InnerSingleton, Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveScaledPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCurveRenamedPayload>() == std::is_polymorphic<FCurvePayload>(), "USTRUCT FCurveRenamedPayload cannot be polymorphic unless super FCurvePayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveRenamedPayload;
class UScriptStruct* FCurveRenamedPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveRenamedPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveRenamedPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveRenamedPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveRenamedPayload"));
	}
	return Z_Registration_Info_UScriptStruct_CurveRenamedPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveRenamedPayload>()
{
	return FCurveRenamedPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveRenamedPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::NewProp_NewIdentifier_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Identifier of the curve after it was renamed */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Identifier of the curve after it was renamed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::NewProp_NewIdentifier = { "NewIdentifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveRenamedPayload, NewIdentifier), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::NewProp_NewIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::NewProp_NewIdentifier_MetaData)) }; // 385993389
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::NewProp_NewIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCurvePayload,
		&NewStructOps,
		"CurveRenamedPayload",
		sizeof(FCurveRenamedPayload),
		alignof(FCurveRenamedPayload),
		Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveRenamedPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveRenamedPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveRenamedPayload.InnerSingleton, Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveRenamedPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCurveFlagsChangedPayload>() == std::is_polymorphic<FCurvePayload>(), "USTRUCT FCurveFlagsChangedPayload cannot be polymorphic unless super FCurvePayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveFlagsChangedPayload;
class UScriptStruct* FCurveFlagsChangedPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveFlagsChangedPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveFlagsChangedPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveFlagsChangedPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveFlagsChangedPayload"));
	}
	return Z_Registration_Info_UScriptStruct_CurveFlagsChangedPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveFlagsChangedPayload>()
{
	return FCurveFlagsChangedPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldFlags_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OldFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveFlagsChangedPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::NewProp_OldFlags_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Old flags mask for the curve */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Old flags mask for the curve" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::NewProp_OldFlags = { "OldFlags", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveFlagsChangedPayload, OldFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::NewProp_OldFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::NewProp_OldFlags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::NewProp_OldFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCurvePayload,
		&NewStructOps,
		"CurveFlagsChangedPayload",
		sizeof(FCurveFlagsChangedPayload),
		alignof(FCurveFlagsChangedPayload),
		Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveFlagsChangedPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveFlagsChangedPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveFlagsChangedPayload.InnerSingleton, Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveFlagsChangedPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAttributePayload>() == std::is_polymorphic<FEmptyPayload>(), "USTRUCT FAttributePayload cannot be polymorphic unless super FEmptyPayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AttributePayload;
class UScriptStruct* FAttributePayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AttributePayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AttributePayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributePayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AttributePayload"));
	}
	return Z_Registration_Info_UScriptStruct_AttributePayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAttributePayload>()
{
	return FAttributePayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAttributePayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributePayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributePayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributePayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributePayload_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Payload" },
		{ "Comment", "/** Identifier of the attribute */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ToolTip", "Identifier of the attribute" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributePayload_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAttributePayload, Identifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributePayload_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributePayload_Statics::NewProp_Identifier_MetaData)) }; // 197982779
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributePayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributePayload_Statics::NewProp_Identifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributePayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FEmptyPayload,
		&NewStructOps,
		"AttributePayload",
		sizeof(FAttributePayload),
		alignof(FAttributePayload),
		Z_Construct_UScriptStruct_FAttributePayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributePayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributePayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributePayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributePayload()
	{
		if (!Z_Registration_Info_UScriptStruct_AttributePayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AttributePayload.InnerSingleton, Z_Construct_UScriptStruct_FAttributePayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AttributePayload.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimDataModelNotifPayload;
class UScriptStruct* FAnimDataModelNotifPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimDataModelNotifPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimDataModelNotifPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimDataModelNotifPayload, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimDataModelNotifPayload"));
	}
	return Z_Registration_Info_UScriptStruct_AnimDataModelNotifPayload.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimDataModelNotifPayload>()
{
	return FAnimDataModelNotifPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimDataModelNotifPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimDataModelNotifPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimDataModelNotifPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimDataModelNotifPayload>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimDataModelNotifPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimDataModelNotifPayload",
		sizeof(FAnimDataModelNotifPayload),
		alignof(FAnimDataModelNotifPayload),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimDataModelNotifPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimDataModelNotifPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimDataModelNotifPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimDataModelNotifPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimDataModelNotifPayload.InnerSingleton, Z_Construct_UScriptStruct_FAnimDataModelNotifPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimDataModelNotifPayload.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAnimationDataModelNotifiesExtensions::execGetPayload)
	{
		P_GET_STRUCT_REF(FAnimDataModelNotifPayload,Z_Param_Out_Payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FEmptyPayload*)Z_Param__Result=UAnimationDataModelNotifiesExtensions::GetPayload(Z_Param_Out_Payload);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationDataModelNotifiesExtensions::execCopyPayload)
	{
		P_GET_STRUCT_REF(FAnimDataModelNotifPayload,Z_Param_Out_Payload);
		P_GET_OBJECT(UScriptStruct,Z_Param_ExpectedStruct);
		P_GET_STRUCT_REF(FEmptyPayload,Z_Param_Out_OutPayload);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationDataModelNotifiesExtensions::CopyPayload(Z_Param_Out_Payload,Z_Param_ExpectedStruct,Z_Param_Out_OutPayload);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAnimationDataModelNotifiesExtensions::StaticRegisterNativesUAnimationDataModelNotifiesExtensions()
	{
#if WITH_EDITOR
		UClass* Class = UAnimationDataModelNotifiesExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyPayload", &UAnimationDataModelNotifiesExtensions::execCopyPayload },
			{ "GetPayload", &UAnimationDataModelNotifiesExtensions::execGetPayload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics
	{
		struct AnimationDataModelNotifiesExtensions_eventCopyPayload_Parms
		{
			FAnimDataModelNotifPayload Payload;
			UScriptStruct* ExpectedStruct;
			FEmptyPayload OutPayload;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpectedStruct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPayload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModelNotifiesExtensions_eventCopyPayload_Parms, Payload), Z_Construct_UScriptStruct_FAnimDataModelNotifPayload, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::NewProp_Payload_MetaData)) }; // 950089453
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::NewProp_ExpectedStruct = { "ExpectedStruct", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModelNotifiesExtensions_eventCopyPayload_Parms, ExpectedStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::NewProp_OutPayload = { "OutPayload", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModelNotifiesExtensions_eventCopyPayload_Parms, OutPayload), Z_Construct_UScriptStruct_FEmptyPayload, METADATA_PARAMS(nullptr, 0) }; // 1281910360
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::NewProp_ExpectedStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::NewProp_OutPayload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationAsset" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModelNotifiesExtensions, nullptr, "CopyPayload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::AnimationDataModelNotifiesExtensions_eventCopyPayload_Parms), Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics
	{
		struct AnimationDataModelNotifiesExtensions_eventGetPayload_Parms
		{
			FAnimDataModelNotifPayload Payload;
			FEmptyPayload ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModelNotifiesExtensions_eventGetPayload_Parms, Payload), Z_Construct_UScriptStruct_FAnimDataModelNotifPayload, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::NewProp_Payload_MetaData)) }; // 950089453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModelNotifiesExtensions_eventGetPayload_Parms, ReturnValue), Z_Construct_UScriptStruct_FEmptyPayload, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::NewProp_ReturnValue_MetaData)) }; // 1281910360
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::NewProp_Payload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationAsset" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModelNotifiesExtensions, nullptr, "GetPayload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::AnimationDataModelNotifiesExtensions_eventGetPayload_Parms), Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationDataModelNotifiesExtensions);
	UClass* Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_NoRegister()
	{
		return UAnimationDataModelNotifiesExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_CopyPayload, "CopyPayload" }, // 4110270191
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationDataModelNotifiesExtensions_GetPayload, "GetPayload" }, // 4057804292
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimData/AnimDataNotifications.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationDataModelNotifiesExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics::ClassParams = {
		&UAnimationDataModelNotifiesExtensions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationDataModelNotifiesExtensions()
	{
		if (!Z_Registration_Info_UClass_UAnimationDataModelNotifiesExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationDataModelNotifiesExtensions.OuterSingleton, Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationDataModelNotifiesExtensions.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimationDataModelNotifiesExtensions>()
	{
		return UAnimationDataModelNotifiesExtensions::StaticClass();
	}
	UAnimationDataModelNotifiesExtensions::UAnimationDataModelNotifiesExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationDataModelNotifiesExtensions);
	UAnimationDataModelNotifiesExtensions::~UAnimationDataModelNotifiesExtensions() {}
	struct Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics
	{
		struct _Script_Engine_eventAnimDataModelModifiedDynamicEvent_Parms
		{
			EAnimDataModelNotifyType NotifType;
			TScriptInterface<IAnimationDataModel> Model;
			FAnimDataModelNotifPayload Payload;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotifType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NotifType;
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Payload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_NotifType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_NotifType = { "NotifType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventAnimDataModelModifiedDynamicEvent_Parms, NotifType), Z_Construct_UEnum_Engine_EAnimDataModelNotifyType, METADATA_PARAMS(nullptr, 0) }; // 1014550892
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventAnimDataModelModifiedDynamicEvent_Parms, Model), Z_Construct_UClass_UAnimationDataModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Payload_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventAnimDataModelModifiedDynamicEvent_Parms, Payload), Z_Construct_UScriptStruct_FAnimDataModelNotifPayload, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Payload_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Payload_MetaData)) }; // 950089453
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_NotifType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_NotifType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::NewProp_Payload,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimData/AnimDataNotifications.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "AnimDataModelModifiedDynamicEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::_Script_Engine_eventAnimDataModelModifiedDynamicEvent_Parms), Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_AnimDataModelModifiedDynamicEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAnimDataModelModifiedDynamicEvent_DelegateWrapper(const FMulticastScriptDelegate& AnimDataModelModifiedDynamicEvent, EAnimDataModelNotifyType NotifType, const TScriptInterface<IAnimationDataModel>& Model, FAnimDataModelNotifPayload const& Payload)
{
	struct _Script_Engine_eventAnimDataModelModifiedDynamicEvent_Parms
	{
		EAnimDataModelNotifyType NotifType;
		TScriptInterface<IAnimationDataModel> Model;
		FAnimDataModelNotifPayload Payload;
	};
	_Script_Engine_eventAnimDataModelModifiedDynamicEvent_Parms Parms;
	Parms.NotifType=NotifType;
	Parms.Model=Model;
	Parms.Payload=Payload;
	AnimDataModelModifiedDynamicEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_Statics::EnumInfo[] = {
		{ EAnimDataModelNotifyType_StaticEnum, TEXT("EAnimDataModelNotifyType"), &Z_Registration_Info_UEnum_EAnimDataModelNotifyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1014550892U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_Statics::ScriptStructInfo[] = {
		{ FEmptyPayload::StaticStruct, Z_Construct_UScriptStruct_FEmptyPayload_Statics::NewStructOps, TEXT("EmptyPayload"), &Z_Registration_Info_UScriptStruct_EmptyPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEmptyPayload), 1281910360U) },
		{ FBracketPayload::StaticStruct, Z_Construct_UScriptStruct_FBracketPayload_Statics::NewStructOps, TEXT("BracketPayload"), &Z_Registration_Info_UScriptStruct_BracketPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBracketPayload), 4084182584U) },
		{ FAnimationTrackPayload::StaticStruct, Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics::NewStructOps, TEXT("AnimationTrackPayload"), &Z_Registration_Info_UScriptStruct_AnimationTrackPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationTrackPayload), 3429434581U) },
		{ FAnimationTrackAddedPayload::StaticStruct, Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics::NewStructOps, TEXT("AnimationTrackAddedPayload"), &Z_Registration_Info_UScriptStruct_AnimationTrackAddedPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationTrackAddedPayload), 1195023624U) },
		{ FSequenceLengthChangedPayload::StaticStruct, Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics::NewStructOps, TEXT("SequenceLengthChangedPayload"), &Z_Registration_Info_UScriptStruct_SequenceLengthChangedPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequenceLengthChangedPayload), 1767781777U) },
		{ FFrameRateChangedPayload::StaticStruct, Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics::NewStructOps, TEXT("FrameRateChangedPayload"), &Z_Registration_Info_UScriptStruct_FrameRateChangedPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFrameRateChangedPayload), 445605532U) },
		{ FCurvePayload::StaticStruct, Z_Construct_UScriptStruct_FCurvePayload_Statics::NewStructOps, TEXT("CurvePayload"), &Z_Registration_Info_UScriptStruct_CurvePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurvePayload), 2258445281U) },
		{ FCurveScaledPayload::StaticStruct, Z_Construct_UScriptStruct_FCurveScaledPayload_Statics::NewStructOps, TEXT("CurveScaledPayload"), &Z_Registration_Info_UScriptStruct_CurveScaledPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveScaledPayload), 1917983222U) },
		{ FCurveRenamedPayload::StaticStruct, Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics::NewStructOps, TEXT("CurveRenamedPayload"), &Z_Registration_Info_UScriptStruct_CurveRenamedPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveRenamedPayload), 3800100519U) },
		{ FCurveFlagsChangedPayload::StaticStruct, Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics::NewStructOps, TEXT("CurveFlagsChangedPayload"), &Z_Registration_Info_UScriptStruct_CurveFlagsChangedPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveFlagsChangedPayload), 2117721278U) },
		{ FAttributePayload::StaticStruct, Z_Construct_UScriptStruct_FAttributePayload_Statics::NewStructOps, TEXT("AttributePayload"), &Z_Registration_Info_UScriptStruct_AttributePayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAttributePayload), 143336877U) },
		{ FAnimDataModelNotifPayload::StaticStruct, Z_Construct_UScriptStruct_FAnimDataModelNotifPayload_Statics::NewStructOps, TEXT("AnimDataModelNotifPayload"), &Z_Registration_Info_UScriptStruct_AnimDataModelNotifPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimDataModelNotifPayload), 950089453U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationDataModelNotifiesExtensions, UAnimationDataModelNotifiesExtensions::StaticClass, TEXT("UAnimationDataModelNotifiesExtensions"), &Z_Registration_Info_UClass_UAnimationDataModelNotifiesExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationDataModelNotifiesExtensions), 2145637981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_1845695606(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
