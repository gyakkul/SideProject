// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraNodeFunctionCall.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraTypes.h"
#include "NiagaraMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeFunctionCall() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraMessageData_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeFunctionCall();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeFunctionCall_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPropagatedVariable();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackMessage();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraPropagatedVariable;
class UScriptStruct* FNiagaraPropagatedVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPropagatedVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraPropagatedVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPropagatedVariable, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraPropagatedVariable"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPropagatedVariable.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraPropagatedVariable>()
{
	return FNiagaraPropagatedVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropagatedName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropagatedName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPropagatedVariable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewProp_SwitchParameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewProp_SwitchParameter = { "SwitchParameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPropagatedVariable, SwitchParameter), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewProp_SwitchParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewProp_SwitchParameter_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewProp_PropagatedName_MetaData[] = {
		{ "Comment", "/** If set, then this overrides the name of the switch parameter when propagating. */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "ToolTip", "If set, then this overrides the name of the switch parameter when propagating." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewProp_PropagatedName = { "PropagatedName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPropagatedVariable, PropagatedName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewProp_PropagatedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewProp_PropagatedName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewProp_SwitchParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewProp_PropagatedName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraPropagatedVariable",
		sizeof(FNiagaraPropagatedVariable),
		alignof(FNiagaraPropagatedVariable),
		Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPropagatedVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraPropagatedVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraPropagatedVariable.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraPropagatedVariable.InnerSingleton;
	}
	void UNiagaraNodeFunctionCall::StaticRegisterNativesUNiagaraNodeFunctionCall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeFunctionCall);
	UClass* Z_Construct_UClass_UNiagaraNodeFunctionCall_NoRegister()
	{
		return UNiagaraNodeFunctionCall::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedScriptVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedScriptVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionScriptAssetObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionScriptAssetObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Signature;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionSpecifiers_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionSpecifiers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionSpecifiers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FunctionSpecifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropagatedStaticSwitchParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropagatedStaticSwitchParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropagatedStaticSwitchParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousScriptVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousScriptVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonUpgradeScriptWarnings_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PythonUpgradeScriptWarnings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DebugState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DebugState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritDebugStatus_MetaData[];
#endif
		static void NewProp_bInheritDebugStatus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritDebugStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChangeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedChangeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvalidScriptVersionReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidScriptVersionReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionDisplayName;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MessageKeyToMessageMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MessageKeyToMessageMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageKeyToMessageMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MessageKeyToMessageMap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StackMessages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackMessages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StackMessages;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoundPinNames_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundPinNames_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundPinNames_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoundPinNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeWithDynamicPins,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeFunctionCall.h" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionScript_MetaData[] = {
		{ "Category", "Function" },
		{ "ForceShowEngineContent", "TRUE" },
		{ "ForceShowPluginContent", "TRUE" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionScript = { "FunctionScript", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, FunctionScript), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_SelectedScriptVersion_MetaData[] = {
		{ "Category", "Version Details" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_SelectedScriptVersion = { "SelectedScriptVersion", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, SelectedScriptVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_SelectedScriptVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_SelectedScriptVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionScriptAssetObjectPath_MetaData[] = {
		{ "Comment", "/** \n\x09 * A path to a script asset which can be used to assign the function script the first time that\n\x09 * default pins are generated. This is used so that the function nodes can be populated in the graph context\n\x09 * menu without having to load all of the actual script assets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "A path to a script asset which can be used to assign the function script the first time that\ndefault pins are generated. This is used so that the function nodes can be populated in the graph context\nmenu without having to load all of the actual script assets." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionScriptAssetObjectPath = { "FunctionScriptAssetObjectPath", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, FunctionScriptAssetObjectPath), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionScriptAssetObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionScriptAssetObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_Signature_MetaData[] = {
		{ "Comment", "/** Some functions can be provided a signature directly rather than a script. */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "ToolTip", "Some functions can be provided a signature directly rather than a script." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, Signature), Z_Construct_UScriptStruct_FNiagaraFunctionSignature, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_Signature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_Signature_MetaData)) }; // 2580596167
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionSpecifiers_ValueProp = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionSpecifiers_Key_KeyProp = { "FunctionSpecifiers_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionSpecifiers_MetaData[] = {
		{ "Category", "Function" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionSpecifiers = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, FunctionSpecifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionSpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionSpecifiers_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PropagatedStaticSwitchParameters_Inner = { "PropagatedStaticSwitchParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraPropagatedVariable, METADATA_PARAMS(nullptr, 0) }; // 967588256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PropagatedStaticSwitchParameters_MetaData[] = {
		{ "Comment", "/** All the input values the function propagates to the next higher caller instead of forcing the user to set them directly. */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "ToolTip", "All the input values the function propagates to the next higher caller instead of forcing the user to set them directly." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PropagatedStaticSwitchParameters = { "PropagatedStaticSwitchParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, PropagatedStaticSwitchParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PropagatedStaticSwitchParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PropagatedStaticSwitchParameters_MetaData)) }; // 967588256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PreviousScriptVersion_MetaData[] = {
		{ "Comment", "/** Can be used by the ui after a version change to display change notes */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Can be used by the ui after a version change to display change notes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PreviousScriptVersion = { "PreviousScriptVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, PreviousScriptVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PreviousScriptVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PreviousScriptVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PythonUpgradeScriptWarnings_MetaData[] = {
		{ "Comment", "/** Can be used by the ui after a version change to display change notes */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Can be used by the ui after a version change to display change notes" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PythonUpgradeScriptWarnings = { "PythonUpgradeScriptWarnings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, PythonUpgradeScriptWarnings), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PythonUpgradeScriptWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PythonUpgradeScriptWarnings_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_DebugState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_DebugState_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_DebugState = { "DebugState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, DebugState), Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_DebugState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_DebugState_MetaData)) }; // 3149775033
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_bInheritDebugStatus_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Controls whether the debug state of the current function gets propagated into this function call. */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "ToolTip", "Controls whether the debug state of the current function gets propagated into this function call." },
	};
#endif
	void Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_bInheritDebugStatus_SetBit(void* Obj)
	{
		((UNiagaraNodeFunctionCall*)Obj)->bInheritDebugStatus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_bInheritDebugStatus = { "bInheritDebugStatus", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraNodeFunctionCall), &Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_bInheritDebugStatus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_bInheritDebugStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_bInheritDebugStatus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_CachedChangeId_MetaData[] = {
		{ "Comment", "/** Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions.*/" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_CachedChangeId = { "CachedChangeId", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, CachedChangeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_CachedChangeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_CachedChangeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_InvalidScriptVersionReference_MetaData[] = {
		{ "Comment", "/** If a script version we reference goes away we select a fallback version, but save the original version to generate warnings. */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "ToolTip", "If a script version we reference goes away we select a fallback version, but save the original version to generate warnings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_InvalidScriptVersionReference = { "InvalidScriptVersionReference", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, InvalidScriptVersionReference), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_InvalidScriptVersionReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_InvalidScriptVersionReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionDisplayName = { "FunctionDisplayName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, FunctionDisplayName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionDisplayName_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_MessageKeyToMessageMap_ValueProp = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UNiagaraMessageData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp = { "MessageKeyToMessageMap_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_MessageKeyToMessageMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_MessageKeyToMessageMap = { "MessageKeyToMessageMap", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, MessageKeyToMessageMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_MessageKeyToMessageMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_MessageKeyToMessageMap_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_StackMessages_Inner = { "StackMessages", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraStackMessage, METADATA_PARAMS(nullptr, 0) }; // 3317954190
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_StackMessages_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_StackMessages = { "StackMessages", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, StackMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_StackMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_StackMessages_MetaData)) }; // 3317954190
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_BoundPinNames_ValueProp = { "BoundPinNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_BoundPinNames_Key_KeyProp = { "BoundPinNames_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_BoundPinNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeFunctionCall.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_BoundPinNames = { "BoundPinNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeFunctionCall, BoundPinNames), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_BoundPinNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_BoundPinNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_SelectedScriptVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionScriptAssetObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_Signature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionSpecifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionSpecifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionSpecifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PropagatedStaticSwitchParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PropagatedStaticSwitchParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PreviousScriptVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_PythonUpgradeScriptWarnings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_DebugState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_DebugState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_bInheritDebugStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_CachedChangeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_InvalidScriptVersionReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_FunctionDisplayName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_MessageKeyToMessageMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_MessageKeyToMessageMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_MessageKeyToMessageMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_StackMessages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_StackMessages,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_BoundPinNames_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_BoundPinNames_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::NewProp_BoundPinNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeFunctionCall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::ClassParams = {
		&UNiagaraNodeFunctionCall::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeFunctionCall()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeFunctionCall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeFunctionCall.OuterSingleton, Z_Construct_UClass_UNiagaraNodeFunctionCall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeFunctionCall.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeFunctionCall>()
	{
		return UNiagaraNodeFunctionCall::StaticClass();
	}
	UNiagaraNodeFunctionCall::UNiagaraNodeFunctionCall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeFunctionCall);
	UNiagaraNodeFunctionCall::~UNiagaraNodeFunctionCall() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraPropagatedVariable::StaticStruct, Z_Construct_UScriptStruct_FNiagaraPropagatedVariable_Statics::NewStructOps, TEXT("NiagaraPropagatedVariable"), &Z_Registration_Info_UScriptStruct_NiagaraPropagatedVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraPropagatedVariable), 967588256U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeFunctionCall, UNiagaraNodeFunctionCall::StaticClass, TEXT("UNiagaraNodeFunctionCall"), &Z_Registration_Info_UClass_UNiagaraNodeFunctionCall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeFunctionCall), 135426064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_2446186906(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeFunctionCall_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
