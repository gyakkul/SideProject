// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_GetWorldTime() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_GetWorldTime>() == std::is_polymorphic<FRigVMFunction_AnimBase>(), "USTRUCT FRigVMFunction_GetWorldTime cannot be polymorphic unless super FRigVMFunction_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime;
class UScriptStruct* FRigVMFunction_GetWorldTime::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_GetWorldTime"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_GetWorldTime_Execute;
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Year"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Month"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Day"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("WeekDay"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Hours"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Minutes"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("Seconds"), TEXT("float"));
		Arguments_FRigVMFunction_GetWorldTime_Execute.Emplace(TEXT("OverallSeconds"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_GetWorldTime::Execute"), &FRigVMFunction_GetWorldTime::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.OuterSingleton, Arguments_FRigVMFunction_GetWorldTime_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_GetWorldTime>()
{
	return FRigVMFunction_GetWorldTime::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Year_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Year;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Month_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Month;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Day_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Day;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeekDay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeekDay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hours_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hours;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverallSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverallSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Returns the current time (year, month, day, hour, minute)\n */" },
		{ "DisplayName", "Now" },
		{ "Keywords", "Time,Clock" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "ToolTip", "Returns the current time (year, month, day, hour, minute)" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_GetWorldTime>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Year_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Year = { "Year", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Year), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Year_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Year_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Month_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Month = { "Month", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Month), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Month_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Month_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Day_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Day = { "Day", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Day), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Day_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Day_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_WeekDay_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_WeekDay = { "WeekDay", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, WeekDay), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_WeekDay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_WeekDay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Hours_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Hours), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Hours_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Hours_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Minutes_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Minutes), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Minutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Minutes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_OverallSeconds_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_GetWorldTime.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_OverallSeconds = { "OverallSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_GetWorldTime, OverallSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_OverallSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_OverallSeconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Year,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Month,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Day,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_WeekDay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Hours,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Minutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewProp_OverallSeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AnimBase,
		&NewStructOps,
		"RigVMFunction_GetWorldTime",
		sizeof(FRigVMFunction_GetWorldTime),
		alignof(FRigVMFunction_GetWorldTime),
		Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime.InnerSingleton;
	}

void FRigVMFunction_GetWorldTime::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_GetWorldTime::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Year,
		Month,
		Day,
		WeekDay,
		Hours,
		Minutes,
		Seconds,
		OverallSeconds
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_GetWorldTime::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_GetWorldTime_Statics::NewStructOps, TEXT("RigVMFunction_GetWorldTime"), &Z_Registration_Info_UScriptStruct_RigVMFunction_GetWorldTime, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_GetWorldTime), 2887430020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_2244926282(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_GetWorldTime_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
