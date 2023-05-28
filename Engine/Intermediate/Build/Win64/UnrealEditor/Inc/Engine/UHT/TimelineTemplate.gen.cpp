// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineTemplate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBPVariableMetaDataEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTEventTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTFloatTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTLinearColorTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTPropertyTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTTrackBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTTrackId();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTTVectorTrack();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTTrackBase;
class UScriptStruct* FTTTrackBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTTrackBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTTrackBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTTrackBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTTrackBase"));
	}
	return Z_Registration_Info_UScriptStruct_TTTrackBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTTrackBase>()
{
	return FTTTrackBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTTTrackBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExternalCurve_MetaData[];
#endif
		static void NewProp_bIsExternalCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExternalCurve;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[];
#endif
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurveViewSynchronized_MetaData[];
#endif
		static void NewProp_bIsCurveViewSynchronized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurveViewSynchronized;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTTrackBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Name of this track */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Name of this track" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTTTrackBase, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_MetaData[] = {
		{ "Comment", "/** Flag to identify internal/external curve*/" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Flag to identify internal/external curve" },
	};
#endif
	void Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_SetBit(void* Obj)
	{
		((FTTTrackBase*)Obj)->bIsExternalCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve = { "bIsExternalCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTTTrackBase), &Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded_MetaData[] = {
		{ "Comment", "/** Whether or not this track is expanded in the UI. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Whether or not this track is expanded in the UI." },
	};
#endif
	void Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((FTTTrackBase*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTTTrackBase), &Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized_MetaData[] = {
		{ "Comment", "/** Whether or not this track has its curve's view synchronized with the other curve views. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Whether or not this track has its curve's view synchronized with the other curve views." },
	};
#endif
	void Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized_SetBit(void* Obj)
	{
		((FTTTrackBase*)Obj)->bIsCurveViewSynchronized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized = { "bIsCurveViewSynchronized", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTTTrackBase), &Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExternalCurve,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewProp_bIsCurveViewSynchronized,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTTrackBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TTTrackBase",
		sizeof(FTTTrackBase),
		alignof(FTTTrackBase),
		Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTTrackBase()
	{
		if (!Z_Registration_Info_UScriptStruct_TTTrackBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTTrackBase.InnerSingleton, Z_Construct_UScriptStruct_FTTTrackBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TTTrackBase.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTTrackId;
class UScriptStruct* FTTTrackId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTTrackId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTTrackId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTTrackId, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTTrackId"));
	}
	return Z_Registration_Info_UScriptStruct_TTTrackId.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTTrackId>()
{
	return FTTTrackId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTTTrackId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackId_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTTrackId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTTrackId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackType = { "TrackType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTTTrackId, TrackType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTTTrackId, TrackIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTTrackId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTTrackId_Statics::NewProp_TrackIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTTrackId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TTTrackId",
		sizeof(FTTTrackId),
		alignof(FTTTrackId),
		Z_Construct_UScriptStruct_FTTTrackId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTTrackId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTTrackId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTTrackId()
	{
		if (!Z_Registration_Info_UScriptStruct_TTTrackId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTTrackId.InnerSingleton, Z_Construct_UScriptStruct_FTTTrackId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TTTrackId.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTTEventTrack>() == std::is_polymorphic<FTTTrackBase>(), "USTRUCT FTTEventTrack cannot be polymorphic unless super FTTTrackBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTEventTrack;
class UScriptStruct* FTTEventTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTEventTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTEventTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTEventTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTEventTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TTEventTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTEventTrack>()
{
	return FTTEventTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTTEventTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveKeys_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing information about one event track */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one event track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTEventTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTTEventTrack, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys_MetaData[] = {
		{ "Comment", "/** Curve object used to store keys */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to store keys" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys = { "CurveKeys", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTTEventTrack, CurveKeys), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewProp_CurveKeys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTEventTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTTrackBase,
		&NewStructOps,
		"TTEventTrack",
		sizeof(FTTEventTrack),
		alignof(FTTEventTrack),
		Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTEventTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTEventTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TTEventTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTEventTrack.InnerSingleton, Z_Construct_UScriptStruct_FTTEventTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TTEventTrack.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTTPropertyTrack>() == std::is_polymorphic<FTTTrackBase>(), "USTRUCT FTTPropertyTrack cannot be polymorphic unless super FTTTrackBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTPropertyTrack;
class UScriptStruct* FTTPropertyTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTPropertyTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTPropertyTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTPropertyTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTPropertyTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TTPropertyTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTPropertyTrack>()
{
	return FTTPropertyTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTTPropertyTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTPropertyTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTTPropertyTrack, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewProp_PropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTTrackBase,
		&NewStructOps,
		"TTPropertyTrack",
		sizeof(FTTPropertyTrack),
		alignof(FTTPropertyTrack),
		Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTPropertyTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TTPropertyTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTPropertyTrack.InnerSingleton, Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TTPropertyTrack.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTTFloatTrack>() == std::is_polymorphic<FTTPropertyTrack>(), "USTRUCT FTTFloatTrack cannot be polymorphic unless super FTTPropertyTrack is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTFloatTrack;
class UScriptStruct* FTTFloatTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTFloatTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTFloatTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTFloatTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTFloatTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TTFloatTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTFloatTrack>()
{
	return FTTFloatTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTTFloatTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveFloat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing information about one float interpolation track */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one float interpolation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTFloatTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat_MetaData[] = {
		{ "Comment", "/** Curve object used to define float value over time */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define float value over time" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTTFloatTrack, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewProp_CurveFloat,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTFloatTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTPropertyTrack,
		&NewStructOps,
		"TTFloatTrack",
		sizeof(FTTFloatTrack),
		alignof(FTTFloatTrack),
		Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTFloatTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTFloatTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TTFloatTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTFloatTrack.InnerSingleton, Z_Construct_UScriptStruct_FTTFloatTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TTFloatTrack.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTTVectorTrack>() == std::is_polymorphic<FTTPropertyTrack>(), "USTRUCT FTTVectorTrack cannot be polymorphic unless super FTTPropertyTrack is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTVectorTrack;
class UScriptStruct* FTTVectorTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTVectorTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTVectorTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTVectorTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTVectorTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TTVectorTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTVectorTrack>()
{
	return FTTVectorTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTTVectorTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveVector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing information about one vector interpolation track */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one vector interpolation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTVectorTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector_MetaData[] = {
		{ "Comment", "/** Curve object used to define vector value over time */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define vector value over time" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector = { "CurveVector", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTTVectorTrack, CurveVector), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewProp_CurveVector,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTVectorTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTPropertyTrack,
		&NewStructOps,
		"TTVectorTrack",
		sizeof(FTTVectorTrack),
		alignof(FTTVectorTrack),
		Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTVectorTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTVectorTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TTVectorTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTVectorTrack.InnerSingleton, Z_Construct_UScriptStruct_FTTVectorTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TTVectorTrack.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTTLinearColorTrack>() == std::is_polymorphic<FTTPropertyTrack>(), "USTRUCT FTTLinearColorTrack cannot be polymorphic unless super FTTPropertyTrack is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TTLinearColorTrack;
class UScriptStruct* FTTLinearColorTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TTLinearColorTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TTLinearColorTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTTLinearColorTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TTLinearColorTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TTLinearColorTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTTLinearColorTrack>()
{
	return FTTLinearColorTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveLinearColor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveLinearColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing information about one color interpolation track */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Structure storing information about one color interpolation track" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTTLinearColorTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor_MetaData[] = {
		{ "Comment", "/** Curve object used to define color value over time */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Curve object used to define color value over time" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor = { "CurveLinearColor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTTLinearColorTrack, CurveLinearColor), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewProp_CurveLinearColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FTTPropertyTrack,
		&NewStructOps,
		"TTLinearColorTrack",
		sizeof(FTTLinearColorTrack),
		alignof(FTTLinearColorTrack),
		Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTTLinearColorTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_TTLinearColorTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TTLinearColorTrack.InnerSingleton, Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TTLinearColorTrack.InnerSingleton;
	}
	void UTimelineTemplate::StaticRegisterNativesUTimelineTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimelineTemplate);
	UClass* Z_Construct_UClass_UTimelineTemplate_NoRegister()
	{
		return UTimelineTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UTimelineTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimelineLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LengthMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LengthMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplicated_MetaData[];
#endif
		static void NewProp_bReplicated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplicated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EventTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearColorTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearColorTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LinearColorTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaDataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaDataArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimelineGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimelineTickGroup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimelineTickGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectionPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DirectionPropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UpdateFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishedFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FinishedFunctionName;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackDisplayOrder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackDisplayOrder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackDisplayOrder;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimelineTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TimelineTemplate.h" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** Length of this timeline */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Length of this timeline" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength = { "TimelineLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, TimelineLength), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** How we want the timeline to determine its own length (e.g. specified length, last keyframe) */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "How we want the timeline to determine its own length (e.g. specified length, last keyframe)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode = { "LengthMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, LengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode_MetaData)) }; // 2372454209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** If we want the timeline to auto-play */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to auto-play" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** If we want the timeline to loop */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to loop" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** If we want the timeline to loop */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to loop" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bReplicated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated = { "bReplicated", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "TimelineTemplate" },
		{ "Comment", "/** If we want the timeline to ignore global time dilation */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "If we want the timeline to ignore global time dilation" },
	};
#endif
	void Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((UTimelineTemplate*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTimelineTemplate), &Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_Inner = { "EventTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTTEventTrack, METADATA_PARAMS(nullptr, 0) }; // 3623567086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_MetaData[] = {
		{ "Comment", "/** Set of event tracks */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of event tracks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks = { "EventTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, EventTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_MetaData)) }; // 3623567086
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_Inner = { "FloatTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTTFloatTrack, METADATA_PARAMS(nullptr, 0) }; // 1230304853
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_MetaData[] = {
		{ "Comment", "/** Set of float interpolation tracks */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of float interpolation tracks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks = { "FloatTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, FloatTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_MetaData)) }; // 1230304853
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_Inner = { "VectorTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTTVectorTrack, METADATA_PARAMS(nullptr, 0) }; // 2023072729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_MetaData[] = {
		{ "Comment", "/** Set of vector interpolation tracks */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of vector interpolation tracks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks = { "VectorTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, VectorTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_MetaData)) }; // 2023072729
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_Inner = { "LinearColorTracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTTLinearColorTrack, METADATA_PARAMS(nullptr, 0) }; // 4069583791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_MetaData[] = {
		{ "Comment", "/** Set of linear color interpolation tracks */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Set of linear color interpolation tracks" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks = { "LinearColorTracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, LinearColorTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_MetaData)) }; // 4069583791
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_Inner = { "MetaDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBPVariableMetaDataEntry, METADATA_PARAMS(nullptr, 0) }; // 1650001395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_MetaData[] = {
		{ "Category", "BPVariableDescription" },
		{ "Comment", "/** Metadata information for this timeline */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Metadata information for this timeline" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray = { "MetaDataArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, MetaDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_MetaData)) }; // 1650001395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid = { "TimelineGuid", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, TimelineGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineTickGroup_MetaData[] = {
		{ "Comment", "/** Allow control of Timeline component TickGroup assignment via TimelineTemplates */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Allow control of Timeline component TickGroup assignment via TimelineTemplates" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineTickGroup = { "TimelineTickGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, TimelineTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineTickGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineTickGroup_MetaData)) }; // 4250878082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, VariableName), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName = { "DirectionPropertyName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, DirectionPropertyName), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName = { "UpdateFunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, UpdateFunctionName), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName = { "FinishedFunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, FinishedFunctionName), METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder_Inner = { "TrackDisplayOrder", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTTTrackId, METADATA_PARAMS(nullptr, 0) }; // 1243729643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder_MetaData[] = {
		{ "Comment", "/** Whether or not this track is expanded in the UI. */" },
		{ "ModuleRelativePath", "Classes/Engine/TimelineTemplate.h" },
		{ "ToolTip", "Whether or not this track is expanded in the UI." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder = { "TrackDisplayOrder", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTimelineTemplate, TrackDisplayOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder_MetaData)) }; // 1243729643
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LengthMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bReplicated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_bIgnoreTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_EventTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FloatTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VectorTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_LinearColorTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_MetaDataArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TimelineTickGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_DirectionPropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_UpdateFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_FinishedFunctionName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineTemplate_Statics::NewProp_TrackDisplayOrder,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimelineTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimelineTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimelineTemplate_Statics::ClassParams = {
		&UTimelineTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimelineTemplate()
	{
		if (!Z_Registration_Info_UClass_UTimelineTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimelineTemplate.OuterSingleton, Z_Construct_UClass_UTimelineTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimelineTemplate.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTimelineTemplate>()
	{
		return UTimelineTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimelineTemplate);
	UTimelineTemplate::~UTimelineTemplate() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTimelineTemplate)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics::ScriptStructInfo[] = {
		{ FTTTrackBase::StaticStruct, Z_Construct_UScriptStruct_FTTTrackBase_Statics::NewStructOps, TEXT("TTTrackBase"), &Z_Registration_Info_UScriptStruct_TTTrackBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTTrackBase), 3963146172U) },
		{ FTTTrackId::StaticStruct, Z_Construct_UScriptStruct_FTTTrackId_Statics::NewStructOps, TEXT("TTTrackId"), &Z_Registration_Info_UScriptStruct_TTTrackId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTTrackId), 1243729643U) },
		{ FTTEventTrack::StaticStruct, Z_Construct_UScriptStruct_FTTEventTrack_Statics::NewStructOps, TEXT("TTEventTrack"), &Z_Registration_Info_UScriptStruct_TTEventTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTEventTrack), 3623567086U) },
		{ FTTPropertyTrack::StaticStruct, Z_Construct_UScriptStruct_FTTPropertyTrack_Statics::NewStructOps, TEXT("TTPropertyTrack"), &Z_Registration_Info_UScriptStruct_TTPropertyTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTPropertyTrack), 3477890225U) },
		{ FTTFloatTrack::StaticStruct, Z_Construct_UScriptStruct_FTTFloatTrack_Statics::NewStructOps, TEXT("TTFloatTrack"), &Z_Registration_Info_UScriptStruct_TTFloatTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTFloatTrack), 1230304853U) },
		{ FTTVectorTrack::StaticStruct, Z_Construct_UScriptStruct_FTTVectorTrack_Statics::NewStructOps, TEXT("TTVectorTrack"), &Z_Registration_Info_UScriptStruct_TTVectorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTVectorTrack), 2023072729U) },
		{ FTTLinearColorTrack::StaticStruct, Z_Construct_UScriptStruct_FTTLinearColorTrack_Statics::NewStructOps, TEXT("TTLinearColorTrack"), &Z_Registration_Info_UScriptStruct_TTLinearColorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTTLinearColorTrack), 4069583791U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimelineTemplate, UTimelineTemplate::StaticClass, TEXT("UTimelineTemplate"), &Z_Registration_Info_UClass_UTimelineTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimelineTemplate), 3224007303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_3117722073(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TimelineTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
