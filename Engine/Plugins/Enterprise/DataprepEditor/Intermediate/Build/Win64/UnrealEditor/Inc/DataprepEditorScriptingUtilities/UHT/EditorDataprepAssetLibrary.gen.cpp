// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorDataprepAssetLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorDataprepAssetLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionAsset_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAsset_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInterface_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentConsumer_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentProducer_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepParameterizableObject_NoRegister();
	DATAPREPEDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorDataprepAssetLibrary();
	DATAPREPEDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorDataprepAssetLibrary_NoRegister();
	DATAPREPEDITORSCRIPTINGUTILITIES_API UEnum* Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DataprepEditorScriptingUtilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataprepReportMethod;
	static UEnum* EDataprepReportMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataprepReportMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataprepReportMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod, (UObject*)Z_Construct_UPackage__Script_DataprepEditorScriptingUtilities(), TEXT("EDataprepReportMethod"));
		}
		return Z_Registration_Info_UEnum_EDataprepReportMethod.OuterSingleton;
	}
	template<> DATAPREPEDITORSCRIPTINGUTILITIES_API UEnum* StaticEnum<EDataprepReportMethod>()
	{
		return EDataprepReportMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod_Statics::Enumerators[] = {
		{ "EDataprepReportMethod::StandardLog", (int64)EDataprepReportMethod::StandardLog },
		{ "EDataprepReportMethod::SameFeedbackAsEditor", (int64)EDataprepReportMethod::SameFeedbackAsEditor },
		{ "EDataprepReportMethod::NoFeedback", (int64)EDataprepReportMethod::NoFeedback },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "NoFeedback.Comment", "// Don't report the feedback\n" },
		{ "NoFeedback.Name", "EDataprepReportMethod::NoFeedback" },
		{ "NoFeedback.ToolTip", "Don't report the feedback" },
		{ "SameFeedbackAsEditor.Comment", "// Report the feedback the same way that the dataprep asset editor does\n" },
		{ "SameFeedbackAsEditor.Name", "EDataprepReportMethod::SameFeedbackAsEditor" },
		{ "SameFeedbackAsEditor.ToolTip", "Report the feedback the same way that the dataprep asset editor does" },
		{ "StandardLog.Comment", "// Report the feedback into the output log only\n" },
		{ "StandardLog.Name", "EDataprepReportMethod::StandardLog" },
		{ "StandardLog.ToolTip", "Report the feedback into the output log only" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataprepEditorScriptingUtilities,
		nullptr,
		"EDataprepReportMethod",
		"EDataprepReportMethod",
		Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod()
	{
		if (!Z_Registration_Info_UEnum_EDataprepReportMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataprepReportMethod.InnerSingleton, Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataprepReportMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execGetStepObject)
	{
		P_GET_OBJECT(UDataprepActionAsset,Z_Param_DataprepAction);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepParameterizableObject**)Z_Param__Result=UEditorDataprepAssetLibrary::GetStepObject(Z_Param_DataprepAction,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execSwapSteps)
	{
		P_GET_OBJECT(UDataprepActionAsset,Z_Param_DataprepAction);
		P_GET_PROPERTY(FIntProperty,Z_Param_FirstIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SecondIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorDataprepAssetLibrary::SwapSteps(Z_Param_DataprepAction,Z_Param_FirstIndex,Z_Param_SecondIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execMoveStep)
	{
		P_GET_OBJECT(UDataprepActionAsset,Z_Param_DataprepAction);
		P_GET_PROPERTY(FIntProperty,Z_Param_StepIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_DestinationIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorDataprepAssetLibrary::MoveStep(Z_Param_DataprepAction,Z_Param_StepIndex,Z_Param_DestinationIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execRemoveStep)
	{
		P_GET_OBJECT(UDataprepActionAsset,Z_Param_DataprepAction);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorDataprepAssetLibrary::RemoveStep(Z_Param_DataprepAction,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execAddStepByDuplication)
	{
		P_GET_OBJECT(UDataprepActionAsset,Z_Param_DataprepAction);
		P_GET_OBJECT(UDataprepParameterizableObject,Z_Param_StepObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepParameterizableObject**)Z_Param__Result=UEditorDataprepAssetLibrary::AddStepByDuplication(Z_Param_DataprepAction,Z_Param_StepObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execAddStep)
	{
		P_GET_OBJECT(UDataprepActionAsset,Z_Param_DataprepAction);
		P_GET_OBJECT(UClass,Z_Param_StepType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepParameterizableObject**)Z_Param__Result=UEditorDataprepAssetLibrary::AddStep(Z_Param_DataprepAction,Z_Param_StepType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execGetStepsCount)
	{
		P_GET_OBJECT(UDataprepActionAsset,Z_Param_DataprepAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UEditorDataprepAssetLibrary::GetStepsCount(Z_Param_DataprepAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execGetConsumer)
	{
		P_GET_OBJECT(UDataprepAssetInterface,Z_Param_DataprepAssetInterface);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepContentConsumer**)Z_Param__Result=UEditorDataprepAssetLibrary::GetConsumer(Z_Param_DataprepAssetInterface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execGetAction)
	{
		P_GET_OBJECT(UDataprepAsset,Z_Param_DataprepAsset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepActionAsset**)Z_Param__Result=UEditorDataprepAssetLibrary::GetAction(Z_Param_DataprepAsset,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execSwapActions)
	{
		P_GET_OBJECT(UDataprepAsset,Z_Param_DataprepAsset);
		P_GET_PROPERTY(FIntProperty,Z_Param_FirstActionIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SecondActionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorDataprepAssetLibrary::SwapActions(Z_Param_DataprepAsset,Z_Param_FirstActionIndex,Z_Param_SecondActionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execAddActionByDuplication)
	{
		P_GET_OBJECT(UDataprepAsset,Z_Param_DataprepAsset);
		P_GET_OBJECT(UDataprepActionAsset,Z_Param_ActionToDuplicate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepActionAsset**)Z_Param__Result=UEditorDataprepAssetLibrary::AddActionByDuplication(Z_Param_DataprepAsset,Z_Param_ActionToDuplicate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execAddAction)
	{
		P_GET_OBJECT(UDataprepAsset,Z_Param_DataprepAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepActionAsset**)Z_Param__Result=UEditorDataprepAssetLibrary::AddAction(Z_Param_DataprepAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execRemoveAction)
	{
		P_GET_OBJECT(UDataprepAsset,Z_Param_DataprepAsset);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorDataprepAssetLibrary::RemoveAction(Z_Param_DataprepAsset,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execGetActionCount)
	{
		P_GET_OBJECT(UDataprepAsset,Z_Param_DataprepAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UEditorDataprepAssetLibrary::GetActionCount(Z_Param_DataprepAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execAddProducerAutomated)
	{
		P_GET_OBJECT(UDataprepAssetInterface,Z_Param_DataprepAssetInterface);
		P_GET_OBJECT(UClass,Z_Param_ProducerClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepContentProducer**)Z_Param__Result=UEditorDataprepAssetLibrary::AddProducerAutomated(Z_Param_DataprepAssetInterface,Z_Param_ProducerClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execAddProducer)
	{
		P_GET_OBJECT(UDataprepAssetInterface,Z_Param_DataprepAssetInterface);
		P_GET_OBJECT(UClass,Z_Param_ProducerClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepContentProducer**)Z_Param__Result=UEditorDataprepAssetLibrary::AddProducer(Z_Param_DataprepAssetInterface,Z_Param_ProducerClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execRemoveProducer)
	{
		P_GET_OBJECT(UDataprepAssetInterface,Z_Param_DataprepAssetInterface);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorDataprepAssetLibrary::RemoveProducer(Z_Param_DataprepAssetInterface,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execGetProducer)
	{
		P_GET_OBJECT(UDataprepAssetInterface,Z_Param_DataprepAssetInterface);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDataprepContentProducer**)Z_Param__Result=UEditorDataprepAssetLibrary::GetProducer(Z_Param_DataprepAssetInterface,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execGetProducersCount)
	{
		P_GET_OBJECT(UDataprepAssetInterface,Z_Param_DataprepAssetInterface);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UEditorDataprepAssetLibrary::GetProducersCount(Z_Param_DataprepAssetInterface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDataprepAssetLibrary::execExecuteDataprep)
	{
		P_GET_OBJECT(UDataprepAssetInterface,Z_Param_DataprepAssetInterface);
		P_GET_ENUM(EDataprepReportMethod,Z_Param_LogReportingMethod);
		P_GET_ENUM(EDataprepReportMethod,Z_Param_ProgressReportingMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorDataprepAssetLibrary::ExecuteDataprep(Z_Param_DataprepAssetInterface,EDataprepReportMethod(Z_Param_LogReportingMethod),EDataprepReportMethod(Z_Param_ProgressReportingMethod));
		P_NATIVE_END;
	}
	void UEditorDataprepAssetLibrary::StaticRegisterNativesUEditorDataprepAssetLibrary()
	{
		UClass* Class = UEditorDataprepAssetLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAction", &UEditorDataprepAssetLibrary::execAddAction },
			{ "AddActionByDuplication", &UEditorDataprepAssetLibrary::execAddActionByDuplication },
			{ "AddProducer", &UEditorDataprepAssetLibrary::execAddProducer },
			{ "AddProducerAutomated", &UEditorDataprepAssetLibrary::execAddProducerAutomated },
			{ "AddStep", &UEditorDataprepAssetLibrary::execAddStep },
			{ "AddStepByDuplication", &UEditorDataprepAssetLibrary::execAddStepByDuplication },
			{ "ExecuteDataprep", &UEditorDataprepAssetLibrary::execExecuteDataprep },
			{ "GetAction", &UEditorDataprepAssetLibrary::execGetAction },
			{ "GetActionCount", &UEditorDataprepAssetLibrary::execGetActionCount },
			{ "GetConsumer", &UEditorDataprepAssetLibrary::execGetConsumer },
			{ "GetProducer", &UEditorDataprepAssetLibrary::execGetProducer },
			{ "GetProducersCount", &UEditorDataprepAssetLibrary::execGetProducersCount },
			{ "GetStepObject", &UEditorDataprepAssetLibrary::execGetStepObject },
			{ "GetStepsCount", &UEditorDataprepAssetLibrary::execGetStepsCount },
			{ "MoveStep", &UEditorDataprepAssetLibrary::execMoveStep },
			{ "RemoveAction", &UEditorDataprepAssetLibrary::execRemoveAction },
			{ "RemoveProducer", &UEditorDataprepAssetLibrary::execRemoveProducer },
			{ "RemoveStep", &UEditorDataprepAssetLibrary::execRemoveStep },
			{ "SwapActions", &UEditorDataprepAssetLibrary::execSwapActions },
			{ "SwapSteps", &UEditorDataprepAssetLibrary::execSwapSteps },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics
	{
		struct EditorDataprepAssetLibrary_eventAddAction_Parms
		{
			UDataprepAsset* DataprepAsset;
			UDataprepActionAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::NewProp_DataprepAsset = { "DataprepAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddAction_Parms, DataprepAsset), Z_Construct_UClass_UDataprepAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddAction_Parms, ReturnValue), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::NewProp_DataprepAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Add an action to a dataprep asset\n\x09 * @param DataprepAsset The dataprep asset to which the action will added\n\x09 * @return the new action\n\x09 * @note the action is added at the end of the action list\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Add an action to a dataprep asset\n@param DataprepAsset The dataprep asset to which the action will added\n@return the new action\n@note the action is added at the end of the action list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "AddAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::EditorDataprepAssetLibrary_eventAddAction_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics
	{
		struct EditorDataprepAssetLibrary_eventAddActionByDuplication_Parms
		{
			UDataprepAsset* DataprepAsset;
			UDataprepActionAsset* ActionToDuplicate;
			UDataprepActionAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionToDuplicate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::NewProp_DataprepAsset = { "DataprepAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddActionByDuplication_Parms, DataprepAsset), Z_Construct_UClass_UDataprepAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::NewProp_ActionToDuplicate = { "ActionToDuplicate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddActionByDuplication_Parms, ActionToDuplicate), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddActionByDuplication_Parms, ReturnValue), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::NewProp_DataprepAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::NewProp_ActionToDuplicate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Add an action to a dataprep asset\n\x09 * @param DataprepAsset The dataprep asset to which the action will added\n\x09 * @param ActionToDuplicate The action that will be duplicated\n\x09 * @return the new action\n\x09 * @note the action is added at the end of the action list\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Add an action to a dataprep asset\n@param DataprepAsset The dataprep asset to which the action will added\n@param ActionToDuplicate The action that will be duplicated\n@return the new action\n@note the action is added at the end of the action list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "AddActionByDuplication", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::EditorDataprepAssetLibrary_eventAddActionByDuplication_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics
	{
		struct EditorDataprepAssetLibrary_eventAddProducer_Parms
		{
			UDataprepAssetInterface* DataprepAssetInterface;
			TSubclassOf<UDataprepContentProducer>  ProducerClass;
			UDataprepContentProducer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAssetInterface;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProducerClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::NewProp_DataprepAssetInterface = { "DataprepAssetInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddProducer_Parms, DataprepAssetInterface), Z_Construct_UClass_UDataprepAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::NewProp_ProducerClass = { "ProducerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddProducer_Parms, ProducerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDataprepContentProducer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddProducer_Parms, ReturnValue), Z_Construct_UClass_UDataprepContentProducer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::NewProp_DataprepAssetInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::NewProp_ProducerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Producers" },
		{ "Comment", "/**\n\x09 * Add a producer to a dataprep asset (The producer will act as if was call from the dataprep editor, use the automated version if you don't want any ui)\n\x09 * @param DataprepAssetInterface The dataprep asset on which the producer will be added.\n\x09 * @param ProducerClass The type of producer to add\n\x09 * @return The created producer\n\x09 */" },
		{ "DeterminesOutputType", "ProducerClass" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Add a producer to a dataprep asset (The producer will act as if was call from the dataprep editor, use the automated version if you don't want any ui)\n@param DataprepAssetInterface The dataprep asset on which the producer will be added.\n@param ProducerClass The type of producer to add\n@return The created producer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "AddProducer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::EditorDataprepAssetLibrary_eventAddProducer_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics
	{
		struct EditorDataprepAssetLibrary_eventAddProducerAutomated_Parms
		{
			UDataprepAssetInterface* DataprepAssetInterface;
			TSubclassOf<UDataprepContentProducer>  ProducerClass;
			UDataprepContentProducer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAssetInterface;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProducerClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::NewProp_DataprepAssetInterface = { "DataprepAssetInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddProducerAutomated_Parms, DataprepAssetInterface), Z_Construct_UClass_UDataprepAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::NewProp_ProducerClass = { "ProducerClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddProducerAutomated_Parms, ProducerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDataprepContentProducer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddProducerAutomated_Parms, ReturnValue), Z_Construct_UClass_UDataprepContentProducer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::NewProp_DataprepAssetInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::NewProp_ProducerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Producers" },
		{ "Comment", "/**\n\x09 * Add a producer to a dataprep asset\n\x09 * @param DataprepAssetInterface The dataprep asset on which the producer will be added.\n\x09 * @param ProducerClass The type of producer to add\n\x09 * @return The created producer\n\x09 */" },
		{ "DeterminesOutputType", "ProducerClass" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Add a producer to a dataprep asset\n@param DataprepAssetInterface The dataprep asset on which the producer will be added.\n@param ProducerClass The type of producer to add\n@return The created producer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "AddProducerAutomated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::EditorDataprepAssetLibrary_eventAddProducerAutomated_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics
	{
		struct EditorDataprepAssetLibrary_eventAddStep_Parms
		{
			UDataprepActionAsset* DataprepAction;
			TSubclassOf<UDataprepParameterizableObject>  StepType;
			UDataprepParameterizableObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAction;
		static const UECodeGen_Private::FClassPropertyParams NewProp_StepType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::NewProp_DataprepAction = { "DataprepAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddStep_Parms, DataprepAction), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::NewProp_StepType = { "StepType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddStep_Parms, StepType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDataprepParameterizableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddStep_Parms, ReturnValue), Z_Construct_UClass_UDataprepParameterizableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::NewProp_DataprepAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::NewProp_StepType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Add a step to a dataprep action\n\x09 * @param DataprepAction The dataprep action on which the step will be added\n\x09 * @param StepType The type of the step we want to add. It can be a fetcher (for the filters) or a operation.z\n\x09 * @return The object of the new step\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Add a step to a dataprep action\n@param DataprepAction The dataprep action on which the step will be added\n@param StepType The type of the step we want to add. It can be a fetcher (for the filters) or a operation.z\n@return The object of the new step" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "AddStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::EditorDataprepAssetLibrary_eventAddStep_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics
	{
		struct EditorDataprepAssetLibrary_eventAddStepByDuplication_Parms
		{
			UDataprepActionAsset* DataprepAction;
			UDataprepParameterizableObject* StepObject;
			UDataprepParameterizableObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StepObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::NewProp_DataprepAction = { "DataprepAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddStepByDuplication_Parms, DataprepAction), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::NewProp_StepObject = { "StepObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddStepByDuplication_Parms, StepObject), Z_Construct_UClass_UDataprepParameterizableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventAddStepByDuplication_Parms, ReturnValue), Z_Construct_UClass_UDataprepParameterizableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::NewProp_DataprepAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::NewProp_StepObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Add a step to a dataprep action by duplicating the step object\n\x09 * @param DataprepAction The dataprep action on which the step will be added\n\x09 * @param StepObject The step that will be duplicated into the action\n\x09 * @return The object of the new step\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Add a step to a dataprep action by duplicating the step object\n@param DataprepAction The dataprep action on which the step will be added\n@param StepObject The step that will be duplicated into the action\n@return The object of the new step" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "AddStepByDuplication", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::EditorDataprepAssetLibrary_eventAddStepByDuplication_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics
	{
		struct EditorDataprepAssetLibrary_eventExecuteDataprep_Parms
		{
			UDataprepAssetInterface* DataprepAssetInterface;
			EDataprepReportMethod LogReportingMethod;
			EDataprepReportMethod ProgressReportingMethod;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAssetInterface;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LogReportingMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LogReportingMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProgressReportingMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProgressReportingMethod;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_DataprepAssetInterface = { "DataprepAssetInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventExecuteDataprep_Parms, DataprepAssetInterface), Z_Construct_UClass_UDataprepAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_LogReportingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_LogReportingMethod = { "LogReportingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventExecuteDataprep_Parms, LogReportingMethod), Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod, METADATA_PARAMS(nullptr, 0) }; // 505373126
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_ProgressReportingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_ProgressReportingMethod = { "ProgressReportingMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventExecuteDataprep_Parms, ProgressReportingMethod), Z_Construct_UEnum_DataprepEditorScriptingUtilities_EDataprepReportMethod, METADATA_PARAMS(nullptr, 0) }; // 505373126
	void Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorDataprepAssetLibrary_eventExecuteDataprep_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorDataprepAssetLibrary_eventExecuteDataprep_Parms), &Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_DataprepAssetInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_LogReportingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_LogReportingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_ProgressReportingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_ProgressReportingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset" },
		{ "Comment", "/**\n\x09 * Runs the Dataprep asset's producers, execute its recipe and finally runs the consumer to output the results.\n\x09 * @param\x09""DataprepAssetInterface\x09\x09""Dataprep asset to run.\n\x09 * @param\x09LogReportingMethod\x09\x09""Chose the way the log from the producers, operations and consumer will be reported (this will only affect the log from dataprep).\n\x09 * @param\x09ProgressReportingMethod\x09\x09The way that the progress updates will be reported.\n\x09 * @return\x09True if successful.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Runs the Dataprep asset's producers, execute its recipe and finally runs the consumer to output the results.\n@param       DataprepAssetInterface          Dataprep asset to run.\n@param       LogReportingMethod              Chose the way the log from the producers, operations and consumer will be reported (this will only affect the log from dataprep).\n@param       ProgressReportingMethod         The way that the progress updates will be reported.\n@return      True if successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "ExecuteDataprep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::EditorDataprepAssetLibrary_eventExecuteDataprep_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics
	{
		struct EditorDataprepAssetLibrary_eventGetAction_Parms
		{
			UDataprepAsset* DataprepAsset;
			int32 Index;
			UDataprepActionAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAsset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::NewProp_DataprepAsset = { "DataprepAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetAction_Parms, DataprepAsset), Z_Construct_UClass_UDataprepAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetAction_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetAction_Parms, ReturnValue), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::NewProp_DataprepAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Get an action from a dataprep asset.\n\x09 * @param DataprepAsset The dataprep asset from which the action will be retrieved\n\x09 * @param Index The index of the action in the dataprep asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Get an action from a dataprep asset.\n@param DataprepAsset The dataprep asset from which the action will be retrieved\n@param Index The index of the action in the dataprep asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "GetAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::EditorDataprepAssetLibrary_eventGetAction_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics
	{
		struct EditorDataprepAssetLibrary_eventGetActionCount_Parms
		{
			UDataprepAsset* DataprepAsset;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAsset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::NewProp_DataprepAsset = { "DataprepAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetActionCount_Parms, DataprepAsset), Z_Construct_UClass_UDataprepAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetActionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::NewProp_DataprepAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Get number of actions of a dataprep asset\n\x09 * @param DataprepAsset The dataprep asset from which to get the number of action\n\x09 * @return The number of actions of a dataprep asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Get number of actions of a dataprep asset\n@param DataprepAsset The dataprep asset from which to get the number of action\n@return The number of actions of a dataprep asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "GetActionCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::EditorDataprepAssetLibrary_eventGetActionCount_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics
	{
		struct EditorDataprepAssetLibrary_eventGetConsumer_Parms
		{
			UDataprepAssetInterface* DataprepAssetInterface;
			UDataprepContentConsumer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAssetInterface;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::NewProp_DataprepAssetInterface = { "DataprepAssetInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetConsumer_Parms, DataprepAssetInterface), Z_Construct_UClass_UDataprepAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetConsumer_Parms, ReturnValue), Z_Construct_UClass_UDataprepContentConsumer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::NewProp_DataprepAssetInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Consumer" },
		{ "Comment", "/**\n\x09 * Access the consumer of a dataprep asset\n\x09 * @param DataprepAssetInterface The dataprep asset from which the consumer retrieved\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Access the consumer of a dataprep asset\n@param DataprepAssetInterface The dataprep asset from which the consumer retrieved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "GetConsumer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::EditorDataprepAssetLibrary_eventGetConsumer_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics
	{
		struct EditorDataprepAssetLibrary_eventGetProducer_Parms
		{
			UDataprepAssetInterface* DataprepAssetInterface;
			int32 Index;
			UDataprepContentProducer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAssetInterface;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::NewProp_DataprepAssetInterface = { "DataprepAssetInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetProducer_Parms, DataprepAssetInterface), Z_Construct_UClass_UDataprepAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetProducer_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetProducer_Parms, ReturnValue), Z_Construct_UClass_UDataprepContentProducer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::NewProp_DataprepAssetInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Producers" },
		{ "Comment", "/**\n\x09 * Get a producer from a dataprep asset.\n\x09 * @param DataprepAssetInterface The dataprep asset from which the producer will be retrieved\n\x09 * @param Index The index of the producer in the dataprep asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Get a producer from a dataprep asset.\n@param DataprepAssetInterface The dataprep asset from which the producer will be retrieved\n@param Index The index of the producer in the dataprep asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "GetProducer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::EditorDataprepAssetLibrary_eventGetProducer_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics
	{
		struct EditorDataprepAssetLibrary_eventGetProducersCount_Parms
		{
			const UDataprepAssetInterface* DataprepAssetInterface;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataprepAssetInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAssetInterface;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::NewProp_DataprepAssetInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::NewProp_DataprepAssetInterface = { "DataprepAssetInterface", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetProducersCount_Parms, DataprepAssetInterface), Z_Construct_UClass_UDataprepAssetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::NewProp_DataprepAssetInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::NewProp_DataprepAssetInterface_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetProducersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::NewProp_DataprepAssetInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Producers" },
		{ "Comment", "/**\n\x09 * Get number of the producer of a dataprep asset\n\x09 * @param DataprepAssetInterface The dataprep asset from which to get the number of producer\n\x09 * @return The number of producers of a dataprep asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Get number of the producer of a dataprep asset\n@param DataprepAssetInterface The dataprep asset from which to get the number of producer\n@return The number of producers of a dataprep asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "GetProducersCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::EditorDataprepAssetLibrary_eventGetProducersCount_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics
	{
		struct EditorDataprepAssetLibrary_eventGetStepObject_Parms
		{
			UDataprepActionAsset* DataprepAction;
			int32 Index;
			UDataprepParameterizableObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAction;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::NewProp_DataprepAction = { "DataprepAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetStepObject_Parms, DataprepAction), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetStepObject_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetStepObject_Parms, ReturnValue), Z_Construct_UClass_UDataprepParameterizableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::NewProp_DataprepAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Return the object of a step from the dataprep action\n\x09 * @param DataprepAction The dataprep action on which the step object will retrieve\n\x09 * @param Index The index of the step\n\x09 * @return The retrieved step object (Generally a dataprep operation or filter)\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Return the object of a step from the dataprep action\n@param DataprepAction The dataprep action on which the step object will retrieve\n@param Index The index of the step\n@return The retrieved step object (Generally a dataprep operation or filter)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "GetStepObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::EditorDataprepAssetLibrary_eventGetStepObject_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics
	{
		struct EditorDataprepAssetLibrary_eventGetStepsCount_Parms
		{
			UDataprepActionAsset* DataprepAction;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAction;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::NewProp_DataprepAction = { "DataprepAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetStepsCount_Parms, DataprepAction), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventGetStepsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::NewProp_DataprepAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Get the number of steps for a dataprep action\n\x09 * @param DataprepAction The dataprep action from which we will count the number steps\n\x09 * @return The number of steps the dataprep action\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Get the number of steps for a dataprep action\n@param DataprepAction The dataprep action from which we will count the number steps\n@return The number of steps the dataprep action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "GetStepsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::EditorDataprepAssetLibrary_eventGetStepsCount_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics
	{
		struct EditorDataprepAssetLibrary_eventMoveStep_Parms
		{
			UDataprepActionAsset* DataprepAction;
			int32 StepIndex;
			int32 DestinationIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAction;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StepIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DestinationIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::NewProp_DataprepAction = { "DataprepAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventMoveStep_Parms, DataprepAction), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::NewProp_StepIndex = { "StepIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventMoveStep_Parms, StepIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::NewProp_DestinationIndex = { "DestinationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventMoveStep_Parms, DestinationIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::NewProp_DataprepAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::NewProp_StepIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::NewProp_DestinationIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Move a step of the dataprep action\n\x09 * @param DataprepAction The dataprep action on which a step will be moved\n\x09 * @param StepIndex The index of the step to move\n\x09 * @param DestinationIndex The index where the step will be moved\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Move a step of the dataprep action\n@param DataprepAction The dataprep action on which a step will be moved\n@param StepIndex The index of the step to move\n@param DestinationIndex The index where the step will be moved" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "MoveStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::EditorDataprepAssetLibrary_eventMoveStep_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics
	{
		struct EditorDataprepAssetLibrary_eventRemoveAction_Parms
		{
			UDataprepAsset* DataprepAsset;
			int32 Index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAsset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::NewProp_DataprepAsset = { "DataprepAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventRemoveAction_Parms, DataprepAsset), Z_Construct_UClass_UDataprepAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventRemoveAction_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::NewProp_DataprepAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Remove an action from a dataprep asset\n\x09 * @param DataprepAsset The dataprep asset from which the action will be removed\n\x09 * @param Index Index of the action to remove\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Remove an action from a dataprep asset\n@param DataprepAsset The dataprep asset from which the action will be removed\n@param Index Index of the action to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "RemoveAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::EditorDataprepAssetLibrary_eventRemoveAction_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics
	{
		struct EditorDataprepAssetLibrary_eventRemoveProducer_Parms
		{
			UDataprepAssetInterface* DataprepAssetInterface;
			int32 Index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAssetInterface;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::NewProp_DataprepAssetInterface = { "DataprepAssetInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventRemoveProducer_Parms, DataprepAssetInterface), Z_Construct_UClass_UDataprepAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventRemoveProducer_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::NewProp_DataprepAssetInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Producers" },
		{ "Comment", "/**\n\x09 * Remove a producer from a dataprep asset\n\x09 * @param DataprepAssetInterface The dataprep asset from which the producer will be removed\n\x09 * @param Index Index of the producer to remove\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Remove a producer from a dataprep asset\n@param DataprepAssetInterface The dataprep asset from which the producer will be removed\n@param Index Index of the producer to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "RemoveProducer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::EditorDataprepAssetLibrary_eventRemoveProducer_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics
	{
		struct EditorDataprepAssetLibrary_eventRemoveStep_Parms
		{
			UDataprepActionAsset* DataprepAction;
			int32 Index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAction;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::NewProp_DataprepAction = { "DataprepAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventRemoveStep_Parms, DataprepAction), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventRemoveStep_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::NewProp_DataprepAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Remove a step from the action\n\x09 * @param DataprepAction The dataprep action from which we will remove the step\n\x09 * @param Index the index of the step to remove\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Remove a step from the action\n@param DataprepAction The dataprep action from which we will remove the step\n@param Index the index of the step to remove" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "RemoveStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::EditorDataprepAssetLibrary_eventRemoveStep_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics
	{
		struct EditorDataprepAssetLibrary_eventSwapActions_Parms
		{
			UDataprepAsset* DataprepAsset;
			int32 FirstActionIndex;
			int32 SecondActionIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAsset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstActionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SecondActionIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::NewProp_DataprepAsset = { "DataprepAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventSwapActions_Parms, DataprepAsset), Z_Construct_UClass_UDataprepAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::NewProp_FirstActionIndex = { "FirstActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventSwapActions_Parms, FirstActionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::NewProp_SecondActionIndex = { "SecondActionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventSwapActions_Parms, SecondActionIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::NewProp_DataprepAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::NewProp_FirstActionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::NewProp_SecondActionIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Swap the actions of a dataprep asset\n\x09 * @param DataprepAsset The dataprep asset on which the actions will swapped\n\x09 * @param FirstActionIndex The index of the first action\n\x09 * @param SecondActionIndex The index of the second action\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Swap the actions of a dataprep asset\n@param DataprepAsset The dataprep asset on which the actions will swapped\n@param FirstActionIndex The index of the first action\n@param SecondActionIndex The index of the second action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "SwapActions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::EditorDataprepAssetLibrary_eventSwapActions_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics
	{
		struct EditorDataprepAssetLibrary_eventSwapSteps_Parms
		{
			UDataprepActionAsset* DataprepAction;
			int32 FirstIndex;
			int32 SecondIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataprepAction;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FirstIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SecondIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::NewProp_DataprepAction = { "DataprepAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventSwapSteps_Parms, DataprepAction), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::NewProp_FirstIndex = { "FirstIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventSwapSteps_Parms, FirstIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::NewProp_SecondIndex = { "SecondIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDataprepAssetLibrary_eventSwapSteps_Parms, SecondIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::NewProp_DataprepAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::NewProp_FirstIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::NewProp_SecondIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Dataprep Asset | Actions" },
		{ "Comment", "/**\n\x09 * Swap the steps of a dataprep action\n\x09 * @param DataprepAction The dataprep action on which the step will be swapped\n\x09 * @param FirstIndex The index of the first step\n\x09 * @param SecondIndex The index of the seconds step\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Swap the steps of a dataprep action\n@param DataprepAction The dataprep action on which the step will be swapped\n@param FirstIndex The index of the first step\n@param SecondIndex The index of the seconds step" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDataprepAssetLibrary, nullptr, "SwapSteps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::EditorDataprepAssetLibrary_eventSwapSteps_Parms), Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorDataprepAssetLibrary);
	UClass* Z_Construct_UClass_UEditorDataprepAssetLibrary_NoRegister()
	{
		return UEditorDataprepAssetLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepEditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddAction, "AddAction" }, // 3145662887
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddActionByDuplication, "AddActionByDuplication" }, // 730023316
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducer, "AddProducer" }, // 421525819
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddProducerAutomated, "AddProducerAutomated" }, // 4180317085
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStep, "AddStep" }, // 2963392968
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_AddStepByDuplication, "AddStepByDuplication" }, // 953460093
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_ExecuteDataprep, "ExecuteDataprep" }, // 1316436405
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetAction, "GetAction" }, // 3875325382
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetActionCount, "GetActionCount" }, // 3310662437
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetConsumer, "GetConsumer" }, // 170517626
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducer, "GetProducer" }, // 75869561
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetProducersCount, "GetProducersCount" }, // 162103462
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepObject, "GetStepObject" }, // 2789720426
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_GetStepsCount, "GetStepsCount" }, // 1051051892
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_MoveStep, "MoveStep" }, // 2461004919
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveAction, "RemoveAction" }, // 3435148564
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveProducer, "RemoveProducer" }, // 1888098749
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_RemoveStep, "RemoveStep" }, // 1169814353
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapActions, "SwapActions" }, // 2561568670
		{ &Z_Construct_UFunction_UEditorDataprepAssetLibrary_SwapSteps, "SwapSteps" }, // 3685785232
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Utility class to do most expose most of the common functionalities of the dataprep editor plugin (Visual Dataprep).\n *\n *\n * A Dataprep asset is composed of tree main parts: a array of producers, a recipe and a consumer.\n *\n * The producers are the objects that manage the logistic of importing the data into the dataprep context\n * For example, a DatasmithFileProducer is an object that can import the data from a file using the datasmith importer\n *\n * The recipe is a series of DataprepActions. Each action is generally compose of a filter(s) and an operation(s) We refer those as the steps of action.\n * The typical action consist in filtering the dataprep context to get a subset objects and passing those to some operations.\n * Each action receive the full context from the scene and the asset loaded into the dataprep environment.\n * \n * The consumer is the object that receive the dataprep environment and turns it into something useful and not transient.\n * Currently, the only type of consumer supported is the DatasmithConsumer. It take the dataprep environment and import it into the engine in similar fashion to a standard datasmith import.\n *\n *\n * More on the dataprep action asset:\n * Each step of dataprep action are a descendant of the type UDataprepParameterizableObject.\n * When setting the value of variables on those objects prefer using the SetEditorProperty utility function as the parameterization of the dataprep asset depends on certain editor calls to stay in sync with the recipe.\n *\n */" },
		{ "DisplayName", "Dataprep Core Blueprint Library" },
		{ "IncludePath", "EditorDataprepAssetLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorDataprepAssetLibrary.h" },
		{ "ToolTip", "Utility class to do most expose most of the common functionalities of the dataprep editor plugin (Visual Dataprep).\n\n\nA Dataprep asset is composed of tree main parts: a array of producers, a recipe and a consumer.\n\nThe producers are the objects that manage the logistic of importing the data into the dataprep context\nFor example, a DatasmithFileProducer is an object that can import the data from a file using the datasmith importer\n\nThe recipe is a series of DataprepActions. Each action is generally compose of a filter(s) and an operation(s) We refer those as the steps of action.\nThe typical action consist in filtering the dataprep context to get a subset objects and passing those to some operations.\nEach action receive the full context from the scene and the asset loaded into the dataprep environment.\n\nThe consumer is the object that receive the dataprep environment and turns it into something useful and not transient.\nCurrently, the only type of consumer supported is the DatasmithConsumer. It take the dataprep environment and import it into the engine in similar fashion to a standard datasmith import.\n\n\nMore on the dataprep action asset:\nEach step of dataprep action are a descendant of the type UDataprepParameterizableObject.\nWhen setting the value of variables on those objects prefer using the SetEditorProperty utility function as the parameterization of the dataprep asset depends on certain editor calls to stay in sync with the recipe." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorDataprepAssetLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics::ClassParams = {
		&UEditorDataprepAssetLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorDataprepAssetLibrary()
	{
		if (!Z_Registration_Info_UClass_UEditorDataprepAssetLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorDataprepAssetLibrary.OuterSingleton, Z_Construct_UClass_UEditorDataprepAssetLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorDataprepAssetLibrary.OuterSingleton;
	}
	template<> DATAPREPEDITORSCRIPTINGUTILITIES_API UClass* StaticClass<UEditorDataprepAssetLibrary>()
	{
		return UEditorDataprepAssetLibrary::StaticClass();
	}
	UEditorDataprepAssetLibrary::UEditorDataprepAssetLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorDataprepAssetLibrary);
	UEditorDataprepAssetLibrary::~UEditorDataprepAssetLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_Statics::EnumInfo[] = {
		{ EDataprepReportMethod_StaticEnum, TEXT("EDataprepReportMethod"), &Z_Registration_Info_UEnum_EDataprepReportMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 505373126U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorDataprepAssetLibrary, UEditorDataprepAssetLibrary::StaticClass, TEXT("UEditorDataprepAssetLibrary"), &Z_Registration_Info_UClass_UEditorDataprepAssetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorDataprepAssetLibrary), 91197862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_536790607(TEXT("/Script/DataprepEditorScriptingUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditorScriptingUtilities_Public_EditorDataprepAssetLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
