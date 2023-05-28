// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SelectionSystem/DataprepSelectionTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepSelectionTransform() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizableObject();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepRecursiveSelectionTransform();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepRecursiveSelectionTransform_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepSelectionTransform();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepSelectionTransform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	DEFINE_FUNCTION(UDataprepSelectionTransform::execGetAdditionalKeyword)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetAdditionalKeyword_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepSelectionTransform::execGetCategory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCategory_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepSelectionTransform::execGetTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTooltip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepSelectionTransform::execGetDisplayTransformName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayTransformName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepSelectionTransform::execOnExecution)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InObjects);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnExecution_Implementation(Z_Param_Out_InObjects,Z_Param_Out_OutObjects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepSelectionTransform::execExecute)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InObjects);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_OutObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute(Z_Param_Out_InObjects,Z_Param_Out_OutObjects);
		P_NATIVE_END;
	}
	struct DataprepSelectionTransform_eventGetAdditionalKeyword_Parms
	{
		FText ReturnValue;
	};
	struct DataprepSelectionTransform_eventGetCategory_Parms
	{
		FText ReturnValue;
	};
	struct DataprepSelectionTransform_eventGetDisplayTransformName_Parms
	{
		FText ReturnValue;
	};
	struct DataprepSelectionTransform_eventGetTooltip_Parms
	{
		FText ReturnValue;
	};
	struct DataprepSelectionTransform_eventOnExecution_Parms
	{
		TArray<UObject*> InObjects;
		TArray<UObject*> OutObjects;
	};
	static FName NAME_UDataprepSelectionTransform_GetAdditionalKeyword = FName(TEXT("GetAdditionalKeyword"));
	FText UDataprepSelectionTransform::GetAdditionalKeyword() const
	{
		DataprepSelectionTransform_eventGetAdditionalKeyword_Parms Parms;
		const_cast<UDataprepSelectionTransform*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepSelectionTransform_GetAdditionalKeyword),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepSelectionTransform_GetCategory = FName(TEXT("GetCategory"));
	FText UDataprepSelectionTransform::GetCategory() const
	{
		DataprepSelectionTransform_eventGetCategory_Parms Parms;
		const_cast<UDataprepSelectionTransform*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepSelectionTransform_GetCategory),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepSelectionTransform_GetDisplayTransformName = FName(TEXT("GetDisplayTransformName"));
	FText UDataprepSelectionTransform::GetDisplayTransformName() const
	{
		DataprepSelectionTransform_eventGetDisplayTransformName_Parms Parms;
		const_cast<UDataprepSelectionTransform*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepSelectionTransform_GetDisplayTransformName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepSelectionTransform_GetTooltip = FName(TEXT("GetTooltip"));
	FText UDataprepSelectionTransform::GetTooltip() const
	{
		DataprepSelectionTransform_eventGetTooltip_Parms Parms;
		const_cast<UDataprepSelectionTransform*>(this)->ProcessEvent(FindFunctionChecked(NAME_UDataprepSelectionTransform_GetTooltip),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UDataprepSelectionTransform_OnExecution = FName(TEXT("OnExecution"));
	void UDataprepSelectionTransform::OnExecution(TArray<UObject*> const& InObjects, TArray<UObject*>& OutObjects)
	{
		DataprepSelectionTransform_eventOnExecution_Parms Parms;
		Parms.InObjects=InObjects;
		Parms.OutObjects=OutObjects;
		ProcessEvent(FindFunctionChecked(NAME_UDataprepSelectionTransform_OnExecution),&Parms);
		OutObjects=Parms.OutObjects;
	}
	void UDataprepSelectionTransform::StaticRegisterNativesUDataprepSelectionTransform()
	{
		UClass* Class = UDataprepSelectionTransform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &UDataprepSelectionTransform::execExecute },
			{ "GetAdditionalKeyword", &UDataprepSelectionTransform::execGetAdditionalKeyword },
			{ "GetCategory", &UDataprepSelectionTransform::execGetCategory },
			{ "GetDisplayTransformName", &UDataprepSelectionTransform::execGetDisplayTransformName },
			{ "GetTooltip", &UDataprepSelectionTransform::execGetTooltip },
			{ "OnExecution", &UDataprepSelectionTransform::execOnExecution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics
	{
		struct DataprepSelectionTransform_eventExecute_Parms
		{
			TArray<UObject*> InObjects;
			TArray<UObject*> OutObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_InObjects_Inner = { "InObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_InObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_InObjects = { "InObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepSelectionTransform_eventExecute_Parms, InObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_InObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_InObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_OutObjects_Inner = { "OutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_OutObjects = { "OutObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepSelectionTransform_eventExecute_Parms, OutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_InObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_InObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_OutObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::NewProp_OutObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/**\n\x09 * Execute the transform\n\x09 * @param InObjects Input objects the transform will operate on\n\x09 * @param OutObjects Resulting objects after the transform was executed\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepSelectionTransform.h" },
		{ "ToolTip", "Execute the transform\n@param InObjects Input objects the transform will operate on\n@param OutObjects Resulting objects after the transform was executed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepSelectionTransform, nullptr, "Execute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::DataprepSelectionTransform_eventExecute_Parms), Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepSelectionTransform_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepSelectionTransform_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepSelectionTransform_eventGetAdditionalKeyword_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display|Search" },
		{ "Comment", "/**\n\x09 * Allows to add more keywords for when a user is searching for the fetcher in the ui.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepSelectionTransform.h" },
		{ "ToolTip", "Allows to add more keywords for when a user is searching for the fetcher in the ui." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepSelectionTransform, nullptr, "GetAdditionalKeyword", nullptr, nullptr, sizeof(DataprepSelectionTransform_eventGetAdditionalKeyword_Parms), Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepSelectionTransform_eventGetCategory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/**\n\x09 * Allows to change the category of the transform for the ui if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepSelectionTransform.h" },
		{ "ToolTip", "Allows to change the category of the transform for the ui if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepSelectionTransform, nullptr, "GetCategory", nullptr, nullptr, sizeof(DataprepSelectionTransform_eventGetCategory_Parms), Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepSelectionTransform_eventGetDisplayTransformName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/** \n\x09 * Allows to change the name of the transform for the ui if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepSelectionTransform.h" },
		{ "ToolTip", "Allows to change the name of the transform for the ui if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepSelectionTransform, nullptr, "GetDisplayTransformName", nullptr, nullptr, sizeof(DataprepSelectionTransform_eventGetDisplayTransformName_Parms), Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepSelectionTransform_eventGetTooltip_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Display" },
		{ "Comment", "/**\n\x09 * Allows to change the tooltip of the transform for the ui if needed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepSelectionTransform.h" },
		{ "ToolTip", "Allows to change the tooltip of the transform for the ui if needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepSelectionTransform, nullptr, "GetTooltip", nullptr, nullptr, sizeof(DataprepSelectionTransform_eventGetTooltip_Parms), Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InObjects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_InObjects_Inner = { "InObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_InObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_InObjects = { "InObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepSelectionTransform_eventOnExecution_Parms, InObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_InObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_InObjects_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_OutObjects_Inner = { "OutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_OutObjects = { "OutObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepSelectionTransform_eventOnExecution_Parms, OutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_InObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_InObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_OutObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::NewProp_OutObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * This function is called when the transform is executed.\n\x09 * If your defining your transform in Blueprint or Python this is the function to override.\n\x09 * @param InObjects Input objects the transform will operate on\n\x09 * @param OutObjects Resulting objects after the transform was executed\n\x09 */" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepSelectionTransform.h" },
		{ "ToolTip", "This function is called when the transform is executed.\nIf your defining your transform in Blueprint or Python this is the function to override.\n@param InObjects Input objects the transform will operate on\n@param OutObjects Resulting objects after the transform was executed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepSelectionTransform, nullptr, "OnExecution", nullptr, nullptr, sizeof(DataprepSelectionTransform_eventOnExecution_Parms), Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepSelectionTransform);
	UClass* Z_Construct_UClass_UDataprepSelectionTransform_NoRegister()
	{
		return UDataprepSelectionTransform::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepSelectionTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOutputCanIncludeInput_MetaData[];
#endif
		static void NewProp_bOutputCanIncludeInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputCanIncludeInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepSelectionTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepParameterizableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepSelectionTransform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepSelectionTransform_Execute, "Execute" }, // 2933902741
		{ &Z_Construct_UFunction_UDataprepSelectionTransform_GetAdditionalKeyword, "GetAdditionalKeyword" }, // 771160735
		{ &Z_Construct_UFunction_UDataprepSelectionTransform_GetCategory, "GetCategory" }, // 2279851333
		{ &Z_Construct_UFunction_UDataprepSelectionTransform_GetDisplayTransformName, "GetDisplayTransformName" }, // 2677939022
		{ &Z_Construct_UFunction_UDataprepSelectionTransform_GetTooltip, "GetTooltip" }, // 547784567
		{ &Z_Construct_UFunction_UDataprepSelectionTransform_OnExecution, "OnExecution" }, // 1250685466
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSelectionTransform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SelectionSystem/DataprepSelectionTransform.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepSelectionTransform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSelectionTransform_Statics::NewProp_bOutputCanIncludeInput_MetaData[] = {
		{ "Category", "SelectionTransform" },
		{ "Comment", "// Specifies if input objects that have matching type can be added to the result\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepSelectionTransform.h" },
		{ "ToolTip", "Specifies if input objects that have matching type can be added to the result" },
	};
#endif
	void Z_Construct_UClass_UDataprepSelectionTransform_Statics::NewProp_bOutputCanIncludeInput_SetBit(void* Obj)
	{
		((UDataprepSelectionTransform*)Obj)->bOutputCanIncludeInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepSelectionTransform_Statics::NewProp_bOutputCanIncludeInput = { "bOutputCanIncludeInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepSelectionTransform), &Z_Construct_UClass_UDataprepSelectionTransform_Statics::NewProp_bOutputCanIncludeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepSelectionTransform_Statics::NewProp_bOutputCanIncludeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSelectionTransform_Statics::NewProp_bOutputCanIncludeInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepSelectionTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSelectionTransform_Statics::NewProp_bOutputCanIncludeInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepSelectionTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepSelectionTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepSelectionTransform_Statics::ClassParams = {
		&UDataprepSelectionTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataprepSelectionTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSelectionTransform_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepSelectionTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSelectionTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepSelectionTransform()
	{
		if (!Z_Registration_Info_UClass_UDataprepSelectionTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepSelectionTransform.OuterSingleton, Z_Construct_UClass_UDataprepSelectionTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepSelectionTransform.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepSelectionTransform>()
	{
		return UDataprepSelectionTransform::StaticClass();
	}
	UDataprepSelectionTransform::UDataprepSelectionTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepSelectionTransform);
	UDataprepSelectionTransform::~UDataprepSelectionTransform() {}
	void UDataprepRecursiveSelectionTransform::StaticRegisterNativesUDataprepRecursiveSelectionTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepRecursiveSelectionTransform);
	UClass* Z_Construct_UClass_UDataprepRecursiveSelectionTransform_NoRegister()
	{
		return UDataprepRecursiveSelectionTransform::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowRecursionLevels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AllowRecursionLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepSelectionTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SelectionSystem/DataprepSelectionTransform.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepSelectionTransform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::NewProp_AllowRecursionLevels_MetaData[] = {
		{ "Category", "SelectionTransform" },
		{ "Comment", "// How many times is it allowed to apply another transform on the result\n" },
		{ "ModuleRelativePath", "Public/SelectionSystem/DataprepSelectionTransform.h" },
		{ "ToolTip", "How many times is it allowed to apply another transform on the result" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::NewProp_AllowRecursionLevels = { "AllowRecursionLevels", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepRecursiveSelectionTransform, AllowRecursionLevels), METADATA_PARAMS(Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::NewProp_AllowRecursionLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::NewProp_AllowRecursionLevels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::NewProp_AllowRecursionLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepRecursiveSelectionTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::ClassParams = {
		&UDataprepRecursiveSelectionTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepRecursiveSelectionTransform()
	{
		if (!Z_Registration_Info_UClass_UDataprepRecursiveSelectionTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepRecursiveSelectionTransform.OuterSingleton, Z_Construct_UClass_UDataprepRecursiveSelectionTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepRecursiveSelectionTransform.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepRecursiveSelectionTransform>()
	{
		return UDataprepRecursiveSelectionTransform::StaticClass();
	}
	UDataprepRecursiveSelectionTransform::UDataprepRecursiveSelectionTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepRecursiveSelectionTransform);
	UDataprepRecursiveSelectionTransform::~UDataprepRecursiveSelectionTransform() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepSelectionTransform, UDataprepSelectionTransform::StaticClass, TEXT("UDataprepSelectionTransform"), &Z_Registration_Info_UClass_UDataprepSelectionTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepSelectionTransform), 3860031378U) },
		{ Z_Construct_UClass_UDataprepRecursiveSelectionTransform, UDataprepRecursiveSelectionTransform::StaticClass, TEXT("UDataprepRecursiveSelectionTransform"), &Z_Registration_Info_UClass_UDataprepRecursiveSelectionTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepRecursiveSelectionTransform), 1438434380U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_2709142916(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_SelectionSystem_DataprepSelectionTransform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
