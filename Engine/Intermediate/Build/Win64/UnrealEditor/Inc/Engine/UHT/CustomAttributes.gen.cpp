// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "../../Source/Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "../../Source/Runtime/Engine/Classes/Curves/StringCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomAttributes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomAttributeBlendType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedFloatCustomAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBakedStringCustomAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributePerBoneData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributeSetting();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomAttributeBlendType;
	static UEnum* ECustomAttributeBlendType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomAttributeBlendType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomAttributeBlendType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomAttributeBlendType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECustomAttributeBlendType"));
		}
		return Z_Registration_Info_UEnum_ECustomAttributeBlendType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECustomAttributeBlendType>()
	{
		return ECustomAttributeBlendType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Statics::Enumerators[] = {
		{ "ECustomAttributeBlendType::Override", (int64)ECustomAttributeBlendType::Override },
		{ "ECustomAttributeBlendType::Blend", (int64)ECustomAttributeBlendType::Blend },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Statics::Enum_MetaDataParams[] = {
		{ "Blend.Comment", "/** Blends Custom attributes according to weights per pose */" },
		{ "Blend.Name", "ECustomAttributeBlendType::Blend" },
		{ "Blend.ToolTip", "Blends Custom attributes according to weights per pose" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "Override.Comment", "/** Overrides Custom attributes according to highest weighted pose */" },
		{ "Override.Name", "ECustomAttributeBlendType::Override" },
		{ "Override.ToolTip", "Overrides Custom attributes according to highest weighted pose" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECustomAttributeBlendType",
		"ECustomAttributeBlendType",
		Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECustomAttributeBlendType()
	{
		if (!Z_Registration_Info_UEnum_ECustomAttributeBlendType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomAttributeBlendType.InnerSingleton, Z_Construct_UEnum_Engine_ECustomAttributeBlendType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomAttributeBlendType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomAttributeSetting;
class UScriptStruct* FCustomAttributeSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomAttributeSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomAttributeSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomAttributeSetting, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CustomAttributeSetting"));
	}
	return Z_Registration_Info_UScriptStruct_CustomAttributeSetting.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomAttributeSetting>()
{
	return FCustomAttributeSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meaning_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Meaning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomAttributeSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomAttributeSetting" },
		{ "Comment", "/** Name of the custom attribute */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of the custom attribute" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomAttributeSetting, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Meaning_MetaData[] = {
		{ "Category", "CustomAttributeSetting" },
		{ "Comment", "/** Optional property describing the meaning (or role) of the custom attribute, allowing to add context to an attribute */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Optional property describing the meaning (or role) of the custom attribute, allowing to add context to an attribute" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Meaning = { "Meaning", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomAttributeSetting, Meaning), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Meaning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Meaning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewProp_Meaning,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomAttributeSetting",
		sizeof(FCustomAttributeSetting),
		alignof(FCustomAttributeSetting),
		Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributeSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomAttributeSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomAttributeSetting.InnerSingleton, Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomAttributeSetting.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimecodeCustomAttributeNameSettings;
class UScriptStruct* FTimecodeCustomAttributeNameSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimecodeCustomAttributeNameSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimecodeCustomAttributeNameSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimecodeCustomAttributeNameSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TimecodeCustomAttributeNameSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimecodeCustomAttributeNameSettings>()
{
	return FTimecodeCustomAttributeNameSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HourAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HourAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinuteAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MinuteAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SecondAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FrameAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubframeAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubframeAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RateAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RateAttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakenameAttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TakenameAttributeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings that identify the names of custom attributes that represent the individual components of a timecode and a subframe along with a take name.\n */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Settings that identify the names of custom attributes that represent the individual components of a timecode and a subframe along with a take name." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimecodeCustomAttributeNameSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_HourAttributeName_MetaData[] = {
		{ "Category", "TimecodeCustomAttributeNameSettings" },
		{ "Comment", "/** Name of the custom attribute representing the hour component of a timecode. */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of the custom attribute representing the hour component of a timecode." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_HourAttributeName = { "HourAttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeCustomAttributeNameSettings, HourAttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_HourAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_HourAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_MinuteAttributeName_MetaData[] = {
		{ "Category", "TimecodeCustomAttributeNameSettings" },
		{ "Comment", "/** Name of the custom attribute representing the minute component of a timecode. */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of the custom attribute representing the minute component of a timecode." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_MinuteAttributeName = { "MinuteAttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeCustomAttributeNameSettings, MinuteAttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_MinuteAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_MinuteAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_SecondAttributeName_MetaData[] = {
		{ "Category", "TimecodeCustomAttributeNameSettings" },
		{ "Comment", "/** Name of the custom attribute representing the second component of a timecode. */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of the custom attribute representing the second component of a timecode." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_SecondAttributeName = { "SecondAttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeCustomAttributeNameSettings, SecondAttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_SecondAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_SecondAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_FrameAttributeName_MetaData[] = {
		{ "Category", "TimecodeCustomAttributeNameSettings" },
		{ "Comment", "/** Name of the custom attribute representing the frame component of a timecode. */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of the custom attribute representing the frame component of a timecode." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_FrameAttributeName = { "FrameAttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeCustomAttributeNameSettings, FrameAttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_FrameAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_FrameAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_SubframeAttributeName_MetaData[] = {
		{ "Category", "TimecodeCustomAttributeNameSettings" },
		{ "Comment", "/** Name of the custom attribute representing a subframe value. Though not strictly a component\n\x09\x09of a timecode, this attribute can be authored to identify samples in between timecodes. */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of the custom attribute representing a subframe value. Though not strictly a component\n              of a timecode, this attribute can be authored to identify samples in between timecodes." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_SubframeAttributeName = { "SubframeAttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeCustomAttributeNameSettings, SubframeAttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_SubframeAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_SubframeAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_RateAttributeName_MetaData[] = {
		{ "Category", "TimecodeCustomAttributeNameSettings" },
		{ "Comment", "/** Name of the custom attribute representing the timecode rate. This may be different from\n\x09    the animation or capture frame rate, for example when capturing \"high\" frame rate data\n\x09\x09""at 120 frames per second but recording SMPTE timecode at 30 frames per second. */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of the custom attribute representing the timecode rate. This may be different from\n          the animation or capture frame rate, for example when capturing \"high\" frame rate data\n              at 120 frames per second but recording SMPTE timecode at 30 frames per second." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_RateAttributeName = { "RateAttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeCustomAttributeNameSettings, RateAttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_RateAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_RateAttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_TakenameAttributeName_MetaData[] = {
		{ "Category", "TimecodeCustomAttributeNameSettings" },
		{ "Comment", "/** Name of the custom attribute representing the name of a take. */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of the custom attribute representing the name of a take." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_TakenameAttributeName = { "TakenameAttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimecodeCustomAttributeNameSettings, TakenameAttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_TakenameAttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_TakenameAttributeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_HourAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_MinuteAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_SecondAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_FrameAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_SubframeAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_RateAttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewProp_TakenameAttributeName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TimecodeCustomAttributeNameSettings",
		sizeof(FTimecodeCustomAttributeNameSettings),
		alignof(FTimecodeCustomAttributeNameSettings),
		Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_TimecodeCustomAttributeNameSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimecodeCustomAttributeNameSettings.InnerSingleton, Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimecodeCustomAttributeNameSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomAttribute;
class UScriptStruct* FCustomAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CustomAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_CustomAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomAttribute>()
{
	return FCustomAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VariantType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttribute_Statics::Struct_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomAttribute>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomAttribute" },
		{ "Comment", "/** Name of this attribute */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Name of this attribute" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomAttribute, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_VariantType_MetaData[] = {
		{ "Category", "CustomAttribute" },
		{ "Comment", "/** (FVariant) type contained by Values array */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "(FVariant) type contained by Values array" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_VariantType = { "VariantType", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomAttribute, VariantType), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_VariantType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_VariantType_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "Comment", "/** Time keys (should match number of Value entries) */" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
		{ "ToolTip", "Time keys (should match number of Value entries)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomAttribute, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_VariantType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewProp_Times,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomAttribute",
		sizeof(FCustomAttribute),
		alignof(FCustomAttribute),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FCustomAttribute_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttribute_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomAttribute.InnerSingleton, Z_Construct_UScriptStruct_FCustomAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomAttributePerBoneData;
class UScriptStruct* FCustomAttributePerBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomAttributePerBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomAttributePerBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomAttributePerBoneData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CustomAttributePerBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomAttributePerBoneData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomAttributePerBoneData>()
{
	return FCustomAttributePerBoneData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTreeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneTreeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::Struct_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomAttributePerBoneData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex = { "BoneTreeIndex", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomAttributePerBoneData, BoneTreeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomAttribute, METADATA_PARAMS(nullptr, 0) }; // 4144164703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000800020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomAttributePerBoneData, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes_MetaData)) }; // 4144164703
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewProp_Attributes,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CustomAttributePerBoneData",
		sizeof(FCustomAttributePerBoneData),
		alignof(FCustomAttributePerBoneData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomAttributePerBoneData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomAttributePerBoneData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomAttributePerBoneData.InnerSingleton, Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomAttributePerBoneData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BakedStringCustomAttribute;
class UScriptStruct* FBakedStringCustomAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BakedStringCustomAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BakedStringCustomAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedStringCustomAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BakedStringCustomAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_BakedStringCustomAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedStringCustomAttribute>()
{
	return FBakedStringCustomAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StringCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::Struct_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedStringCustomAttribute>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedStringCustomAttribute, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_StringCurve_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_StringCurve = { "StringCurve", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedStringCustomAttribute, StringCurve), Z_Construct_UScriptStruct_FStringCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_StringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_StringCurve_MetaData)) }; // 312262636
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewProp_StringCurve,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedStringCustomAttribute",
		sizeof(FBakedStringCustomAttribute),
		alignof(FBakedStringCustomAttribute),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedStringCustomAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_BakedStringCustomAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BakedStringCustomAttribute.InnerSingleton, Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BakedStringCustomAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BakedIntegerCustomAttribute;
class UScriptStruct* FBakedIntegerCustomAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BakedIntegerCustomAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BakedIntegerCustomAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BakedIntegerCustomAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_BakedIntegerCustomAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedIntegerCustomAttribute>()
{
	return FBakedIntegerCustomAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::Struct_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedIntegerCustomAttribute>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedIntegerCustomAttribute, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_IntCurve_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_IntCurve = { "IntCurve", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedIntegerCustomAttribute, IntCurve), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_IntCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_IntCurve_MetaData)) }; // 397992019
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewProp_IntCurve,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedIntegerCustomAttribute",
		sizeof(FBakedIntegerCustomAttribute),
		alignof(FBakedIntegerCustomAttribute),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_BakedIntegerCustomAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BakedIntegerCustomAttribute.InnerSingleton, Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BakedIntegerCustomAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BakedFloatCustomAttribute;
class UScriptStruct* FBakedFloatCustomAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BakedFloatCustomAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BakedFloatCustomAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BakedFloatCustomAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_BakedFloatCustomAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedFloatCustomAttribute>()
{
	return FBakedFloatCustomAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::Struct_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedFloatCustomAttribute>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedFloatCustomAttribute, AttributeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_AttributeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_AttributeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedFloatCustomAttribute, FloatCurve), Z_Construct_UScriptStruct_FSimpleCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_FloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_FloatCurve_MetaData)) }; // 3264739949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewProp_FloatCurve,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedFloatCustomAttribute",
		sizeof(FBakedFloatCustomAttribute),
		alignof(FBakedFloatCustomAttribute),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedFloatCustomAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_BakedFloatCustomAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BakedFloatCustomAttribute.InnerSingleton, Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BakedFloatCustomAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BakedCustomAttributePerBoneData;
class UScriptStruct* FBakedCustomAttributePerBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BakedCustomAttributePerBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BakedCustomAttributePerBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BakedCustomAttributePerBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_BakedCustomAttributePerBoneData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBakedCustomAttributePerBoneData>()
{
	return FBakedCustomAttributePerBoneData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTreeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneTreeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StringAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringAttributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntAttributes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::Struct_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedCustomAttributePerBoneData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex = { "BoneTreeIndex", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedCustomAttributePerBoneData, BoneTreeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes_Inner = { "StringAttributes", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBakedStringCustomAttribute, METADATA_PARAMS(nullptr, 0) }; // 46074094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes = { "StringAttributes", nullptr, (EPropertyFlags)0x0010000800020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedCustomAttributePerBoneData, StringAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes_MetaData)) }; // 46074094
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes_Inner = { "IntAttributes", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute, METADATA_PARAMS(nullptr, 0) }; // 3183032535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes = { "IntAttributes", nullptr, (EPropertyFlags)0x0010000800020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedCustomAttributePerBoneData, IntAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes_MetaData)) }; // 3183032535
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes_Inner = { "FloatAttributes", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBakedFloatCustomAttribute, METADATA_PARAMS(nullptr, 0) }; // 317329386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes_MetaData[] = {
		{ "Category", "CustomAttributeBoneData" },
		{ "ModuleRelativePath", "Classes/Animation/CustomAttributes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes = { "FloatAttributes", nullptr, (EPropertyFlags)0x0010000800020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedCustomAttributePerBoneData, FloatAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes_MetaData)) }; // 317329386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_BoneTreeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_StringAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_IntAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewProp_FloatAttributes,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BakedCustomAttributePerBoneData",
		sizeof(FBakedCustomAttributePerBoneData),
		alignof(FBakedCustomAttributePerBoneData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData()
	{
		if (!Z_Registration_Info_UScriptStruct_BakedCustomAttributePerBoneData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BakedCustomAttributePerBoneData.InnerSingleton, Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BakedCustomAttributePerBoneData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_Statics::EnumInfo[] = {
		{ ECustomAttributeBlendType_StaticEnum, TEXT("ECustomAttributeBlendType"), &Z_Registration_Info_UEnum_ECustomAttributeBlendType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3525224360U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_Statics::ScriptStructInfo[] = {
		{ FCustomAttributeSetting::StaticStruct, Z_Construct_UScriptStruct_FCustomAttributeSetting_Statics::NewStructOps, TEXT("CustomAttributeSetting"), &Z_Registration_Info_UScriptStruct_CustomAttributeSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomAttributeSetting), 2766223535U) },
		{ FTimecodeCustomAttributeNameSettings::StaticStruct, Z_Construct_UScriptStruct_FTimecodeCustomAttributeNameSettings_Statics::NewStructOps, TEXT("TimecodeCustomAttributeNameSettings"), &Z_Registration_Info_UScriptStruct_TimecodeCustomAttributeNameSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimecodeCustomAttributeNameSettings), 3594195430U) },
		{ FCustomAttribute::StaticStruct, Z_Construct_UScriptStruct_FCustomAttribute_Statics::NewStructOps, TEXT("CustomAttribute"), &Z_Registration_Info_UScriptStruct_CustomAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomAttribute), 4144164703U) },
		{ FCustomAttributePerBoneData::StaticStruct, Z_Construct_UScriptStruct_FCustomAttributePerBoneData_Statics::NewStructOps, TEXT("CustomAttributePerBoneData"), &Z_Registration_Info_UScriptStruct_CustomAttributePerBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomAttributePerBoneData), 3766201910U) },
		{ FBakedStringCustomAttribute::StaticStruct, Z_Construct_UScriptStruct_FBakedStringCustomAttribute_Statics::NewStructOps, TEXT("BakedStringCustomAttribute"), &Z_Registration_Info_UScriptStruct_BakedStringCustomAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBakedStringCustomAttribute), 46074094U) },
		{ FBakedIntegerCustomAttribute::StaticStruct, Z_Construct_UScriptStruct_FBakedIntegerCustomAttribute_Statics::NewStructOps, TEXT("BakedIntegerCustomAttribute"), &Z_Registration_Info_UScriptStruct_BakedIntegerCustomAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBakedIntegerCustomAttribute), 3183032535U) },
		{ FBakedFloatCustomAttribute::StaticStruct, Z_Construct_UScriptStruct_FBakedFloatCustomAttribute_Statics::NewStructOps, TEXT("BakedFloatCustomAttribute"), &Z_Registration_Info_UScriptStruct_BakedFloatCustomAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBakedFloatCustomAttribute), 317329386U) },
		{ FBakedCustomAttributePerBoneData::StaticStruct, Z_Construct_UScriptStruct_FBakedCustomAttributePerBoneData_Statics::NewStructOps, TEXT("BakedCustomAttributePerBoneData"), &Z_Registration_Info_UScriptStruct_BakedCustomAttributePerBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBakedCustomAttributePerBoneData), 3677521252U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_1789420585(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_CustomAttributes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
