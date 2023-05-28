// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionTrajectory.h"
#include "../../Source/Runtime/Engine/Public/Animation/MotionTrajectoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionTrajectory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrajectorySampleRange();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UMotionTrajectoryComponent();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UMotionTrajectoryComponent_NoRegister();
	MOTIONTRAJECTORY_API UScriptStruct* Z_Construct_UScriptStruct_FMotionTrajectorySettings();
	UPackage* Z_Construct_UPackage__Script_MotionTrajectory();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionTrajectorySettings;
class UScriptStruct* FMotionTrajectorySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionTrajectorySettings, (UObject*)Z_Construct_UPackage__Script_MotionTrajectory(), TEXT("MotionTrajectorySettings"));
	}
	return Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.OuterSingleton;
}
template<> MOTIONTRAJECTORY_API UScriptStruct* StaticStruct<FMotionTrajectorySettings>()
{
	return FMotionTrajectorySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Specifies the chosen domain parameters for trajectory sample retention and creation\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Specifies the chosen domain parameters for trajectory sample retention and creation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionTrajectorySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Sample time horizon\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Sample time horizon" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionTrajectorySettings, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewProp_Seconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewProp_Seconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionTrajectory,
		nullptr,
		&NewStructOps,
		"MotionTrajectorySettings",
		sizeof(FMotionTrajectorySettings),
		alignof(FMotionTrajectorySettings),
		Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionTrajectorySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.InnerSingleton, Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionTrajectorySettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UMotionTrajectoryComponent::execGetHistory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTrajectorySampleRange*)Z_Param__Result=P_THIS->GetHistory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrajectoryComponent::execGetTrajectoryWithSettings)
	{
		P_GET_STRUCT_REF(FMotionTrajectorySettings,Z_Param_Out_Settings);
		P_GET_UBOOL(Z_Param_bIncludeHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTrajectorySampleRange*)Z_Param__Result=P_THIS->GetTrajectoryWithSettings(Z_Param_Out_Settings,Z_Param_bIncludeHistory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionTrajectoryComponent::execGetTrajectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTrajectorySampleRange*)Z_Param__Result=P_THIS->GetTrajectory();
		P_NATIVE_END;
	}
	void UMotionTrajectoryComponent::StaticRegisterNativesUMotionTrajectoryComponent()
	{
		UClass* Class = UMotionTrajectoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHistory", &UMotionTrajectoryComponent::execGetHistory },
			{ "GetTrajectory", &UMotionTrajectoryComponent::execGetTrajectory },
			{ "GetTrajectoryWithSettings", &UMotionTrajectoryComponent::execGetTrajectoryWithSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics
	{
		struct MotionTrajectoryComponent_eventGetHistory_Parms
		{
			FTrajectorySampleRange ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryComponent_eventGetHistory_Parms, ReturnValue), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(nullptr, 0) }; // 4181307663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Retrieves the historical trajectory\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Retrieves the historical trajectory" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrajectoryComponent, nullptr, "GetHistory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::MotionTrajectoryComponent_eventGetHistory_Parms), Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics
	{
		struct MotionTrajectoryComponent_eventGetTrajectory_Parms
		{
			FTrajectorySampleRange ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryComponent_eventGetTrajectory_Parms, ReturnValue), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(nullptr, 0) }; // 4181307663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Interface for computing a trajectory prediction\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Interface for computing a trajectory prediction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrajectoryComponent, nullptr, "GetTrajectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::MotionTrajectoryComponent_eventGetTrajectory_Parms), Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics
	{
		struct MotionTrajectoryComponent_eventGetTrajectoryWithSettings_Parms
		{
			FMotionTrajectorySettings Settings;
			bool bIncludeHistory;
			FTrajectorySampleRange ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static void NewProp_bIncludeHistory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeHistory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryComponent_eventGetTrajectoryWithSettings_Parms, Settings), Z_Construct_UScriptStruct_FMotionTrajectorySettings, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_Settings_MetaData)) }; // 1383475939
	void Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_bIncludeHistory_SetBit(void* Obj)
	{
		((MotionTrajectoryComponent_eventGetTrajectoryWithSettings_Parms*)Obj)->bIncludeHistory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_bIncludeHistory = { "bIncludeHistory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionTrajectoryComponent_eventGetTrajectoryWithSettings_Parms), &Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_bIncludeHistory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionTrajectoryComponent_eventGetTrajectoryWithSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FTrajectorySampleRange, METADATA_PARAMS(nullptr, 0) }; // 4181307663
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_bIncludeHistory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "Settings" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Interface for computing a trajectory prediction with overridden component settings\n" },
		{ "DisplayName", "Get Trajectory (With Settings)" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Interface for computing a trajectory prediction with overridden component settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionTrajectoryComponent, nullptr, "GetTrajectoryWithSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::MotionTrajectoryComponent_eventGetTrajectoryWithSettings_Parms), Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionTrajectoryComponent);
	UClass* Z_Construct_UClass_UMotionTrajectoryComponent_NoRegister()
	{
		return UMotionTrajectoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMotionTrajectoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PredictionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PredictionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HistorySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HistorySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPredictionIncludesHistory_MetaData[];
#endif
		static void NewProp_bPredictionIncludesHistory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPredictionIncludesHistory;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawTrajectory_MetaData[];
#endif
		static void NewProp_bDebugDrawTrajectory_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawTrajectory;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionTrajectoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionTrajectory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionTrajectoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionTrajectoryComponent_GetHistory, "GetHistory" }, // 3212463885
		{ &Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectory, "GetTrajectory" }, // 1066829094
		{ &Z_Construct_UFunction_UMotionTrajectoryComponent_GetTrajectoryWithSettings, "GetTrajectoryWithSettings" }, // 1895156572
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrajectoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Motion Trajectory" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "// Abstract component interface for the minimum Motion Trajectory prediction and history API\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "MotionTrajectory.h" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Abstract component interface for the minimum Motion Trajectory prediction and history API" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_PredictionSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Prediction trajectory simulation settings\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Prediction trajectory simulation settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_PredictionSettings = { "PredictionSettings", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrajectoryComponent, PredictionSettings), Z_Construct_UScriptStruct_FMotionTrajectorySettings, METADATA_PARAMS(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_PredictionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_PredictionSettings_MetaData)) }; // 1383475939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_HistorySettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Historical trajectory settings\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Historical trajectory settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_HistorySettings = { "HistorySettings", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrajectoryComponent, HistorySettings), Z_Construct_UScriptStruct_FMotionTrajectorySettings, METADATA_PARAMS(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_HistorySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_HistorySettings_MetaData)) }; // 1383475939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "120" },
		{ "ClampMin", "5" },
		{ "Comment", "// The trajectory sampling rate for prediction\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "The trajectory sampling rate for prediction" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrajectoryComponent, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_MaxSamples_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "3600" },
		{ "ClampMin", "0" },
		{ "Comment", "// The maximum number of trajectory samples retained by the internal history buffer\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "The maximum number of trajectory samples retained by the internal history buffer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_MaxSamples = { "MaxSamples", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionTrajectoryComponent, MaxSamples), METADATA_PARAMS(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_MaxSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_MaxSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bPredictionIncludesHistory_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Determines if GetTrajectory() will automatically combine history into the returned trajectory prediction (true)\n// Consider disabling this option when historical trajectory samples are never used\n// Example: No Motion Matching historical sample times or distances are defined in the Pose Search Schema\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Determines if GetTrajectory() will automatically combine history into the returned trajectory prediction (true)\nConsider disabling this option when historical trajectory samples are never used\nExample: No Motion Matching historical sample times or distances are defined in the Pose Search Schema" },
	};
#endif
	void Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bPredictionIncludesHistory_SetBit(void* Obj)
	{
		((UMotionTrajectoryComponent*)Obj)->bPredictionIncludesHistory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bPredictionIncludesHistory = { "bPredictionIncludesHistory", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionTrajectoryComponent), &Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bPredictionIncludesHistory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bPredictionIncludesHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bPredictionIncludesHistory_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bDebugDrawTrajectory_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Debug drawing options for the complete trajectory range\n// a.MotionTrajectory.Debug (0/1) to enable or disable\n// a.MotionTrajectory.Options (0-6) to enable additional sample information\n// a.MotionTrajectory.Stride (*) to stride sample information display by a specified modulo\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectory.h" },
		{ "ToolTip", "Debug drawing options for the complete trajectory range\na.MotionTrajectory.Debug (0/1) to enable or disable\na.MotionTrajectory.Options (0-6) to enable additional sample information\na.MotionTrajectory.Stride (*) to stride sample information display by a specified modulo" },
	};
#endif
	void Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bDebugDrawTrajectory_SetBit(void* Obj)
	{
		((UMotionTrajectoryComponent*)Obj)->bDebugDrawTrajectory = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bDebugDrawTrajectory = { "bDebugDrawTrajectory", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionTrajectoryComponent), &Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bDebugDrawTrajectory_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bDebugDrawTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bDebugDrawTrajectory_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionTrajectoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_PredictionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_HistorySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_MaxSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bPredictionIncludesHistory,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionTrajectoryComponent_Statics::NewProp_bDebugDrawTrajectory,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionTrajectoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionTrajectoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionTrajectoryComponent_Statics::ClassParams = {
		&UMotionTrajectoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMotionTrajectoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionTrajectoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionTrajectoryComponent()
	{
		if (!Z_Registration_Info_UClass_UMotionTrajectoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionTrajectoryComponent.OuterSingleton, Z_Construct_UClass_UMotionTrajectoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionTrajectoryComponent.OuterSingleton;
	}
	template<> MOTIONTRAJECTORY_API UClass* StaticClass<UMotionTrajectoryComponent>()
	{
		return UMotionTrajectoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionTrajectoryComponent);
	UMotionTrajectoryComponent::~UMotionTrajectoryComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics::ScriptStructInfo[] = {
		{ FMotionTrajectorySettings::StaticStruct, Z_Construct_UScriptStruct_FMotionTrajectorySettings_Statics::NewStructOps, TEXT("MotionTrajectorySettings"), &Z_Registration_Info_UScriptStruct_MotionTrajectorySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionTrajectorySettings), 1383475939U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionTrajectoryComponent, UMotionTrajectoryComponent::StaticClass, TEXT("UMotionTrajectoryComponent"), &Z_Registration_Info_UClass_UMotionTrajectoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionTrajectoryComponent), 3373634675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_367551318(TEXT("/Script/MotionTrajectory"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectory_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
