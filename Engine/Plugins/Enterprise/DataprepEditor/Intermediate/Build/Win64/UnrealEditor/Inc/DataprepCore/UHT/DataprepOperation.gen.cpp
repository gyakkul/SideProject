// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepOperation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepEditingOperation();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepEditingOperation_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepOperation();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepOperation_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizableObject();
	DATAPREPCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataprepContext();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataprepContext;
class UScriptStruct* FDataprepContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataprepContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataprepContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataprepContext, (UObject*)Z_Construct_UPackage__Script_DataprepCore(), TEXT("DataprepContext"));
	}
	return Z_Registration_Info_UScriptStruct_DataprepContext.OuterSingleton;
}
template<> DATAPREPCORE_API UScriptStruct* StaticStruct<FDataprepContext>()
{
	return FDataprepContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataprepContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Experimental struct. Todo add struct wide comment */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Experimental struct. Todo add struct wide comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataprepContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataprepContext>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDataprepContext_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepContext_Statics::NewProp_Objects_MetaData[] = {
		{ "Category", "Dataprep" },
		{ "Comment", "/**\n\x09 * This is the objects on which an operation can operate\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "This is the objects on which an operation can operate" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataprepContext_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataprepContext, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepContext_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepContext_Statics::NewProp_Objects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataprepContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepContext_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepContext_Statics::NewProp_Objects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataprepContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
		nullptr,
		&NewStructOps,
		"DataprepContext",
		sizeof(FDataprepContext),
		alignof(FDataprepContext),
		Z_Construct_UScriptStruct_FDataprepContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataprepContext()
	{
		if (!Z_Registration_Info_UScriptStruct_DataprepContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataprepContext.InnerSingleton, Z_Construct_UScriptStruct_FDataprepContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataprepContext.InnerSingleton;
	}
	DEFINE_FUNCTION(UDataprepOperation::execGetAdditionalKeyword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetAdditionalKeyword_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execGetCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCategory_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execGetTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTooltip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execGetDisplayOperationName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayOperationName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execAssetsModified)
	{
		P_GET_TARRAY(UObject*,Z_Param_Assets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssetsModified(Z_Param_Assets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execReportProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_IncrementOfWork);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportProgress(Z_Param_IncrementOfWork,Z_Param_Out_InMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execEndWork)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndWork();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execBeginWork)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InDescription);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAmountOfWork);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginWork(Z_Param_Out_InDescription,Z_Param_InAmountOfWork);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execLogError)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InLogError);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogError(Z_Param_Out_InLogError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execLogWarning)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InLogText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogWarning(Z_Param_Out_InLogText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execLogInfo)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InLogText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogInfo(Z_Param_Out_InLogText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execOnExecution)
	{
		P_GET_STRUCT_REF(FDataprepContext,Z_Param_Out_InContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExecution_Implementation(Z_Param_Out_InContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepOperation::execExecute)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute(Z_Param_Out_InObjects);
		P_NATIVE_END;
	}
	struct DataprepOperation_eventGetAdditionalKeyword_Parms
	{
		FText ReturnValue;
	};
	struct DataprepOperation_eventGetCategory_Parms
	{
		FText ReturnValue;
	};
	struct DataprepOperation_eventGetDisplayOperationName_Parms
	{
		FText ReturnValue;
	};
	struct DataprepOperation_eventGetTooltip_Parms
	{
		FText ReturnValue;
	};
	struct DataprepOperation_eventOnExecution_Parms
	{
		FDataprepContext InContext;
	};
	static FName NAME_UDataprepOperation_GetAdditionalKeyword = FName(TEXT("GetAdditionalKeyword"));
	FText UDataprepOperation::GetAdditionalKeyword() const
	{
		DataprepOperation_eventGetAdditionalKeyword_Parms Parms;
		const_cast<UDataprepOperation*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepOperation_GetAdditionalKeyword),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepOperation_GetCategory = FName(TEXT("GetCategory"));
	FText UDataprepOperation::GetCategory() const
	{
		DataprepOperation_eventGetCategory_Parms Parms;
		const_cast<UDataprepOperation*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepOperation_GetCategory),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepOperation_GetDisplayOperationName = FName(TEXT("GetDisplayOperationName"));
	FText UDataprepOperation::GetDisplayOperationName() const
	{
		DataprepOperation_eventGetDisplayOperationName_Parms Parms;
		const_cast<UDataprepOperation*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepOperation_GetDisplayOperationName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepOperation_GetTooltip = FName(TEXT("GetTooltip"));
	FText UDataprepOperation::GetTooltip() const
	{
		DataprepOperation_eventGetTooltip_Parms Parms;
		const_cast<UDataprepOperation*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepOperation_GetTooltip),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepOperation_OnExecution = FName(TEXT("OnExecution"));
	void UDataprepOperation::OnExecution(FDataprepContext const& InContext)
	{
		DataprepOperation_eventOnExecution_Parms Parms;
		Parms.InContext=InContext;
		ProcessEvent(FindFunctionChecked(NAME_UDataprepOperation_OnExecution),&Parms);
	}
	void UDataprepOperation::StaticRegisterNativesUDataprepOperation()
	{
		UClass* Class = UDataprepOperation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssetsModified", &UDataprepOperation::execAssetsModified },
			{ "BeginWork", &UDataprepOperation::execBeginWork },
			{ "EndWork", &UDataprepOperation::execEndWork },
			{ "Execute", &UDataprepOperation::execExecute },
			{ "GetAdditionalKeyword", &UDataprepOperation::execGetAdditionalKeyword },
			{ "GetCategory", &UDataprepOperation::execGetCategory },
			{ "GetDisplayOperationName", &UDataprepOperation::execGetDisplayOperationName },
			{ "GetTooltip", &UDataprepOperation::execGetTooltip },
			{ "LogError", &UDataprepOperation::execLogError },
			{ "LogInfo", &UDataprepOperation::execLogInfo },
			{ "LogWarning", &UDataprepOperation::execLogWarning },
			{ "OnExecution", &UDataprepOperation::execOnExecution },
			{ "ReportProgress", &UDataprepOperation::execReportProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics
	{
		struct DataprepOperation_eventAssetsModified_Parms
		{
			TArray<UObject*> Assets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Assets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventAssetsModified_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::NewProp_Assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::NewProp_Assets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Operation" },
		{ "Comment", "/**\n\x09 * Indicates an array of assets has changed during the operation. It is important to use this function\n\x09 * if the modifications on the assets impact their appearance\n\x09 * @param Assets\x09\x09\x09""Array of assets which have been modified\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Indicates an array of assets has changed during the operation. It is important to use this function\nif the modifications on the assets impact their appearance\n@param Assets                        Array of assets which have been modified" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "AssetsModified", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::DataprepOperation_eventAssetsModified_Parms), Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_AssetsModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_AssetsModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics
	{
		struct DataprepOperation_eventBeginWork_Parms
		{
			FText InDescription;
			float InAmountOfWork;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InDescription;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAmountOfWork;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::NewProp_InDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::NewProp_InDescription = { "InDescription", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventBeginWork_Parms, InDescription), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::NewProp_InDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::NewProp_InDescription_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::NewProp_InAmountOfWork = { "InAmountOfWork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventBeginWork_Parms, InAmountOfWork), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::NewProp_InDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::NewProp_InAmountOfWork,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Report" },
		{ "Comment", "/**\n\x09 * Indicates the beginning of a new work to report on\n\x09 * @param InDescription\x09\x09Text describing the work about to begin\n\x09 * @param InAmountOfWork\x09""Expected total amount of work\n\x09 */" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Indicates the beginning of a new work to report on\n@param InDescription         Text describing the work about to begin\n@param InAmountOfWork        Expected total amount of work" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "BeginWork", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::DataprepOperation_eventBeginWork_Parms), Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_BeginWork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_BeginWork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_EndWork_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_EndWork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Report" },
		{ "Comment", "/** Indicates the end of the work */" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Indicates the end of the work" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_EndWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "EndWork", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_EndWork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_EndWork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_EndWork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_EndWork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_Execute_Statics
	{
		struct DataprepOperation_eventExecute_Parms
		{
			TArray<UObject*> InObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepOperation_Execute_Statics::NewProp_InObjects_Inner = { "InObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_Execute_Statics::NewProp_InObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepOperation_Execute_Statics::NewProp_InObjects = { "InObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventExecute_Parms, InObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_Execute_Statics::NewProp_InObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_Execute_Statics::NewProp_InObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_Execute_Statics::NewProp_InObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_Execute_Statics::NewProp_InObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n\x09 * Execute the operation\n\x09 * @param InObjects The objects that the operation will operate on\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Execute the operation\n@param InObjects The objects that the operation will operate on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "Execute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperation_Execute_Statics::DataprepOperation_eventExecute_Parms), Z_Construct_UFunction_UDataprepOperation_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventGetAdditionalKeyword_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display|Search" },
		{ "Comment", "/**\n\x09 * Allows to add more keywords for when a user is searching for the fetcher in the ui.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Allows to add more keywords for when a user is searching for the fetcher in the ui." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "GetAdditionalKeyword", nullptr, nullptr, sizeof(DataprepOperation_eventGetAdditionalKeyword_Parms), Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventGetCategory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/**\n\x09 * Allows to change the tooltip of the fetcher for the ui if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Allows to change the tooltip of the fetcher for the ui if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "GetCategory", nullptr, nullptr, sizeof(DataprepOperation_eventGetCategory_Parms), Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_GetCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_GetCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventGetDisplayOperationName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/** \n\x09 * Allows to change the name of the fetcher for the ui if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Allows to change the name of the fetcher for the ui if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "GetDisplayOperationName", nullptr, nullptr, sizeof(DataprepOperation_eventGetDisplayOperationName_Parms), Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventGetTooltip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/**\n\x09 * Allows to change the tooltip of the fetcher for the ui if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Allows to change the tooltip of the fetcher for the ui if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "GetTooltip", nullptr, nullptr, sizeof(DataprepOperation_eventGetTooltip_Parms), Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_GetTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_GetTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_LogError_Statics
	{
		struct DataprepOperation_eventLogError_Parms
		{
			FText InLogError;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLogError_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InLogError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_LogError_Statics::NewProp_InLogError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepOperation_LogError_Statics::NewProp_InLogError = { "InLogError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventLogError_Parms, InLogError), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_LogError_Statics::NewProp_InLogError_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_LogError_Statics::NewProp_InLogError_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_LogError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_LogError_Statics::NewProp_InLogError,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_LogError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Log" },
		{ "Comment", "/**\n\x09 * Add Error to the log\n\x09 * @param InLogText The text to add to the log\n\x09 */" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Add Error to the log\n@param InLogText The text to add to the log" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_LogError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "LogError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperation_LogError_Statics::DataprepOperation_eventLogError_Parms), Z_Construct_UFunction_UDataprepOperation_LogError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_LogError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_LogError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_LogError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_LogError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_LogError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics
	{
		struct DataprepOperation_eventLogInfo_Parms
		{
			FText InLogText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLogText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InLogText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::NewProp_InLogText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::NewProp_InLogText = { "InLogText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventLogInfo_Parms, InLogText), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::NewProp_InLogText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::NewProp_InLogText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::NewProp_InLogText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Log" },
		{ "Comment", "/**\n\x09 * Add an info to the log\n\x09 * @param InLogText The text to add to the log\n\x09 */" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Add an info to the log\n@param InLogText The text to add to the log" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "LogInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::DataprepOperation_eventLogInfo_Parms), Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_LogInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_LogInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics
	{
		struct DataprepOperation_eventLogWarning_Parms
		{
			FText InLogText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLogText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InLogText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::NewProp_InLogText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::NewProp_InLogText = { "InLogText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventLogWarning_Parms, InLogText), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::NewProp_InLogText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::NewProp_InLogText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::NewProp_InLogText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Log" },
		{ "Comment", "/**\n\x09 * Add a warning to the log\n\x09 * @param InLogText The text to add to the log\n\x09 */" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Add a warning to the log\n@param InLogText The text to add to the log" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "LogWarning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::DataprepOperation_eventLogWarning_Parms), Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_LogWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_LogWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::NewProp_InContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::NewProp_InContext = { "InContext", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventOnExecution_Parms, InContext), Z_Construct_UScriptStruct_FDataprepContext, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::NewProp_InContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::NewProp_InContext_MetaData)) }; // 2272976175
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::NewProp_InContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * This function is called when the operation is executed.\n\x09 * If your defining your operation in Blueprint or Python this is the function to override.\n\x09 * @param InContext The context contains the data that the operation should operate on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "This function is called when the operation is executed.\nIf your defining your operation in Blueprint or Python this is the function to override.\n@param InContext The context contains the data that the operation should operate on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "OnExecution", nullptr, nullptr, sizeof(DataprepOperation_eventOnExecution_Parms), Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_OnExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_OnExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics
	{
		struct DataprepOperation_eventReportProgress_Parms
		{
			float IncrementOfWork;
			FText InMessage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IncrementOfWork;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::NewProp_IncrementOfWork = { "IncrementOfWork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventReportProgress_Parms, IncrementOfWork), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::NewProp_InMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::NewProp_InMessage = { "InMessage", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepOperation_eventReportProgress_Parms, InMessage), METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::NewProp_InMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::NewProp_InMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::NewProp_IncrementOfWork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::NewProp_InMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Report" },
		{ "Comment", "/**\n\x09 * Report foreseen progress on the current work\n\x09 * @param IncrementOfWork\x09""Amount of progress foreseen until the next call\n\x09 * @param InMessage\x09\x09\x09Message to be displayed along side the reported progress\n\x09 */" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Report foreseen progress on the current work\n@param IncrementOfWork       Amount of progress foreseen until the next call\n@param InMessage                     Message to be displayed along side the reported progress" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepOperation, nullptr, "ReportProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::DataprepOperation_eventReportProgress_Parms), Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepOperation_ReportProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepOperation_ReportProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepOperation);
	UClass* Z_Construct_UClass_UDataprepOperation_NoRegister()
	{
		return UDataprepOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepParameterizableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepOperation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepOperation_AssetsModified, "AssetsModified" }, // 1231685473
		{ &Z_Construct_UFunction_UDataprepOperation_BeginWork, "BeginWork" }, // 3247179839
		{ &Z_Construct_UFunction_UDataprepOperation_EndWork, "EndWork" }, // 89110187
		{ &Z_Construct_UFunction_UDataprepOperation_Execute, "Execute" }, // 4211876411
		{ &Z_Construct_UFunction_UDataprepOperation_GetAdditionalKeyword, "GetAdditionalKeyword" }, // 2282994159
		{ &Z_Construct_UFunction_UDataprepOperation_GetCategory, "GetCategory" }, // 3455261576
		{ &Z_Construct_UFunction_UDataprepOperation_GetDisplayOperationName, "GetDisplayOperationName" }, // 3387863530
		{ &Z_Construct_UFunction_UDataprepOperation_GetTooltip, "GetTooltip" }, // 746061041
		{ &Z_Construct_UFunction_UDataprepOperation_LogError, "LogError" }, // 2307476422
		{ &Z_Construct_UFunction_UDataprepOperation_LogInfo, "LogInfo" }, // 169163615
		{ &Z_Construct_UFunction_UDataprepOperation_LogWarning, "LogWarning" }, // 142580854
		{ &Z_Construct_UFunction_UDataprepOperation_OnExecution, "OnExecution" }, // 542276086
		{ &Z_Construct_UFunction_UDataprepOperation_ReportProgress, "ReportProgress" }, // 3319163327
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepOperation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all Dataprep operations\n * Dataprep operations act on a set of input obejcts and can modify their properties: f.e. change materials, add metadata etc.\n */" },
		{ "IncludePath", "DataprepOperation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Base class for all Dataprep operations\nDataprep operations act on a set of input obejcts and can modify their properties: f.e. change materials, add metadata etc." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepOperation_Statics::ClassParams = {
		&UDataprepOperation::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepOperation.OuterSingleton, Z_Construct_UClass_UDataprepOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepOperation.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepOperation>()
	{
		return UDataprepOperation::StaticClass();
	}
	UDataprepOperation::UDataprepOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepOperation);
	UDataprepOperation::~UDataprepOperation() {}
	DEFINE_FUNCTION(UDataprepEditingOperation::execDeleteObjects)
	{
		P_GET_TARRAY(UObject*,Z_Param_Objects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteObjects(Z_Param_Objects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepEditingOperation::execDeleteObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Objects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteObject(Z_Param_Objects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepEditingOperation::execRemoveObjects)
	{
		P_GET_TARRAY(UObject*,Z_Param_Objects);
		P_GET_UBOOL(Z_Param_bLocalContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObjects(Z_Param_Objects,Z_Param_bLocalContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepEditingOperation::execRemoveObject)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bLocalContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveObject(Z_Param_Object,Z_Param_bLocalContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepEditingOperation::execCreateActor)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActorName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->CreateActor(Z_Param_ActorClass,Z_Param_ActorName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepEditingOperation::execCreateAsset)
	{
		P_GET_OBJECT(UClass,Z_Param_AssetClass);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->CreateAsset(Z_Param_AssetClass,Z_Param_AssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepEditingOperation::execAddAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->AddAsset(Z_Param_Asset,Z_Param_AssetName);
		P_NATIVE_END;
	}
	void UDataprepEditingOperation::StaticRegisterNativesUDataprepEditingOperation()
	{
		UClass* Class = UDataprepEditingOperation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAsset", &UDataprepEditingOperation::execAddAsset },
			{ "CreateActor", &UDataprepEditingOperation::execCreateActor },
			{ "CreateAsset", &UDataprepEditingOperation::execCreateAsset },
			{ "DeleteObject", &UDataprepEditingOperation::execDeleteObject },
			{ "DeleteObjects", &UDataprepEditingOperation::execDeleteObjects },
			{ "RemoveObject", &UDataprepEditingOperation::execRemoveObject },
			{ "RemoveObjects", &UDataprepEditingOperation::execRemoveObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics
	{
		struct DataprepEditingOperation_eventAddAsset_Parms
		{
			const UObject* Asset;
			FString AssetName;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventAddAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventAddAsset_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_AssetName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventAddAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Editing Operation" },
		{ "Comment", "/**\n\x09 * DUplicate and add an asset to the Dataprep's and action's working set\n\x09 * @param Asset\x09\x09\x09If not null, the asset will be duplicated\n\x09 * @param AssetName\x09\x09Name of the asset to create. Name collision will be checked and fixed before naming the asset\n\x09 * @returns\x09\x09\x09\x09The asset newly created\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "DUplicate and add an asset to the Dataprep's and action's working set\n@param Asset                 If not null, the asset will be duplicated\n@param AssetName             Name of the asset to create. Name collision will be checked and fixed before naming the asset\n@returns                             The asset newly created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepEditingOperation, nullptr, "AddAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::DataprepEditingOperation_eventAddAsset_Parms), Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepEditingOperation_AddAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepEditingOperation_AddAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics
	{
		struct DataprepEditingOperation_eventCreateActor_Parms
		{
			UClass* ActorClass;
			FString ActorName;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventCreateActor_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::NewProp_ActorName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventCreateActor_Parms, ActorName), METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::NewProp_ActorName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventCreateActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::NewProp_ActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Editing Operation" },
		{ "Comment", "/**\n\x09 * Add an actor to the Dataprep's transient world and action's working set\n\x09 * @param ActorClass\x09""Class of the actor to create\n\x09 * @param ActorName\x09\x09Name of the actor to create. Name collision will be performed before naming the asset\n\x09 * @returns\x09\x09\x09\x09The actor newly created\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Add an actor to the Dataprep's transient world and action's working set\n@param ActorClass    Class of the actor to create\n@param ActorName             Name of the actor to create. Name collision will be performed before naming the asset\n@returns                             The actor newly created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepEditingOperation, nullptr, "CreateActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::DataprepEditingOperation_eventCreateActor_Parms), Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepEditingOperation_CreateActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepEditingOperation_CreateActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics
	{
		struct DataprepEditingOperation_eventCreateAsset_Parms
		{
			UClass* AssetClass;
			FString AssetName;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_AssetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventCreateAsset_Parms, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventCreateAsset_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::NewProp_AssetName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventCreateAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::NewProp_AssetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Editing Operation" },
		{ "Comment", "/**\n\x09 * Create and add an asset to the Dataprep's and action's working set\n\x09 * @param AssetClass\x09If Asset is null, an asset of the given class will be returned\n\x09 * @param AssetName\x09\x09Name of the asset to create. Name collision will be checked and fixed before naming the asset\n\x09 * @returns\x09\x09\x09\x09The asset newly created\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Create and add an asset to the Dataprep's and action's working set\n@param AssetClass    If Asset is null, an asset of the given class will be returned\n@param AssetName             Name of the asset to create. Name collision will be checked and fixed before naming the asset\n@returns                             The asset newly created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepEditingOperation, nullptr, "CreateAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::DataprepEditingOperation_eventCreateAsset_Parms), Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics
	{
		struct DataprepEditingOperation_eventDeleteObject_Parms
		{
			UObject* Objects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventDeleteObject_Parms, Objects), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::NewProp_Objects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Editing Operation" },
		{ "Comment", "/**\n\x09 * Delete an object from the Dataprep's working set\n\x09 * @param Object\x09\x09The object to be deleted\n\x09 * @remark\x09The deletion of the object is deferred. However, if the object is not an asset, it is removed from\n\x09 *\x09\x09\x09the Dataprep's transient world. If the object is an asset, it is moved to the transient package, no\n\x09 *\x09\x09\x09""action is taken to clean up any object referencing this asset.\n\x09 * @remark\x09""After execution, the object is not accessible by any subsequent operation in the Dataprep's pipeline.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Delete an object from the Dataprep's working set\n@param Object                The object to be deleted\n@remark      The deletion of the object is deferred. However, if the object is not an asset, it is removed from\n                     the Dataprep's transient world. If the object is an asset, it is moved to the transient package, no\n                     action is taken to clean up any object referencing this asset.\n@remark      After execution, the object is not accessible by any subsequent operation in the Dataprep's pipeline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepEditingOperation, nullptr, "DeleteObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::DataprepEditingOperation_eventDeleteObject_Parms), Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics
	{
		struct DataprepEditingOperation_eventDeleteObjects_Parms
		{
			TArray<UObject*> Objects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventDeleteObjects_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::NewProp_Objects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Editing Operation" },
		{ "Comment", "/**\n\x09 * Delete an array of objects from the Dataprep's and action's working set\n\x09 * @param Objects\x09\x09The array of objects to delete\n\x09 * @remark\x09The deletion of the object is deferred. However, if the object is not an asset, it is removed from\n\x09 *\x09\x09\x09the Dataprep's transient world. If the object is an asset, it is moved to the transient package, no\n\x09 *\x09\x09\x09""action is taken to clean up any object referencing this asset.\n\x09 * @remark\x09""After execution, the object is not accessible by any subsequent operation in the Dataprep's pipeline.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Delete an array of objects from the Dataprep's and action's working set\n@param Objects               The array of objects to delete\n@remark      The deletion of the object is deferred. However, if the object is not an asset, it is removed from\n                     the Dataprep's transient world. If the object is an asset, it is moved to the transient package, no\n                     action is taken to clean up any object referencing this asset.\n@remark      After execution, the object is not accessible by any subsequent operation in the Dataprep's pipeline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepEditingOperation, nullptr, "DeleteObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::DataprepEditingOperation_eventDeleteObjects_Parms), Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics
	{
		struct DataprepEditingOperation_eventRemoveObject_Parms
		{
			UObject* Object;
			bool bLocalContext;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_bLocalContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventRemoveObject_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::NewProp_bLocalContext_SetBit(void* Obj)
	{
		((DataprepEditingOperation_eventRemoveObject_Parms*)Obj)->bLocalContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::NewProp_bLocalContext = { "bLocalContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataprepEditingOperation_eventRemoveObject_Parms), &Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::NewProp_bLocalContext_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::NewProp_bLocalContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Editing Operation" },
		{ "Comment", "/**\n\x09 * Remove an object from the Dataprep's and/or action's working set\n\x09 * @param Object\x09\x09\x09Object to be removed from the working set \n\x09 * @param bLocalContext\x09\x09If set to true, the object is removed from the current working set.\n\x09 *\x09\x09\x09\x09\x09\x09\x09The object will not be accessible to any subsequent operation using the current context.\n\x09 *\x09\x09\x09\x09\x09\x09\x09If set to false, the object is removed from the Dataprep's working set.\n\x09 *\x09\x09\x09\x09\x09\x09\x09The object will not be accessible to any subsequent operation in the Dataprep's pipeline.\n\x09 */" },
		{ "CPP_Default_bLocalContext", "false" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Remove an object from the Dataprep's and/or action's working set\n@param Object                        Object to be removed from the working set\n@param bLocalContext         If set to true, the object is removed from the current working set.\n                                                     The object will not be accessible to any subsequent operation using the current context.\n                                                     If set to false, the object is removed from the Dataprep's working set.\n                                                     The object will not be accessible to any subsequent operation in the Dataprep's pipeline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepEditingOperation, nullptr, "RemoveObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::DataprepEditingOperation_eventRemoveObject_Parms), Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics
	{
		struct DataprepEditingOperation_eventRemoveObjects_Parms
		{
			TArray<UObject*> Objects;
			bool bLocalContext;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static void NewProp_bLocalContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepEditingOperation_eventRemoveObjects_Parms, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::NewProp_bLocalContext_SetBit(void* Obj)
	{
		((DataprepEditingOperation_eventRemoveObjects_Parms*)Obj)->bLocalContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::NewProp_bLocalContext = { "bLocalContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataprepEditingOperation_eventRemoveObjects_Parms), &Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::NewProp_bLocalContext_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::NewProp_Objects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::NewProp_bLocalContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Editing Operation" },
		{ "Comment", "/**\n\x09 * Remove an array of objects from the Dataprep's and/or action's working set\n\x09 * @param Objects\x09\x09\x09""An array of objects to be removed from the working set \n\x09 * @param bLocalContext\x09\x09If set to true, the object is removed from the current working set.\n\x09 *\x09\x09\x09\x09\x09\x09\x09The object will not be accessible to any subsequent operation using the current context.\n\x09 *\x09\x09\x09\x09\x09\x09\x09If set to false, the object is removed from the Dataprep's working set.\n\x09 *\x09\x09\x09\x09\x09\x09\x09The object will not be accessible to any subsequent operation in the Dataprep's pipeline.\n\x09 */" },
		{ "CPP_Default_bLocalContext", "false" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Remove an array of objects from the Dataprep's and/or action's working set\n@param Objects                       An array of objects to be removed from the working set\n@param bLocalContext         If set to true, the object is removed from the current working set.\n                                                     The object will not be accessible to any subsequent operation using the current context.\n                                                     If set to false, the object is removed from the Dataprep's working set.\n                                                     The object will not be accessible to any subsequent operation in the Dataprep's pipeline." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepEditingOperation, nullptr, "RemoveObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::DataprepEditingOperation_eventRemoveObjects_Parms), Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepEditingOperation);
	UClass* Z_Construct_UClass_UDataprepEditingOperation_NoRegister()
	{
		return UDataprepEditingOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepEditingOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepEditingOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepEditingOperation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepEditingOperation_AddAsset, "AddAsset" }, // 813468927
		{ &Z_Construct_UFunction_UDataprepEditingOperation_CreateActor, "CreateActor" }, // 2290597807
		{ &Z_Construct_UFunction_UDataprepEditingOperation_CreateAsset, "CreateAsset" }, // 1454494810
		{ &Z_Construct_UFunction_UDataprepEditingOperation_DeleteObject, "DeleteObject" }, // 790542897
		{ &Z_Construct_UFunction_UDataprepEditingOperation_DeleteObjects, "DeleteObjects" }, // 377071755
		{ &Z_Construct_UFunction_UDataprepEditingOperation_RemoveObject, "RemoveObject" }, // 3094723774
		{ &Z_Construct_UFunction_UDataprepEditingOperation_RemoveObjects, "RemoveObjects" }, // 180024868
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepEditingOperation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all Dataprep editing operations\n * Dataprep editing operations act on a set of input obejcts and can modify their properties, \n * but also can create new objects or delete existing ones (like assets and actors), based on the \n * information they receive as an input\n */" },
		{ "IncludePath", "DataprepOperation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DataprepOperation.h" },
		{ "ToolTip", "Base class for all Dataprep editing operations\nDataprep editing operations act on a set of input obejcts and can modify their properties,\nbut also can create new objects or delete existing ones (like assets and actors), based on the\ninformation they receive as an input" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepEditingOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepEditingOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepEditingOperation_Statics::ClassParams = {
		&UDataprepEditingOperation::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepEditingOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepEditingOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepEditingOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepEditingOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepEditingOperation.OuterSingleton, Z_Construct_UClass_UDataprepEditingOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepEditingOperation.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepEditingOperation>()
	{
		return UDataprepEditingOperation::StaticClass();
	}
	UDataprepEditingOperation::UDataprepEditingOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepEditingOperation);
	UDataprepEditingOperation::~UDataprepEditingOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_Statics::ScriptStructInfo[] = {
		{ FDataprepContext::StaticStruct, Z_Construct_UScriptStruct_FDataprepContext_Statics::NewStructOps, TEXT("DataprepContext"), &Z_Registration_Info_UScriptStruct_DataprepContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataprepContext), 2272976175U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepOperation, UDataprepOperation::StaticClass, TEXT("UDataprepOperation"), &Z_Registration_Info_UClass_UDataprepOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepOperation), 2001983010U) },
		{ Z_Construct_UClass_UDataprepEditingOperation, UDataprepEditingOperation::StaticClass, TEXT("UDataprepEditingOperation"), &Z_Registration_Info_UClass_UDataprepEditingOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepEditingOperation), 2143635618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_667181356(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepOperation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
