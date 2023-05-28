// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/AutomationBlueprintFunctionLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "../Public/AutomationScreenshotOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutomationBlueprintFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationEditorTask();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationEditorTask_NoRegister();
	FUNCTIONALTESTING_API UEnum* Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationScreenshotOptions();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	DEFINE_FUNCTION(UAutomationEditorTask::execIsValidTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationEditorTask::execIsTaskDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTaskDone();
		P_NATIVE_END;
	}
	void UAutomationEditorTask::StaticRegisterNativesUAutomationEditorTask()
	{
		UClass* Class = UAutomationEditorTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTaskDone", &UAutomationEditorTask::execIsTaskDone },
			{ "IsValidTask", &UAutomationEditorTask::execIsValidTask },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics
	{
		struct AutomationEditorTask_eventIsTaskDone_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationEditorTask_eventIsTaskDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationEditorTask_eventIsTaskDone_Parms), &Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Query if the Editor task is done  */" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Query if the Editor task is done" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationEditorTask, nullptr, "IsTaskDone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::AutomationEditorTask_eventIsTaskDone_Parms), Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics
	{
		struct AutomationEditorTask_eventIsValidTask_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationEditorTask_eventIsValidTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationEditorTask_eventIsValidTask_Parms), &Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Query if a task was setup */" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Query if a task was setup" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationEditorTask, nullptr, "IsValidTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::AutomationEditorTask_eventIsValidTask_Parms), Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationEditorTask_IsValidTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationEditorTask_IsValidTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationEditorTask);
	UClass* Z_Construct_UClass_UAutomationEditorTask_NoRegister()
	{
		return UAutomationEditorTask::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationEditorTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationEditorTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutomationEditorTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationEditorTask_IsTaskDone, "IsTaskDone" }, // 2516642833
		{ &Z_Construct_UFunction_UAutomationEditorTask_IsValidTask, "IsValidTask" }, // 1797738448
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationEditorTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UAutomationEditorTask\n */" },
		{ "IncludePath", "AutomationBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "UAutomationEditorTask" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationEditorTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationEditorTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationEditorTask_Statics::ClassParams = {
		&UAutomationEditorTask::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAutomationEditorTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationEditorTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationEditorTask()
	{
		if (!Z_Registration_Info_UClass_UAutomationEditorTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationEditorTask.OuterSingleton, Z_Construct_UClass_UAutomationEditorTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomationEditorTask.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UAutomationEditorTask>()
	{
		return UAutomationEditorTask::StaticClass();
	}
	UAutomationEditorTask::UAutomationEditorTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationEditorTask);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AutomationWaitForLoadingOptions;
class UScriptStruct* FAutomationWaitForLoadingOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AutomationWaitForLoadingOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AutomationWaitForLoadingOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions, (UObject*)Z_Construct_UPackage__Script_FunctionalTesting(), TEXT("AutomationWaitForLoadingOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AutomationWaitForLoadingOptions.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UScriptStruct* StaticStruct<FAutomationWaitForLoadingOptions>()
{
	return FAutomationWaitForLoadingOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitForReplicationToSettle_MetaData[];
#endif
		static void NewProp_WaitForReplicationToSettle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WaitForReplicationToSettle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutomationWaitForLoadingOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::NewProp_WaitForReplicationToSettle_MetaData[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::NewProp_WaitForReplicationToSettle_SetBit(void* Obj)
	{
		((FAutomationWaitForLoadingOptions*)Obj)->WaitForReplicationToSettle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::NewProp_WaitForReplicationToSettle = { "WaitForReplicationToSettle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAutomationWaitForLoadingOptions), &Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::NewProp_WaitForReplicationToSettle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::NewProp_WaitForReplicationToSettle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::NewProp_WaitForReplicationToSettle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::NewProp_WaitForReplicationToSettle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
		nullptr,
		&NewStructOps,
		"AutomationWaitForLoadingOptions",
		sizeof(FAutomationWaitForLoadingOptions),
		alignof(FAutomationWaitForLoadingOptions),
		Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AutomationWaitForLoadingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AutomationWaitForLoadingOptions.InnerSingleton, Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AutomationWaitForLoadingOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execSetEditorViewportVisualizeBuffer)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BufferName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::SetEditorViewportVisualizeBuffer(Z_Param_BufferName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execSetEditorViewportViewMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::SetEditorViewportViewMode(EViewModeIndex(Z_Param_Index));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToLow)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToLow(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToEpic)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityToEpic(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityLevelRelativeToMax)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::SetScalabilityQualityLevelRelativeToMax(Z_Param_WorldContextObject,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execAddExpectedLogError)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ExpectedPatternString);
		P_GET_PROPERTY(FIntProperty,Z_Param_Occurrences);
		P_GET_UBOOL(Z_Param_ExactMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::AddExpectedLogError(Z_Param_ExpectedPatternString,Z_Param_Occurrences,Z_Param_ExactMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForRendering)
	{
		P_GET_ENUM(EComparisonTolerance,Z_Param_Tolerance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAutomationScreenshotOptions*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForRendering(EComparisonTolerance(Z_Param_Tolerance),Z_Param_Delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForGameplay)
	{
		P_GET_ENUM(EComparisonTolerance,Z_Param_Tolerance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAutomationScreenshotOptions*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetDefaultScreenshotOptionsForGameplay(EComparisonTolerance(Z_Param_Tolerance),Z_Param_Delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execSetTestTelemetryStorage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StorageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::SetTestTelemetryStorage(Z_Param_StorageName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execAddTestTelemetryData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DataPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Measurement);
		P_GET_PROPERTY(FStrProperty,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::AddTestTelemetryData(Z_Param_DataPoint,Z_Param_Measurement,Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execCompareImageAgainstReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ImageFilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_ComparisonName);
		P_GET_ENUM(EComparisonTolerance,Z_Param_ComparisonTolerance);
		P_GET_PROPERTY(FStrProperty,Z_Param_ComparisonNotes);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::CompareImageAgainstReference(Z_Param_ImageFilePath,Z_Param_ComparisonName,EComparisonTolerance(Z_Param_ComparisonTolerance),Z_Param_ComparisonNotes,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execTakeHighResScreenshot)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ResX);
		P_GET_PROPERTY(FIntProperty,Z_Param_ResY);
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_GET_OBJECT(ACameraActor,Z_Param_Camera);
		P_GET_UBOOL(Z_Param_bMaskEnabled);
		P_GET_UBOOL(Z_Param_bCaptureHDR);
		P_GET_ENUM(EComparisonTolerance,Z_Param_ComparisonTolerance);
		P_GET_PROPERTY(FStrProperty,Z_Param_ComparisonNotes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delay);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAutomationEditorTask**)Z_Param__Result=UAutomationBlueprintFunctionLibrary::TakeHighResScreenshot(Z_Param_ResX,Z_Param_ResY,Z_Param_Filename,Z_Param_Camera,Z_Param_bMaskEnabled,Z_Param_bCaptureHDR,EComparisonTolerance(Z_Param_ComparisonTolerance),Z_Param_ComparisonNotes,Z_Param_Delay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execAutomationWaitForLoading)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT(FAutomationWaitForLoadingOptions,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::AutomationWaitForLoading(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execAreAutomatedTestsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::AreAutomatedTestsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetStatCallCount)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatCallCount(Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetStatExcMax)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatExcMax(Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetStatExcAverage)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatExcAverage(Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetStatIncMax)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatIncMax(Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execGetStatIncAverage)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAutomationBlueprintFunctionLibrary::GetStatIncAverage(Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execDisableStatGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::DisableStatGroup(Z_Param_WorldContextObject,Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execEnableStatGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::EnableStatGroup(Z_Param_WorldContextObject,Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotOfUI)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotOfUI(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Name,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotAtCamera)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(ACameraActor,Z_Param_Camera);
		P_GET_PROPERTY(FStrProperty,Z_Param_NameOverride);
		P_GET_PROPERTY(FStrProperty,Z_Param_Notes);
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshotAtCamera(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Camera,Z_Param_NameOverride,Z_Param_Notes,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Notes);
		P_GET_STRUCT_REF(FAutomationScreenshotOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::TakeAutomationScreenshot(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Name,Z_Param_Notes,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutomationBlueprintFunctionLibrary::execFinishLoadingBeforeScreenshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAutomationBlueprintFunctionLibrary::FinishLoadingBeforeScreenshot();
		P_NATIVE_END;
	}
	void UAutomationBlueprintFunctionLibrary::StaticRegisterNativesUAutomationBlueprintFunctionLibrary()
	{
		UClass* Class = UAutomationBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddExpectedLogError", &UAutomationBlueprintFunctionLibrary::execAddExpectedLogError },
			{ "AddTestTelemetryData", &UAutomationBlueprintFunctionLibrary::execAddTestTelemetryData },
			{ "AreAutomatedTestsRunning", &UAutomationBlueprintFunctionLibrary::execAreAutomatedTestsRunning },
			{ "AutomationWaitForLoading", &UAutomationBlueprintFunctionLibrary::execAutomationWaitForLoading },
			{ "CompareImageAgainstReference", &UAutomationBlueprintFunctionLibrary::execCompareImageAgainstReference },
			{ "DisableStatGroup", &UAutomationBlueprintFunctionLibrary::execDisableStatGroup },
			{ "EnableStatGroup", &UAutomationBlueprintFunctionLibrary::execEnableStatGroup },
			{ "FinishLoadingBeforeScreenshot", &UAutomationBlueprintFunctionLibrary::execFinishLoadingBeforeScreenshot },
			{ "GetDefaultScreenshotOptionsForGameplay", &UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForGameplay },
			{ "GetDefaultScreenshotOptionsForRendering", &UAutomationBlueprintFunctionLibrary::execGetDefaultScreenshotOptionsForRendering },
			{ "GetStatCallCount", &UAutomationBlueprintFunctionLibrary::execGetStatCallCount },
			{ "GetStatExcAverage", &UAutomationBlueprintFunctionLibrary::execGetStatExcAverage },
			{ "GetStatExcMax", &UAutomationBlueprintFunctionLibrary::execGetStatExcMax },
			{ "GetStatIncAverage", &UAutomationBlueprintFunctionLibrary::execGetStatIncAverage },
			{ "GetStatIncMax", &UAutomationBlueprintFunctionLibrary::execGetStatIncMax },
			{ "SetEditorViewportViewMode", &UAutomationBlueprintFunctionLibrary::execSetEditorViewportViewMode },
			{ "SetEditorViewportVisualizeBuffer", &UAutomationBlueprintFunctionLibrary::execSetEditorViewportVisualizeBuffer },
			{ "SetScalabilityQualityLevelRelativeToMax", &UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityLevelRelativeToMax },
			{ "SetScalabilityQualityToEpic", &UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToEpic },
			{ "SetScalabilityQualityToLow", &UAutomationBlueprintFunctionLibrary::execSetScalabilityQualityToLow },
			{ "SetTestTelemetryStorage", &UAutomationBlueprintFunctionLibrary::execSetTestTelemetryStorage },
			{ "TakeAutomationScreenshot", &UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshot },
			{ "TakeAutomationScreenshotAtCamera", &UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotAtCamera },
			{ "TakeAutomationScreenshotOfUI", &UAutomationBlueprintFunctionLibrary::execTakeAutomationScreenshotOfUI },
			{ "TakeHighResScreenshot", &UAutomationBlueprintFunctionLibrary::execTakeHighResScreenshot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms
		{
			FString ExpectedPatternString;
			int32 Occurrences;
			bool ExactMatch;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExpectedPatternString;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Occurrences;
		static void NewProp_ExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExactMatch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExpectedPatternString = { "ExpectedPatternString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms, ExpectedPatternString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_Occurrences = { "Occurrences", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms, Occurrences), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExactMatch_SetBit(void* Obj)
	{
		((AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms*)Obj)->ExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExactMatch = { "ExactMatch", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms), &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExpectedPatternString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_Occurrences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::NewProp_ExactMatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Occurrences, ExactMatch" },
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Mute the report of log error and warning matching a pattern during an automated test\n\x09 */" },
		{ "CPP_Default_ExactMatch", "false" },
		{ "CPP_Default_Occurrences", "1" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Mute the report of log error and warning matching a pattern during an automated test" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "AddExpectedLogError", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::AutomationBlueprintFunctionLibrary_eventAddExpectedLogError_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventAddTestTelemetryData_Parms
		{
			FString DataPoint;
			float Measurement;
			FString Context;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Measurement;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::NewProp_DataPoint = { "DataPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAddTestTelemetryData_Parms, DataPoint), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::NewProp_Measurement = { "Measurement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAddTestTelemetryData_Parms, Measurement), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAddTestTelemetryData_Parms, Context), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::NewProp_DataPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::NewProp_Measurement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Context" },
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* Add Telemetry data to currently running automated test.\n\x09*/" },
		{ "CPP_Default_Context", "" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Add Telemetry data to currently running automated test." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "AddTestTelemetryData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::AutomationBlueprintFunctionLibrary_eventAddTestTelemetryData_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms), &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Lets you know if any automated tests are running, or are about to run and the automation system is spinning up tests.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Lets you know if any automated tests are running, or are about to run and the automation system is spinning up tests." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "AreAutomatedTestsRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::AutomationBlueprintFunctionLibrary_eventAreAutomatedTestsRunning_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventAutomationWaitForLoading_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FAutomationWaitForLoadingOptions Options;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAutomationWaitForLoading_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAutomationWaitForLoading_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventAutomationWaitForLoading_Parms, Options), Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions, METADATA_PARAMS(nullptr, 0) }; // 2807081914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "AutomationWaitForLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::AutomationBlueprintFunctionLibrary_eventAutomationWaitForLoading_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventCompareImageAgainstReference_Parms
		{
			FString ImageFilePath;
			FString ComparisonName;
			EComparisonTolerance ComparisonTolerance;
			FString ComparisonNotes;
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageFilePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComparisonName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonTolerance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonTolerance;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComparisonNotes;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ImageFilePath = { "ImageFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventCompareImageAgainstReference_Parms, ImageFilePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ComparisonName = { "ComparisonName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventCompareImageAgainstReference_Parms, ComparisonName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ComparisonTolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ComparisonTolerance = { "ComparisonTolerance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventCompareImageAgainstReference_Parms, ComparisonTolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(nullptr, 0) }; // 594704935
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ComparisonNotes = { "ComparisonNotes", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventCompareImageAgainstReference_Parms, ComparisonNotes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventCompareImageAgainstReference_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutomationBlueprintFunctionLibrary_eventCompareImageAgainstReference_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationBlueprintFunctionLibrary_eventCompareImageAgainstReference_Parms), &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ImageFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ComparisonName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ComparisonTolerance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ComparisonTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ComparisonNotes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ComparisonName, ComparisonTolerance, ComparisonNotes" },
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* request image comparison.\n\x09* @param ImageFilePath\x09""Absolute path to the image location. All 8bit RGBA channels supported formats by the engine are accepted.\n\x09* @param ComparisonName\x09Optional name for the comparison, by default the basename of ImageFilePath is used\n\x09* @return\x09\x09\x09\x09True if comparison was successfully enqueued\n\x09*/" },
		{ "CPP_Default_ComparisonName", "" },
		{ "CPP_Default_ComparisonNotes", "" },
		{ "CPP_Default_ComparisonTolerance", "Low" },
		{ "CPP_Default_WorldContextObject", "None" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "request image comparison.\n@param ImageFilePath  Absolute path to the image location. All 8bit RGBA channels supported formats by the engine are accepted.\n@param ComparisonName Optional name for the comparison, by default the basename of ImageFilePath is used\n@return                               True if comparison was successfully enqueued" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "CompareImageAgainstReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::AutomationBlueprintFunctionLibrary_eventCompareImageAgainstReference_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms
		{
			UObject* WorldContextObject;
			FName GroupName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::NewProp_GroupName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "DisableStatGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::AutomationBlueprintFunctionLibrary_eventDisableStatGroup_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms
		{
			UObject* WorldContextObject;
			FName GroupName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms, GroupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::NewProp_GroupName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "EnableStatGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::AutomationBlueprintFunctionLibrary_eventEnableStatGroup_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "FinishLoadingBeforeScreenshot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms
		{
			EComparisonTolerance Tolerance;
			float Delay;
			FAutomationScreenshotOptions ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Tolerance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms, Tolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(nullptr, 0) }; // 594704935
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms, ReturnValue), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(nullptr, 0) }; // 3322497681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "CPP_Default_Delay", "0.200000" },
		{ "CPP_Default_Tolerance", "Low" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetDefaultScreenshotOptionsForGameplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForGameplay_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms
		{
			EComparisonTolerance Tolerance;
			float Delay;
			FAutomationScreenshotOptions ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Tolerance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms, Tolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(nullptr, 0) }; // 594704935
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms, ReturnValue), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(nullptr, 0) }; // 3322497681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Tolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "CPP_Default_Delay", "0.200000" },
		{ "CPP_Default_Tolerance", "Low" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetDefaultScreenshotOptionsForRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::AutomationBlueprintFunctionLibrary_eventGetDefaultScreenshotOptionsForRendering_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetStatCallCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::AutomationBlueprintFunctionLibrary_eventGetStatCallCount_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetStatExcAverage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::AutomationBlueprintFunctionLibrary_eventGetStatExcAverage_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetStatExcMax", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::AutomationBlueprintFunctionLibrary_eventGetStatExcMax_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetStatIncAverage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::AutomationBlueprintFunctionLibrary_eventGetStatIncAverage_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms
		{
			FName StatName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_StatName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "GetStatIncMax", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::AutomationBlueprintFunctionLibrary_eventGetStatIncMax_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetEditorViewportViewMode_Parms
		{
			TEnumAsByte<EViewModeIndex> Index;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetEditorViewportViewMode_Parms, Index), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(nullptr, 0) }; // 1054163023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Sets all viewports of the first found level editor to have the given ViewMode (Lit/Unlit/etc.) **/" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Sets all viewports of the first found level editor to have the given ViewMode (Lit/Unlit/etc.) *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "SetEditorViewportViewMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::AutomationBlueprintFunctionLibrary_eventSetEditorViewportViewMode_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetEditorViewportVisualizeBuffer_Parms
		{
			FName BufferName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BufferName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::NewProp_BufferName = { "BufferName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetEditorViewportVisualizeBuffer_Parms, BufferName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::NewProp_BufferName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/** Sets all viewports of the first found level editor to have the VisualizeBuffer ViewMode and also display a given buffer (BaseColor/Metallic/Roughness/etc.) **/" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Sets all viewports of the first found level editor to have the VisualizeBuffer ViewMode and also display a given buffer (BaseColor/Metallic/Roughness/etc.) *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "SetEditorViewportVisualizeBuffer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::AutomationBlueprintFunctionLibrary_eventSetEditorViewportVisualizeBuffer_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms
		{
			UObject* WorldContextObject;
			int32 Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Sets all other settings based on an overall value\n\x09 * @param Value 0:Cinematic, 1:Epic...etc.\n\x09 */" },
		{ "CPP_Default_Value", "1" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Sets all other settings based on an overall value\n@param Value 0:Cinematic, 1:Epic...etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "SetScalabilityQualityLevelRelativeToMax", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityLevelRelativeToMax_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToEpic_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToEpic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "SetScalabilityQualityToEpic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToEpic_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToLow_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToLow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "SetScalabilityQualityToLow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::AutomationBlueprintFunctionLibrary_eventSetScalabilityQualityToLow_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventSetTestTelemetryStorage_Parms
		{
			FString StorageName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StorageName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::NewProp_StorageName = { "StorageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventSetTestTelemetryStorage_Parms, StorageName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::NewProp_StorageName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* Set Telemetry data storage name of currently running automated test.\n\x09*/" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Set Telemetry data storage name of currently running automated test." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "SetTestTelemetryStorage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::AutomationBlueprintFunctionLibrary_eventSetTestTelemetryStorage_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString Name;
			FString Notes;
			FAutomationScreenshotOptions Options;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Notes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, Notes), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms, Options), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options_MetaData)) }; // 3322497681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Notes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Takes a screenshot of the game's viewport.  Does not capture any UI.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "Name", "" },
		{ "ToolTip", "Takes a screenshot of the game's viewport.  Does not capture any UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "TakeAutomationScreenshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshot_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			ACameraActor* Camera;
			FString NameOverride;
			FString Notes;
			FAutomationScreenshotOptions Options;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Notes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Notes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, Camera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride = { "NameOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, NameOverride), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes = { "Notes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, Notes), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms, Options), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options_MetaData)) }; // 3322497681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_NameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Notes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09 * Takes a screenshot of the game's viewport, from a particular camera actors POV.  Does not capture any UI.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "NameOverride", "" },
		{ "ToolTip", "Takes a screenshot of the game's viewport, from a particular camera actors POV.  Does not capture any UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "TakeAutomationScreenshotAtCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotAtCamera_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FString Name;
			FAutomationScreenshotOptions Options;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms, Options), Z_Construct_UScriptStruct_FAutomationScreenshotOptions, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options_MetaData)) }; // 3322497681
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "NameOverride", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "TakeAutomationScreenshotOfUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::AutomationBlueprintFunctionLibrary_eventTakeAutomationScreenshotOfUI_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics
	{
		struct AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms
		{
			int32 ResX;
			int32 ResY;
			FString Filename;
			ACameraActor* Camera;
			bool bMaskEnabled;
			bool bCaptureHDR;
			EComparisonTolerance ComparisonTolerance;
			FString ComparisonNotes;
			float Delay;
			UAutomationEditorTask* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResY;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static void NewProp_bMaskEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaskEnabled;
		static void NewProp_bCaptureHDR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureHDR;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComparisonTolerance_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComparisonTolerance;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComparisonNotes;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ResX = { "ResX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, ResX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ResY = { "ResY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, ResY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, Filename), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, Camera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bMaskEnabled_SetBit(void* Obj)
	{
		((AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms*)Obj)->bMaskEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bMaskEnabled = { "bMaskEnabled", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms), &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bMaskEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bCaptureHDR_SetBit(void* Obj)
	{
		((AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms*)Obj)->bCaptureHDR = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bCaptureHDR = { "bCaptureHDR", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms), &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bCaptureHDR_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonTolerance_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonTolerance = { "ComparisonTolerance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, ComparisonTolerance), Z_Construct_UEnum_FunctionalTesting_EComparisonTolerance, METADATA_PARAMS(nullptr, 0) }; // 594704935
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonNotes = { "ComparisonNotes", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, ComparisonNotes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, Delay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms, ReturnValue), Z_Construct_UClass_UAutomationEditorTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ResX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ResY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bMaskEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_bCaptureHDR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonTolerance_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ComparisonNotes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Camera, bMaskEnabled, bCaptureHDR, ComparisonTolerance, ComparisonNotes" },
		{ "Category", "Automation" },
		{ "Comment", "/**\n\x09* take high res screenshot in editor.\n\x09*/" },
		{ "CPP_Default_bCaptureHDR", "false" },
		{ "CPP_Default_bMaskEnabled", "false" },
		{ "CPP_Default_Camera", "None" },
		{ "CPP_Default_ComparisonNotes", "" },
		{ "CPP_Default_ComparisonTolerance", "Low" },
		{ "CPP_Default_Delay", "0.000000" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ToolTip", "take high res screenshot in editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, nullptr, "TakeHighResScreenshot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::AutomationBlueprintFunctionLibrary_eventTakeHighResScreenshot_Parms), Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutomationBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_NoRegister()
	{
		return UAutomationBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddExpectedLogError, "AddExpectedLogError" }, // 2930855966
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AddTestTelemetryData, "AddTestTelemetryData" }, // 4250889855
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AreAutomatedTestsRunning, "AreAutomatedTestsRunning" }, // 4046926637
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_AutomationWaitForLoading, "AutomationWaitForLoading" }, // 2082467737
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_CompareImageAgainstReference, "CompareImageAgainstReference" }, // 431363760
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_DisableStatGroup, "DisableStatGroup" }, // 1031401766
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_EnableStatGroup, "EnableStatGroup" }, // 1991351335
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_FinishLoadingBeforeScreenshot, "FinishLoadingBeforeScreenshot" }, // 2494863973
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForGameplay, "GetDefaultScreenshotOptionsForGameplay" }, // 1384173799
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetDefaultScreenshotOptionsForRendering, "GetDefaultScreenshotOptionsForRendering" }, // 2603097079
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatCallCount, "GetStatCallCount" }, // 124443287
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcAverage, "GetStatExcAverage" }, // 1125673990
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatExcMax, "GetStatExcMax" }, // 883479539
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncAverage, "GetStatIncAverage" }, // 1632191807
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_GetStatIncMax, "GetStatIncMax" }, // 77035941
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportViewMode, "SetEditorViewportViewMode" }, // 2248960296
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetEditorViewportVisualizeBuffer, "SetEditorViewportVisualizeBuffer" }, // 1311386454
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityLevelRelativeToMax, "SetScalabilityQualityLevelRelativeToMax" }, // 1282190419
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToEpic, "SetScalabilityQualityToEpic" }, // 4096823020
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetScalabilityQualityToLow, "SetScalabilityQualityToLow" }, // 2169999958
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_SetTestTelemetryStorage, "SetTestTelemetryStorage" }, // 2777860056
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot, "TakeAutomationScreenshot" }, // 4114847358
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera, "TakeAutomationScreenshotAtCamera" }, // 453088405
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotOfUI, "TakeAutomationScreenshotOfUI" }, // 4274541489
		{ &Z_Construct_UFunction_UAutomationBlueprintFunctionLibrary_TakeHighResScreenshot, "TakeHighResScreenshot" }, // 3408384534
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AutomationBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AutomationBlueprintFunctionLibrary.h" },
		{ "ScriptName", "AutomationLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutomationBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::ClassParams = {
		&UAutomationBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutomationBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAutomationBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UAutomationBlueprintFunctionLibrary>()
	{
		return UAutomationBlueprintFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutomationBlueprintFunctionLibrary);
	UAutomationBlueprintFunctionLibrary::~UAutomationBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FAutomationWaitForLoadingOptions::StaticStruct, Z_Construct_UScriptStruct_FAutomationWaitForLoadingOptions_Statics::NewStructOps, TEXT("AutomationWaitForLoadingOptions"), &Z_Registration_Info_UScriptStruct_AutomationWaitForLoadingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAutomationWaitForLoadingOptions), 2807081914U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAutomationEditorTask, UAutomationEditorTask::StaticClass, TEXT("UAutomationEditorTask"), &Z_Registration_Info_UClass_UAutomationEditorTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationEditorTask), 156870391U) },
		{ Z_Construct_UClass_UAutomationBlueprintFunctionLibrary, UAutomationBlueprintFunctionLibrary::StaticClass, TEXT("UAutomationBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UAutomationBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutomationBlueprintFunctionLibrary), 2899675699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_672141142(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Public_AutomationBlueprintFunctionLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
