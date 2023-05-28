// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/MVVMBindingExecuteTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBindingExecuteTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMViewModelBindingExecTest();
	MODELVIEWVIEWMODELEDITOR_API UClass* Z_Construct_UClass_UMVVMViewModelBindingExecTest_NoRegister();
	MODELVIEWVIEWMODELEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMBindingExecTextCounter;
class UScriptStruct* FMVVMBindingExecTextCounter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMBindingExecTextCounter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMBindingExecTextCounter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelEditor(), TEXT("MVVMBindingExecTextCounter"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMBindingExecTextCounter.OuterSingleton;
}
template<> MODELVIEWVIEWMODELEDITOR_API UScriptStruct* StaticStruct<FMVVMBindingExecTextCounter>()
{
	return FMVVMBindingExecTextCounter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMBindingExecTextCounter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMBindingExecTextCounter, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
		nullptr,
		&NewStructOps,
		"MVVMBindingExecTextCounter",
		sizeof(FMVVMBindingExecTextCounter),
		alignof(FMVVMBindingExecTextCounter),
		Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMBindingExecTextCounter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMBindingExecTextCounter.InnerSingleton, Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMBindingExecTextCounter.InnerSingleton;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execConversionIncDouble)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMVVMViewModelBindingExecTest::ConversionIncDouble(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execConversionIncFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMVVMViewModelBindingExecTest::ConversionIncFloat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execConversionArrayIntToArrayStruct)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMVVMBindingExecTextCounter>*)Z_Param__Result=UMVVMViewModelBindingExecTest::ConversionArrayIntToArrayStruct(Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execConversionConstIntToStruct)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMBindingExecTextCounter*)Z_Param__Result=UMVVMViewModelBindingExecTest::ConversionConstIntToStruct(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execConversionIntToStruct)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMBindingExecTextCounter*)Z_Param__Result=UMVVMViewModelBindingExecTest::ConversionIntToStruct(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execConversionArrayStructToArrayInt)
	{
		P_GET_TARRAY_REF(FMVVMBindingExecTextCounter,Z_Param_Out_Values);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UMVVMViewModelBindingExecTest::ConversionArrayStructToArrayInt(Z_Param_Out_Values);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execConversionConstStructToInt)
	{
		P_GET_STRUCT_REF(FMVVMBindingExecTextCounter,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMVVMViewModelBindingExecTest::ConversionConstStructToInt(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execConversionStructToInt)
	{
		P_GET_STRUCT(FMVVMBindingExecTextCounter,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMVVMViewModelBindingExecTest::ConversionStructToInt(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execSetterDouble)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetterDouble(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execSetterFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetterFloat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execSetterD)
	{
		P_GET_TARRAY(int32,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetterD(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execSetterC)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetterC(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execSetterB)
	{
		P_GET_TARRAY(FMVVMBindingExecTextCounter,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetterB(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execSetterA)
	{
		P_GET_STRUCT(FMVVMBindingExecTextCounter,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetterA(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execGetterDouble)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetterDouble();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execGetterFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetterFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execGetterD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetterD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execGetterC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetterC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execGetterB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMVVMBindingExecTextCounter>*)Z_Param__Result=P_THIS->GetterB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMVVMViewModelBindingExecTest::execGetterA)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMVVMBindingExecTextCounter*)Z_Param__Result=P_THIS->GetterA();
		P_NATIVE_END;
	}
	void UMVVMViewModelBindingExecTest::GetPropertyFloatAccessor_WrapperImpl(const void* Object, void* OutValue)
	{
		const UMVVMViewModelBindingExecTest* Obj = (const UMVVMViewModelBindingExecTest*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetPropertyFloatAccessor();
	}
	void UMVVMViewModelBindingExecTest::SetPropertyFloatAccessor_WrapperImpl(void* Object, const void* InValue)
	{
		UMVVMViewModelBindingExecTest* Obj = (UMVVMViewModelBindingExecTest*)Object;
		float& Value = *(float*)InValue;
		Obj->SetPropertyFloatAccessor(Value);
	}
	void UMVVMViewModelBindingExecTest::StaticRegisterNativesUMVVMViewModelBindingExecTest()
	{
		UClass* Class = UMVVMViewModelBindingExecTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConversionArrayIntToArrayStruct", &UMVVMViewModelBindingExecTest::execConversionArrayIntToArrayStruct },
			{ "ConversionArrayStructToArrayInt", &UMVVMViewModelBindingExecTest::execConversionArrayStructToArrayInt },
			{ "ConversionConstIntToStruct", &UMVVMViewModelBindingExecTest::execConversionConstIntToStruct },
			{ "ConversionConstStructToInt", &UMVVMViewModelBindingExecTest::execConversionConstStructToInt },
			{ "ConversionIncDouble", &UMVVMViewModelBindingExecTest::execConversionIncDouble },
			{ "ConversionIncFloat", &UMVVMViewModelBindingExecTest::execConversionIncFloat },
			{ "ConversionIntToStruct", &UMVVMViewModelBindingExecTest::execConversionIntToStruct },
			{ "ConversionStructToInt", &UMVVMViewModelBindingExecTest::execConversionStructToInt },
			{ "GetterA", &UMVVMViewModelBindingExecTest::execGetterA },
			{ "GetterB", &UMVVMViewModelBindingExecTest::execGetterB },
			{ "GetterC", &UMVVMViewModelBindingExecTest::execGetterC },
			{ "GetterD", &UMVVMViewModelBindingExecTest::execGetterD },
			{ "GetterDouble", &UMVVMViewModelBindingExecTest::execGetterDouble },
			{ "GetterFloat", &UMVVMViewModelBindingExecTest::execGetterFloat },
			{ "SetterA", &UMVVMViewModelBindingExecTest::execSetterA },
			{ "SetterB", &UMVVMViewModelBindingExecTest::execSetterB },
			{ "SetterC", &UMVVMViewModelBindingExecTest::execSetterC },
			{ "SetterD", &UMVVMViewModelBindingExecTest::execSetterD },
			{ "SetterDouble", &UMVVMViewModelBindingExecTest::execSetterDouble },
			{ "SetterFloat", &UMVVMViewModelBindingExecTest::execSetterFloat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics
	{
		struct MVVMViewModelBindingExecTest_eventConversionArrayIntToArrayStruct_Parms
		{
			TArray<int32> Values;
			TArray<FMVVMBindingExecTextCounter> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionArrayIntToArrayStruct_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_Values_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionArrayIntToArrayStruct_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "ConversionArrayIntToArrayStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::MVVMViewModelBindingExecTest_eventConversionArrayIntToArrayStruct_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics
	{
		struct MVVMViewModelBindingExecTest_eventConversionArrayStructToArrayInt_Parms
		{
			TArray<FMVVMBindingExecTextCounter> Values;
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(nullptr, 0) }; // 1769076485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionArrayStructToArrayInt_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_Values_MetaData)) }; // 1769076485
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionArrayStructToArrayInt_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "ConversionArrayStructToArrayInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::MVVMViewModelBindingExecTest_eventConversionArrayStructToArrayInt_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics
	{
		struct MVVMViewModelBindingExecTest_eventConversionConstIntToStruct_Parms
		{
			int32 Value;
			FMVVMBindingExecTextCounter ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionConstIntToStruct_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionConstIntToStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "ConversionConstIntToStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::MVVMViewModelBindingExecTest_eventConversionConstIntToStruct_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics
	{
		struct MVVMViewModelBindingExecTest_eventConversionConstStructToInt_Parms
		{
			FMVVMBindingExecTextCounter Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionConstStructToInt_Parms, Value), Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::NewProp_Value_MetaData)) }; // 1769076485
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionConstStructToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "ConversionConstStructToInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::MVVMViewModelBindingExecTest_eventConversionConstStructToInt_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics
	{
		struct MVVMViewModelBindingExecTest_eventConversionIncDouble_Parms
		{
			double Value;
			float ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionIncDouble_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionIncDouble_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "ConversionIncDouble", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::MVVMViewModelBindingExecTest_eventConversionIncDouble_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics
	{
		struct MVVMViewModelBindingExecTest_eventConversionIncFloat_Parms
		{
			float Value;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionIncFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionIncFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "ConversionIncFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::MVVMViewModelBindingExecTest_eventConversionIncFloat_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics
	{
		struct MVVMViewModelBindingExecTest_eventConversionIntToStruct_Parms
		{
			int32 Value;
			FMVVMBindingExecTextCounter ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionIntToStruct_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionIntToStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "ConversionIntToStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::MVVMViewModelBindingExecTest_eventConversionIntToStruct_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics
	{
		struct MVVMViewModelBindingExecTest_eventConversionStructToInt_Parms
		{
			FMVVMBindingExecTextCounter Value;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionStructToInt_Parms, Value), Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventConversionStructToInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "ConversionStructToInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::MVVMViewModelBindingExecTest_eventConversionStructToInt_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics
	{
		struct MVVMViewModelBindingExecTest_eventGetterA_Parms
		{
			FMVVMBindingExecTextCounter ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventGetterA_Parms, ReturnValue), Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "GetterA", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::MVVMViewModelBindingExecTest_eventGetterA_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics
	{
		struct MVVMViewModelBindingExecTest_eventGetterB_Parms
		{
			TArray<FMVVMBindingExecTextCounter> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventGetterB_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "GetterB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::MVVMViewModelBindingExecTest_eventGetterB_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics
	{
		struct MVVMViewModelBindingExecTest_eventGetterC_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventGetterC_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "GetterC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::MVVMViewModelBindingExecTest_eventGetterC_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics
	{
		struct MVVMViewModelBindingExecTest_eventGetterD_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventGetterD_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "GetterD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::MVVMViewModelBindingExecTest_eventGetterD_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics
	{
		struct MVVMViewModelBindingExecTest_eventGetterDouble_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventGetterDouble_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "GetterDouble", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::MVVMViewModelBindingExecTest_eventGetterDouble_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics
	{
		struct MVVMViewModelBindingExecTest_eventGetterFloat_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventGetterFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "GetterFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::MVVMViewModelBindingExecTest_eventGetterFloat_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics
	{
		struct MVVMViewModelBindingExecTest_eventSetterA_Parms
		{
			FMVVMBindingExecTextCounter Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventSetterA_Parms, Value), Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "SetterA", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::MVVMViewModelBindingExecTest_eventSetterA_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics
	{
		struct MVVMViewModelBindingExecTest_eventSetterB_Parms
		{
			TArray<FMVVMBindingExecTextCounter> Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventSetterB_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1769076485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "SetterB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::MVVMViewModelBindingExecTest_eventSetterB_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics
	{
		struct MVVMViewModelBindingExecTest_eventSetterC_Parms
		{
			int32 Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventSetterC_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "SetterC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::MVVMViewModelBindingExecTest_eventSetterC_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics
	{
		struct MVVMViewModelBindingExecTest_eventSetterD_Parms
		{
			TArray<int32> Value;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventSetterD_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::NewProp_Value_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "SetterD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::MVVMViewModelBindingExecTest_eventSetterD_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics
	{
		struct MVVMViewModelBindingExecTest_eventSetterDouble_Parms
		{
			double Value;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventSetterDouble_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "SetterDouble", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::MVVMViewModelBindingExecTest_eventSetterDouble_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics
	{
		struct MVVMViewModelBindingExecTest_eventSetterFloat_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MVVMViewModelBindingExecTest_eventSetterFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMVVMViewModelBindingExecTest, nullptr, "SetterFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::MVVMViewModelBindingExecTest_eventSetterFloat_Parms), Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewModelBindingExecTest);
	UClass* Z_Construct_UClass_UMVVMViewModelBindingExecTest_NoRegister()
	{
		return UMVVMViewModelBindingExecTest::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyA;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyB_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyB_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyC_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyC;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyD_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyD_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PropertyFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyFloatAccessor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PropertyFloatAccessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyDouble_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_PropertyDouble;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayIntToArrayStruct, "ConversionArrayIntToArrayStruct" }, // 1736568760
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionArrayStructToArrayInt, "ConversionArrayStructToArrayInt" }, // 1680033902
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstIntToStruct, "ConversionConstIntToStruct" }, // 3161073685
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionConstStructToInt, "ConversionConstStructToInt" }, // 3218347053
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncDouble, "ConversionIncDouble" }, // 1288210637
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIncFloat, "ConversionIncFloat" }, // 4096101951
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionIntToStruct, "ConversionIntToStruct" }, // 1922638275
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_ConversionStructToInt, "ConversionStructToInt" }, // 2359675459
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterA, "GetterA" }, // 3672801787
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterB, "GetterB" }, // 8667139
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterC, "GetterC" }, // 3519815407
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterD, "GetterD" }, // 1680060160
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterDouble, "GetterDouble" }, // 3721283542
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_GetterFloat, "GetterFloat" }, // 3908410085
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterA, "SetterA" }, // 1165222438
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterB, "SetterB" }, // 4141491181
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterC, "SetterC" }, // 2673531456
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterD, "SetterD" }, // 3494198407
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterDouble, "SetterDouble" }, // 2624989353
		{ &Z_Construct_UFunction_UMVVMViewModelBindingExecTest_SetterFloat, "SetterFloat" }, // 1073155760
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/MVVMBindingExecuteTest.h" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyA_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyA = { "PropertyA", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewModelBindingExecTest, PropertyA), Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyA_MetaData)) }; // 1769076485
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyB_Inner = { "PropertyB", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter, METADATA_PARAMS(nullptr, 0) }; // 1769076485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyB_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyB = { "PropertyB", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewModelBindingExecTest, PropertyB), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyB_MetaData)) }; // 1769076485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyC_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyC = { "PropertyC", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewModelBindingExecTest, PropertyC), METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyC_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyD_Inner = { "PropertyD", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyD_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyD = { "PropertyD", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewModelBindingExecTest, PropertyD), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyFloat_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyFloat = { "PropertyFloat", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewModelBindingExecTest, PropertyFloat), METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyFloatAccessor_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyFloatAccessor = { "PropertyFloatAccessor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UMVVMViewModelBindingExecTest::SetPropertyFloatAccessor_WrapperImpl, &UMVVMViewModelBindingExecTest::GetPropertyFloatAccessor_WrapperImpl, STRUCT_OFFSET(UMVVMViewModelBindingExecTest, PropertyFloatAccessor), METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyFloatAccessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyFloatAccessor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyDouble_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Private/Tests/MVVMBindingExecuteTest.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyDouble = { "PropertyDouble", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewModelBindingExecTest, PropertyDouble), METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyDouble_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyDouble_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyB_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyD_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyFloatAccessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::NewProp_PropertyDouble,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewModelBindingExecTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::ClassParams = {
		&UMVVMViewModelBindingExecTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::PropPointers),
		0,
		0x050800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMViewModelBindingExecTest()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewModelBindingExecTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewModelBindingExecTest.OuterSingleton, Z_Construct_UClass_UMVVMViewModelBindingExecTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewModelBindingExecTest.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELEDITOR_API UClass* StaticClass<UMVVMViewModelBindingExecTest>()
	{
		return UMVVMViewModelBindingExecTest::StaticClass();
	}
	UMVVMViewModelBindingExecTest::UMVVMViewModelBindingExecTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewModelBindingExecTest);
	UMVVMViewModelBindingExecTest::~UMVVMViewModelBindingExecTest() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMBindingExecuteTest_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMBindingExecuteTest_h_Statics::ScriptStructInfo[] = {
		{ FMVVMBindingExecTextCounter::StaticStruct, Z_Construct_UScriptStruct_FMVVMBindingExecTextCounter_Statics::NewStructOps, TEXT("MVVMBindingExecTextCounter"), &Z_Registration_Info_UScriptStruct_MVVMBindingExecTextCounter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMBindingExecTextCounter), 1769076485U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMBindingExecuteTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewModelBindingExecTest, UMVVMViewModelBindingExecTest::StaticClass, TEXT("UMVVMViewModelBindingExecTest"), &Z_Registration_Info_UClass_UMVVMViewModelBindingExecTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewModelBindingExecTest), 2873849052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMBindingExecuteTest_h_1175329476(TEXT("/Script/ModelViewViewModelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMBindingExecuteTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMBindingExecuteTest_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMBindingExecuteTest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelEditor_Private_Tests_MVVMBindingExecuteTest_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
