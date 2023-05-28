// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Animation/RigVMFunction_TimeConversion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_TimeConversion() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_FramesToSeconds>() == std::is_polymorphic<FRigVMFunction_AnimBase>(), "USTRUCT FRigVMFunction_FramesToSeconds cannot be polymorphic unless super FRigVMFunction_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_FramesToSeconds;
class UScriptStruct* FRigVMFunction_FramesToSeconds::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_FramesToSeconds.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_FramesToSeconds.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_FramesToSeconds"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_FramesToSeconds_Execute;
		Arguments_FRigVMFunction_FramesToSeconds_Execute.Emplace(TEXT("Frames"), TEXT("float"));
		Arguments_FRigVMFunction_FramesToSeconds_Execute.Emplace(TEXT("Seconds"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_FramesToSeconds::Execute"), &FRigVMFunction_FramesToSeconds::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_FramesToSeconds.OuterSingleton, Arguments_FRigVMFunction_FramesToSeconds_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_FramesToSeconds.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_FramesToSeconds>()
{
	return FRigVMFunction_FramesToSeconds::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Converts frames to seconds based on the current frame rate\n */" },
		{ "DisplayName", "Frames to Seconds" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_TimeConversion.h" },
		{ "ToolTip", "Converts frames to seconds based on the current frame rate" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_FramesToSeconds>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewProp_Frames_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_TimeConversion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_FramesToSeconds, Frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewProp_Frames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_TimeConversion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_FramesToSeconds, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewProp_Seconds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewProp_Seconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AnimBase,
		&NewStructOps,
		"RigVMFunction_FramesToSeconds",
		sizeof(FRigVMFunction_FramesToSeconds),
		alignof(FRigVMFunction_FramesToSeconds),
		Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_FramesToSeconds.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_FramesToSeconds.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_FramesToSeconds.InnerSingleton;
	}

void FRigVMFunction_FramesToSeconds::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_FramesToSeconds::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Frames,
		Seconds
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_SecondsToFrames>() == std::is_polymorphic<FRigVMFunction_AnimBase>(), "USTRUCT FRigVMFunction_SecondsToFrames cannot be polymorphic unless super FRigVMFunction_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_SecondsToFrames;
class UScriptStruct* FRigVMFunction_SecondsToFrames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_SecondsToFrames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_SecondsToFrames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_SecondsToFrames"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_SecondsToFrames_Execute;
		Arguments_FRigVMFunction_SecondsToFrames_Execute.Emplace(TEXT("Seconds"), TEXT("float"));
		Arguments_FRigVMFunction_SecondsToFrames_Execute.Emplace(TEXT("Frames"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_SecondsToFrames::Execute"), &FRigVMFunction_SecondsToFrames::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_SecondsToFrames.OuterSingleton, Arguments_FRigVMFunction_SecondsToFrames_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_SecondsToFrames.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_SecondsToFrames>()
{
	return FRigVMFunction_SecondsToFrames::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Converts seconds to frames based on the current frame rate\n */" },
		{ "DisplayName", "Seconds to Frames" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_TimeConversion.h" },
		{ "ToolTip", "Converts seconds to frames based on the current frame rate" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_SecondsToFrames>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_TimeConversion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_SecondsToFrames, Seconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewProp_Seconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewProp_Seconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewProp_Frames_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_TimeConversion.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_SecondsToFrames, Frames), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewProp_Frames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewProp_Frames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AnimBase,
		&NewStructOps,
		"RigVMFunction_SecondsToFrames",
		sizeof(FRigVMFunction_SecondsToFrames),
		alignof(FRigVMFunction_SecondsToFrames),
		Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_SecondsToFrames.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_SecondsToFrames.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_SecondsToFrames.InnerSingleton;
	}

void FRigVMFunction_SecondsToFrames::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_SecondsToFrames::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Seconds,
		Frames
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_FramesToSeconds::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_FramesToSeconds_Statics::NewStructOps, TEXT("RigVMFunction_FramesToSeconds"), &Z_Registration_Info_UScriptStruct_RigVMFunction_FramesToSeconds, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_FramesToSeconds), 2663700404U) },
		{ FRigVMFunction_SecondsToFrames::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_SecondsToFrames_Statics::NewStructOps, TEXT("RigVMFunction_SecondsToFrames"), &Z_Registration_Info_UScriptStruct_RigVMFunction_SecondsToFrames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_SecondsToFrames), 828035020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h_2070657844(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_TimeConversion_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
