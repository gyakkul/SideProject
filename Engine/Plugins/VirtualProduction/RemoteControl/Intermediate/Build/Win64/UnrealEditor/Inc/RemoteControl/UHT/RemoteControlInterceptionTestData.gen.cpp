// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/RemoteControlInterceptionTestData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlInterceptionTestData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlInterceptionTestObject();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlInterceptionTestObject_NoRegister();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlInterceptionTestStruct;
class UScriptStruct* FRemoteControlInterceptionTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlInterceptionTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlInterceptionTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlInterceptionTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlInterceptionTestStruct.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlInterceptionTestStruct>()
{
	return FRemoteControlInterceptionTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/RemoteControlInterceptionTestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlInterceptionTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::NewProp_Int32Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlInterceptionTestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::NewProp_Int32Value = { "Int32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInterceptionTestStruct, Int32Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::NewProp_Int32Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::NewProp_Int32Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::NewProp_Int32Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlInterceptionTestStruct",
		sizeof(FRemoteControlInterceptionTestStruct),
		alignof(FRemoteControlInterceptionTestStruct),
		Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlInterceptionTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlInterceptionTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlInterceptionTestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlInterceptionFunctionParamStruct;
class UScriptStruct* FRemoteControlInterceptionFunctionParamStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlInterceptionFunctionParamStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlInterceptionFunctionParamStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlInterceptionFunctionParamStruct"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlInterceptionFunctionParamStruct.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlInterceptionFunctionParamStruct>()
{
	return FRemoteControlInterceptionFunctionParamStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int32Value;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlInterceptionTestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlInterceptionFunctionParamStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_Int32Value_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlInterceptionTestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_Int32Value = { "Int32Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInterceptionFunctionParamStruct, Int32Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_Int32Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_Int32Value_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntArray_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlInterceptionTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInterceptionFunctionParamStruct, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntString_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlInterceptionTestData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntString = { "IntString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInterceptionFunctionParamStruct, IntString), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_Int32Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewProp_IntString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlInterceptionFunctionParamStruct",
		sizeof(FRemoteControlInterceptionFunctionParamStruct),
		alignof(FRemoteControlInterceptionFunctionParamStruct),
		Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlInterceptionFunctionParamStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlInterceptionFunctionParamStruct.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlInterceptionFunctionParamStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(URemoteControlInterceptionTestObject::execTestFunction)
	{
		P_GET_STRUCT_REF(FRemoteControlInterceptionFunctionParamStruct,Z_Param_Out_InStruct);
		P_GET_PROPERTY(FIntProperty,Z_Param_InTestFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRemoteControlInterceptionFunctionParamStruct*)Z_Param__Result=P_THIS->TestFunction(Z_Param_Out_InStruct,Z_Param_InTestFactor);
		P_NATIVE_END;
	}
	void URemoteControlInterceptionTestObject::StaticRegisterNativesURemoteControlInterceptionTestObject()
	{
		UClass* Class = URemoteControlInterceptionTestObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestFunction", &URemoteControlInterceptionTestObject::execTestFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics
	{
		struct RemoteControlInterceptionTestObject_eventTestFunction_Parms
		{
			FRemoteControlInterceptionFunctionParamStruct InStruct;
			int32 InTestFactor;
			FRemoteControlInterceptionFunctionParamStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InTestFactor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlInterceptionTestObject_eventTestFunction_Parms, InStruct), Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::NewProp_InStruct_MetaData)) }; // 2252227826
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::NewProp_InTestFactor = { "InTestFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlInterceptionTestObject_eventTestFunction_Parms, InTestFactor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RemoteControlInterceptionTestObject_eventTestFunction_Parms, ReturnValue), Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct, METADATA_PARAMS(nullptr, 0) }; // 2252227826
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::NewProp_InStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::NewProp_InTestFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlInterceptionTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteControlInterceptionTestObject, nullptr, "TestFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::RemoteControlInterceptionTestObject_eventTestFunction_Parms), Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlInterceptionTestObject);
	UClass* Z_Construct_UClass_URemoteControlInterceptionTestObject_NoRegister()
	{
		return URemoteControlInterceptionTestObject::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionParamStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionParamStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteControlInterceptionTestObject_TestFunction, "TestFunction" }, // 70579419
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/RemoteControlInterceptionTestData.h" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlInterceptionTestData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::NewProp_CustomStruct_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlInterceptionTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::NewProp_CustomStruct = { "CustomStruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlInterceptionTestObject, CustomStruct), Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct, METADATA_PARAMS(Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::NewProp_CustomStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::NewProp_CustomStruct_MetaData)) }; // 1021413950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::NewProp_FunctionParamStruct_MetaData[] = {
		{ "Category", "RC" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlInterceptionTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::NewProp_FunctionParamStruct = { "FunctionParamStruct", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlInterceptionTestObject, FunctionParamStruct), Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct, METADATA_PARAMS(Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::NewProp_FunctionParamStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::NewProp_FunctionParamStruct_MetaData)) }; // 2252227826
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::NewProp_CustomStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::NewProp_FunctionParamStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlInterceptionTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::ClassParams = {
		&URemoteControlInterceptionTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlInterceptionTestObject()
	{
		if (!Z_Registration_Info_UClass_URemoteControlInterceptionTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlInterceptionTestObject.OuterSingleton, Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlInterceptionTestObject.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URemoteControlInterceptionTestObject>()
	{
		return URemoteControlInterceptionTestObject::StaticClass();
	}
	URemoteControlInterceptionTestObject::URemoteControlInterceptionTestObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlInterceptionTestObject);
	URemoteControlInterceptionTestObject::~URemoteControlInterceptionTestObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlInterceptionTestStruct::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics::NewStructOps, TEXT("RemoteControlInterceptionTestStruct"), &Z_Registration_Info_UScriptStruct_RemoteControlInterceptionTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlInterceptionTestStruct), 1021413950U) },
		{ FRemoteControlInterceptionFunctionParamStruct::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics::NewStructOps, TEXT("RemoteControlInterceptionFunctionParamStruct"), &Z_Registration_Info_UScriptStruct_RemoteControlInterceptionFunctionParamStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlInterceptionFunctionParamStruct), 2252227826U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlInterceptionTestObject, URemoteControlInterceptionTestObject::StaticClass, TEXT("URemoteControlInterceptionTestObject"), &Z_Registration_Info_UClass_URemoteControlInterceptionTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlInterceptionTestObject), 583286619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_98377647(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
