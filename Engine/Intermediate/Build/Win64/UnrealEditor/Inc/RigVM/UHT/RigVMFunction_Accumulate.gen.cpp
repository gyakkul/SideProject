// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Simulation/RigVMFunction_Accumulate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_Accumulate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBase();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_AccumulateBase>() == std::is_polymorphic<FRigVMFunction_SimBase>(), "USTRUCT FRigVMFunction_AccumulateBase cannot be polymorphic unless super FRigVMFunction_SimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateBase;
class UScriptStruct* FRigVMFunction_AccumulateBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateBase>()
{
	return FRigVMFunction_AccumulateBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Simulation|Accumulate" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBase,
		&NewStructOps,
		"RigVMFunction_AccumulateBase",
		sizeof(FRigVMFunction_AccumulateBase),
		alignof(FRigVMFunction_AccumulateBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_AccumulateFloatAdd>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateFloatAdd cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatAdd;
class UScriptStruct* FRigVMFunction_AccumulateFloatAdd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatAdd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatAdd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateFloatAdd"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateFloatAdd_Execute;
		Arguments_FRigVMFunction_AccumulateFloatAdd_Execute.Emplace(TEXT("Increment"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatAdd_Execute.Emplace(TEXT("InitialValue"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatAdd_Execute.Emplace(TEXT("bIntegrateDeltaTime"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateFloatAdd_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatAdd_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatAdd_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateFloatAdd::Execute"), &FRigVMFunction_AccumulateFloatAdd::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatAdd.OuterSingleton, Arguments_FRigVMFunction_AccumulateFloatAdd_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatAdd.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateFloatAdd>()
{
	return FRigVMFunction_AccumulateFloatAdd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Increment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Increment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Adds a value over time over and over again\n */" },
		{ "DisplayName", "Accumulate Add (Float)" },
		{ "Keywords", "Simulate,++" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateAdd" },
		{ "ToolTip", "Adds a value over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateFloatAdd>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_Increment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatAdd, Increment), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_Increment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_Increment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatAdd, InitialValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateFloatAdd*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateFloatAdd), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatAdd, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatAdd, AccumulatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_AccumulatedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateFloatAdd*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateFloatAdd), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_Increment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_AccumulatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateFloatAdd",
		sizeof(FRigVMFunction_AccumulateFloatAdd),
		alignof(FRigVMFunction_AccumulateFloatAdd),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatAdd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatAdd.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatAdd.InnerSingleton;
	}

void FRigVMFunction_AccumulateFloatAdd::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateFloatAdd::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Increment,
		InitialValue,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateVectorAdd>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateVectorAdd cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorAdd;
class UScriptStruct* FRigVMFunction_AccumulateVectorAdd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorAdd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorAdd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateVectorAdd"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateVectorAdd_Execute;
		Arguments_FRigVMFunction_AccumulateVectorAdd_Execute.Emplace(TEXT("Increment"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorAdd_Execute.Emplace(TEXT("InitialValue"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorAdd_Execute.Emplace(TEXT("bIntegrateDeltaTime"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateVectorAdd_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorAdd_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorAdd_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateVectorAdd::Execute"), &FRigVMFunction_AccumulateVectorAdd::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorAdd.OuterSingleton, Arguments_FRigVMFunction_AccumulateVectorAdd_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorAdd.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateVectorAdd>()
{
	return FRigVMFunction_AccumulateVectorAdd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Increment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Increment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Adds a vector over time over and over again\n */" },
		{ "DisplayName", "Accumulate Add (Vector)" },
		{ "Keywords", "Simulate,++" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateAdd" },
		{ "ToolTip", "Adds a vector over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateVectorAdd>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_Increment_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_Increment = { "Increment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorAdd, Increment), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_Increment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_Increment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorAdd, InitialValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateVectorAdd*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateVectorAdd), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorAdd, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorAdd, AccumulatedValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_AccumulatedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateVectorAdd*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateVectorAdd), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_Increment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_AccumulatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateVectorAdd",
		sizeof(FRigVMFunction_AccumulateVectorAdd),
		alignof(FRigVMFunction_AccumulateVectorAdd),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorAdd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorAdd.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorAdd.InnerSingleton;
	}

void FRigVMFunction_AccumulateVectorAdd::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateVectorAdd::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Increment,
		InitialValue,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateFloatMul>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateFloatMul cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatMul;
class UScriptStruct* FRigVMFunction_AccumulateFloatMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateFloatMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateFloatMul_Execute;
		Arguments_FRigVMFunction_AccumulateFloatMul_Execute.Emplace(TEXT("Multiplier"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatMul_Execute.Emplace(TEXT("InitialValue"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatMul_Execute.Emplace(TEXT("bIntegrateDeltaTime"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateFloatMul_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatMul_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatMul_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateFloatMul::Execute"), &FRigVMFunction_AccumulateFloatMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatMul.OuterSingleton, Arguments_FRigVMFunction_AccumulateFloatMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatMul.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateFloatMul>()
{
	return FRigVMFunction_AccumulateFloatMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Multiplies a value over time over and over again\n */" },
		{ "DisplayName", "Accumulate Mul (Float)" },
		{ "Keywords", "Simulate,**" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateMul" },
		{ "ToolTip", "Multiplies a value over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateFloatMul>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatMul, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatMul, InitialValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateFloatMul*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateFloatMul), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatMul, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatMul, AccumulatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_AccumulatedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateFloatMul*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateFloatMul), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_AccumulatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateFloatMul",
		sizeof(FRigVMFunction_AccumulateFloatMul),
		alignof(FRigVMFunction_AccumulateFloatMul),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatMul.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatMul.InnerSingleton;
	}

void FRigVMFunction_AccumulateFloatMul::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateFloatMul::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Multiplier,
		InitialValue,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateVectorMul>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateVectorMul cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorMul;
class UScriptStruct* FRigVMFunction_AccumulateVectorMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateVectorMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateVectorMul_Execute;
		Arguments_FRigVMFunction_AccumulateVectorMul_Execute.Emplace(TEXT("Multiplier"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorMul_Execute.Emplace(TEXT("InitialValue"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorMul_Execute.Emplace(TEXT("bIntegrateDeltaTime"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateVectorMul_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorMul_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorMul_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateVectorMul::Execute"), &FRigVMFunction_AccumulateVectorMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorMul.OuterSingleton, Arguments_FRigVMFunction_AccumulateVectorMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorMul.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateVectorMul>()
{
	return FRigVMFunction_AccumulateVectorMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Multiplies a vector over time over and over again\n */" },
		{ "DisplayName", "Accumulate Mul (Vector)" },
		{ "Keywords", "Simulate,**" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateMul" },
		{ "ToolTip", "Multiplies a vector over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateVectorMul>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorMul, Multiplier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorMul, InitialValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateVectorMul*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateVectorMul), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorMul, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorMul, AccumulatedValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_AccumulatedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateVectorMul*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateVectorMul), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_AccumulatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateVectorMul",
		sizeof(FRigVMFunction_AccumulateVectorMul),
		alignof(FRigVMFunction_AccumulateVectorMul),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorMul.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorMul.InnerSingleton;
	}

void FRigVMFunction_AccumulateVectorMul::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateVectorMul::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Multiplier,
		InitialValue,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateQuatMul>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateQuatMul cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatMul;
class UScriptStruct* FRigVMFunction_AccumulateQuatMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateQuatMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateQuatMul_Execute;
		Arguments_FRigVMFunction_AccumulateQuatMul_Execute.Emplace(TEXT("Multiplier"), TEXT("FQuat"));
		Arguments_FRigVMFunction_AccumulateQuatMul_Execute.Emplace(TEXT("InitialValue"), TEXT("FQuat"));
		Arguments_FRigVMFunction_AccumulateQuatMul_Execute.Emplace(TEXT("bFlipOrder"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateQuatMul_Execute.Emplace(TEXT("bIntegrateDeltaTime"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateQuatMul_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		Arguments_FRigVMFunction_AccumulateQuatMul_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("FQuat"));
		Arguments_FRigVMFunction_AccumulateQuatMul_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateQuatMul::Execute"), &FRigVMFunction_AccumulateQuatMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatMul.OuterSingleton, Arguments_FRigVMFunction_AccumulateQuatMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatMul.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateQuatMul>()
{
	return FRigVMFunction_AccumulateQuatMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipOrder_MetaData[];
#endif
		static void NewProp_bFlipOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Multiplies a quaternion over time over and over again\n */" },
		{ "DisplayName", "Accumulate Mul (Quaternion)" },
		{ "Keywords", "Simulate,**" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateMul" },
		{ "ToolTip", "Multiplies a quaternion over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateQuatMul>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateQuatMul, Multiplier), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateQuatMul, InitialValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bFlipOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bFlipOrder_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateQuatMul*)Obj)->bFlipOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bFlipOrder = { "bFlipOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateQuatMul), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bFlipOrder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bFlipOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bFlipOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateQuatMul*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateQuatMul), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateQuatMul, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateQuatMul, AccumulatedValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_AccumulatedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateQuatMul*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateQuatMul), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bFlipOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_AccumulatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateQuatMul",
		sizeof(FRigVMFunction_AccumulateQuatMul),
		alignof(FRigVMFunction_AccumulateQuatMul),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatMul.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatMul.InnerSingleton;
	}

void FRigVMFunction_AccumulateQuatMul::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateQuatMul::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Multiplier,
		InitialValue,
		bFlipOrder,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateTransformMul>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateTransformMul cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformMul;
class UScriptStruct* FRigVMFunction_AccumulateTransformMul::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformMul.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformMul.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateTransformMul"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateTransformMul_Execute;
		Arguments_FRigVMFunction_AccumulateTransformMul_Execute.Emplace(TEXT("Multiplier"), TEXT("FTransform"));
		Arguments_FRigVMFunction_AccumulateTransformMul_Execute.Emplace(TEXT("InitialValue"), TEXT("FTransform"));
		Arguments_FRigVMFunction_AccumulateTransformMul_Execute.Emplace(TEXT("bFlipOrder"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateTransformMul_Execute.Emplace(TEXT("bIntegrateDeltaTime"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateTransformMul_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigVMFunction_AccumulateTransformMul_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("FTransform"));
		Arguments_FRigVMFunction_AccumulateTransformMul_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateTransformMul::Execute"), &FRigVMFunction_AccumulateTransformMul::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformMul.OuterSingleton, Arguments_FRigVMFunction_AccumulateTransformMul_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformMul.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateTransformMul>()
{
	return FRigVMFunction_AccumulateTransformMul::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipOrder_MetaData[];
#endif
		static void NewProp_bFlipOrder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Multiplies a transform over time over and over again\n */" },
		{ "DisplayName", "Accumulate Mul (Transform)" },
		{ "Keywords", "Simulate,**" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateMul" },
		{ "ToolTip", "Multiplies a transform over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateTransformMul>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateTransformMul, Multiplier), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateTransformMul, InitialValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bFlipOrder_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bFlipOrder_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateTransformMul*)Obj)->bFlipOrder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bFlipOrder = { "bFlipOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateTransformMul), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bFlipOrder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bFlipOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bFlipOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateTransformMul*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateTransformMul), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateTransformMul, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateTransformMul, AccumulatedValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_AccumulatedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateTransformMul*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateTransformMul), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bFlipOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_AccumulatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateTransformMul",
		sizeof(FRigVMFunction_AccumulateTransformMul),
		alignof(FRigVMFunction_AccumulateTransformMul),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformMul.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformMul.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformMul.InnerSingleton;
	}

void FRigVMFunction_AccumulateTransformMul::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateTransformMul::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Multiplier,
		InitialValue,
		bFlipOrder,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateFloatLerp>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateFloatLerp cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatLerp;
class UScriptStruct* FRigVMFunction_AccumulateFloatLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateFloatLerp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateFloatLerp_Execute;
		Arguments_FRigVMFunction_AccumulateFloatLerp_Execute.Emplace(TEXT("TargetValue"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatLerp_Execute.Emplace(TEXT("InitialValue"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatLerp_Execute.Emplace(TEXT("Blend"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatLerp_Execute.Emplace(TEXT("bIntegrateDeltaTime"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateFloatLerp_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatLerp_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatLerp_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateFloatLerp::Execute"), &FRigVMFunction_AccumulateFloatLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatLerp.OuterSingleton, Arguments_FRigVMFunction_AccumulateFloatLerp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatLerp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateFloatLerp>()
{
	return FRigVMFunction_AccumulateFloatLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Interpolates two values over time over and over again\n */" },
		{ "DisplayName", "Accumulate Lerp (Float)" },
		{ "Keywords", "Simulate,Ramp" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateLerp" },
		{ "ToolTip", "Interpolates two values over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateFloatLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatLerp, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatLerp, InitialValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_Blend_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatLerp, Blend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateFloatLerp*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateFloatLerp), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatLerp, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatLerp, AccumulatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_AccumulatedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateFloatLerp*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateFloatLerp), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_AccumulatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateFloatLerp",
		sizeof(FRigVMFunction_AccumulateFloatLerp),
		alignof(FRigVMFunction_AccumulateFloatLerp),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatLerp.InnerSingleton;
	}

void FRigVMFunction_AccumulateFloatLerp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateFloatLerp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		TargetValue,
		InitialValue,
		Blend,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateVectorLerp>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateVectorLerp cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorLerp;
class UScriptStruct* FRigVMFunction_AccumulateVectorLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateVectorLerp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateVectorLerp_Execute;
		Arguments_FRigVMFunction_AccumulateVectorLerp_Execute.Emplace(TEXT("TargetValue"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorLerp_Execute.Emplace(TEXT("InitialValue"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorLerp_Execute.Emplace(TEXT("Blend"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateVectorLerp_Execute.Emplace(TEXT("bIntegrateDeltaTime"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateVectorLerp_Execute.Emplace(TEXT("Result"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorLerp_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorLerp_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateVectorLerp::Execute"), &FRigVMFunction_AccumulateVectorLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorLerp.OuterSingleton, Arguments_FRigVMFunction_AccumulateVectorLerp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorLerp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateVectorLerp>()
{
	return FRigVMFunction_AccumulateVectorLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Interpolates two vectors over time over and over again\n */" },
		{ "DisplayName", "Accumulate Lerp (Vector)" },
		{ "Keywords", "Simulate,Ramp" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateLerp" },
		{ "ToolTip", "Interpolates two vectors over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateVectorLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorLerp, TargetValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorLerp, InitialValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_Blend_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorLerp, Blend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateVectorLerp*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateVectorLerp), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorLerp, Result), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorLerp, AccumulatedValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_AccumulatedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateVectorLerp*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateVectorLerp), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_AccumulatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateVectorLerp",
		sizeof(FRigVMFunction_AccumulateVectorLerp),
		alignof(FRigVMFunction_AccumulateVectorLerp),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorLerp.InnerSingleton;
	}

void FRigVMFunction_AccumulateVectorLerp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateVectorLerp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		TargetValue,
		InitialValue,
		Blend,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateQuatLerp>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateQuatLerp cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatLerp;
class UScriptStruct* FRigVMFunction_AccumulateQuatLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateQuatLerp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateQuatLerp_Execute;
		Arguments_FRigVMFunction_AccumulateQuatLerp_Execute.Emplace(TEXT("TargetValue"), TEXT("FQuat"));
		Arguments_FRigVMFunction_AccumulateQuatLerp_Execute.Emplace(TEXT("InitialValue"), TEXT("FQuat"));
		Arguments_FRigVMFunction_AccumulateQuatLerp_Execute.Emplace(TEXT("Blend"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateQuatLerp_Execute.Emplace(TEXT("bIntegrateDeltaTime"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateQuatLerp_Execute.Emplace(TEXT("Result"), TEXT("FQuat"));
		Arguments_FRigVMFunction_AccumulateQuatLerp_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("FQuat"));
		Arguments_FRigVMFunction_AccumulateQuatLerp_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateQuatLerp::Execute"), &FRigVMFunction_AccumulateQuatLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatLerp.OuterSingleton, Arguments_FRigVMFunction_AccumulateQuatLerp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatLerp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateQuatLerp>()
{
	return FRigVMFunction_AccumulateQuatLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Interpolates two quaternions over time over and over again\n */" },
		{ "DisplayName", "Accumulate Lerp (Quaternion)" },
		{ "Keywords", "Simulate,Ramp" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateLerp" },
		{ "ToolTip", "Interpolates two quaternions over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateQuatLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateQuatLerp, TargetValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateQuatLerp, InitialValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_Blend_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateQuatLerp, Blend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateQuatLerp*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateQuatLerp), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateQuatLerp, Result), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateQuatLerp, AccumulatedValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_AccumulatedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateQuatLerp*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateQuatLerp), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_AccumulatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateQuatLerp",
		sizeof(FRigVMFunction_AccumulateQuatLerp),
		alignof(FRigVMFunction_AccumulateQuatLerp),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatLerp.InnerSingleton;
	}

void FRigVMFunction_AccumulateQuatLerp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateQuatLerp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		TargetValue,
		InitialValue,
		Blend,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateTransformLerp>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateTransformLerp cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformLerp;
class UScriptStruct* FRigVMFunction_AccumulateTransformLerp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformLerp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformLerp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateTransformLerp"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateTransformLerp_Execute;
		Arguments_FRigVMFunction_AccumulateTransformLerp_Execute.Emplace(TEXT("TargetValue"), TEXT("FTransform"));
		Arguments_FRigVMFunction_AccumulateTransformLerp_Execute.Emplace(TEXT("InitialValue"), TEXT("FTransform"));
		Arguments_FRigVMFunction_AccumulateTransformLerp_Execute.Emplace(TEXT("Blend"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateTransformLerp_Execute.Emplace(TEXT("bIntegrateDeltaTime"), TEXT("bool"));
		Arguments_FRigVMFunction_AccumulateTransformLerp_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigVMFunction_AccumulateTransformLerp_Execute.Emplace(TEXT("AccumulatedValue"), TEXT("FTransform"));
		Arguments_FRigVMFunction_AccumulateTransformLerp_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateTransformLerp::Execute"), &FRigVMFunction_AccumulateTransformLerp::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformLerp.OuterSingleton, Arguments_FRigVMFunction_AccumulateTransformLerp_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformLerp.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateTransformLerp>()
{
	return FRigVMFunction_AccumulateTransformLerp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Blend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntegrateDeltaTime_MetaData[];
#endif
		static void NewProp_bIntegrateDeltaTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntegrateDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Interpolates two transforms over time over and over again\n */" },
		{ "DisplayName", "Accumulate Lerp (Transform)" },
		{ "Keywords", "Simulate,Ramp" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateLerp" },
		{ "ToolTip", "Interpolates two transforms over time over and over again" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateTransformLerp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateTransformLerp, TargetValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_InitialValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateTransformLerp, InitialValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_Blend_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_Blend = { "Blend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateTransformLerp, Blend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_Blend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_Blend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateTransformLerp*)Obj)->bIntegrateDeltaTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime = { "bIntegrateDeltaTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateTransformLerp), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateTransformLerp, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_AccumulatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_AccumulatedValue = { "AccumulatedValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateTransformLerp, AccumulatedValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_AccumulatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_AccumulatedValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateTransformLerp*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateTransformLerp), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_Blend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIntegrateDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_AccumulatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateTransformLerp",
		sizeof(FRigVMFunction_AccumulateTransformLerp),
		alignof(FRigVMFunction_AccumulateTransformLerp),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformLerp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformLerp.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformLerp.InnerSingleton;
	}

void FRigVMFunction_AccumulateTransformLerp::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateTransformLerp::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		TargetValue,
		InitialValue,
		Blend,
		bIntegrateDeltaTime,
		Result,
		AccumulatedValue,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateFloatRange>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateFloatRange cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatRange;
class UScriptStruct* FRigVMFunction_AccumulateFloatRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateFloatRange"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateFloatRange_Execute;
		Arguments_FRigVMFunction_AccumulateFloatRange_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatRange_Execute.Emplace(TEXT("Minimum"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatRange_Execute.Emplace(TEXT("Maximum"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatRange_Execute.Emplace(TEXT("AccumulatedMinimum"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatRange_Execute.Emplace(TEXT("AccumulatedMaximum"), TEXT("float"));
		Arguments_FRigVMFunction_AccumulateFloatRange_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateFloatRange::Execute"), &FRigVMFunction_AccumulateFloatRange::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatRange.OuterSingleton, Arguments_FRigVMFunction_AccumulateFloatRange_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatRange.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateFloatRange>()
{
	return FRigVMFunction_AccumulateFloatRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Accumulates the min and max values over time\n */" },
		{ "DisplayName", "Accumulate Range (Float)" },
		{ "Keywords", "Range" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateRange" },
		{ "ToolTip", "Accumulates the min and max values over time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateFloatRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatRange, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatRange, Minimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatRange, Maximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_AccumulatedMinimum_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_AccumulatedMinimum = { "AccumulatedMinimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatRange, AccumulatedMinimum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_AccumulatedMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_AccumulatedMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_AccumulatedMaximum_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_AccumulatedMaximum = { "AccumulatedMaximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateFloatRange, AccumulatedMaximum), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_AccumulatedMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_AccumulatedMaximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateFloatRange*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateFloatRange), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_AccumulatedMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_AccumulatedMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateFloatRange",
		sizeof(FRigVMFunction_AccumulateFloatRange),
		alignof(FRigVMFunction_AccumulateFloatRange),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatRange.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatRange.InnerSingleton;
	}

void FRigVMFunction_AccumulateFloatRange::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateFloatRange::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Minimum,
		Maximum,
		AccumulatedMinimum,
		AccumulatedMaximum,
		bIsInitialized
	);
}


static_assert(std::is_polymorphic<FRigVMFunction_AccumulateVectorRange>() == std::is_polymorphic<FRigVMFunction_AccumulateBase>(), "USTRUCT FRigVMFunction_AccumulateVectorRange cannot be polymorphic unless super FRigVMFunction_AccumulateBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorRange;
class UScriptStruct* FRigVMFunction_AccumulateVectorRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AccumulateVectorRange"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AccumulateVectorRange_Execute;
		Arguments_FRigVMFunction_AccumulateVectorRange_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorRange_Execute.Emplace(TEXT("Minimum"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorRange_Execute.Emplace(TEXT("Maximum"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorRange_Execute.Emplace(TEXT("AccumulatedMinimum"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorRange_Execute.Emplace(TEXT("AccumulatedMaximum"), TEXT("FVector"));
		Arguments_FRigVMFunction_AccumulateVectorRange_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AccumulateVectorRange::Execute"), &FRigVMFunction_AccumulateVectorRange::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorRange.OuterSingleton, Arguments_FRigVMFunction_AccumulateVectorRange_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorRange.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AccumulateVectorRange>()
{
	return FRigVMFunction_AccumulateVectorRange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minimum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Minimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Maximum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Maximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Accumulates the min and max values over time\n */" },
		{ "DisplayName", "Accumulate Range (Vector)" },
		{ "Keywords", "Range" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "TemplateName", "AccumulateRange" },
		{ "ToolTip", "Accumulates the min and max values over time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AccumulateVectorRange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorRange, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Minimum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Minimum = { "Minimum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorRange, Minimum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Minimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Minimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Maximum_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Maximum = { "Maximum", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorRange, Maximum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Maximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Maximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_AccumulatedMinimum_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_AccumulatedMinimum = { "AccumulatedMinimum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorRange, AccumulatedMinimum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_AccumulatedMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_AccumulatedMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_AccumulatedMaximum_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_AccumulatedMaximum = { "AccumulatedMaximum", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AccumulateVectorRange, AccumulatedMaximum), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_AccumulatedMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_AccumulatedMaximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMFunctions/Simulation/RigVMFunction_Accumulate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigVMFunction_AccumulateVectorRange*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMFunction_AccumulateVectorRange), &Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Minimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_Maximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_AccumulatedMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_AccumulatedMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase,
		&NewStructOps,
		"RigVMFunction_AccumulateVectorRange",
		sizeof(FRigVMFunction_AccumulateVectorRange),
		alignof(FRigVMFunction_AccumulateVectorRange),
		Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorRange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorRange.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorRange.InnerSingleton;
	}

void FRigVMFunction_AccumulateVectorRange::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AccumulateVectorRange::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Minimum,
		Maximum,
		AccumulatedMinimum,
		AccumulatedMaximum,
		bIsInitialized
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_AccumulateBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateBase_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateBase), 2822837410U) },
		{ FRigVMFunction_AccumulateFloatAdd::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatAdd_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateFloatAdd"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatAdd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateFloatAdd), 247262441U) },
		{ FRigVMFunction_AccumulateVectorAdd::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorAdd_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateVectorAdd"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorAdd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateVectorAdd), 1581380754U) },
		{ FRigVMFunction_AccumulateFloatMul::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatMul_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateFloatMul"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateFloatMul), 774592649U) },
		{ FRigVMFunction_AccumulateVectorMul::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorMul_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateVectorMul"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateVectorMul), 3853565123U) },
		{ FRigVMFunction_AccumulateQuatMul::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatMul_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateQuatMul"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateQuatMul), 601162435U) },
		{ FRigVMFunction_AccumulateTransformMul::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformMul_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateTransformMul"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformMul, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateTransformMul), 1739695030U) },
		{ FRigVMFunction_AccumulateFloatLerp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatLerp_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateFloatLerp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateFloatLerp), 587455448U) },
		{ FRigVMFunction_AccumulateVectorLerp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorLerp_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateVectorLerp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateVectorLerp), 3070551114U) },
		{ FRigVMFunction_AccumulateQuatLerp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateQuatLerp_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateQuatLerp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateQuatLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateQuatLerp), 317011796U) },
		{ FRigVMFunction_AccumulateTransformLerp::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateTransformLerp_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateTransformLerp"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateTransformLerp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateTransformLerp), 4221185945U) },
		{ FRigVMFunction_AccumulateFloatRange::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateFloatRange_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateFloatRange"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateFloatRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateFloatRange), 2224262800U) },
		{ FRigVMFunction_AccumulateVectorRange::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AccumulateVectorRange_Statics::NewStructOps, TEXT("RigVMFunction_AccumulateVectorRange"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AccumulateVectorRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AccumulateVectorRange), 1592724574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_4046706556(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Simulation_RigVMFunction_Accumulate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
