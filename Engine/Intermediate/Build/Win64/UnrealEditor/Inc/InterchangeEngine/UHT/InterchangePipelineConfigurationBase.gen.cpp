// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangePipelineConfigurationBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangePipelineConfigurationBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase_NoRegister();
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeSourceData_NoRegister();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePipelineConfigurationBase();
	INTERCHANGEENGINE_API UClass* Z_Construct_UClass_UInterchangePipelineConfigurationBase_NoRegister();
	INTERCHANGEENGINE_API UEnum* Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult();
	INTERCHANGEENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterchangeStackInfo();
	UPackage* Z_Construct_UPackage__Script_InterchangeEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult;
	static UEnum* EInterchangePipelineConfigurationDialogResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("EInterchangePipelineConfigurationDialogResult"));
		}
		return Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.OuterSingleton;
	}
	template<> INTERCHANGEENGINE_API UEnum* StaticEnum<EInterchangePipelineConfigurationDialogResult>()
	{
		return EInterchangePipelineConfigurationDialogResult_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult_Statics::Enumerators[] = {
		{ "EInterchangePipelineConfigurationDialogResult::Cancel", (int64)EInterchangePipelineConfigurationDialogResult::Cancel },
		{ "EInterchangePipelineConfigurationDialogResult::Import", (int64)EInterchangePipelineConfigurationDialogResult::Import },
		{ "EInterchangePipelineConfigurationDialogResult::ImportAll", (int64)EInterchangePipelineConfigurationDialogResult::ImportAll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cancel.DisplayName", "Cancel" },
		{ "Cancel.Name", "EInterchangePipelineConfigurationDialogResult::Cancel" },
		{ "DevelopmentStatus", "Experimental" },
		{ "Import.DisplayName", "Import" },
		{ "Import.Name", "EInterchangePipelineConfigurationDialogResult::Import" },
		{ "ImportAll.DisplayName", "Import All" },
		{ "ImportAll.Name", "EInterchangePipelineConfigurationDialogResult::ImportAll" },
		{ "ModuleRelativePath", "Public/InterchangePipelineConfigurationBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeEngine,
		nullptr,
		"EInterchangePipelineConfigurationDialogResult",
		"EInterchangePipelineConfigurationDialogResult",
		Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult()
	{
		if (!Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.InnerSingleton, Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterchangeStackInfo;
class UScriptStruct* FInterchangeStackInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterchangeStackInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterchangeStackInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeStackInfo, (UObject*)Z_Construct_UPackage__Script_InterchangeEngine(), TEXT("InterchangeStackInfo"));
	}
	return Z_Registration_Info_UScriptStruct_InterchangeStackInfo.OuterSingleton;
}
template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<FInterchangeStackInfo>()
{
	return FInterchangeStackInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StackName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Pipelines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pipelines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pipelines;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InterchangePipelineConfigurationBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterchangeStackInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_StackName_MetaData[] = {
		{ "Category", "Interchange | Translator" },
		{ "ModuleRelativePath", "Public/InterchangePipelineConfigurationBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_StackName = { "StackName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeStackInfo, StackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_StackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_StackName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_Pipelines_Inner = { "Pipelines", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_Pipelines_MetaData[] = {
		{ "Category", "Interchange | Translator" },
		{ "ModuleRelativePath", "Public/InterchangePipelineConfigurationBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_Pipelines = { "Pipelines", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInterchangeStackInfo, Pipelines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_Pipelines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_Pipelines_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_StackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_Pipelines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewProp_Pipelines,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
		nullptr,
		&NewStructOps,
		"InterchangeStackInfo",
		sizeof(FInterchangeStackInfo),
		alignof(FInterchangeStackInfo),
		Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInterchangeStackInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_InterchangeStackInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterchangeStackInfo.InnerSingleton, Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InterchangeStackInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangePipelineConfigurationBase::execScriptedShowReimportPipelineConfigurationDialog)
	{
		P_GET_TARRAY_REF(FInterchangeStackInfo,Z_Param_Out_PipelineStacks);
		P_GET_TARRAY_REF(UInterchangePipelineBase*,Z_Param_Out_OutPipelines);
		P_GET_OBJECT(UInterchangeSourceData,Z_Param_SourceData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInterchangePipelineConfigurationDialogResult*)Z_Param__Result=P_THIS->ScriptedShowReimportPipelineConfigurationDialog_Implementation(Z_Param_Out_PipelineStacks,Z_Param_Out_OutPipelines,Z_Param_SourceData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineConfigurationBase::execScriptedShowScenePipelineConfigurationDialog)
	{
		P_GET_TARRAY_REF(FInterchangeStackInfo,Z_Param_Out_PipelineStacks);
		P_GET_TARRAY_REF(UInterchangePipelineBase*,Z_Param_Out_OutPipelines);
		P_GET_OBJECT(UInterchangeSourceData,Z_Param_SourceData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInterchangePipelineConfigurationDialogResult*)Z_Param__Result=P_THIS->ScriptedShowScenePipelineConfigurationDialog_Implementation(Z_Param_Out_PipelineStacks,Z_Param_Out_OutPipelines,Z_Param_SourceData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangePipelineConfigurationBase::execScriptedShowPipelineConfigurationDialog)
	{
		P_GET_TARRAY_REF(FInterchangeStackInfo,Z_Param_Out_PipelineStacks);
		P_GET_TARRAY_REF(UInterchangePipelineBase*,Z_Param_Out_OutPipelines);
		P_GET_OBJECT(UInterchangeSourceData,Z_Param_SourceData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInterchangePipelineConfigurationDialogResult*)Z_Param__Result=P_THIS->ScriptedShowPipelineConfigurationDialog_Implementation(Z_Param_Out_PipelineStacks,Z_Param_Out_OutPipelines,Z_Param_SourceData);
		P_NATIVE_END;
	}
	struct InterchangePipelineConfigurationBase_eventScriptedShowPipelineConfigurationDialog_Parms
	{
		TArray<FInterchangeStackInfo> PipelineStacks;
		TArray<UInterchangePipelineBase*> OutPipelines;
		UInterchangeSourceData* SourceData;
		EInterchangePipelineConfigurationDialogResult ReturnValue;

		/** Constructor, initializes return property only **/
		InterchangePipelineConfigurationBase_eventScriptedShowPipelineConfigurationDialog_Parms()
			: ReturnValue((EInterchangePipelineConfigurationDialogResult)0)
		{
		}
	};
	struct InterchangePipelineConfigurationBase_eventScriptedShowReimportPipelineConfigurationDialog_Parms
	{
		TArray<FInterchangeStackInfo> PipelineStacks;
		TArray<UInterchangePipelineBase*> OutPipelines;
		UInterchangeSourceData* SourceData;
		EInterchangePipelineConfigurationDialogResult ReturnValue;

		/** Constructor, initializes return property only **/
		InterchangePipelineConfigurationBase_eventScriptedShowReimportPipelineConfigurationDialog_Parms()
			: ReturnValue((EInterchangePipelineConfigurationDialogResult)0)
		{
		}
	};
	struct InterchangePipelineConfigurationBase_eventScriptedShowScenePipelineConfigurationDialog_Parms
	{
		TArray<FInterchangeStackInfo> PipelineStacks;
		TArray<UInterchangePipelineBase*> OutPipelines;
		UInterchangeSourceData* SourceData;
		EInterchangePipelineConfigurationDialogResult ReturnValue;

		/** Constructor, initializes return property only **/
		InterchangePipelineConfigurationBase_eventScriptedShowScenePipelineConfigurationDialog_Parms()
			: ReturnValue((EInterchangePipelineConfigurationDialogResult)0)
		{
		}
	};
	static FName NAME_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog = FName(TEXT("ScriptedShowPipelineConfigurationDialog"));
	EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData)
	{
		InterchangePipelineConfigurationBase_eventScriptedShowPipelineConfigurationDialog_Parms Parms;
		Parms.PipelineStacks=PipelineStacks;
		Parms.OutPipelines=OutPipelines;
		Parms.SourceData=SourceData;
		ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog),&Parms);
		PipelineStacks=Parms.PipelineStacks;
		OutPipelines=Parms.OutPipelines;
		return Parms.ReturnValue;
	}
	static FName NAME_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog = FName(TEXT("ScriptedShowReimportPipelineConfigurationDialog"));
	EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowReimportPipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData)
	{
		InterchangePipelineConfigurationBase_eventScriptedShowReimportPipelineConfigurationDialog_Parms Parms;
		Parms.PipelineStacks=PipelineStacks;
		Parms.OutPipelines=OutPipelines;
		Parms.SourceData=SourceData;
		ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog),&Parms);
		PipelineStacks=Parms.PipelineStacks;
		OutPipelines=Parms.OutPipelines;
		return Parms.ReturnValue;
	}
	static FName NAME_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog = FName(TEXT("ScriptedShowScenePipelineConfigurationDialog"));
	EInterchangePipelineConfigurationDialogResult UInterchangePipelineConfigurationBase::ScriptedShowScenePipelineConfigurationDialog(TArray<FInterchangeStackInfo>& PipelineStacks, TArray<UInterchangePipelineBase*>& OutPipelines, UInterchangeSourceData* SourceData)
	{
		InterchangePipelineConfigurationBase_eventScriptedShowScenePipelineConfigurationDialog_Parms Parms;
		Parms.PipelineStacks=PipelineStacks;
		Parms.OutPipelines=OutPipelines;
		Parms.SourceData=SourceData;
		ProcessEvent(FindFunctionChecked(NAME_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog),&Parms);
		PipelineStacks=Parms.PipelineStacks;
		OutPipelines=Parms.OutPipelines;
		return Parms.ReturnValue;
	}
	void UInterchangePipelineConfigurationBase::StaticRegisterNativesUInterchangePipelineConfigurationBase()
	{
		UClass* Class = UInterchangePipelineConfigurationBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ScriptedShowPipelineConfigurationDialog", &UInterchangePipelineConfigurationBase::execScriptedShowPipelineConfigurationDialog },
			{ "ScriptedShowReimportPipelineConfigurationDialog", &UInterchangePipelineConfigurationBase::execScriptedShowReimportPipelineConfigurationDialog },
			{ "ScriptedShowScenePipelineConfigurationDialog", &UInterchangePipelineConfigurationBase::execScriptedShowScenePipelineConfigurationDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PipelineStacks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PipelineStacks;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPipelines_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPipelines;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_PipelineStacks_Inner = { "PipelineStacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInterchangeStackInfo, METADATA_PARAMS(nullptr, 0) }; // 574376687
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_PipelineStacks = { "PipelineStacks", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowPipelineConfigurationDialog_Parms, PipelineStacks), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 574376687
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_OutPipelines_Inner = { "OutPipelines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_OutPipelines = { "OutPipelines", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowPipelineConfigurationDialog_Parms, OutPipelines), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowPipelineConfigurationDialog_Parms, SourceData), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowPipelineConfigurationDialog_Parms, ReturnValue), Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult, METADATA_PARAMS(nullptr, 0) }; // 3772041894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_PipelineStacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_PipelineStacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_OutPipelines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_OutPipelines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_SourceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Translator" },
		{ "Comment", "/**\n\x09 * Non virtual helper to allow blueprint to implement event base function to implement the ShowPipelineConfigurationDialog,\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineConfigurationBase.h" },
		{ "ToolTip", "Non virtual helper to allow blueprint to implement event base function to implement the ShowPipelineConfigurationDialog," },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineConfigurationBase, nullptr, "ScriptedShowPipelineConfigurationDialog", nullptr, nullptr, sizeof(InterchangePipelineConfigurationBase_eventScriptedShowPipelineConfigurationDialog_Parms), Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PipelineStacks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PipelineStacks;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPipelines_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPipelines;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_PipelineStacks_Inner = { "PipelineStacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInterchangeStackInfo, METADATA_PARAMS(nullptr, 0) }; // 574376687
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_PipelineStacks = { "PipelineStacks", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowReimportPipelineConfigurationDialog_Parms, PipelineStacks), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 574376687
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_OutPipelines_Inner = { "OutPipelines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_OutPipelines = { "OutPipelines", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowReimportPipelineConfigurationDialog_Parms, OutPipelines), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowReimportPipelineConfigurationDialog_Parms, SourceData), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowReimportPipelineConfigurationDialog_Parms, ReturnValue), Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult, METADATA_PARAMS(nullptr, 0) }; // 3772041894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_PipelineStacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_PipelineStacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_OutPipelines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_OutPipelines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_SourceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Translator" },
		{ "Comment", "/**\n\x09 * Non virtual helper to allow blueprint to implement event base function to implement the ShowPipelineConfigurationDialog,\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineConfigurationBase.h" },
		{ "ToolTip", "Non virtual helper to allow blueprint to implement event base function to implement the ShowPipelineConfigurationDialog," },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineConfigurationBase, nullptr, "ScriptedShowReimportPipelineConfigurationDialog", nullptr, nullptr, sizeof(InterchangePipelineConfigurationBase_eventScriptedShowReimportPipelineConfigurationDialog_Parms), Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PipelineStacks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PipelineStacks;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutPipelines_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPipelines;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_PipelineStacks_Inner = { "PipelineStacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInterchangeStackInfo, METADATA_PARAMS(nullptr, 0) }; // 574376687
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_PipelineStacks = { "PipelineStacks", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowScenePipelineConfigurationDialog_Parms, PipelineStacks), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 574376687
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_OutPipelines_Inner = { "OutPipelines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInterchangePipelineBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_OutPipelines = { "OutPipelines", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowScenePipelineConfigurationDialog_Parms, OutPipelines), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowScenePipelineConfigurationDialog_Parms, SourceData), Z_Construct_UClass_UInterchangeSourceData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangePipelineConfigurationBase_eventScriptedShowScenePipelineConfigurationDialog_Parms, ReturnValue), Z_Construct_UEnum_InterchangeEngine_EInterchangePipelineConfigurationDialogResult, METADATA_PARAMS(nullptr, 0) }; // 3772041894
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_PipelineStacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_PipelineStacks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_OutPipelines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_OutPipelines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_SourceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Translator" },
		{ "Comment", "/**\n\x09 * Non virtual helper to allow blueprint to implement event base function to implement the ShowPipelineConfigurationDialog,\n\x09 */" },
		{ "ModuleRelativePath", "Public/InterchangePipelineConfigurationBase.h" },
		{ "ToolTip", "Non virtual helper to allow blueprint to implement event base function to implement the ShowPipelineConfigurationDialog," },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangePipelineConfigurationBase, nullptr, "ScriptedShowScenePipelineConfigurationDialog", nullptr, nullptr, sizeof(InterchangePipelineConfigurationBase_eventScriptedShowScenePipelineConfigurationDialog_Parms), Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangePipelineConfigurationBase);
	UClass* Z_Construct_UClass_UInterchangePipelineConfigurationBase_NoRegister()
	{
		return UInterchangePipelineConfigurationBase::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowPipelineConfigurationDialog, "ScriptedShowPipelineConfigurationDialog" }, // 339524691
		{ &Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowReimportPipelineConfigurationDialog, "ScriptedShowReimportPipelineConfigurationDialog" }, // 2376096476
		{ &Z_Construct_UFunction_UInterchangePipelineConfigurationBase_ScriptedShowScenePipelineConfigurationDialog, "ScriptedShowScenePipelineConfigurationDialog" }, // 2707071644
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangePipelineConfigurationBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InterchangePipelineConfigurationBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangePipelineConfigurationBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics::ClassParams = {
		&UInterchangePipelineConfigurationBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangePipelineConfigurationBase()
	{
		if (!Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.OuterSingleton, Z_Construct_UClass_UInterchangePipelineConfigurationBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase.OuterSingleton;
	}
	template<> INTERCHANGEENGINE_API UClass* StaticClass<UInterchangePipelineConfigurationBase>()
	{
		return UInterchangePipelineConfigurationBase::StaticClass();
	}
	UInterchangePipelineConfigurationBase::UInterchangePipelineConfigurationBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangePipelineConfigurationBase);
	UInterchangePipelineConfigurationBase::~UInterchangePipelineConfigurationBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_Statics::EnumInfo[] = {
		{ EInterchangePipelineConfigurationDialogResult_StaticEnum, TEXT("EInterchangePipelineConfigurationDialogResult"), &Z_Registration_Info_UEnum_EInterchangePipelineConfigurationDialogResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3772041894U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_Statics::ScriptStructInfo[] = {
		{ FInterchangeStackInfo::StaticStruct, Z_Construct_UScriptStruct_FInterchangeStackInfo_Statics::NewStructOps, TEXT("InterchangeStackInfo"), &Z_Registration_Info_UScriptStruct_InterchangeStackInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterchangeStackInfo), 574376687U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangePipelineConfigurationBase, UInterchangePipelineConfigurationBase::StaticClass, TEXT("UInterchangePipelineConfigurationBase"), &Z_Registration_Info_UClass_UInterchangePipelineConfigurationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangePipelineConfigurationBase), 2919695213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_2811584384(TEXT("/Script/InterchangeEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangePipelineConfigurationBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
