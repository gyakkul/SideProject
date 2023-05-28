// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeCompilerLog.h"
#include "StateTreePropertyBindings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeCompilerLog() {}
// Cross Module References
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeState_NoRegister();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCompilerLog();
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBindableStructDesc();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeCompilerLogMessage;
class UScriptStruct* FStateTreeCompilerLogMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeCompilerLogMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeCompilerLogMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("StateTreeCompilerLogMessage"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeCompilerLogMessage.OuterSingleton;
}
template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<FStateTreeCompilerLogMessage>()
{
	return FStateTreeCompilerLogMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Severity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Severity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_State;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** StateTree compiler log message */" },
		{ "ModuleRelativePath", "Public/StateTreeCompilerLog.h" },
		{ "ToolTip", "StateTree compiler log message" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeCompilerLogMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Severity_MetaData[] = {
		{ "Comment", "/** Severity of the message. */" },
		{ "ModuleRelativePath", "Public/StateTreeCompilerLog.h" },
		{ "ToolTip", "Severity of the message." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Severity = { "Severity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeCompilerLogMessage, Severity), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Severity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Severity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/** (optional) The StateTree state the message refers to. */" },
		{ "ModuleRelativePath", "Public/StateTreeCompilerLog.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "(optional) The StateTree state the message refers to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeCompilerLogMessage, State), Z_Construct_UClass_UStateTreeState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Item_MetaData[] = {
		{ "Comment", "/** (optional) The State tee item (condition/evaluator/task) the message refers to. */" },
		{ "ModuleRelativePath", "Public/StateTreeCompilerLog.h" },
		{ "ToolTip", "(optional) The State tee item (condition/evaluator/task) the message refers to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeCompilerLogMessage, Item), Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Item_MetaData)) }; // 2837895941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Message_MetaData[] = {
		{ "Comment", "/** The message */" },
		{ "ModuleRelativePath", "Public/StateTreeCompilerLog.h" },
		{ "ToolTip", "The message" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeCompilerLogMessage, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Severity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_State,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewProp_Message,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		&NewStructOps,
		"StateTreeCompilerLogMessage",
		sizeof(FStateTreeCompilerLogMessage),
		alignof(FStateTreeCompilerLogMessage),
		Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeCompilerLogMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeCompilerLogMessage.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeCompilerLogMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeCompilerLog;
class UScriptStruct* FStateTreeCompilerLog::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeCompilerLog.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeCompilerLog.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeCompilerLog, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("StateTreeCompilerLog"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeCompilerLog.OuterSingleton;
}
template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<FStateTreeCompilerLog>()
{
	return FStateTreeCompilerLog::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StateStack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Messages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Messages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Message log for StateTree compilation */" },
		{ "ModuleRelativePath", "Public/StateTreeCompilerLog.h" },
		{ "ToolTip", "Message log for StateTree compilation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeCompilerLog>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_StateStack_Inner = { "StateStack", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStateTreeState_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_StateStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeCompilerLog.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_StateStack = { "StateStack", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeCompilerLog, StateStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_StateStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_StateStack_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_Messages_Inner = { "Messages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage, METADATA_PARAMS(nullptr, 0) }; // 83676099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_Messages_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreeCompilerLog.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_Messages = { "Messages", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeCompilerLog, Messages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_Messages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_Messages_MetaData)) }; // 83676099
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_StateStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_StateStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_Messages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewProp_Messages,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		&NewStructOps,
		"StateTreeCompilerLog",
		sizeof(FStateTreeCompilerLog),
		alignof(FStateTreeCompilerLog),
		Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeCompilerLog()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeCompilerLog.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeCompilerLog.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeCompilerLog.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeCompilerLog_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeCompilerLog_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeCompilerLogMessage::StaticStruct, Z_Construct_UScriptStruct_FStateTreeCompilerLogMessage_Statics::NewStructOps, TEXT("StateTreeCompilerLogMessage"), &Z_Registration_Info_UScriptStruct_StateTreeCompilerLogMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeCompilerLogMessage), 83676099U) },
		{ FStateTreeCompilerLog::StaticStruct, Z_Construct_UScriptStruct_FStateTreeCompilerLog_Statics::NewStructOps, TEXT("StateTreeCompilerLog"), &Z_Registration_Info_UScriptStruct_StateTreeCompilerLog, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeCompilerLog), 1594889452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeCompilerLog_h_94786321(TEXT("/Script/StateTreeEditorModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeCompilerLog_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeCompilerLog_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
