// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraShared.h"
#include "NiagaraCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraShared() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableCommonReference();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource();
	NIAGARASHADER_API UFunction* Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileEvent();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata();
	UPackage* Z_Construct_UPackage__Script_NiagaraShader();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity;
	static UEnum* FNiagaraCompileEventSeverity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("FNiagaraCompileEventSeverity"));
		}
		return Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.OuterSingleton;
	}
	template<> NIAGARASHADER_API UEnum* StaticEnum<FNiagaraCompileEventSeverity>()
	{
		return FNiagaraCompileEventSeverity_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::Enumerators[] = {
		{ "FNiagaraCompileEventSeverity::Log", (int64)FNiagaraCompileEventSeverity::Log },
		{ "FNiagaraCompileEventSeverity::Display", (int64)FNiagaraCompileEventSeverity::Display },
		{ "FNiagaraCompileEventSeverity::Warning", (int64)FNiagaraCompileEventSeverity::Warning },
		{ "FNiagaraCompileEventSeverity::Error", (int64)FNiagaraCompileEventSeverity::Error },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines the compile event types for translation/compilation.*/" },
		{ "Display.Name", "FNiagaraCompileEventSeverity::Display" },
		{ "Error.Name", "FNiagaraCompileEventSeverity::Error" },
		{ "Log.Name", "FNiagaraCompileEventSeverity::Log" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Defines the compile event types for translation/compilation." },
		{ "Warning.Name", "FNiagaraCompileEventSeverity::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		"FNiagaraCompileEventSeverity",
		"FNiagaraCompileEventSeverity",
		Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity()
	{
		if (!Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.InnerSingleton, Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FNiagaraCompileEventSource;
	static UEnum* FNiagaraCompileEventSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FNiagaraCompileEventSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FNiagaraCompileEventSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("FNiagaraCompileEventSource"));
		}
		return Z_Registration_Info_UEnum_FNiagaraCompileEventSource.OuterSingleton;
	}
	template<> NIAGARASHADER_API UEnum* StaticEnum<FNiagaraCompileEventSource>()
	{
		return FNiagaraCompileEventSource_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::Enumerators[] = {
		{ "FNiagaraCompileEventSource::Unset", (int64)FNiagaraCompileEventSource::Unset },
		{ "FNiagaraCompileEventSource::ScriptDependency", (int64)FNiagaraCompileEventSource::ScriptDependency },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ScriptDependency.Comment", "// No specific source of compile event.\n" },
		{ "ScriptDependency.Name", "FNiagaraCompileEventSource::ScriptDependency" },
		{ "ScriptDependency.ToolTip", "No specific source of compile event." },
		{ "Unset.Name", "FNiagaraCompileEventSource::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		"FNiagaraCompileEventSource",
		"FNiagaraCompileEventSource",
		Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource()
	{
		if (!Z_Registration_Info_UEnum_FNiagaraCompileEventSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FNiagaraCompileEventSource.InnerSingleton, Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FNiagaraCompileEventSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCompileEvent;
class UScriptStruct* FNiagaraCompileEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileEvent, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraCompileEvent"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraCompileEvent>()
{
	return FNiagaraCompileEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Severity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Severity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShortDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDismissable_MetaData[];
#endif
		static void NewProp_bDismissable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDismissable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinGuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StackGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StackGuids;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Source_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Records necessary information to give UI cues for errors/logs/warnings during compile.*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Records necessary information to give UI cues for errors/logs/warnings during compile." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileEvent>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_MetaData[] = {
		{ "Comment", "/** Whether or not this is an error, warning, or info*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Whether or not this is an error, warning, or info" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileEvent, Severity), Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSeverity, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_MetaData)) }; // 3240911395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message_MetaData[] = {
		{ "Comment", "/** The message itself*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The message itself" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileEvent, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_ShortDescription_MetaData[] = {
		{ "Comment", "/** A short, optional description of the event. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "A short, optional description of the event." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_ShortDescription = { "ShortDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileEvent, ShortDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_ShortDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_ShortDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_bDismissable_MetaData[] = {
		{ "Comment", "/** Whether or not this event is dismissable or not */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Whether or not this event is dismissable or not" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_bDismissable_SetBit(void* Obj)
	{
		((FNiagaraCompileEvent*)Obj)->bDismissable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_bDismissable = { "bDismissable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraCompileEvent), &Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_bDismissable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_bDismissable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_bDismissable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "/** The node guid that generated the compile event*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The node guid that generated the compile event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileEvent, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid_MetaData[] = {
		{ "Comment", "/** The pin persistent id that generated the compile event*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The pin persistent id that generated the compile event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid = { "PinGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileEvent, PinGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_Inner = { "StackGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_MetaData[] = {
		{ "Comment", "/** The compile stack frame of node id's*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The compile stack frame of node id's" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids = { "StackGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileEvent, StackGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source_MetaData[] = {
		{ "Comment", "/** The source of the compile event for partial invalidation purposes. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The source of the compile event for partial invalidation purposes." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileEvent, Source), Z_Construct_UEnum_NiagaraShader_FNiagaraCompileEventSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source_MetaData)) }; // 1214931199
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Severity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_ShortDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_bDismissable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_NodeGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_PinGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_StackGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewProp_Source,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		&NewStructOps,
		"NiagaraCompileEvent",
		sizeof(FNiagaraCompileEvent),
		alignof(FNiagaraCompileEvent),
		Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraCompileEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction;
class UScriptStruct* FNiagaraDataInterfaceGeneratedFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraDataInterfaceGeneratedFunction"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraDataInterfaceGeneratedFunction>()
{
	return FNiagaraDataInterfaceGeneratedFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariadicInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariadicInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariadicInputs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariadicOutputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariadicOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariadicOutputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Information about a data interface function generated by the translator.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Information about a data interface function generated by the translator." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceGeneratedFunction>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs_Inner = { "VariadicInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableCommonReference, METADATA_PARAMS(nullptr, 0) }; // 2674908012
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs = { "VariadicInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataInterfaceGeneratedFunction, VariadicInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs_MetaData)) }; // 2674908012
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs_Inner = { "VariadicOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableCommonReference, METADATA_PARAMS(nullptr, 0) }; // 2674908012
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs = { "VariadicOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataInterfaceGeneratedFunction, VariadicOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs_MetaData)) }; // 2674908012
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewProp_VariadicOutputs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		&NewStructOps,
		"NiagaraDataInterfaceGeneratedFunction",
		sizeof(FNiagaraDataInterfaceGeneratedFunction),
		alignof(FNiagaraDataInterfaceGeneratedFunction),
		Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo;
class UScriptStruct* FNiagaraDataInterfaceGPUParamInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraDataInterfaceGPUParamInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraDataInterfaceGPUParamInfo>()
{
	return FNiagaraDataInterfaceGPUParamInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceHLSLSymbol_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataInterfaceHLSLSymbol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DIClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DIClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShaderParametersOffset_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShaderParametersOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeneratedFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedFunctions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Data coming from that translator that describes parameters needed for each data interface.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Data coming from that translator that describes parameters needed for each data interface." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataInterfaceGPUParamInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol_MetaData[] = {
		{ "Comment", "/** Symbol of this DI in the hlsl. Used for binding parameters. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Symbol of this DI in the hlsl. Used for binding parameters." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol = { "DataInterfaceHLSLSymbol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName_MetaData[] = {
		{ "Comment", "/** Name of the class for this data interface. Used for constructing the correct parameters struct. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Name of the class for this data interface. Used for constructing the correct parameters struct." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName = { "DIClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, DIClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_ShaderParametersOffset_MetaData[] = {
		{ "Comment", "/** The offset for any shader parameters, when this member is INDEX_NONE we are in legacy mode for the data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "The offset for any shader parameters, when this member is INDEX_NONE we are in legacy mode for the data interface." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_ShaderParametersOffset = { "ShaderParametersOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, ShaderParametersOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_ShaderParametersOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_ShaderParametersOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_Inner = { "GeneratedFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction, METADATA_PARAMS(nullptr, 0) }; // 2959031710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_MetaData[] = {
		{ "Comment", "/** Information about all the functions generated by the translator for this data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Information about all the functions generated by the translator for this data interface." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions = { "GeneratedFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_MetaData)) }; // 2959031710
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DataInterfaceHLSLSymbol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_DIClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_ShaderParametersOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewProp_GeneratedFunctions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		&NewStructOps,
		"NiagaraDataInterfaceGPUParamInfo",
		sizeof(FNiagaraDataInterfaceGPUParamInfo),
		alignof(FNiagaraDataInterfaceGPUParamInfo),
		Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant;
class UScriptStruct* FNiagaraShaderScriptExternalConstant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraShaderScriptExternalConstant"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraShaderScriptExternalConstant>()
{
	return FNiagaraShaderScriptExternalConstant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraShaderScriptExternalConstant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraShaderScriptExternalConstant, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraShaderScriptExternalConstant, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		&NewStructOps,
		"NiagaraShaderScriptExternalConstant",
		sizeof(FNiagaraShaderScriptExternalConstant),
		alignof(FNiagaraShaderScriptExternalConstant),
		Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata;
class UScriptStruct* FNiagaraShaderScriptParametersMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("NiagaraShaderScriptParametersMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FNiagaraShaderScriptParametersMetadata>()
{
	return FNiagaraShaderScriptParametersMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataInterfaceParamInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceParamInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataInterfaceParamInfo;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LooseMetadataNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LooseMetadataNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LooseMetadataNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExternalConstantsInterpolated_MetaData[];
#endif
		static void NewProp_bExternalConstantsInterpolated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExternalConstantsInterpolated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalConstants_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalConstants_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalConstants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Data provided from the translator to track information requires to bind data interface or parameters at runtime. */" },
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
		{ "ToolTip", "Data provided from the translator to track information requires to bind data interface or parameters at runtime." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraShaderScriptParametersMetadata>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo_Inner = { "DataInterfaceParamInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo, METADATA_PARAMS(nullptr, 0) }; // 553188790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo = { "DataInterfaceParamInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraShaderScriptParametersMetadata, DataInterfaceParamInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo_MetaData)) }; // 553188790
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames_Inner = { "LooseMetadataNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames = { "LooseMetadataNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraShaderScriptParametersMetadata, LooseMetadataNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated_SetBit(void* Obj)
	{
		((FNiagaraShaderScriptParametersMetadata*)Obj)->bExternalConstantsInterpolated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated = { "bExternalConstantsInterpolated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraShaderScriptParametersMetadata), &Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants_Inner = { "ExternalConstants", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant, METADATA_PARAMS(nullptr, 0) }; // 1424204719
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants = { "ExternalConstants", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraShaderScriptParametersMetadata, ExternalConstants), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants_MetaData)) }; // 1424204719
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_DataInterfaceParamInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_LooseMetadataNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_bExternalConstantsInterpolated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewProp_ExternalConstants,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		&NewStructOps,
		"NiagaraShaderScriptParametersMetadata",
		sizeof(FNiagaraShaderScriptParametersMetadata),
		alignof(FNiagaraShaderScriptParametersMetadata),
		Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraShared.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader, nullptr, "OnNiagaraScriptCompilationComplete__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NiagaraShader_OnNiagaraScriptCompilationComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNiagaraScriptCompilationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnNiagaraScriptCompilationComplete)
{
	OnNiagaraScriptCompilationComplete.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics::EnumInfo[] = {
		{ FNiagaraCompileEventSeverity_StaticEnum, TEXT("FNiagaraCompileEventSeverity"), &Z_Registration_Info_UEnum_FNiagaraCompileEventSeverity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3240911395U) },
		{ FNiagaraCompileEventSource_StaticEnum, TEXT("FNiagaraCompileEventSource"), &Z_Registration_Info_UEnum_FNiagaraCompileEventSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1214931199U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraCompileEvent::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics::NewStructOps, TEXT("NiagaraCompileEvent"), &Z_Registration_Info_UScriptStruct_NiagaraCompileEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCompileEvent), 1933586685U) },
		{ FNiagaraDataInterfaceGeneratedFunction::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics::NewStructOps, TEXT("NiagaraDataInterfaceGeneratedFunction"), &Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGeneratedFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataInterfaceGeneratedFunction), 2959031710U) },
		{ FNiagaraDataInterfaceGPUParamInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics::NewStructOps, TEXT("NiagaraDataInterfaceGPUParamInfo"), &Z_Registration_Info_UScriptStruct_NiagaraDataInterfaceGPUParamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataInterfaceGPUParamInfo), 553188790U) },
		{ FNiagaraShaderScriptExternalConstant::StaticStruct, Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant_Statics::NewStructOps, TEXT("NiagaraShaderScriptExternalConstant"), &Z_Registration_Info_UScriptStruct_NiagaraShaderScriptExternalConstant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraShaderScriptExternalConstant), 1424204719U) },
		{ FNiagaraShaderScriptParametersMetadata::StaticStruct, Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata_Statics::NewStructOps, TEXT("NiagaraShaderScriptParametersMetadata"), &Z_Registration_Info_UScriptStruct_NiagaraShaderScriptParametersMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraShaderScriptParametersMetadata), 2227102801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_2195325921(TEXT("/Script/NiagaraShader"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
