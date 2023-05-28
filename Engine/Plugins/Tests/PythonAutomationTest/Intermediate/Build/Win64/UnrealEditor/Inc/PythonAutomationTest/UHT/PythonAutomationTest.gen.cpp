// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PythonAutomationTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePythonAutomationTest() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PYTHONAUTOMATIONTEST_API UClass* Z_Construct_UClass_UPyAutomationTestLibrary();
	PYTHONAUTOMATIONTEST_API UClass* Z_Construct_UClass_UPyAutomationTestLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PythonAutomationTest();
// End Cross Module References
	DEFINE_FUNCTION(UPyAutomationTestLibrary::execResetPyLatentCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPyAutomationTestLibrary::ResetPyLatentCommand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyAutomationTestLibrary::execGetPyLatentCommandTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UPyAutomationTestLibrary::GetPyLatentCommandTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyAutomationTestLibrary::execSetPyLatentCommandTimeout)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPyAutomationTestLibrary::SetPyLatentCommandTimeout(Z_Param_Seconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyAutomationTestLibrary::execGetIsRunningPyLatentCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPyAutomationTestLibrary::GetIsRunningPyLatentCommand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyAutomationTestLibrary::execSetIsRunningPyLatentCommand)
	{
		P_GET_UBOOL(Z_Param_isRunning);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPyAutomationTestLibrary::SetIsRunningPyLatentCommand(Z_Param_isRunning);
		P_NATIVE_END;
	}
	void UPyAutomationTestLibrary::StaticRegisterNativesUPyAutomationTestLibrary()
	{
		UClass* Class = UPyAutomationTestLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetIsRunningPyLatentCommand", &UPyAutomationTestLibrary::execGetIsRunningPyLatentCommand },
			{ "GetPyLatentCommandTimeout", &UPyAutomationTestLibrary::execGetPyLatentCommandTimeout },
			{ "ResetPyLatentCommand", &UPyAutomationTestLibrary::execResetPyLatentCommand },
			{ "SetIsRunningPyLatentCommand", &UPyAutomationTestLibrary::execSetIsRunningPyLatentCommand },
			{ "SetPyLatentCommandTimeout", &UPyAutomationTestLibrary::execSetPyLatentCommandTimeout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics
	{
		struct PyAutomationTestLibrary_eventGetIsRunningPyLatentCommand_Parms
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
	void Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PyAutomationTestLibrary_eventGetIsRunningPyLatentCommand_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyAutomationTestLibrary_eventGetIsRunningPyLatentCommand_Parms), &Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "PyAutomationTest" },
		{ "ModuleRelativePath", "Public/PythonAutomationTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyAutomationTestLibrary, nullptr, "GetIsRunningPyLatentCommand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::PyAutomationTestLibrary_eventGetIsRunningPyLatentCommand_Parms), Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics
	{
		struct PyAutomationTestLibrary_eventGetPyLatentCommandTimeout_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyAutomationTestLibrary_eventGetPyLatentCommandTimeout_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "PyAutomationTest" },
		{ "ModuleRelativePath", "Public/PythonAutomationTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyAutomationTestLibrary, nullptr, "GetPyLatentCommandTimeout", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::PyAutomationTestLibrary_eventGetPyLatentCommandTimeout_Parms), Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyAutomationTestLibrary_ResetPyLatentCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyAutomationTestLibrary_ResetPyLatentCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "PyAutomationTest" },
		{ "ModuleRelativePath", "Public/PythonAutomationTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyAutomationTestLibrary_ResetPyLatentCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyAutomationTestLibrary, nullptr, "ResetPyLatentCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyAutomationTestLibrary_ResetPyLatentCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyAutomationTestLibrary_ResetPyLatentCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyAutomationTestLibrary_ResetPyLatentCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyAutomationTestLibrary_ResetPyLatentCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics
	{
		struct PyAutomationTestLibrary_eventSetIsRunningPyLatentCommand_Parms
		{
			bool isRunning;
		};
		static void NewProp_isRunning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isRunning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::NewProp_isRunning_SetBit(void* Obj)
	{
		((PyAutomationTestLibrary_eventSetIsRunningPyLatentCommand_Parms*)Obj)->isRunning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::NewProp_isRunning = { "isRunning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyAutomationTestLibrary_eventSetIsRunningPyLatentCommand_Parms), &Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::NewProp_isRunning_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::NewProp_isRunning,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "PyAutomationTest" },
		{ "ModuleRelativePath", "Public/PythonAutomationTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyAutomationTestLibrary, nullptr, "SetIsRunningPyLatentCommand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::PyAutomationTestLibrary_eventSetIsRunningPyLatentCommand_Parms), Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics
	{
		struct PyAutomationTestLibrary_eventSetPyLatentCommandTimeout_Parms
		{
			float Seconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyAutomationTestLibrary_eventSetPyLatentCommandTimeout_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::Function_MetaDataParams[] = {
		{ "Category", "PyAutomationTest" },
		{ "ModuleRelativePath", "Public/PythonAutomationTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyAutomationTestLibrary, nullptr, "SetPyLatentCommandTimeout", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::PyAutomationTestLibrary_eventSetPyLatentCommandTimeout_Parms), Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyAutomationTestLibrary);
	UClass* Z_Construct_UClass_UPyAutomationTestLibrary_NoRegister()
	{
		return UPyAutomationTestLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPyAutomationTestLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyAutomationTestLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonAutomationTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyAutomationTestLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyAutomationTestLibrary_GetIsRunningPyLatentCommand, "GetIsRunningPyLatentCommand" }, // 3160946448
		{ &Z_Construct_UFunction_UPyAutomationTestLibrary_GetPyLatentCommandTimeout, "GetPyLatentCommandTimeout" }, // 1794571969
		{ &Z_Construct_UFunction_UPyAutomationTestLibrary_ResetPyLatentCommand, "ResetPyLatentCommand" }, // 2227565315
		{ &Z_Construct_UFunction_UPyAutomationTestLibrary_SetIsRunningPyLatentCommand, "SetIsRunningPyLatentCommand" }, // 1582606730
		{ &Z_Construct_UFunction_UPyAutomationTestLibrary_SetPyLatentCommandTimeout, "SetPyLatentCommandTimeout" }, // 751359556
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyAutomationTestLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PythonAutomationTest.h" },
		{ "ModuleRelativePath", "Public/PythonAutomationTest.h" },
		{ "ScriptName", "PyAutomationTest" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyAutomationTestLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyAutomationTestLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyAutomationTestLibrary_Statics::ClassParams = {
		&UPyAutomationTestLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPyAutomationTestLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyAutomationTestLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyAutomationTestLibrary()
	{
		if (!Z_Registration_Info_UClass_UPyAutomationTestLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyAutomationTestLibrary.OuterSingleton, Z_Construct_UClass_UPyAutomationTestLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyAutomationTestLibrary.OuterSingleton;
	}
	template<> PYTHONAUTOMATIONTEST_API UClass* StaticClass<UPyAutomationTestLibrary>()
	{
		return UPyAutomationTestLibrary::StaticClass();
	}
	UPyAutomationTestLibrary::UPyAutomationTestLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyAutomationTestLibrary);
	UPyAutomationTestLibrary::~UPyAutomationTestLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPyAutomationTestLibrary, UPyAutomationTestLibrary::StaticClass, TEXT("UPyAutomationTestLibrary"), &Z_Registration_Info_UClass_UPyAutomationTestLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyAutomationTestLibrary), 4084079316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_537430004(TEXT("/Script/PythonAutomationTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Tests_PythonAutomationTest_Source_PythonAutomationTest_Public_PythonAutomationTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
