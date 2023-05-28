// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneDMXLibrarySection.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Library/DMXEntityReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDMXLibrarySection() {}
// Cross Module References
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UMovieSceneDMXLibrarySection();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UMovieSceneDMXLibrarySection_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXFixturePatchChannel();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXFixtureFunctionChannel;
class UScriptStruct* FDMXFixtureFunctionChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXFixtureFunctionChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXFixtureFunctionChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXFixtureFunctionChannel"));
	}
	return Z_Registration_Info_UScriptStruct_DMXFixtureFunctionChannel.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXFixtureFunctionChannel>()
{
	return FDMXFixtureFunctionChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXFixtureFunctionChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_Channel_MetaData[] = {
		{ "Comment", "/** Function animation curve. */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Function animation curve." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureFunctionChannel, Channel), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_Channel_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "/** Default value to use when this Function is disabled in the track. */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Default value to use when this Function is disabled in the track." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixtureFunctionChannel, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether or not to display this Function in the Patch's group\n\x09 * If false, the Function's default value is sent to DMX protocols.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Whether or not to display this Function in the Patch's group\nIf false, the Function's default value is sent to DMX protocols." },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FDMXFixtureFunctionChannel*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDMXFixtureFunctionChannel), &Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXFixtureFunctionChannel",
		sizeof(FDMXFixtureFunctionChannel),
		alignof(FDMXFixtureFunctionChannel),
		Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXFixtureFunctionChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXFixtureFunctionChannel.InnerSingleton, Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXFixtureFunctionChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXFixturePatchChannel;
class UScriptStruct* FDMXFixturePatchChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXFixturePatchChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXFixturePatchChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXFixturePatchChannel, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXFixturePatchChannel"));
	}
	return Z_Registration_Info_UScriptStruct_DMXFixturePatchChannel.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXFixturePatchChannel>()
{
	return FDMXFixturePatchChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Reference;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXFixturePatchChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "Comment", "/** The outer library of the channel */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "The outer library of the channel" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixturePatchChannel, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_DMXLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_Reference_MetaData[] = {
		{ "Comment", "/** Points to the Fixture Patch */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Points to the Fixture Patch" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixturePatchChannel, Reference), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_Reference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_Reference_MetaData)) }; // 1707509301
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_FunctionChannels_Inner = { "FunctionChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel, METADATA_PARAMS(nullptr, 0) }; // 1688122306
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_FunctionChannels_MetaData[] = {
		{ "Comment", "/** Fixture function float channels */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Fixture function float channels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_FunctionChannels = { "FunctionChannels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixturePatchChannel, FunctionChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_FunctionChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_FunctionChannels_MetaData)) }; // 1688122306
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_ActiveMode_MetaData[] = {
		{ "Comment", "/**\n\x09 * Allows Sequencer to animate the fixture using a mode and not have it break\n\x09 * simply by the user changing the active mode in the DMX Library.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Allows Sequencer to animate the fixture using a mode and not have it break\nsimply by the user changing the active mode in the DMX Library." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_ActiveMode = { "ActiveMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXFixturePatchChannel, ActiveMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_ActiveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_ActiveMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_Reference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_FunctionChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_FunctionChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewProp_ActiveMode,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXFixturePatchChannel",
		sizeof(FDMXFixturePatchChannel),
		alignof(FDMXFixturePatchChannel),
		Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXFixturePatchChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXFixturePatchChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXFixturePatchChannel.InnerSingleton, Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXFixturePatchChannel.InnerSingleton;
	}
	DEFINE_FUNCTION(UMovieSceneDMXLibrarySection::execGetNumPatches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumPatches();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDMXLibrarySection::execGetFixturePatches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDMXEntityFixturePatch*>*)Z_Param__Result=P_THIS->GetFixturePatches();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDMXLibrarySection::execGetFixturePatchChannelEnabled)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InPatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFixturePatchChannelEnabled(Z_Param_InPatch,Z_Param_InChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDMXLibrarySection::execToggleFixturePatchChannel)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InPatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChannelIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleFixturePatchChannel(Z_Param_InPatch,Z_Param_InChannelIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDMXLibrarySection::execSetFixturePatchActiveMode)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InPatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_InActiveMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFixturePatchActiveMode(Z_Param_InPatch,Z_Param_InActiveMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDMXLibrarySection::execContainsFixturePatch)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InPatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ContainsFixturePatch(Z_Param_InPatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDMXLibrarySection::execRemoveFixturePatch)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InPatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFixturePatch(Z_Param_InPatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDMXLibrarySection::execAddFixturePatches)
	{
		P_GET_TARRAY_REF(FDMXEntityFixturePatchRef,Z_Param_Out_InFixturePatchRefs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFixturePatches(Z_Param_Out_InFixturePatchRefs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMovieSceneDMXLibrarySection::execAddFixturePatch)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InPatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFixturePatch(Z_Param_InPatch);
		P_NATIVE_END;
	}
	void UMovieSceneDMXLibrarySection::StaticRegisterNativesUMovieSceneDMXLibrarySection()
	{
		UClass* Class = UMovieSceneDMXLibrarySection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFixturePatch", &UMovieSceneDMXLibrarySection::execAddFixturePatch },
			{ "AddFixturePatches", &UMovieSceneDMXLibrarySection::execAddFixturePatches },
			{ "ContainsFixturePatch", &UMovieSceneDMXLibrarySection::execContainsFixturePatch },
			{ "GetFixturePatchChannelEnabled", &UMovieSceneDMXLibrarySection::execGetFixturePatchChannelEnabled },
			{ "GetFixturePatches", &UMovieSceneDMXLibrarySection::execGetFixturePatches },
			{ "GetNumPatches", &UMovieSceneDMXLibrarySection::execGetNumPatches },
			{ "RemoveFixturePatch", &UMovieSceneDMXLibrarySection::execRemoveFixturePatch },
			{ "SetFixturePatchActiveMode", &UMovieSceneDMXLibrarySection::execSetFixturePatchActiveMode },
			{ "ToggleFixturePatchChannel", &UMovieSceneDMXLibrarySection::execToggleFixturePatchChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics
	{
		struct MovieSceneDMXLibrarySection_eventAddFixturePatch_Parms
		{
			UDMXEntityFixturePatch* InPatch;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::NewProp_InPatch = { "InPatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventAddFixturePatch_Parms, InPatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::NewProp_InPatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Scene" },
		{ "Comment", "/** Adds a single patch to the section */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Adds a single patch to the section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDMXLibrarySection, nullptr, "AddFixturePatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::MovieSceneDMXLibrarySection_eventAddFixturePatch_Parms), Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics
	{
		struct MovieSceneDMXLibrarySection_eventAddFixturePatches_Parms
		{
			TArray<FDMXEntityFixturePatchRef> InFixturePatchRefs;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFixturePatchRefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFixturePatchRefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InFixturePatchRefs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::NewProp_InFixturePatchRefs_Inner = { "InFixturePatchRefs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(nullptr, 0) }; // 1707509301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::NewProp_InFixturePatchRefs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::NewProp_InFixturePatchRefs = { "InFixturePatchRefs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventAddFixturePatches_Parms, InFixturePatchRefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::NewProp_InFixturePatchRefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::NewProp_InFixturePatchRefs_MetaData)) }; // 1707509301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::NewProp_InFixturePatchRefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::NewProp_InFixturePatchRefs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Adds all patches to the secion */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Adds all patches to the secion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDMXLibrarySection, nullptr, "AddFixturePatches", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::MovieSceneDMXLibrarySection_eventAddFixturePatches_Parms), Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics
	{
		struct MovieSceneDMXLibrarySection_eventContainsFixturePatch_Parms
		{
			UDMXEntityFixturePatch* InPatch;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPatch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::NewProp_InPatch = { "InPatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventContainsFixturePatch_Parms, InPatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneDMXLibrarySection_eventContainsFixturePatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneDMXLibrarySection_eventContainsFixturePatch_Parms), &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::NewProp_InPatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Check if this Section animates a Fixture Patch's Functions */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Check if this Section animates a Fixture Patch's Functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDMXLibrarySection, nullptr, "ContainsFixturePatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::MovieSceneDMXLibrarySection_eventContainsFixturePatch_Parms), Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics
	{
		struct MovieSceneDMXLibrarySection_eventGetFixturePatchChannelEnabled_Parms
		{
			UDMXEntityFixturePatch* InPatch;
			int32 InChannelIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPatch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InChannelIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::NewProp_InPatch = { "InPatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventGetFixturePatchChannelEnabled_Parms, InPatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::NewProp_InChannelIndex = { "InChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventGetFixturePatchChannelEnabled_Parms, InChannelIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MovieSceneDMXLibrarySection_eventGetFixturePatchChannelEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MovieSceneDMXLibrarySection_eventGetFixturePatchChannelEnabled_Parms), &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::NewProp_InPatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::NewProp_InChannelIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Returns whether a Fixture Patch's Function curve channel is currently enabled */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Returns whether a Fixture Patch's Function curve channel is currently enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDMXLibrarySection, nullptr, "GetFixturePatchChannelEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::MovieSceneDMXLibrarySection_eventGetFixturePatchChannelEnabled_Parms), Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics
	{
		struct MovieSceneDMXLibrarySection_eventGetFixturePatches_Parms
		{
			TArray<UDMXEntityFixturePatch*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventGetFixturePatches_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Get a list of the Fixture Patches being animated by this Section */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Get a list of the Fixture Patches being animated by this Section" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDMXLibrarySection, nullptr, "GetFixturePatches", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::MovieSceneDMXLibrarySection_eventGetFixturePatches_Parms), Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics
	{
		struct MovieSceneDMXLibrarySection_eventGetNumPatches_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventGetNumPatches_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Get the list of animated Fixture Patches and their curve channels */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Get the list of animated Fixture Patches and their curve channels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDMXLibrarySection, nullptr, "GetNumPatches", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::MovieSceneDMXLibrarySection_eventGetNumPatches_Parms), Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics
	{
		struct MovieSceneDMXLibrarySection_eventRemoveFixturePatch_Parms
		{
			UDMXEntityFixturePatch* InPatch;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::NewProp_InPatch = { "InPatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventRemoveFixturePatch_Parms, InPatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::NewProp_InPatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Remove all Functions of a Fixture Patch */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Remove all Functions of a Fixture Patch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDMXLibrarySection, nullptr, "RemoveFixturePatch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::MovieSceneDMXLibrarySection_eventRemoveFixturePatch_Parms), Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics
	{
		struct MovieSceneDMXLibrarySection_eventSetFixturePatchActiveMode_Parms
		{
			UDMXEntityFixturePatch* InPatch;
			int32 InActiveMode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPatch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InActiveMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::NewProp_InPatch = { "InPatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventSetFixturePatchActiveMode_Parms, InPatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::NewProp_InActiveMode = { "InActiveMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventSetFixturePatchActiveMode_Parms, InActiveMode), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::NewProp_InPatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::NewProp_InActiveMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/** Sets the active mode for a Fixture Patch */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Sets the active mode for a Fixture Patch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDMXLibrarySection, nullptr, "SetFixturePatchActiveMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::MovieSceneDMXLibrarySection_eventSetFixturePatchActiveMode_Parms), Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics
	{
		struct MovieSceneDMXLibrarySection_eventToggleFixturePatchChannel_Parms
		{
			UDMXEntityFixturePatch* InPatch;
			int32 InChannelIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPatch;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InChannelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::NewProp_InPatch = { "InPatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventToggleFixturePatchChannel_Parms, InPatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::NewProp_InChannelIndex = { "InChannelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MovieSceneDMXLibrarySection_eventToggleFixturePatchChannel_Parms, InChannelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::NewProp_InPatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::NewProp_InChannelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer|Section" },
		{ "Comment", "/**\n\x09 * Toggle the visibility and evaluation of a Fixture Patch's Function.\n\x09 * When invisible, the Function won't send its data to DMX Protocol.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "Toggle the visibility and evaluation of a Fixture Patch's Function.\nWhen invisible, the Function won't send its data to DMX Protocol." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMovieSceneDMXLibrarySection, nullptr, "ToggleFixturePatchChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::MovieSceneDMXLibrarySection_eventToggleFixturePatchChannel_Parms), Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDMXLibrarySection);
	UClass* Z_Construct_UClass_UMovieSceneDMXLibrarySection_NoRegister()
	{
		return UMovieSceneDMXLibrarySection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNormalizedValues_MetaData[];
#endif
		static void NewProp_bUseNormalizedValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNormalizedValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatchChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FixturePatchChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatch, "AddFixturePatch" }, // 1857603979
		{ &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_AddFixturePatches, "AddFixturePatches" }, // 750543444
		{ &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ContainsFixturePatch, "ContainsFixturePatch" }, // 1469174263
		{ &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatchChannelEnabled, "GetFixturePatchChannelEnabled" }, // 3591274470
		{ &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetFixturePatches, "GetFixturePatches" }, // 339126915
		{ &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_GetNumPatches, "GetNumPatches" }, // 1522593084
		{ &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_RemoveFixturePatch, "RemoveFixturePatch" }, // 2652833151
		{ &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_SetFixturePatchActiveMode, "SetFixturePatchActiveMode" }, // 2377313471
		{ &Z_Construct_UFunction_UMovieSceneDMXLibrarySection_ToggleFixturePatchChannel, "ToggleFixturePatchChannel" }, // 2965914465
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A DMX Fixture Patch section */" },
		{ "IncludePath", "Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "A DMX Fixture Patch section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_bUseNormalizedValues_MetaData[] = {
		{ "Category", "Movie Scene" },
		{ "Comment", "/** \n\x09 * If true, all values are interpreted as normalized values (0.0 to 1.0) \n\x09 * and are mapped to the actual value range of a patch automatically. \n\x09 * \n\x09 * If false, values are interpreted as absolute values, depending on the data type of a patch:\n\x09 * 0-255 for 8bit, 0-65'536 for 16bit, 0-16'777'215 for 24bit. 32bit is not fully supported in this mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "If true, all values are interpreted as normalized values (0.0 to 1.0)\nand are mapped to the actual value range of a patch automatically.\n\nIf false, values are interpreted as absolute values, depending on the data type of a patch:\n0-255 for 8bit, 0-65'536 for 16bit, 0-16'777'215 for 24bit. 32bit is not fully supported in this mode." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_bUseNormalizedValues_SetBit(void* Obj)
	{
		((UMovieSceneDMXLibrarySection*)Obj)->bUseNormalizedValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_bUseNormalizedValues = { "bUseNormalizedValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneDMXLibrarySection), &Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_bUseNormalizedValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_bUseNormalizedValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_bUseNormalizedValues_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_FixturePatchChannels_Inner = { "FixturePatchChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXFixturePatchChannel, METADATA_PARAMS(nullptr, 0) }; // 3618680992
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_FixturePatchChannels_MetaData[] = {
		{ "Comment", "/** The Fixture Patches being controlled by this section and their respective chosen mode */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibrarySection.h" },
		{ "ToolTip", "The Fixture Patches being controlled by this section and their respective chosen mode" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_FixturePatchChannels = { "FixturePatchChannels", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDMXLibrarySection, FixturePatchChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_FixturePatchChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_FixturePatchChannels_MetaData)) }; // 3618680992
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_bUseNormalizedValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_FixturePatchChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::NewProp_FixturePatchChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDMXLibrarySection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::ClassParams = {
		&UMovieSceneDMXLibrarySection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDMXLibrarySection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDMXLibrarySection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDMXLibrarySection.OuterSingleton, Z_Construct_UClass_UMovieSceneDMXLibrarySection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDMXLibrarySection.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UMovieSceneDMXLibrarySection>()
	{
		return UMovieSceneDMXLibrarySection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDMXLibrarySection);
	UMovieSceneDMXLibrarySection::~UMovieSceneDMXLibrarySection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneDMXLibrarySection)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_Statics::ScriptStructInfo[] = {
		{ FDMXFixtureFunctionChannel::StaticStruct, Z_Construct_UScriptStruct_FDMXFixtureFunctionChannel_Statics::NewStructOps, TEXT("DMXFixtureFunctionChannel"), &Z_Registration_Info_UScriptStruct_DMXFixtureFunctionChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXFixtureFunctionChannel), 1688122306U) },
		{ FDMXFixturePatchChannel::StaticStruct, Z_Construct_UScriptStruct_FDMXFixturePatchChannel_Statics::NewStructOps, TEXT("DMXFixturePatchChannel"), &Z_Registration_Info_UScriptStruct_DMXFixturePatchChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXFixturePatchChannel), 3618680992U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDMXLibrarySection, UMovieSceneDMXLibrarySection::StaticClass, TEXT("UMovieSceneDMXLibrarySection"), &Z_Registration_Info_UClass_UMovieSceneDMXLibrarySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDMXLibrarySection), 4249110430U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_1104577039(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibrarySection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
