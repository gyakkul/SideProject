// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraScriptBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	NIAGARACORE_API UEnum* Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource();
	NIAGARASHADER_API UClass* Z_Construct_UClass_UNiagaraScriptBase();
	NIAGARASHADER_API UClass* Z_Construct_UClass_UNiagaraScriptBase_NoRegister();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType();
	NIAGARASHADER_API UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FSimulationStageMetaData();
	UPackage* Z_Construct_UPackage__Script_NiagaraShader();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraGpuDispatchType;
	static UEnum* ENiagaraGpuDispatchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraGpuDispatchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraGpuDispatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("ENiagaraGpuDispatchType"));
		}
		return Z_Registration_Info_UEnum_ENiagaraGpuDispatchType.OuterSingleton;
	}
	template<> NIAGARASHADER_API UEnum* StaticEnum<ENiagaraGpuDispatchType>()
	{
		return ENiagaraGpuDispatchType_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType_Statics::Enumerators[] = {
		{ "ENiagaraGpuDispatchType::OneD", (int64)ENiagaraGpuDispatchType::OneD },
		{ "ENiagaraGpuDispatchType::TwoD", (int64)ENiagaraGpuDispatchType::TwoD },
		{ "ENiagaraGpuDispatchType::ThreeD", (int64)ENiagaraGpuDispatchType::ThreeD },
		{ "ENiagaraGpuDispatchType::Custom", (int64)ENiagaraGpuDispatchType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType_Statics::Enum_MetaDataParams[] = {
		{ "Custom.Comment", "/* NumThreads will be determined manually. */" },
		{ "Custom.Hidden", "" },
		{ "Custom.Name", "ENiagaraGpuDispatchType::Custom" },
		{ "Custom.ToolTip", "NumThreads will be determined manually." },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "OneD.Comment", "/* Instances will distribute along X using platforms specific thread counts. */" },
		{ "OneD.Name", "ENiagaraGpuDispatchType::OneD" },
		{ "OneD.ToolTip", "Instances will distribute along X using platforms specific thread counts." },
		{ "ThreeD.Comment", "/* Instances will distribute along X, Y & Z using platforms specific thread counts. */" },
		{ "ThreeD.Name", "ENiagaraGpuDispatchType::ThreeD" },
		{ "ThreeD.ToolTip", "Instances will distribute along X, Y & Z using platforms specific thread counts." },
		{ "TwoD.Comment", "/* Instances will distribute along X & Y using platforms specific thread counts. */" },
		{ "TwoD.Name", "ENiagaraGpuDispatchType::TwoD" },
		{ "TwoD.ToolTip", "Instances will distribute along X & Y using platforms specific thread counts." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		"ENiagaraGpuDispatchType",
		"ENiagaraGpuDispatchType",
		Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraGpuDispatchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraGpuDispatchType.InnerSingleton, Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraGpuDispatchType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDirectDispatchElementType;
	static UEnum* ENiagaraDirectDispatchElementType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDirectDispatchElementType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDirectDispatchElementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("ENiagaraDirectDispatchElementType"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDirectDispatchElementType.OuterSingleton;
	}
	template<> NIAGARASHADER_API UEnum* StaticEnum<ENiagaraDirectDispatchElementType>()
	{
		return ENiagaraDirectDispatchElementType_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType_Statics::Enumerators[] = {
		{ "ENiagaraDirectDispatchElementType::NumThreads", (int64)ENiagaraDirectDispatchElementType::NumThreads },
		{ "ENiagaraDirectDispatchElementType::NumThreadsNoClipping", (int64)ENiagaraDirectDispatchElementType::NumThreadsNoClipping },
		{ "ENiagaraDirectDispatchElementType::NumGroups", (int64)ENiagaraDirectDispatchElementType::NumGroups },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "NumGroups.Comment", "/**\n\x09Number of elements refers to the number of groups to launch.\n\x09""For example, if you defined NumElements as 3,1,1 and GroupSize was 64,1,1 you are effectively launching 192 threads.\n\x09*/" },
		{ "NumGroups.Name", "ENiagaraDirectDispatchElementType::NumGroups" },
		{ "NumGroups.ToolTip", "Number of elements refers to the number of groups to launch.\nFor example, if you defined NumElements as 3,1,1 and GroupSize was 64,1,1 you are effectively launching 192 threads." },
		{ "NumThreads.Comment", "/**\n\x09Number of elements is the number of threads launched in that dimension.\n\x09Threads that are out of bounds due to shader thread group size will be automatically clipped (i.e. code will not run).\n\x09""For example, if GroupSize = 64,1,1 and NumElements = 32,1,1 only the first 32 threads will run the code.\n\x09*/" },
		{ "NumThreads.Name", "ENiagaraDirectDispatchElementType::NumThreads" },
		{ "NumThreads.ToolTip", "Number of elements is the number of threads launched in that dimension.\nThreads that are out of bounds due to shader thread group size will be automatically clipped (i.e. code will not run).\nFor example, if GroupSize = 64,1,1 and NumElements = 32,1,1 only the first 32 threads will run the code." },
		{ "NumThreadsNoClipping.Comment", "/**\n\x09Number of elements is the number of threads launched in that dimension.\n\x09Threads that are out of bounds due to shader thread group size will not be clipped and your code will execute.\n\x09You are responsible for ensuring you do not make invalid access from these OOB threads.\n\x09""For example, if GroupSize = 64,1,1 and NumElements = 32,1,1 you code will execute 64 times.\n\x09Use this path if you need to add group sync's within you graph code.\n\x09*/" },
		{ "NumThreadsNoClipping.Name", "ENiagaraDirectDispatchElementType::NumThreadsNoClipping" },
		{ "NumThreadsNoClipping.ToolTip", "Number of elements is the number of threads launched in that dimension.\nThreads that are out of bounds due to shader thread group size will not be clipped and your code will execute.\nYou are responsible for ensuring you do not make invalid access from these OOB threads.\nFor example, if GroupSize = 64,1,1 and NumElements = 32,1,1 you code will execute 64 times.\nUse this path if you need to add group sync's within you graph code." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		"ENiagaraDirectDispatchElementType",
		"ENiagaraDirectDispatchElementType",
		Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDirectDispatchElementType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDirectDispatchElementType.InnerSingleton, Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDirectDispatchElementType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSimStageExecuteBehavior;
	static UEnum* ENiagaraSimStageExecuteBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSimStageExecuteBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraSimStageExecuteBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("ENiagaraSimStageExecuteBehavior"));
		}
		return Z_Registration_Info_UEnum_ENiagaraSimStageExecuteBehavior.OuterSingleton;
	}
	template<> NIAGARASHADER_API UEnum* StaticEnum<ENiagaraSimStageExecuteBehavior>()
	{
		return ENiagaraSimStageExecuteBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior_Statics::Enumerators[] = {
		{ "ENiagaraSimStageExecuteBehavior::Always", (int64)ENiagaraSimStageExecuteBehavior::Always },
		{ "ENiagaraSimStageExecuteBehavior::OnSimulationReset", (int64)ENiagaraSimStageExecuteBehavior::OnSimulationReset },
		{ "ENiagaraSimStageExecuteBehavior::NotOnSimulationReset", (int64)ENiagaraSimStageExecuteBehavior::NotOnSimulationReset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior_Statics::Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** The stage will run every frame. */" },
		{ "Always.Name", "ENiagaraSimStageExecuteBehavior::Always" },
		{ "Always.ToolTip", "The stage will run every frame." },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "NotOnSimulationReset.Comment", "/** The stage will not run on the frame where the simulation is reset. */" },
		{ "NotOnSimulationReset.Name", "ENiagaraSimStageExecuteBehavior::NotOnSimulationReset" },
		{ "NotOnSimulationReset.ToolTip", "The stage will not run on the frame where the simulation is reset." },
		{ "OnSimulationReset.Comment", "/** The stage will only run on the frame when the simulation is reset. */" },
		{ "OnSimulationReset.Name", "ENiagaraSimStageExecuteBehavior::OnSimulationReset" },
		{ "OnSimulationReset.ToolTip", "The stage will only run on the frame when the simulation is reset." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		"ENiagaraSimStageExecuteBehavior",
		"ENiagaraSimStageExecuteBehavior",
		Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSimStageExecuteBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSimStageExecuteBehavior.InnerSingleton, Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraSimStageExecuteBehavior.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimulationStageMetaData;
class UScriptStruct* FSimulationStageMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimulationStageMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimulationStageMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimulationStageMetaData, (UObject*)Z_Construct_UPackage__Script_NiagaraShader(), TEXT("SimulationStageMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_SimulationStageMetaData.OuterSingleton;
}
template<> NIAGARASHADER_API UScriptStruct* StaticStruct<FSimulationStageMetaData>()
{
	return FSimulationStageMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationStageName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SimulationStageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledBinding_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EnabledBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementCountXBinding_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ElementCountXBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementCountYBinding_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ElementCountYBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementCountZBinding_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ElementCountZBinding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IterationSourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IterationSourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IterationSourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IterationDataInterface_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IterationDataInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IterationDirectBinding_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IterationDirectBinding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecuteBehavior_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecuteBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWritesParticles_MetaData[];
#endif
		static void NewProp_bWritesParticles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWritesParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPartialParticleUpdate_MetaData[];
#endif
		static void NewProp_bPartialParticleUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPartialParticleUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParticleIterationStateEnabled_MetaData[];
#endif
		static void NewProp_bParticleIterationStateEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParticleIterationStateEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGpuIndirectDispatch_MetaData[];
#endif
		static void NewProp_bGpuIndirectDispatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGpuIndirectDispatch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIterationStateBinding_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParticleIterationStateBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleIterationStateRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleIterationStateRange;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputDestinations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDestinations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputDestinations;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputDataInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDataInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputDataInterfaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIterationsBinding_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NumIterationsBinding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GpuDispatchType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GpuDispatchType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuDispatchType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GpuDirectDispatchElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GpuDirectDispatchElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GpuDirectDispatchElementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GpuDispatchNumThreads_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GpuDispatchNumThreads;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimulationStageMetaData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_SimulationStageName_MetaData[] = {
		{ "Comment", "/** User simulation stage name. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "User simulation stage name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_SimulationStageName = { "SimulationStageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, SimulationStageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_SimulationStageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_SimulationStageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_EnabledBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_EnabledBinding = { "EnabledBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, EnabledBinding), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_EnabledBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_EnabledBinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountXBinding_MetaData[] = {
		{ "Comment", "/** Optional binding to manually specify the element count. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Optional binding to manually specify the element count." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountXBinding = { "ElementCountXBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, ElementCountXBinding), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountXBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountXBinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountYBinding_MetaData[] = {
		{ "Comment", "/** Optional binding to manually specify the element count. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Optional binding to manually specify the element count." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountYBinding = { "ElementCountYBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, ElementCountYBinding), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountYBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountYBinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountZBinding_MetaData[] = {
		{ "Comment", "/** Optional binding to manually specify the element count. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Optional binding to manually specify the element count." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountZBinding = { "ElementCountZBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, ElementCountZBinding), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountZBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountZBinding_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSourceType_MetaData[] = {
		{ "Comment", "/** The source we are iteration over. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "The source we are iteration over." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSourceType = { "IterationSourceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, IterationSourceType), Z_Construct_UEnum_NiagaraCore_ENiagaraIterationSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSourceType_MetaData)) }; // 229667017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationDataInterface_MetaData[] = {
		{ "Comment", "/** When IterationSource is ENiagaraIterationSource::DataInterface this is the data interface name. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "When IterationSource is ENiagaraIterationSource::DataInterface this is the data interface name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationDataInterface = { "IterationDataInterface", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, IterationDataInterface), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationDataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationDataInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationDirectBinding_MetaData[] = {
		{ "Comment", "/** When IterationSource is ENiagaraIterationSource::IterationDirectBinding this is the variable we are bound to. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "When IterationSource is ENiagaraIterationSource::IterationDirectBinding this is the variable we are bound to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationDirectBinding = { "IterationDirectBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, IterationDirectBinding), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationDirectBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationDirectBinding_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ExecuteBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ExecuteBehavior_MetaData[] = {
		{ "Comment", "/** Controls when the simulation stage will execute. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Controls when the simulation stage will execute." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ExecuteBehavior = { "ExecuteBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, ExecuteBehavior), Z_Construct_UEnum_NiagaraShader_ENiagaraSimStageExecuteBehavior, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ExecuteBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ExecuteBehavior_MetaData)) }; // 3580780632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles_MetaData[] = {
		{ "Comment", "/** Do we write to particles this stage? */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Do we write to particles this stage?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles_SetBit(void* Obj)
	{
		((FSimulationStageMetaData*)Obj)->bWritesParticles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles = { "bWritesParticles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSimulationStageMetaData), &Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate_MetaData[] = {
		{ "Comment", "/** When enabled the simulation stage does not write all variables out, so we are reading / writing to the same buffer. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "When enabled the simulation stage does not write all variables out, so we are reading / writing to the same buffer." },
	};
#endif
	void Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate_SetBit(void* Obj)
	{
		((FSimulationStageMetaData*)Obj)->bPartialParticleUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate = { "bPartialParticleUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSimulationStageMetaData), &Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bParticleIterationStateEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bParticleIterationStateEnabled_SetBit(void* Obj)
	{
		((FSimulationStageMetaData*)Obj)->bParticleIterationStateEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bParticleIterationStateEnabled = { "bParticleIterationStateEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSimulationStageMetaData), &Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bParticleIterationStateEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bParticleIterationStateEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bParticleIterationStateEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bGpuIndirectDispatch_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bGpuIndirectDispatch_SetBit(void* Obj)
	{
		((FSimulationStageMetaData*)Obj)->bGpuIndirectDispatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bGpuIndirectDispatch = { "bGpuIndirectDispatch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FSimulationStageMetaData), &Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bGpuIndirectDispatch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bGpuIndirectDispatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bGpuIndirectDispatch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ParticleIterationStateBinding_MetaData[] = {
		{ "Comment", "/** When the value is not none this is the binding used for particle state iteration stages. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "When the value is not none this is the binding used for particle state iteration stages." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ParticleIterationStateBinding = { "ParticleIterationStateBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, ParticleIterationStateBinding), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ParticleIterationStateBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ParticleIterationStateBinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ParticleIterationStateRange_MetaData[] = {
		{ "Comment", "/** Inclusive range to compare the particle state value with. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Inclusive range to compare the particle state value with." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ParticleIterationStateRange = { "ParticleIterationStateRange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, ParticleIterationStateRange), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ParticleIterationStateRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ParticleIterationStateRange_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations_Inner = { "OutputDestinations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations_MetaData[] = {
		{ "Comment", "/** DataInterfaces that we write to in this stage.*/" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "DataInterfaces that we write to in this stage." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations = { "OutputDestinations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, OutputDestinations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_InputDataInterfaces_Inner = { "InputDataInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_InputDataInterfaces_MetaData[] = {
		{ "Comment", "/** DataInterfaces that we read from in this stage.*/" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "DataInterfaces that we read from in this stage." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_InputDataInterfaces = { "InputDataInterfaces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, InputDataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_InputDataInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_InputDataInterfaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_NumIterations_MetaData[] = {
		{ "Comment", "/** The number of iterations for the stage. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "The number of iterations for the stage." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_NumIterations = { "NumIterations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, NumIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_NumIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_NumIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_NumIterationsBinding_MetaData[] = {
		{ "Comment", "/** Optional binding to gather num iterations from. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Optional binding to gather num iterations from." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_NumIterationsBinding = { "NumIterationsBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, NumIterationsBinding), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_NumIterationsBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_NumIterationsBinding_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchType_MetaData[] = {
		{ "Comment", "/** Dispatch type set for this stage. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "Dispatch type set for this stage." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchType = { "GpuDispatchType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, GpuDispatchType), Z_Construct_UEnum_NiagaraShader_ENiagaraGpuDispatchType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchType_MetaData)) }; // 159617944
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDirectDispatchElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDirectDispatchElementType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDirectDispatchElementType = { "GpuDirectDispatchElementType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, GpuDirectDispatchElementType), Z_Construct_UEnum_NiagaraShader_ENiagaraDirectDispatchElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDirectDispatchElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDirectDispatchElementType_MetaData)) }; // 3700041285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchNumThreads_MetaData[] = {
		{ "Comment", "/** When in custom mode this is the num threads. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
		{ "ToolTip", "When in custom mode this is the num threads." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchNumThreads = { "GpuDispatchNumThreads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimulationStageMetaData, GpuDispatchNumThreads), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchNumThreads_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchNumThreads_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_SimulationStageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_EnabledBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountXBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountYBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ElementCountZBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationDataInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_IterationDirectBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ExecuteBehavior_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ExecuteBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bWritesParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bPartialParticleUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bParticleIterationStateEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_bGpuIndirectDispatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ParticleIterationStateBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_ParticleIterationStateRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_OutputDestinations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_InputDataInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_InputDataInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_NumIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_NumIterationsBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDirectDispatchElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDirectDispatchElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewProp_GpuDispatchNumThreads,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
		nullptr,
		&NewStructOps,
		"SimulationStageMetaData",
		sizeof(FSimulationStageMetaData),
		alignof(FSimulationStageMetaData),
		Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimulationStageMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_SimulationStageMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimulationStageMetaData.InnerSingleton, Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimulationStageMetaData.InnerSingleton;
	}
	void UNiagaraScriptBase::StaticRegisterNativesUNiagaraScriptBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScriptBase);
	UClass* Z_Construct_UClass_UNiagaraScriptBase_NoRegister()
	{
		return UNiagaraScriptBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScriptBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScriptBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraShader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraScriptBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraScriptBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScriptBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScriptBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScriptBase_Statics::ClassParams = {
		&UNiagaraScriptBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScriptBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraScriptBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScriptBase.OuterSingleton, Z_Construct_UClass_UNiagaraScriptBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraScriptBase.OuterSingleton;
	}
	template<> NIAGARASHADER_API UClass* StaticClass<UNiagaraScriptBase>()
	{
		return UNiagaraScriptBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScriptBase);
	UNiagaraScriptBase::~UNiagaraScriptBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_Statics::EnumInfo[] = {
		{ ENiagaraGpuDispatchType_StaticEnum, TEXT("ENiagaraGpuDispatchType"), &Z_Registration_Info_UEnum_ENiagaraGpuDispatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 159617944U) },
		{ ENiagaraDirectDispatchElementType_StaticEnum, TEXT("ENiagaraDirectDispatchElementType"), &Z_Registration_Info_UEnum_ENiagaraDirectDispatchElementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3700041285U) },
		{ ENiagaraSimStageExecuteBehavior_StaticEnum, TEXT("ENiagaraSimStageExecuteBehavior"), &Z_Registration_Info_UEnum_ENiagaraSimStageExecuteBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3580780632U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_Statics::ScriptStructInfo[] = {
		{ FSimulationStageMetaData::StaticStruct, Z_Construct_UScriptStruct_FSimulationStageMetaData_Statics::NewStructOps, TEXT("SimulationStageMetaData"), &Z_Registration_Info_UScriptStruct_SimulationStageMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimulationStageMetaData), 1804114677U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScriptBase, UNiagaraScriptBase::StaticClass, TEXT("UNiagaraScriptBase"), &Z_Registration_Info_UClass_UNiagaraScriptBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScriptBase), 2870309869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_1902596616(TEXT("/Script/NiagaraShader"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraScriptBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
