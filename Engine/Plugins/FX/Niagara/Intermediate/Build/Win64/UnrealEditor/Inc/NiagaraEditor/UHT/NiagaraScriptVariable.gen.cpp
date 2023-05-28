// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraScriptVariable.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraTypes.h"
#include "../Public/NiagaraVariant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptVariable() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariant();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptVariable();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptVariable_NoRegister();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptVariableData();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptVariableData;
class UScriptStruct* FNiagaraScriptVariableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptVariableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptVariableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptVariableData, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraScriptVariableData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptVariableData.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraScriptVariableData>()
{
	return FNiagaraScriptVariableData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValueVariant_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValueVariant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticSwitchDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaticSwitch_MetaData[];
#endif
		static void NewProp_bIsStaticSwitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaticSwitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubscribedToParameterDefinitions_MetaData[];
#endif
		static void NewProp_bSubscribedToParameterDefinitions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubscribedToParameterDefinitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideParameterDefinitionsDefaultValue_MetaData[];
#endif
		static void NewProp_bOverrideParameterDefinitionsDefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParameterDefinitionsDefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptVariableData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultMode_MetaData[] = {
		{ "Category", "Default Value" },
		{ "Comment", "/** The default mode. Can be Value, Binding or Custom. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "ToolTip", "The default mode. Can be Value, Binding or Custom." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultMode = { "DefaultMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptVariableData, DefaultMode), Z_Construct_UEnum_Niagara_ENiagaraDefaultMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultMode_MetaData)) }; // 465618061
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultBinding_MetaData[] = {
		{ "Category", "Default Value" },
		{ "Comment", "/** The default binding. Only used if DefaultMode == ENiagaraDefaultMode::Binding. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "ToolTip", "The default binding. Only used if DefaultMode == ENiagaraDefaultMode::Binding." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultBinding = { "DefaultBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptVariableData, DefaultBinding), Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultBinding_MetaData)) }; // 3697348502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_Variable_MetaData[] = {
		{ "Comment", "/** Variable type, name and data. The data is not persistent, but used as a buffer when interfacing elsewhere. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "ToolTip", "Variable type, name and data. The data is not persistent, but used as a buffer when interfacing elsewhere." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptVariableData, Variable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_Variable_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** The metadata associated with this script variable. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The metadata associated with this script variable." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptVariableData, Metadata), Z_Construct_UScriptStruct_FNiagaraVariableMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_Metadata_MetaData)) }; // 2573469744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultValueVariant_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultValueVariant = { "DefaultValueVariant", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptVariableData, DefaultValueVariant), Z_Construct_UScriptStruct_FNiagaraVariant, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultValueVariant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultValueVariant_MetaData)) }; // 1290635328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_StaticSwitchDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_StaticSwitchDefaultValue = { "StaticSwitchDefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptVariableData, StaticSwitchDefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_StaticSwitchDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_StaticSwitchDefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bIsStaticSwitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bIsStaticSwitch_SetBit(void* Obj)
	{
		((FNiagaraScriptVariableData*)Obj)->bIsStaticSwitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bIsStaticSwitch = { "bIsStaticSwitch", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraScriptVariableData), &Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bIsStaticSwitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bIsStaticSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bIsStaticSwitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bSubscribedToParameterDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bSubscribedToParameterDefinitions_SetBit(void* Obj)
	{
		((FNiagaraScriptVariableData*)Obj)->bSubscribedToParameterDefinitions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bSubscribedToParameterDefinitions = { "bSubscribedToParameterDefinitions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraScriptVariableData), &Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bSubscribedToParameterDefinitions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bSubscribedToParameterDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bSubscribedToParameterDefinitions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_ChangeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_ChangeId = { "ChangeId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptVariableData, ChangeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_ChangeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_ChangeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue_SetBit(void* Obj)
	{
		((FNiagaraScriptVariableData*)Obj)->bOverrideParameterDefinitionsDefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue = { "bOverrideParameterDefinitionsDefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraScriptVariableData), &Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_DefaultValueVariant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_StaticSwitchDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bIsStaticSwitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bSubscribedToParameterDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_ChangeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraScriptVariableData",
		sizeof(FNiagaraScriptVariableData),
		alignof(FNiagaraScriptVariableData),
		Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptVariableData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScriptVariableData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptVariableData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScriptVariableData.InnerSingleton;
	}
	void UNiagaraScriptVariable::StaticRegisterNativesUNiagaraScriptVariable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScriptVariable);
	UClass* Z_Construct_UClass_UNiagaraScriptVariable_NoRegister()
	{
		return UNiagaraScriptVariable::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScriptVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValueVariant_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValueVariant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticSwitchDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaticSwitch_MetaData[];
#endif
		static void NewProp_bIsStaticSwitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaticSwitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSubscribedToParameterDefinitions_MetaData[];
#endif
		static void NewProp_bSubscribedToParameterDefinitions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSubscribedToParameterDefinitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChangeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideParameterDefinitionsDefaultValue_MetaData[];
#endif
		static void NewProp_bOverrideParameterDefinitionsDefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParameterDefinitionsDefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScriptVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* Used to store variable data and metadata per graph. \n*/" },
		{ "IncludePath", "NiagaraScriptVariable.h" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "ToolTip", "* Used to store variable data and metadata per graph." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultMode_MetaData[] = {
		{ "Category", "Default Value" },
		{ "Comment", "/** The default mode. Can be Value, Binding or Custom. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "ToolTip", "The default mode. Can be Value, Binding or Custom." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultMode = { "DefaultMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScriptVariable, DefaultMode), Z_Construct_UEnum_Niagara_ENiagaraDefaultMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultMode_MetaData)) }; // 465618061
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultBinding_MetaData[] = {
		{ "Category", "Default Value" },
		{ "Comment", "/** The default binding. Only used if DefaultMode == ENiagaraDefaultMode::Binding. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "ToolTip", "The default binding. Only used if DefaultMode == ENiagaraDefaultMode::Binding." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultBinding = { "DefaultBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScriptVariable, DefaultBinding), Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultBinding_MetaData)) }; // 3697348502
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_Variable_MetaData[] = {
		{ "Comment", "/** Variable type, name and data. The data is not persistent, but used as a buffer when interfacing elsewhere. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "ToolTip", "Variable type, name and data. The data is not persistent, but used as a buffer when interfacing elsewhere." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScriptVariable, Variable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_Variable_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** The metadata associated with this script variable. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The metadata associated with this script variable." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScriptVariable, Metadata), Z_Construct_UScriptStruct_FNiagaraVariableMetaData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_Metadata_MetaData)) }; // 2573469744
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultValueVariant_MetaData[] = {
		{ "Category", "Hidden" },
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultValueVariant = { "DefaultValueVariant", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScriptVariable, DefaultValueVariant), Z_Construct_UScriptStruct_FNiagaraVariant, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultValueVariant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultValueVariant_MetaData)) }; // 1290635328
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_StaticSwitchDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_StaticSwitchDefaultValue = { "StaticSwitchDefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScriptVariable, StaticSwitchDefaultValue), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_StaticSwitchDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_StaticSwitchDefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bIsStaticSwitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bIsStaticSwitch_SetBit(void* Obj)
	{
		((UNiagaraScriptVariable*)Obj)->bIsStaticSwitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bIsStaticSwitch = { "bIsStaticSwitch", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraScriptVariable), &Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bIsStaticSwitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bIsStaticSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bIsStaticSwitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bSubscribedToParameterDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	void Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bSubscribedToParameterDefinitions_SetBit(void* Obj)
	{
		((UNiagaraScriptVariable*)Obj)->bSubscribedToParameterDefinitions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bSubscribedToParameterDefinitions = { "bSubscribedToParameterDefinitions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraScriptVariable), &Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bSubscribedToParameterDefinitions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bSubscribedToParameterDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bSubscribedToParameterDefinitions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_ChangeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_ChangeId = { "ChangeId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScriptVariable, ChangeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_ChangeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_ChangeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptVariable.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	void Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue_SetBit(void* Obj)
	{
		((UNiagaraScriptVariable*)Obj)->bOverrideParameterDefinitionsDefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue = { "bOverrideParameterDefinitionsDefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraScriptVariable), &Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraScriptVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_DefaultValueVariant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_StaticSwitchDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bIsStaticSwitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bSubscribedToParameterDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_ChangeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScriptVariable_Statics::NewProp_bOverrideParameterDefinitionsDefaultValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScriptVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScriptVariable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScriptVariable_Statics::ClassParams = {
		&UNiagaraScriptVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraScriptVariable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptVariable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScriptVariable()
	{
		if (!Z_Registration_Info_UClass_UNiagaraScriptVariable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScriptVariable.OuterSingleton, Z_Construct_UClass_UNiagaraScriptVariable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraScriptVariable.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraScriptVariable>()
	{
		return UNiagaraScriptVariable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScriptVariable);
	UNiagaraScriptVariable::~UNiagaraScriptVariable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraScriptVariableData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptVariableData_Statics::NewStructOps, TEXT("NiagaraScriptVariableData"), &Z_Registration_Info_UScriptStruct_NiagaraScriptVariableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptVariableData), 3323827455U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScriptVariable, UNiagaraScriptVariable::StaticClass, TEXT("UNiagaraScriptVariable"), &Z_Registration_Info_UClass_UNiagaraScriptVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScriptVariable), 474609586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_2461264548(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraScriptVariable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
