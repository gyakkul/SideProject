// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQualifiedFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveElement();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameRate();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMetaData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTime();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeCode();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkWorldTime();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubjectName;
class UScriptStruct* FLiveLinkSubjectName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubjectName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectName, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSubjectName"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectName.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSubjectName>()
{
	return FLiveLinkSubjectName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Live Link" },
		{ "Comment", "// Name of the subject\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Name of the subject" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectName",
		sizeof(FLiveLinkSubjectName),
		alignof(FLiveLinkSubjectName),
		Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubjectName.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSubjectName.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSubjectKey;
class UScriptStruct* FLiveLinkSubjectKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSubjectKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSubjectKey, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkSubjectKey"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSubjectKey.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkSubjectKey>()
{
	return FLiveLinkSubjectKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Structure that identifies an individual subject\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Structure that identifies an individual subject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSubjectKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// The guid for this subjects source\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "The guid for this subjects source" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectKey, Source), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// The Name of this subject\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "The Name of this subject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkSubjectKey, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_SubjectName_MetaData)) }; // 930695248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewProp_SubjectName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkSubjectKey",
		sizeof(FLiveLinkSubjectKey),
		alignof(FLiveLinkSubjectKey),
		Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectKey()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSubjectKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSubjectKey.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSubjectKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkWorldTime;
class UScriptStruct* FLiveLinkWorldTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkWorldTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkWorldTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkWorldTime, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkWorldTime"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkWorldTime.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkWorldTime>()
{
	return FLiveLinkWorldTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkWorldTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Time_MetaData[] = {
		{ "Comment", "// SourceTime for this frame. Used during interpolation and to compute a running clock offset\n" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "SourceTime for this frame. Used during interpolation and to compute a running clock offset" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkWorldTime, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Offset_MetaData[] = {
		{ "Comment", "// Value calculated on create to represent the different between the source time and client time\n// Can also be updated afterwards if a better continuous offset is calculated\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Value calculated on create to represent the different between the source time and client time\nCan also be updated afterwards if a better continuous offset is calculated" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkWorldTime, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewProp_Offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkWorldTime",
		sizeof(FLiveLinkWorldTime),
		alignof(FLiveLinkWorldTime),
		Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkWorldTime()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkWorldTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkWorldTime.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkWorldTime.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTime;
class UScriptStruct* FLiveLinkTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTime, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTime"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTime.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTime>()
{
	return FLiveLinkTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_WorldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_WorldTime_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_WorldTime = { "WorldTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTime, WorldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_WorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_WorldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_SceneTime_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_SceneTime = { "SceneTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTime, SceneTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_SceneTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_SceneTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_WorldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewProp_SceneTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkTime",
		sizeof(FLiveLinkTime),
		alignof(FLiveLinkTime),
		Z_Construct_UScriptStruct_FLiveLinkTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTime()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTime.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkTime.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkMetaData;
class UScriptStruct* FLiveLinkMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkMetaData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkMetaData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkMetaData>()
{
	return FLiveLinkMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringMetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StringMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkMetaData>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_ValueProp = { "StringMetaData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_Key_KeyProp = { "StringMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData = { "StringMetaData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkMetaData, StringMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_SceneTime_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_SceneTime = { "SceneTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkMetaData, SceneTime), Z_Construct_UScriptStruct_FQualifiedFrameTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_SceneTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_SceneTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_StringMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewProp_SceneTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkMetaData",
		sizeof(FLiveLinkMetaData),
		alignof(FLiveLinkMetaData),
		Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkMetaData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkMetaData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkBaseFrameData;
class UScriptStruct* FLiveLinkBaseFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkBaseFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkBaseFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkBaseFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkBaseFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkBaseFrameData>()
{
	return FLiveLinkBaseFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PropertyValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base data structure for each frame coming in for a subject\n * @note subclass can't contains reference to UObject\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Base data structure for each frame coming in for a subject\n@note subclass can't contains reference to UObject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkBaseFrameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_WorldTime_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Time in seconds the frame was created. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Time in seconds the frame was created." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_WorldTime = { "WorldTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkBaseFrameData, WorldTime), Z_Construct_UScriptStruct_FLiveLinkWorldTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_WorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_WorldTime_MetaData)) }; // 1353605227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Frame's metadata. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Frame's metadata." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkBaseFrameData, MetaData), Z_Construct_UScriptStruct_FLiveLinkMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_MetaData_MetaData)) }; // 282121272
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues_Inner = { "PropertyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Values of the properties defined in the static structure. Use FLiveLinkBaseStaticData.FindPropertyValue to evaluate. */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Values of the properties defined in the static structure. Use FLiveLinkBaseStaticData.FindPropertyValue to evaluate." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues = { "PropertyValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkBaseFrameData, PropertyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_WorldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_MetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewProp_PropertyValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkBaseFrameData",
		sizeof(FLiveLinkBaseFrameData),
		alignof(FLiveLinkBaseFrameData),
		Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkBaseFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkBaseFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkBaseFrameData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkBaseStaticData;
class UScriptStruct* FLiveLinkBaseStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkBaseStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkBaseStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkBaseStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkBaseStaticData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkBaseStaticData>()
{
	return FLiveLinkBaseStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base static data structure for a subject\n * Use to store information that is common to every frame\n * @note subclass can't contains reference to UObject\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Base static data structure for a subject\nUse to store information that is common to every frame\n@note subclass can't contains reference to UObject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkBaseStaticData>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames_Inner = { "PropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Names for each curve values that will be sent for each frame */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Names for each curve values that will be sent for each frame" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames = { "PropertyNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkBaseStaticData, PropertyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewProp_PropertyNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkBaseStaticData",
		sizeof(FLiveLinkBaseStaticData),
		alignof(FLiveLinkBaseStaticData),
		Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkBaseStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkBaseStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkBaseStaticData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkBaseBlueprintData;
class UScriptStruct* FLiveLinkBaseBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkBaseBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkBaseBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkBaseBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkBaseBlueprintData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkBaseBlueprintData>()
{
	return FLiveLinkBaseBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base blueprint data structure for a subject frame\n * Can be used to do blueprint facilitator per role\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Base blueprint data structure for a subject frame\nCan be used to do blueprint facilitator per role" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkBaseBlueprintData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkBaseBlueprintData",
		sizeof(FLiveLinkBaseBlueprintData),
		alignof(FLiveLinkBaseBlueprintData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkBaseBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkBaseBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkBaseBlueprintData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkFrameRate>() == std::is_polymorphic<FFrameRate>(), "USTRUCT FLiveLinkFrameRate cannot be polymorphic unless super FFrameRate is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkFrameRate;
class UScriptStruct* FLiveLinkFrameRate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkFrameRate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkFrameRate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkFrameRate, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkFrameRate"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkFrameRate.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkFrameRate>()
{
	return FLiveLinkFrameRate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkFrameRate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FFrameRate,
		&NewStructOps,
		"LiveLinkFrameRate",
		sizeof(FLiveLinkFrameRate),
		alignof(FLiveLinkFrameRate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameRate()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkFrameRate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkFrameRate.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkFrameRate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTimeCode_Base_DEPRECATED;
class UScriptStruct* FLiveLinkTimeCode_Base_DEPRECATED::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTimeCode_Base_DEPRECATED.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTimeCode_Base_DEPRECATED.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTimeCode_Base_DEPRECATED"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTimeCode_Base_DEPRECATED.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTimeCode_Base_DEPRECATED>()
{
	return FLiveLinkTimeCode_Base_DEPRECATED::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTimeCode_Base_DEPRECATED>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Seconds_MetaData[] = {
		{ "Comment", "// Integer Seconds since Epoch \n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Integer Seconds since Epoch" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTimeCode_Base_DEPRECATED, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Frames_MetaData[] = {
		{ "Comment", "// Integer Frames since last second\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Integer Frames since last second" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTimeCode_Base_DEPRECATED, Frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Frames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Comment", "// Value calculated on create to represent the different between the source time and client time\n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Value calculated on create to represent the different between the source time and client time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTimeCode_Base_DEPRECATED, FrameRate), Z_Construct_UScriptStruct_FLiveLinkFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_FrameRate_MetaData)) }; // 2009916952
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewProp_FrameRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkTimeCode_Base_DEPRECATED",
		sizeof(FLiveLinkTimeCode_Base_DEPRECATED),
		alignof(FLiveLinkTimeCode_Base_DEPRECATED),
		Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkTimeCode_Base_DEPRECATED.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTimeCode_Base_DEPRECATED.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkTimeCode_Base_DEPRECATED.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkTimeCode>() == std::is_polymorphic<FLiveLinkTimeCode_Base_DEPRECATED>(), "USTRUCT FLiveLinkTimeCode cannot be polymorphic unless super FLiveLinkTimeCode_Base_DEPRECATED is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTimeCode;
class UScriptStruct* FLiveLinkTimeCode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTimeCode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTimeCode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTimeCode, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTimeCode"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTimeCode.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTimeCode>()
{
	return FLiveLinkTimeCode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A Qualified TimeCode associated with \n" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "A Qualified TimeCode associated with" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTimeCode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED,
		&NewStructOps,
		"LiveLinkTimeCode",
		sizeof(FLiveLinkTimeCode),
		alignof(FLiveLinkTimeCode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTimeCode()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkTimeCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTimeCode.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkTimeCode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkCurveElement;
class UScriptStruct* FLiveLinkCurveElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCurveElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkCurveElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCurveElement, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkCurveElement"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCurveElement.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkCurveElement>()
{
	return FLiveLinkCurveElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCurveElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveName_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCurveElement, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkCurveElement, CurveValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewProp_CurveValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkCurveElement",
		sizeof(FLiveLinkCurveElement),
		alignof(FLiveLinkCurveElement),
		Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCurveElement()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkCurveElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkCurveElement.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkCurveElement.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkFrameData;
class UScriptStruct* FLiveLinkFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkFrameData>()
{
	return FLiveLinkFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveElements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Store animation frame data */" },
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
		{ "ToolTip", "Store animation frame data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkFrameData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkFrameData, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements_Inner = { "CurveElements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkCurveElement, METADATA_PARAMS(nullptr, 0) }; // 2347311509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements = { "CurveElements", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkFrameData, CurveElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements_MetaData)) }; // 2347311509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_WorldTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_WorldTime = { "WorldTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkFrameData, WorldTime), Z_Construct_UScriptStruct_FLiveLinkWorldTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_WorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_WorldTime_MetaData)) }; // 1353605227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_MetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkFrameData, MetaData), Z_Construct_UScriptStruct_FLiveLinkMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_MetaData_MetaData)) }; // 282121272
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_CurveElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_WorldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewProp_MetaData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		nullptr,
		&NewStructOps,
		"LiveLinkFrameData",
		sizeof(FLiveLinkFrameData),
		alignof(FLiveLinkFrameData),
		Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkFrameData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkTypes_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkSubjectName::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectName_Statics::NewStructOps, TEXT("LiveLinkSubjectName"), &Z_Registration_Info_UScriptStruct_LiveLinkSubjectName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubjectName), 930695248U) },
		{ FLiveLinkSubjectKey::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSubjectKey_Statics::NewStructOps, TEXT("LiveLinkSubjectKey"), &Z_Registration_Info_UScriptStruct_LiveLinkSubjectKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSubjectKey), 1829525393U) },
		{ FLiveLinkWorldTime::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkWorldTime_Statics::NewStructOps, TEXT("LiveLinkWorldTime"), &Z_Registration_Info_UScriptStruct_LiveLinkWorldTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkWorldTime), 1353605227U) },
		{ FLiveLinkTime::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTime_Statics::NewStructOps, TEXT("LiveLinkTime"), &Z_Registration_Info_UScriptStruct_LiveLinkTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTime), 63153699U) },
		{ FLiveLinkMetaData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkMetaData_Statics::NewStructOps, TEXT("LiveLinkMetaData"), &Z_Registration_Info_UScriptStruct_LiveLinkMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkMetaData), 282121272U) },
		{ FLiveLinkBaseFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkBaseFrameData_Statics::NewStructOps, TEXT("LiveLinkBaseFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkBaseFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkBaseFrameData), 1384013997U) },
		{ FLiveLinkBaseStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkBaseStaticData_Statics::NewStructOps, TEXT("LiveLinkBaseStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkBaseStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkBaseStaticData), 1789085157U) },
		{ FLiveLinkBaseBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData_Statics::NewStructOps, TEXT("LiveLinkBaseBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkBaseBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkBaseBlueprintData), 621992298U) },
		{ FLiveLinkFrameRate::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkFrameRate_Statics::NewStructOps, TEXT("LiveLinkFrameRate"), &Z_Registration_Info_UScriptStruct_LiveLinkFrameRate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkFrameRate), 2009916952U) },
		{ FLiveLinkTimeCode_Base_DEPRECATED::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTimeCode_Base_DEPRECATED_Statics::NewStructOps, TEXT("LiveLinkTimeCode_Base_DEPRECATED"), &Z_Registration_Info_UScriptStruct_LiveLinkTimeCode_Base_DEPRECATED, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTimeCode_Base_DEPRECATED), 2509884218U) },
		{ FLiveLinkTimeCode::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTimeCode_Statics::NewStructOps, TEXT("LiveLinkTimeCode"), &Z_Registration_Info_UScriptStruct_LiveLinkTimeCode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTimeCode), 2779453023U) },
		{ FLiveLinkCurveElement::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkCurveElement_Statics::NewStructOps, TEXT("LiveLinkCurveElement"), &Z_Registration_Info_UScriptStruct_LiveLinkCurveElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkCurveElement), 2347311509U) },
		{ FLiveLinkFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkFrameData_Statics::NewStructOps, TEXT("LiveLinkFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkFrameData), 4152646791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkTypes_h_2537211761(TEXT("/Script/LiveLinkInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
