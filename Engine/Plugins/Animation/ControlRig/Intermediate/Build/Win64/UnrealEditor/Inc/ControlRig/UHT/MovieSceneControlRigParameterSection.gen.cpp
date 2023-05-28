// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneControlRigParameterSection.h"
#include "Channels/MovieSceneByteChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneIntegerChannel.h"
#include "ConstraintChannel.h"
#include "Sections/MovieScene3DTransformSection.h"
#include "Sequencer/MovieSceneControlRigSpaceChannel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigParameterSection() {}
// Cross Module References
	CONSTRAINTS_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintAndActiveChannel();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterSection();
	CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterSection_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FChannelMapInfo();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FEnumParameterNameAndCurve();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FSpaceControlNameAndChannel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneIntegerChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSection();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve;
class UScriptStruct* FEnumParameterNameAndCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EnumParameterNameAndCurve"));
	}
	return Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FEnumParameterNameAndCurve>()
{
	return FEnumParameterNameAndCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumParameterNameAndCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumParameterNameAndCurve, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterCurve = { "ParameterCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumParameterNameAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData)) }; // 3302488198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewProp_ParameterCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"EnumParameterNameAndCurve",
		sizeof(FEnumParameterNameAndCurve),
		alignof(FEnumParameterNameAndCurve),
		Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumParameterNameAndCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.InnerSingleton, Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve;
class UScriptStruct* FIntegerParameterNameAndCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("IntegerParameterNameAndCurve"));
	}
	return Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FIntegerParameterNameAndCurve>()
{
	return FIntegerParameterNameAndCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntegerParameterNameAndCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntegerParameterNameAndCurve, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterCurve = { "ParameterCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntegerParameterNameAndCurve, ParameterCurve), Z_Construct_UScriptStruct_FMovieSceneIntegerChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterCurve_MetaData)) }; // 2921625975
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewProp_ParameterCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"IntegerParameterNameAndCurve",
		sizeof(FIntegerParameterNameAndCurve),
		alignof(FIntegerParameterNameAndCurve),
		Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.InnerSingleton, Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel;
class UScriptStruct* FSpaceControlNameAndChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("SpaceControlNameAndChannel"));
	}
	return Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FSpaceControlNameAndChannel>()
{
	return FSpaceControlNameAndChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpaceControlNameAndChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_ControlName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpaceControlNameAndChannel, ControlName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_ControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_ControlName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_SpaceCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_SpaceCurve = { "SpaceCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpaceControlNameAndChannel, SpaceCurve), Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_SpaceCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_SpaceCurve_MetaData)) }; // 695891447
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewProp_SpaceCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"SpaceControlNameAndChannel",
		sizeof(FSpaceControlNameAndChannel),
		alignof(FSpaceControlNameAndChannel),
		Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpaceControlNameAndChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.InnerSingleton, Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChannelMapInfo;
class UScriptStruct* FChannelMapInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChannelMapInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChannelMapInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChannelMapInfo, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ChannelMapInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ChannelMapInfo.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FChannelMapInfo>()
{
	return FChannelMapInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChannelMapInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ControlIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalChannelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentControlIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentControlIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelTypeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoesHaveSpace_MetaData[];
#endif
		static void NewProp_bDoesHaveSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoesHaveSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceChannelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpaceChannelIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaskIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CategoryIndex;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConstraintsIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintsIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintsIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChannelMapInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ControlIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ControlIndex = { "ControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelMapInfo, ControlIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ControlIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ControlIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_TotalChannelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_TotalChannelIndex = { "TotalChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelMapInfo, TotalChannelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_TotalChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_TotalChannelIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelIndex = { "ChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelMapInfo, ChannelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ParentControlIndex_MetaData[] = {
		{ "Comment", "//channel index for it's type.. (e.g  float, int, bool).\n" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "channel index for it's type.. (e.g  float, int, bool)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ParentControlIndex = { "ParentControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelMapInfo, ParentControlIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ParentControlIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ParentControlIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelTypeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelTypeName = { "ChannelTypeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelMapInfo, ChannelTypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelTypeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace_SetBit(void* Obj)
	{
		((FChannelMapInfo*)Obj)->bDoesHaveSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace = { "bDoesHaveSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FChannelMapInfo), &Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_SpaceChannelIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_SpaceChannelIndex = { "SpaceChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelMapInfo, SpaceChannelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_SpaceChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_SpaceChannelIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_MaskIndex_MetaData[] = {
		{ "Comment", "//if it has space what's the space channel index\n" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "if it has space what's the space channel index" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_MaskIndex = { "MaskIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelMapInfo, MaskIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_MaskIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_MaskIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_CategoryIndex_MetaData[] = {
		{ "Comment", "//index for the mask\n" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "index for the mask" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_CategoryIndex = { "CategoryIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelMapInfo, CategoryIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_CategoryIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_CategoryIndex_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex_Inner = { "ConstraintsIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex_MetaData[] = {
		{ "Comment", "//temp index set by the ControlRigParameterTrack, not saved\n" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "temp index set by the ControlRigParameterTrack, not saved" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex = { "ConstraintsIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChannelMapInfo, ConstraintsIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChannelMapInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ControlIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_TotalChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ParentControlIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ChannelTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_bDoesHaveSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_SpaceChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_MaskIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_CategoryIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewProp_ConstraintsIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChannelMapInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ChannelMapInfo",
		sizeof(FChannelMapInfo),
		alignof(FChannelMapInfo),
		Z_Construct_UScriptStruct_FChannelMapInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChannelMapInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChannelMapInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ChannelMapInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChannelMapInfo.InnerSingleton, Z_Construct_UScriptStruct_FChannelMapInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChannelMapInfo.InnerSingleton;
	}
	void UMovieSceneControlRigParameterSection::StaticRegisterNativesUMovieSceneControlRigParameterSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneControlRigParameterSection);
	UClass* Z_Construct_UClass_UMovieSceneControlRigParameterSection_NoRegister()
	{
		return UMovieSceneControlRigParameterSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlRig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ControlRigClass;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ControlsMask_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlsMask_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlsMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlChannelMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlChannelMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlChannelMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlChannelMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnumParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumParameterNamesAndCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnumParameterNamesAndCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntegerParameterNamesAndCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerParameterNamesAndCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntegerParameterNamesAndCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpaceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpaceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpaceChannels;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintsChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintsChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintsChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneParameterSection,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Movie scene section that controls animation controller animation\n */" },
		{ "IncludePath", "Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Movie scene section that controls animation controller animation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRig_MetaData[] = {
		{ "Comment", "/** Control Rig that controls us*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Control Rig that controls us" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRigClass_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** The class of control rig to instantiate */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "The class of control rig to instantiate" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRigClass = { "ControlRigClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, ControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRigClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRigClass_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask_Inner = { "ControlsMask", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask_MetaData[] = {
		{ "Comment", "/** Mask for controls themselves*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Mask for controls themselves" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask = { "ControlsMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, ControlsMask), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_TransformMask_MetaData[] = {
		{ "Comment", "/** Mask for Transform Mask*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Mask for Transform Mask" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_TransformMask = { "TransformMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, TransformMask), Z_Construct_UScriptStruct_FMovieSceneTransformMask, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_TransformMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_TransformMask_MetaData)) }; // 2423217134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_Weight_MetaData[] = {
		{ "Comment", "/** The weight curve for this animation controller section */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "The weight curve for this animation controller section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, Weight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_Weight_MetaData)) }; // 3942748414
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_ValueProp = { "ControlChannelMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FChannelMapInfo, METADATA_PARAMS(nullptr, 0) }; // 1820979150
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_Key_KeyProp = { "ControlChannelMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_MetaData[] = {
		{ "Comment", "/** Map from the control name to where it starts as a channel*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Map from the control name to where it starts as a channel" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap = { "ControlChannelMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, ControlChannelMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_MetaData)) }; // 1820979150
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves_Inner = { "EnumParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEnumParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) }; // 3644975941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/** Enum Curves*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Enum Curves" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves = { "EnumParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, EnumParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves_MetaData)) }; // 3644975941
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves_Inner = { "IntegerParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve, METADATA_PARAMS(nullptr, 0) }; // 1243810027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves_MetaData[] = {
		{ "Comment", "/*Integer Curves*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Integer Curves" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves = { "IntegerParameterNamesAndCurves", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, IntegerParameterNamesAndCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves_MetaData)) }; // 1243810027
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels_Inner = { "SpaceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpaceControlNameAndChannel, METADATA_PARAMS(nullptr, 0) }; // 3218983784
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels_MetaData[] = {
		{ "Comment", "/** Space Channels*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Space Channels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels = { "SpaceChannels", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, SpaceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels_MetaData)) }; // 3218983784
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels_Inner = { "ConstraintsChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConstraintAndActiveChannel, METADATA_PARAMS(nullptr, 0) }; // 1158857121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels_MetaData[] = {
		{ "Comment", "/** Space Channels*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterSection.h" },
		{ "ToolTip", "Space Channels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels = { "ConstraintsChannels", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterSection, ConstraintsChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels_MetaData)) }; // 1158857121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlRigClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlsMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_TransformMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ControlChannelMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_EnumParameterNamesAndCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_IntegerParameterNamesAndCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_SpaceChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::NewProp_ConstraintsChannels,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneControlRigParameterSection, IMovieSceneConstrainedSection), false },  // 2356854711
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneControlRigParameterSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::ClassParams = {
		&UMovieSceneControlRigParameterSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneControlRigParameterSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.OuterSingleton, Z_Construct_UClass_UMovieSceneControlRigParameterSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UMovieSceneControlRigParameterSection>()
	{
		return UMovieSceneControlRigParameterSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneControlRigParameterSection);
	UMovieSceneControlRigParameterSection::~UMovieSceneControlRigParameterSection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneControlRigParameterSection)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics::ScriptStructInfo[] = {
		{ FEnumParameterNameAndCurve::StaticStruct, Z_Construct_UScriptStruct_FEnumParameterNameAndCurve_Statics::NewStructOps, TEXT("EnumParameterNameAndCurve"), &Z_Registration_Info_UScriptStruct_EnumParameterNameAndCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumParameterNameAndCurve), 3644975941U) },
		{ FIntegerParameterNameAndCurve::StaticStruct, Z_Construct_UScriptStruct_FIntegerParameterNameAndCurve_Statics::NewStructOps, TEXT("IntegerParameterNameAndCurve"), &Z_Registration_Info_UScriptStruct_IntegerParameterNameAndCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntegerParameterNameAndCurve), 1243810027U) },
		{ FSpaceControlNameAndChannel::StaticStruct, Z_Construct_UScriptStruct_FSpaceControlNameAndChannel_Statics::NewStructOps, TEXT("SpaceControlNameAndChannel"), &Z_Registration_Info_UScriptStruct_SpaceControlNameAndChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpaceControlNameAndChannel), 3218983784U) },
		{ FChannelMapInfo::StaticStruct, Z_Construct_UScriptStruct_FChannelMapInfo_Statics::NewStructOps, TEXT("ChannelMapInfo"), &Z_Registration_Info_UScriptStruct_ChannelMapInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChannelMapInfo), 1820979150U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneControlRigParameterSection, UMovieSceneControlRigParameterSection::StaticClass, TEXT("UMovieSceneControlRigParameterSection"), &Z_Registration_Info_UClass_UMovieSceneControlRigParameterSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneControlRigParameterSection), 1631423549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_422133202(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
