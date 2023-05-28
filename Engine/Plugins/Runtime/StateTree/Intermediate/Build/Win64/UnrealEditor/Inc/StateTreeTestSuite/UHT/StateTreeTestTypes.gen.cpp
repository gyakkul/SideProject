// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTreeTestTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeTestTypes() {}
// Cross Module References
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionCommonBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvaluatorBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTaskBase();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTestCondition();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestEval_A();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestEval_AInstanceData();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTask_B();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTask_BInstanceData();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTask_Stand();
	STATETREETESTSUITE_API UScriptStruct* Z_Construct_UScriptStruct_FTestTask_StandInstanceData();
	UPackage* Z_Construct_UPackage__Script_StateTreeTestSuite();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestEval_AInstanceData;
class UScriptStruct* FTestEval_AInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestEval_AInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestEval_AInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestEval_AInstanceData>()
{
	return FTestEval_AInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolA_MetaData[];
#endif
		static void NewProp_bBoolA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestEval_AInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_FloatA_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_FloatA = { "FloatA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestEval_AInstanceData, FloatA), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_FloatA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_FloatA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_IntA_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_IntA = { "IntA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestEval_AInstanceData, IntA), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_IntA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_IntA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA_SetBit(void* Obj)
	{
		((FTestEval_AInstanceData*)Obj)->bBoolA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA = { "bBoolA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTestEval_AInstanceData), &Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_FloatA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_IntA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewProp_bBoolA,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"TestEval_AInstanceData",
		sizeof(FTestEval_AInstanceData),
		alignof(FTestEval_AInstanceData),
		Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestEval_AInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestEval_AInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestEval_A>() == std::is_polymorphic<FStateTreeEvaluatorBase>(), "USTRUCT FTestEval_A cannot be polymorphic unless super FStateTreeEvaluatorBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestEval_A;
class UScriptStruct* FTestEval_A::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestEval_A.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestEval_A.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestEval_A, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestEval_A"));
	}
	return Z_Registration_Info_UScriptStruct_TestEval_A.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestEval_A>()
{
	return FTestEval_A::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestEval_A_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestEval_A_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestEval_A_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestEval_A>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestEval_A_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		Z_Construct_UScriptStruct_FStateTreeEvaluatorBase,
		&NewStructOps,
		"TestEval_A",
		sizeof(FTestEval_A),
		alignof(FTestEval_A),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestEval_A_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestEval_A_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestEval_A()
	{
		if (!Z_Registration_Info_UScriptStruct_TestEval_A.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestEval_A.InnerSingleton, Z_Construct_UScriptStruct_FTestEval_A_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestEval_A.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTask_BInstanceData;
class UScriptStruct* FTestTask_BInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTask_BInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestTask_BInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestTask_BInstanceData>()
{
	return FTestTask_BInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolB_MetaData[];
#endif
		static void NewProp_bBoolB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTask_BInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_FloatB_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_FloatB = { "FloatB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestTask_BInstanceData, FloatB), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_FloatB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_FloatB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_IntB_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_IntB = { "IntB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestTask_BInstanceData, IntB), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_IntB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_IntB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB_SetBit(void* Obj)
	{
		((FTestTask_BInstanceData*)Obj)->bBoolB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB = { "bBoolB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTestTask_BInstanceData), &Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_FloatB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_IntB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewProp_bBoolB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"TestTask_BInstanceData",
		sizeof(FTestTask_BInstanceData),
		alignof(FTestTask_BInstanceData),
		Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestTask_BInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTask_BInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestTask_B>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FTestTask_B cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTask_B;
class UScriptStruct* FTestTask_B::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTask_B.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTask_B.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTask_B, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestTask_B"));
	}
	return Z_Registration_Info_UScriptStruct_TestTask_B.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestTask_B>()
{
	return FTestTask_B::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTask_B_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_B_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTask_B_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTask_B>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTask_B_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		Z_Construct_UScriptStruct_FStateTreeTaskBase,
		&NewStructOps,
		"TestTask_B",
		sizeof(FTestTask_B),
		alignof(FTestTask_B),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_B_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_B_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestTask_B()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTask_B.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTask_B.InnerSingleton, Z_Construct_UScriptStruct_FTestTask_B_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTask_B.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData;
class UScriptStruct* FTestTask_StandInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTask_StandInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestTask_StandInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestTask_StandInstanceData>()
{
	return FTestTask_StandInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTick_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentTick;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTask_StandInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewProp_CurrentTick_MetaData[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewProp_CurrentTick = { "CurrentTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestTask_StandInstanceData, CurrentTick), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewProp_CurrentTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewProp_CurrentTick_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewProp_CurrentTick,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"TestTask_StandInstanceData",
		sizeof(FTestTask_StandInstanceData),
		alignof(FTestTask_StandInstanceData),
		Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestTask_StandInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTestTask_Stand>() == std::is_polymorphic<FStateTreeTaskBase>(), "USTRUCT FTestTask_Stand cannot be polymorphic unless super FStateTreeTaskBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TestTask_Stand;
class UScriptStruct* FTestTask_Stand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TestTask_Stand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TestTask_Stand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestTask_Stand, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("TestTask_Stand"));
	}
	return Z_Registration_Info_UScriptStruct_TestTask_Stand.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FTestTask_Stand>()
{
	return FTestTask_Stand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTestTask_Stand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TicksToCompletion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TicksToCompletion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TickResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TickResult;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnterStateResult_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnterStateResult_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnterStateResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_Stand_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestTask_Stand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TicksToCompletion_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TicksToCompletion = { "TicksToCompletion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestTask_Stand, TicksToCompletion), METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TicksToCompletion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TicksToCompletion_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickResult_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickResult = { "TickResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestTask_Stand, TickResult), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickResult_MetaData)) }; // 2388265834
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult = { "EnterStateResult", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTestTask_Stand, EnterStateResult), Z_Construct_UEnum_StateTreeModule_EStateTreeRunStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult_MetaData)) }; // 2388265834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestTask_Stand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TicksToCompletion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_TickResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewProp_EnterStateResult,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestTask_Stand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		Z_Construct_UScriptStruct_FStateTreeTaskBase,
		&NewStructOps,
		"TestTask_Stand",
		sizeof(FTestTask_Stand),
		alignof(FTestTask_Stand),
		Z_Construct_UScriptStruct_FTestTask_Stand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestTask_Stand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestTask_Stand()
	{
		if (!Z_Registration_Info_UScriptStruct_TestTask_Stand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TestTask_Stand.InnerSingleton, Z_Construct_UScriptStruct_FTestTask_Stand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TestTask_Stand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData;
class UScriptStruct* FStateTreeTestConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("StateTreeTestConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FStateTreeTestConditionInstanceData>()
{
	return FStateTreeTestConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTestConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeTestConditionInstanceData, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewProp_Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewProp_Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		nullptr,
		&NewStructOps,
		"StateTreeTestConditionInstanceData",
		sizeof(FStateTreeTestConditionInstanceData),
		alignof(FStateTreeTestConditionInstanceData),
		Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStateTreeTestCondition>() == std::is_polymorphic<FStateTreeConditionCommonBase>(), "USTRUCT FStateTreeTestCondition cannot be polymorphic unless super FStateTreeConditionCommonBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeTestCondition;
class UScriptStruct* FStateTreeTestCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeTestCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeTestCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeTestCondition, (UObject*)Z_Construct_UPackage__Script_StateTreeTestSuite(), TEXT("StateTreeTestCondition"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeTestCondition.OuterSingleton;
}
template<> STATETREETESTSUITE_API UScriptStruct* StaticStruct<FStateTreeTestCondition>()
{
	return FStateTreeTestCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::Struct_MetaDataParams[] = {
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Private/StateTreeTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeTestCondition>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeTestSuite,
		Z_Construct_UScriptStruct_FStateTreeConditionCommonBase,
		&NewStructOps,
		"StateTreeTestCondition",
		sizeof(FStateTreeTestCondition),
		alignof(FStateTreeTestCondition),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeTestCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeTestCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeTestCondition.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeTestCondition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics::ScriptStructInfo[] = {
		{ FTestEval_AInstanceData::StaticStruct, Z_Construct_UScriptStruct_FTestEval_AInstanceData_Statics::NewStructOps, TEXT("TestEval_AInstanceData"), &Z_Registration_Info_UScriptStruct_TestEval_AInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestEval_AInstanceData), 1768434792U) },
		{ FTestEval_A::StaticStruct, Z_Construct_UScriptStruct_FTestEval_A_Statics::NewStructOps, TEXT("TestEval_A"), &Z_Registration_Info_UScriptStruct_TestEval_A, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestEval_A), 2427855796U) },
		{ FTestTask_BInstanceData::StaticStruct, Z_Construct_UScriptStruct_FTestTask_BInstanceData_Statics::NewStructOps, TEXT("TestTask_BInstanceData"), &Z_Registration_Info_UScriptStruct_TestTask_BInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTask_BInstanceData), 3872698996U) },
		{ FTestTask_B::StaticStruct, Z_Construct_UScriptStruct_FTestTask_B_Statics::NewStructOps, TEXT("TestTask_B"), &Z_Registration_Info_UScriptStruct_TestTask_B, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTask_B), 1258619600U) },
		{ FTestTask_StandInstanceData::StaticStruct, Z_Construct_UScriptStruct_FTestTask_StandInstanceData_Statics::NewStructOps, TEXT("TestTask_StandInstanceData"), &Z_Registration_Info_UScriptStruct_TestTask_StandInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTask_StandInstanceData), 3868546016U) },
		{ FTestTask_Stand::StaticStruct, Z_Construct_UScriptStruct_FTestTask_Stand_Statics::NewStructOps, TEXT("TestTask_Stand"), &Z_Registration_Info_UScriptStruct_TestTask_Stand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestTask_Stand), 2406501176U) },
		{ FStateTreeTestConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTestConditionInstanceData_Statics::NewStructOps, TEXT("StateTreeTestConditionInstanceData"), &Z_Registration_Info_UScriptStruct_StateTreeTestConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTestConditionInstanceData), 1110878238U) },
		{ FStateTreeTestCondition::StaticStruct, Z_Construct_UScriptStruct_FStateTreeTestCondition_Statics::NewStructOps, TEXT("StateTreeTestCondition"), &Z_Registration_Info_UScriptStruct_StateTreeTestCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeTestCondition), 2921923888U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_3293681579(TEXT("/Script/StateTreeTestSuite"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeTestSuite_Private_StateTreeTestTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
